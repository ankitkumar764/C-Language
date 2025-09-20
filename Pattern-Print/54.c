#include<stdio.h>
int main()
{
    for(int i=1; i<=5; i++){
        for(int j=1; j<=5-i; j++){
            printf(" ");
        }
        for(int k=1; k<=2*i-1; k++){
            if(k==1 || k==2*i-1){
                printf("#");
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }


    for(int a=4; a>=1; a--){
       for(int b=1; b<=4-a; b++){
        printf(" ");
       }
       for(int c=1; c<=2*a-1; c++){
          if(c==1 || c==2*a-1){
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