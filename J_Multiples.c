#include<stdio.h>
int main(){
    int A, B;
    scanf("%d %d",&A, &B);
    
    if(1 <= A && B <=1000000){
        if(A % B == 0 || B % A == 0){
            printf("Multiples");
        }
        else{
            printf("No Multiples");
        }
    }
}