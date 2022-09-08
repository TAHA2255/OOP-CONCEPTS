#include <iostream>
using namespace std;

class father
{
public:
    int age;
    father(int a){
        age = a;
    }
    virtual void print()
    {
        cout << "i am father my age is: " << age << endl;
    }
};
class son : public father
{
public:
    
    son(int a): father(a)
    {
        age = a;
    }
    void print() override
    {
        cout << "i am son my age is: " << age << endl;
    }
};
class daughter : public father
{
public:
    daughter(int a): father(a)
    {
        age = a;
    }
    void print() override
    {
        cout << "i am daughter my age is: " << age << endl;
    }
};
int main(){
    father f(60);
    son s(21);
    daughter d(25);
    f.print();
    s.print();
    d.print();


}