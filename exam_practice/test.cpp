#include<iostream>
using namespace std;

class text {
public:
  string x;
  text(string x):x(x){};

};

text operator+(text &obj1,text &obj2){
   return text(obj1.x+obj2.x);
};
ostream& operator<<(ostream &str,text &obj){
  str<<obj.x;
  return str;
}
int main(){

text t1("water "),t2("is good ");

return 0;
}