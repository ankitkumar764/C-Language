#include<stdio.h>
int main()
{
    int n,count=65;
    scanf("%d",&n);
    for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){
            printf(" %c",count);
            count=count+1;
        }
        printf("\n");
    }











    return 0;
}