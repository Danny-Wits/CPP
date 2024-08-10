#include <iostream>
using namespace std;

class test
{
private:
    int a = 10;

public:
    int b = 15;

    int test_private()
    {
        cout << "\nAccessing another private data member in the different member function of the same class." << endl;
        cout << "The value of private data member a is " << a << endl;
    }
    static int d;

protected:
    int c = 20;
};
int test::d;

class derived_class : test
{
public:
    void test_protected()
    {
        cout << "\nAccessing another data member from inherited class." << endl;
        cout << "The value of inherited data member c is " << c << endl;
    }
};

int main()
{
    test obj1;
    obj1.test_private();
    {
        cout << "\nAccessing another public data member from the main function." << endl;
        cout << "The value of public data member b is " << obj1.b << endl;
    }

    derived_class obj2;
    obj2.test_protected();
    {
        test t1, t2, t3;
        // t1.d=10;
        cout << t1.d << endl;
        cout << t2.d << endl;

        cout << t3.d << endl;
    }

    return 0;
}