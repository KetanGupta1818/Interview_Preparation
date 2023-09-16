#include<bits/stdc++.h>
using namespace std;
class A;
class B{
    private:
        int data;
    public:
        B(int v){data = v;}
        void printData(){
            cout << data << "\n";
        }
        friend int adder(B,A);
};
class A{
    private:
        int data;
    public:
        A(int v){data = v;}
        void printData(){
            cout << data << "\n";
        }
        friend int adder(B,A);
};
int adder(B b, A a){
    return b.data + a.data;
}
int main(){
    A a(100);
    B b(200);
    cout << adder(b,a);
    
}