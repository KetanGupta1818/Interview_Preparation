#include<bits/stdc++.h>
using namespace std;

class Customer{
    private:
        static int counter;
        int id;
    public: 
        Customer(int v){id=v;}
        static void greet(){
            cout << "welcome to our store= " << counter << "\n"; 
        }
        void addCustomer();
};
int Customer :: counter = 12045;  //Important to define static variable outside the class
void Customer :: addCustomer(){
    counter++;
}
int main(){
    
    Customer c1(102);
    Customer :: greet();
    c1.addCustomer();
    Customer c2(1023);
    Customer :: greet();
    c2.addCustomer();
    return 0;
}