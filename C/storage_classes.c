#include <stdio.h>
int gv = -1;
void function_with_counter(int a){
    static int cnt = 0;   //not stored in stack of function but stored in data segment thus it persists multiple function calls
    ++cnt;
    printf("a=%d   and cnt=%d   and global_variable=%d\n",a,cnt,gv);
}
int main(){
    auto int i =  100;
    printf("%d\n",i);
    for(register int i=0;i<5;i++) function_with_counter(i);
    return 0;
}