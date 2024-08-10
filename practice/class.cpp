#pragma once
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

    student(string n, int r, int m)
    {
        Name = n;
        Roll_no = r;
        Marks = m;
    }
    string detail()
    {
        return "Name : " + Name + "\t\tRoll_no : " + to_string(Roll_no) + "\t\tMARKS : " + to_string(Marks) + "\n";
    }
};

class file_manager
{
public:
    fstream file;

    // opening file
    file_manager(string address)
    {
        file.open(address, ios::in | ios::out);
    }
    ~file_manager()
    {
        file.close();
    }

    bool input(student &obj)
    {
        file << obj.detail();
    }

    bool output()
    {
        string line = "\n";
        while (line != "")
        {
            getline(file, line);
        }
    }
};
