#include<stdio.h>
#include<stdlib.h>
void fillMatrix(int** M, int rows,int cols){
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            M[i][j] = i*rows+j;
        }
    }
}
void printMatirx(int** M, int rows, int cols){
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            printf("%d ",M[i][j]);
        }
        printf("\n");
    }
}
int main(){
    int rows=3,cols=4;
    int **M = (int**)malloc(sizeof(int*)*rows);
    for(int i=0;i<rows;i++) M[i] = (int*)malloc(sizeof(int)*cols);
    fillMatrix(M,rows,cols);
    printMatirx(M,rows,cols);
    return 0;
}