#include<stdio.h>
int main(){
    float num=5.557;
    printf("value of Num = %.2f \n", num);
    printf("Address of Num = %.1f \n", num);
    printf("Value of Num = %.0f \n", *(&num));
    
}
