#include<stdio.h>
int main(int argCount, char *args[]){
    float num=5.5f;
    printf("value of Num = %2.f \n", num);
    printf("Address of Num = %p \n", &num);
    printf("Value of Num = %1.f \n", *(&num));
}