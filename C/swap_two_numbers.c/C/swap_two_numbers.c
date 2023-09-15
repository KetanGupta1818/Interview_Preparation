#include <stdio.h>
void swap_ref(int* a, int* b){
    int temp = *a;
    *a = *b;
    *b = temp;
}
int main(){
    int A = 10, B = 100;
    swap_ref(&A,&B);
    printf("A= %d, B=%d\n",A,B);
    
}