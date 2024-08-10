#include<iostream>
#include<vector>
using namespace std;

class number{
    public:
    int value;
    number(int x){
        value=x;
    };
    number operator+(number &y){
     return number(this->value   *  y.value);
    }
};


vector<int> operator+(vector<int> x,vector<int> &y){
vector<int> z;
   for (int i = 0; i < (x.size()>y.size()?y.size():x.size()); i++)
   {
    z.push_back(x[i]+y[i]);
   }
   
    return z;
}

ostream & operator<<(ostream &x, vector<int> &y){
   for (int num:y)
   {
    x<<num<<" , ";
   }
   
    return x;
}

int main(){

number a(10);
number b(5);

vector<int>x{1,2,3,4,9};
vector<int>y{1,2,3,4,12};

x=x+y;

cout<<x;
return 0;
}