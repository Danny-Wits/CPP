#include <iostream>
#include <fstream>
using namespace std;

int main()
{

    fstream file("sample.txt", ios::in | ios::out);
    file << "TEXT TO WRITE IN A FILE";
    file.seekp(ios::beg);
    cout<<file.tellg();
    string text;
    getline(file, text);
    cout << text;
    file.close();
    return 0;
}