#include<stdio.h>
int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    char ch = 'A';
    for(int i=1; i<=n; i++){

        for(int j=1; j<=n; j++){
            printf("%c ", ch);
            ch++;
            if(ch > 'Z'){
                ch = 'A';
            }
        }

        printf("\n");
        }
    }