#include<stdio.h>
int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);

    int k;
    printf("enter k: ");
    scanf("%d",&k);

    int count = 0;
    int tn = n;

    for(tn; tn>0; tn=tn/10){
        count++;
    }

int a = 10;
int b = count - 1;
int power = 1;

for(b; b>0; b--){
    power = power * a;
}
int i = 0;
for(i; i<k; i++){
    n= (n%10)*power + n/10;
}
printf("The rotated number is: %d", n);
    return 0;
}