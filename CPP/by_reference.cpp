#include<bits/stdc++.h>
using namespace std;
void swap_two_numbers(int& a,int& b){
    int temp = a;
    a = b;
    b = temp;
}
void fillVector(vector<int>& vec){   //reference variable of vector<int> vec
    for(int i=0;i<vec.size();i++) vec[i] = i;
}
void printVector(vector<int>& vec){
    for(int a: vec) cout << a << " ";
    cout << "\n";
}
//Return by reference .... very important
int& getMaximum(int& a, int& b){
    if(a>=b) return a;
    return b;
}
int main(){

    //reference variable points (refers) to the same variable
    int v1 = 100;
    int& v2 = v1;   //v2 is reference variable
    cout << "v1= " << v1 << "   v2= " << v2 << endl;
    v1 = 201;
    cout << "v1= " << v1 << "   v2= " << v2 << endl;




    int a = 10,b = 100;
    swap_two_numbers(a,b);
    cout << "a= " << a << "   b= " << b << endl;


    vector<int> vec(10,-1);
    fillVector(vec);
    printVector(vec);


    int A=100,B=1;
    getMaximum(A,B) = -1;
    cout << "A=  " << A << "\n";

    return 0;
}