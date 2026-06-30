#include <iostream>
#include <fstream>
#include <string>

using namespace std;

void write(void)
{
    ofstream fout("file1.txt");
    fout << "Hello world";
    // << is called insertion operator
    fout.close();
}

void read(void)
{
    ifstream fin("file1.txt");
    string line;
    while (getline(fin, line))
    {
        cout << line << endl;
    }
    fin.close();
}
int main()
{
    write( );
    read();
    return 0;
}
