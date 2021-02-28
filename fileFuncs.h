#include <fstream>

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
    fin.open("movies.txt");
        while (!fin.eof())
        {
            getline(fin, movie);
            cout << movie << endl;
            if (movie == "Life of Pi")
                    exit(0);
        }
    fin.close();
}
void searchM3()
{
    string movie;
    ifstream fin;
    fin.open("movies.txt");
        while (!fin.eof())
        {
            getline(fin, movie);
            while (movie != "Home Alone")
            {
            }
            cout << movie << endl;
            if (movie == "The Smurfs")
                    exit(0);
        }
    fin.close();
}
void searchM4()
{
    string movie;
    ifstream fin;
    fin.open("movies.txt");
        while (!fin.eof())
        {
            getline(fin, movie);
            while (movie != "To All The Boys I Ever Loved")
            {
            }
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
    fin.open("shows.txt");
        while (!fin.eof())
        {
            getline(fin, show);
            cout << show << endl;
            if (show == "Black Mirror")
                    exit(0);
        }
    fin.close();
}
void searchS3()
{
    string show;
    ifstream fin;
    fin.open("shows.txt");
        while (!fin.eof())
        {
            getline(fin, show);
            while (show != "Brooklyn Nine-Nine")
            {
            }
            cout << show << endl;
            if (show == "The Mordern Family")
                    exit(0);
        }
    fin.close();
}
void searchS4()
{
    string show;
    ifstream fin;
    fin.open("shows.txt");
        while (!fin.eof())
        {
            getline(fin, show);
            while (show != "Grey's Anatomy")
            {
            }
            cout << show << endl;
        }
    fin.close();
}

