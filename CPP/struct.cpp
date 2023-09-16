#include<bits/stdc++.h>
using namespace std;
struct book{
    string name;
    int pages;
    double prize;
};
void printBookPointer(book* b){
    cout << "name= " << b->name << "    pages=" << b->pages << "     prize= " << b->prize << "\n";
}
void printBookCopy(book b){
    cout << "name= " << b.name << "   pages= " << b.pages << "     prize= " << b.prize << "\n";
}
void printBookRef(book& b){
    cout << "name= " << b.name << "   pages= " << b.pages << "     prize= " << b.prize << "\n";
}
int main(){
    struct book b1;
    b1.name = "Let us C";
    b1.pages = 400;
    b1.prize = 500.890;
    printBookCopy(b1);
    printBookRef(b1);
 //   struct book *bk =  (struct book*)malloc(sizeof(struct book));      // This is giving error... So use new for dynamic memory
    book *bk = new book;    
    bk->name = "Let us java";
    bk->pages = 300;
    bk->prize = 500.9;
    printBookPointer(bk);
    return 0;
}