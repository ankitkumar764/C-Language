#include<stdio.h>
int main(){

int n;
scanf("%d",&n);

for(int i=1; i<=n; i++){
    for(int j=1; j<=7; j++){
        if(i==1 || i==n){
            printf("#");
        }
        else if(j==1 || j==7){
            printf("#");
        }
        else{
            printf(" ");
        }
    }
    printf("\n");
}











    return 0;
}