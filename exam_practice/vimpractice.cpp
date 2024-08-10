#include <iostream>
using namespace std;
int factorial(int x){
    int fact=1;
    for (;x>0; x--)
    {
      fact   = fact * x;
    }
   return fact ; 
}

int main(){
int x; 
cout<<"Enter the number you want the factorial of :  ";
cin>>x;
cout<<"The factorial of the number is "<< factorial (x);
return 0;

}