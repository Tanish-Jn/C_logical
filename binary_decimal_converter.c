#include<stdio.h>
int main(){
    int n;
    printf("Enter a decimal number: ");
    scanf("%d",&n);
    int temp_num = 0;
    int num = 0;
    int power = 1;

    for(n; n>0; n=n/10){
        temp_num = n%10 * power;
        num = num + temp_num;
        power = power *2;
    }
    printf("The decimal equivalent is: %d", num);
    return 0;   
}