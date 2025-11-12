#include<stdio.h>
int main(int argCount, char*args[]){
    int num=400;
    int *ptr=(int*)num;
    printf("%d %d %d %d \n",num-1,num,num+1,);
    printf("%u %u %u %u\n",ptr-1,ptr,ptr+1,);

}