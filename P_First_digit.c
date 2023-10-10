#include<stdio.h>
int main(){
    int X;
    scanf("%d",&X);

    if(999 < X && X<= 9999){
        int digit = X/1000;
        
        if(digit % 2 == 0){
             printf("EVEN");
        }
        else{
            printf("ODD");
        }
    }
    return 0;
}