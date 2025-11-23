#include<stdio.h>
int main(){
int n;
printf("Enter a number: ");
scanf("%d",&n);
int i = 2;
while(i <= n){
    int j = 2;
    int count = 0;
    while (j<i){
        if(i%j==0){
            count++;
        }
         j++;
    }
            if(count==0){
        printf("%d " , i);
    }   
    i++;
}

   return 0;
}

