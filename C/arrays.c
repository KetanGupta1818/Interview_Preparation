#include<stdio.h>
#include<stdlib.h>
void printArray(int* arr, int n){  //Call by reference
    printf("arr= ");
    for(int i=0;i<n;i++) printf("%d ",arr[i]);
    printf("\n"); 
}
void initArray(int arr[], int n){    //Call by reference
    for(int i=0;i<n;i++) arr[i] = i;
}
/*
This fuction gives error because A[10] is local to this function and main function cannot access this location
as when th function call is over the function stack is erased.
*/
int* functionReturnArray1(){   
    int A[10];
    for(int i=0;i<10;i++) A[i] = 10-i;
    return A;
}
//Not recommended but works
int* functionReturnArray2(){   
    static int A[10];
    for(int i=0;i<10;i++) A[i] = 10-i;
    return A;
}
//Correct
int* functionReturnArray3(){   
    int* A = (int*)malloc(sizeof(int)*10);
    for(int i=0;i<10;i++) A[i] = 10-i;
    return A;
}
int compare_function(const void* a, const void* b){
    int A = *((int*)a);
    int B = *((int*)b);
    return A-B;
}

int main(){
    int n = 10;
    int* arr = (int*)malloc(n*sizeof(int));
    printArray(arr,n);
    initArray(arr,n);
    printArray(arr,n);
    int* A = functionReturnArray3();
    printArray(A,n);
    qsort(A,n,sizeof(int),compare_function);
    printArray(A,n);
    //double* cannot to be assigned to int*, but only to void* and double*
    void *p1;
    double c2 = 200;
    p1 = (double*)(&c2);
    printf("%f\n",*(double*)p1);
    return 0;
}