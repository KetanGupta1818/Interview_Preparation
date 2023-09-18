#include<bits/stdc++.h>
using namespace std;

class Base{
    public:
    int b;
    Base(int b): b(b){}
    void print(){
        cout << "b= " << b << "\n";
    }
};
class Derived: public Base{
    public:
    int d;
    Derived(int b, int d): Base(b),d(d){}
    void print(){
        cout << "b= " << b << "\n";
        cout << "d= " << d << "\n";
    }
};
int main(){
    Base b(100);
    Base *bptr = &b;
    bptr->print();




    Derived d(9,90);
    bptr = &d;
    bptr->print();



    Derived *dptr = &d;
    dptr->print();



    
    //Runtime polymorphisim
    ((Derived*)bptr)->print();
    return 0;
}