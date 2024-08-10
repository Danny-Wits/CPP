#include <iostream>
using namespace std;
// Virtual functions
class parent
{
public:
    virtual void virtual_function()
    {
        cout << "CALLED BY PARENT\n";
    }
    void non_virtual_function()
    {
        cout << "CALLED BY PARENT\n";
    }
};
class child : public parent
{
public:
    void virtual_function() override
    {
        cout << "CALLED BY CHILD\n";
    }
    void non_virtual_function()
    {
        cout << "CALLED BY CHILD\n";
    }
};

int main()
{   parent * ptr;
    //Pointing to a Parent
    ptr=new parent ;
    //virtual_function : run-time/dynamic binding : can be changed in runtime ;
    ptr->virtual_function();
    //non_virtual_function : compile-time/static binding : can't be changed in run time ;
    ptr->non_virtual_function();
    delete ptr; 

    //Pointing to a child
    ptr =new child;
    //changed to the child version of the function
    ptr->virtual_function();
    //fix binding to the parent at compile time
    ptr->non_virtual_function();
    delete ptr;
    return 0;
}