
#include <stdlib.h>
#include <fstream>
#include <iostream>
using namespace std;
class student
{
public:
    string Name;
    int Roll_no;
    int Marks;

    string detail()
    {
        return "Name : " + Name + "\t\tRoll_no : " + to_string(Roll_no) + "\t\tMARKS : " + to_string(Marks) + "\n";
    }
};

class file_manager
{ string address;
public:
    fstream file;

    // opening file
    file_manager(string add)
    {   address=add;
        file.open(add, ios::in | ios::app);
    }
    ~file_manager()
    {
        file.close();
    }

    bool input(student &obj)
    {
        file << obj.detail();
        file.close();
        file.open(address, ios::in | ios::app);
    }

    bool output()
    {   
        string line;
        while (getline(file, line))
        {
            cout << line << endl; 
        }

    }
};



