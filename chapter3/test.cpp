#include<iostream>
using namespace std;

class tree{
public:
static int x;
};
int tree::x;

int main(){

tree t1;
t1.x=10;
tree t2;
cout<<t1.x;
return 0;
}