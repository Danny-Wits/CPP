#include <iostream>
using namespace std;

int main()
{

    cout << "Enter the divisor here";
    int x;
    cin>>x;
try {
    if(x==0)throw runtime_error("Can't divide by zero");
    x/=x;
} catch (exception& e) {
   cout<<e.what();
}
    return 0;
}