#include<bits/stdc++.h>
using namespace std;

class Point;
class Complex{
    public:
        int real;
        int img;
        Complex(int r, int i){
            real = r;
            img = i;
        }
        void printComplex();
        Complex operator +  (Complex C){
            return Complex(real+C.real,img+C.img);
        }
        friend int operator+(Complex,int);
        friend int operator+(int,Complex);
        operator int(){
            return real + img;
        }
        friend int operator+(Point,Complex);
};
void Complex :: printComplex(){
    cout << "real= " << real << "   img= " << img << "\n";
}
int operator+(Complex C, int a){
    return C.real + C.img + a;
}
int operator+(int a,Complex C){
    return C.real + C.img + a;
}

class Point{
    public:
        int x; int y;
        Point(int X, int Y){
            x=X;y=Y;
        }
        void printPoint(){
            cout << "x= " << x << "    y= " << y << "\n";
        }
        friend int operator+(Point,Complex);

};
int operator+(Point p, Complex c){
    return p.x + p.y + c.real + c.img;
}






int main(){
    Complex C1(10,9);
    // int nineteen = C1;
    // cout << nineteen << "\n";
    // Complex C2(3,90);
    // Complex C3 = C1 + C2;
    // Complex C4 = C3.operator+(C1);
    // C3.printComplex();
    // C4.printComplex();
    // int v = C1 + 100;
    // int v2 = 100 + C1;
    // cout  << v << "\n";
    // cout << v2 << "\n";
    Point P1(100,200);
    int v = P1 + C1;
    cout << v;
    return 0;
}