#include<stdio.h>
void swap(int &a,int &b){
    int temp=0;
    temp=*a;
    *a=*b;
    *b=temp;
}
int main(){
printf("hello world!");
printf("hhhhh我成功啦");
return 0;
}