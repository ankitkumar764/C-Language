#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int count=1;
    for(int i=1; i<=n; i++){
        for(int j=count; j<count+4; j++){
            printf(" %d",j);
        }
        printf("\n");
        count=count+4;
    }
    return 0;
}