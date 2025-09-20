#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    for(int i=n; i>=1; i--){
        for(int j=1; j<=n-i+1; j++){
            printf("%c",j+64);
        }
        for(int k=n-i; k>=1; k--){
            printf("%c",k+64);
        }
        printf("\n");
    }









   
    return 0;
}