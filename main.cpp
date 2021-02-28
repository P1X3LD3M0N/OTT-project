#include <iostream>
#include <string>
#include "fileFuncs.h"
using namespace std;

void intro()
{
    cout << "3𝘼 𝙎𝙏𝙍𝙀𝘼𝙈𝙄𝙉𝙂" << endl;
}

class genre
{
public:
    int choice;
    void show_genre()
    {
        cout << "Which genre of tv shows would you like to watch?\n1.All\n2. Action/Thriller\n3. Comedy\n4. Drama/Romance\n";
        cin >> choice;
    }
    void movie_genre()
    {
        cout << "Which genre of movies would you like to watch?\n1.All\n2. Action/Thriller\n3. Comedy\n4. Drama/Romance\n";
        cin >> choice;
    }
};

class show : public genre
{
public:
    void show_list()
    {
        if (choice == 1)
        {
            searchS1();
        }
        else if (choice == 2)
        {
            searchS2();
        }
        else if (choice == 3)
        {
            searchS3();
        }
        else if (choice == 4)
        {
            searchS4();
        }
    }
};

class movie : public genre
{
public:
    void movie_list()
    {
        if (choice == 1)
        {
            searchM1();
        }
        else if (choice == 2)
        {
            searchM2();
        }
        else if (choice == 3)
        {
            searchM3();
        }
        else if (choice == 4)
        {
            searchM4();
        }
    }
};

class user : public show, public movie
{
private:
    int choice;

public:
    void display()
    {
        cout << "Enter 1 for TV Shows and 2 for Movies: ";
        cin >> choice;
        if (choice == 1)
        {
            show::show_genre();
            show::show_list();
        }
        else
        {
            movie::movie_genre();
            movie::movie_list();
        }
    }
};

class company
{
};

int main()
{
    int choice;
    intro();

    while (1)
    {
        cout << "\n\nMENU:\n1. User\n2. Company\n3. Exit\nEnter Choice: ";
        cin >> choice;
        switch (choice)
        {
        case 1:
            user obj;
            obj.display();
            break;
        case 2:
            break;
        case 3:
            exit(0);
            break;
        default:
            cout << "Invalid Choice";
            break;
        }
    }

    return 0;
}a