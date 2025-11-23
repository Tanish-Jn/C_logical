#include<stdio.h>
int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);

    int a = 10;
    int b;
    int rem;

    int new_number = 1;
    int reverse_number = 0;
    int tn = 1;

    while(n>0){
        rem = n%10;
        b= rem-1;
        int power = 1;

        while(b>0){
            power = power * a;
            b--;
        }
        new_number= tn*power;
        reverse_number+=new_number;
        tn++;
        n/=10;
    }
    printf("The digit inverted number is: %d", reverse_number);
    return 0;
}