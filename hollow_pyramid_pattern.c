#include<stdio.h>
int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);

    for(int i=1; i<=n; i++){
        for(int j=n; j>=1; j--){
            if(j==i || i==n){
                printf("%-2d " , j);
            }
            else{
            printf("   ");
        }}
        for(int j=2; j<=n; j++){
            if(i==n || j==i){
                printf("%-2d " , j);
            }
            else{
            printf("   ");
        }
        }
    printf("\n");
    }
}