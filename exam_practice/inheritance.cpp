//INHERITANCE
#include <iostream>
using namespace std;
//1 Hybrid : father, mother -> person ->son ,daughter
class father
{
private:
    string _private = "Private";

public:
    string _public = "Public";

protected:
    string _protected = "Protected";
};


class mother
{
public:
    string _relation = "mother";
};


//2 Multiple: father, mother -> person
class person : protected father, public mother
{
public:
    string get_public()
    {
        return _public;
    }
    string get_protected(){
       return _protected;
    }
    string get_relation(){
        return _relation;
    }    
};

//3 Multilevel : father -> person -> son

//4 Simple : person-> son
class son : public person
{
public:
    son() { _relation = "son"; };

};

//5 Hierarchical :person->son,daughter 
class daughter : private person
{public:
    daughter(){ _relation = "daughter"; };
};

int main()
{ 
       person p;
       son s;
       daughter d;
 
       cout<<p.get_public()<<endl;
       cout<<p.get_protected()<<endl;
       cout<<s.get_relation()<<endl;
    return 0;
}