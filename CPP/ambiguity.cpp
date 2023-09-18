#include<bits/stdc++.h>
using namespace std;

class S{
    public:
        int p = 1010;
};
class A: virtual public S{
    protected:
        int a;
    public: 
        void display(){
            cout << "display of A\n";
        }  
};
class B : virtual public S{
    protected:
        int b;
    public: 
        void display(){
            cout << "display of B\n";
        } 
};
class D: public A, public B{  //Ambiguity of display function.. 
    public:
        int c;
        void fun(){
            cout << "fun of c\n";
        }
        void display(){
            B::display();
        }
};

int main(){
    D d;
    d.fun();
    d.display();
    d.A::display();
    cout << d.p << "\n";
}