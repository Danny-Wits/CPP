#pragma once
#include <stdlib.h>
#include <iostream>
#include "manager.cpp"
using namespace std;
bool flag = true;
file_manager f1("database.txt");
void UI();

void input()
{
    int x;
    string name;
    int roll_no;
    int marks;
    cout << "How many students data you want to enter : ";
    cin >> x;

    student stds[x];
    for (int i = 0; i < x; i++)
    {
        cout << "\nEnter the name of student no " << i + 1 << ": ";
        cin >> name;
        cout << "\nEnter the roll number of student no " << i + 1 << ": ";
        cin >> roll_no;
        cout << "\nEnter the marks of student no " << i + 1 << ": ";
        cin >> marks;

        stds[i].Name = name;
        stds[i].Roll_no = roll_no;
        stds[i].Marks = marks;
        f1.input(stds[i]);
    }
    UI();
}

void output()
{
    f1.output();
}
void search()
{
    string z;
    cout << "Enter the name of Student : ";
    cin >> z;
}

void intro(char &en)
{
    flag = false;
    cout << "Welcome to fire database \n";
    cout << "************************\n";
    cout << "Press enter to continue! ";
    scanf("%c", &en);
}

void selection_menu(char &in)
{
    system("cls");
    cout << "Enter  \n1. i for input\n2. o or output \n3. s for search \n4.e for exit\n";
    cout << "Enter your choice : ";
    cin >> in;
}

void UI()
{
    char en;
    char in;

    system("cls");
    if (flag)
    {
        intro(en);
    }
    selection_menu(in);

    system("cls");
    switch (in)
    {
    case 'i':
        input();
        break;
    case 'o':
        output();
        break;
    case 's':
        search();
        break;
    case 'e':
        exit(1);
        break;
    default:
        UI();
    }
}
