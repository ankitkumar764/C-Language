#include<stdio.h>
int main()
{
int count=1;
for(int i=1; i<=4; i++){
    for(int j=4-i; j>=1; j--){
        printf(" ");
    }
    for(int k=1; k<=i; k++){
        printf("%d",count);
        count=count+1;
    }
    printf("\n");
}







    return 0;
}