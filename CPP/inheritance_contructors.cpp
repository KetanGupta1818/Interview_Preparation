#include<bits/stdc++.h>
using namespace std;

class A{
    protected:
        int a1,a2;
        A(int a){
            a1=a;
        }
        A(int a, int b){
            a1=a;a2=b;
        }
};
class D: public A{
    int d;
    public:
        D(int a,int d1): A(a){
            d = d1;
        }
        D(int a,int b,int d1): A(a,b){
            d = d1;
        }
        void print(){
            cout << "a1= " << a1 << "    a2= " << a2 << "      d= " << d << endl;
        }
};
int main(){
    D d(10,9,19);
    d.print();
}