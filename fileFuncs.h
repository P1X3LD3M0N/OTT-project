#include <fstream>
using namespace std;
void searchM1()
{
    string movie;
    ifstream fin;
    fin.open("movies.txt");
        while (!fin.eof())
        {
            getline(fin, movie);
            cout << movie << endl;
        }
    fin.close();
}
void searchM2()
{
    string movie;
    ifstream fin;
    fin.open("actionM.txt");
        while (!fin.eof())
        {
            getline(fin, movie);
            cout << movie << endl;
        }
    fin.close();
}
void searchM3()
{
    string movie;
    ifstream fin;
    fin.open("comedyM.txt");
        while (!fin.eof())
        {
            getline(fin, movie);
            cout << movie << endl;
        }
    fin.close();
}
void searchM4()
{
    string movie;
    ifstream fin;
    fin.open("dramaS.txt");
        while (!fin.eof())
        {
            getline(fin, movie);
            cout << movie << endl;
        }
    fin.close();
}
void searchS1()
{
    string show;
    ifstream fin;
    fin.open("shows.txt");
        while (!fin.eof())
        {
            getline(fin, show);
            cout << show << endl;
        }
    fin.close();
}
void searchS2()
{
    string show;
    ifstream fin;
    fin.open("actionS.txt");
        while (!fin.eof())
        {
            getline(fin, show);
            cout << show << endl;
        }
    fin.close();
}
void searchS3()
{
    string show;
    ifstream fin;
    fin.open("comedyS.txt");
        while (!fin.eof())
        {
            getline(fin, show);
            cout << show << endl;
        }
    fin.close();
}
void searchS4()
{
    string show;
    ifstream fin;
    fin.open("dramaS.txt");
        while (!fin.eof())
        {
            getline(fin, show);
            cout << show << endl;
        }
    fin.close();
}
void watchS()
{
    string show, check;
    int flag;
    ifstream fin;
    fin.open("shows.txt");
    cout << "Which show would you like to see?\n";
    cin >> check;
    while (!fin.eof())
    {
        getline(fin, show);
        if (show == check)
        {
            flag = 1;
        }
    }
    fin.close();
    if (flag == 1)
    {
        cout << "You are currently watching " << check << ". Please enjoy!\n\nThank you for watching!";
    }
}
void watchM()
{
    string movie, check;
    int flag;
    ifstream fin;
    fin.open("movies.txt");
    cout << "Which movie would you like to see?\n";
    cin >> check;
    while (!fin.eof())
    {
        getline(fin, movie);
        if (movie == check)
        {
            flag = 1;
        }
    }
    fin.close();
    if (flag == 1)
    {
        cout << "You are currently watching " << check << ". Please enjoy!\n\nThank you for watching!";
    }
}
void addS1()
{
    string show;
    ofstream fout;
    fout.open("actionS.txt", ios::app);
    cout << "Enter the name of the show to be added\n";
    cin >> show;
    fout << show;
    cout << "Thank you!\n";
    fout.close();
    fout.open("shows.txt",ios::app);
    fout << show;
    fout.close();
}
void addS2()
{
    string show;
    ofstream fout;
    fout.open("comedyS.txt",ios::app);
    cout << "Enter the name of the show to be added\n";
    cin >> show;
    fout << show;
    cout << "Thank you!\n";
    fout.close();
    fout.open("shows.txt",ios::app);
    fout << show;
    fout.close();
}
void addS3()
{
    string show;
    ofstream fout;
    fout.open("dramaS.txt",ios::app);
    cout << "Enter the name of the show to be added\n";
    cin >> show;
    fout << show;
    cout << "Thank you!\n";
    fout.close();
    fout.open("shows.txt",ios::app);
    fout << show;
    fout.close();
}
void addM1()
{
    string movie;
    ofstream fout;
    fout.open("actionM.txt",ios::app);
    cout << "Enter the name of the show to be added\n";
    cin >> movie;
    fout << movie;
    cout << "Thank you!\n";
    fout.close();
    fout.open("shows.txt",ios::app);
    fout << movie;
    fout.close();
}
void addM2()
{
    string movie;
    ofstream fout;
    fout.open("comedyM.txt",ios::app);
    cout << "Enter the name of the show to be added\n";
    cin >> movie;
    fout << movie;
    cout << "Thank you!\n";
    fout.close();
    fout.open("shows.txt",ios::app);
    fout << movie;
    fout.close();
}
void addM3()
{
    string movie;
    ofstream fout;
    fout.open("dramaM.txt",ios::app);
    cout << "Enter the name of the show to be added\n";
    cin >> movie;
    fout << movie;
    cout << "Thank you!\n";
    fout.close();
    fout.open("shows.txt",ios::app);
    fout << movie;
    fout.close();
}
