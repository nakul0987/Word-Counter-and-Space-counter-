#include <iostream>
#include <fstream>
#include <string>
using namespace std;

class WordCount
{
public:
    int count;
    int spaces;

    WordCount()
    {
        count = 0;
        spaces = 0;
    }

    void countIt(string fileIO)
    {
        for (int i = 0; i < fileIO.length(); i++)
        {
            if (fileIO[i] == ' ')
            {
                spaces++;
            }
        }
        count = spaces + 1;
        cout << "Total Word: " << count << endl;
    }
};

int main()
{

    ofstream write("wordCounter.txt", ios::app);
    write << "Hello this is my first project to build word count logic and play with files";
    write.close();
    cout << "Writing Done\n";

    ifstream read("wordCounter.txt");
    string readME, allText;
    while (getline(read, readME))
    {
        cout << readME;
        allText += readME;
    }
    cout << "\nReading Done\n";

    WordCount w;
    w.countIt(allText);

    return 0;
}
