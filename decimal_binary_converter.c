#include<stdio.h>
int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    int place_value = 1;
    int num = 0;
    for(n; n>=1; n=n/2){
        num = num + n%2 *place_value;
        place_value = place_value *10;
    }
    printf("The binary equivalent is: %d", num);
    return 0;

}