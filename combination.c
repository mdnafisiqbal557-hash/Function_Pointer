//nCr = n! / (r! * (n-r)!)
#include<stdio.h>
int factorial(int num){
    int fact=1;
    for(int i=2;i<=num;i++){
        fact=fact*i;
    }
    return fact;
}
int main(){
    int n,r;
    printf("Enter the value of n: ");
    scanf("%d",&n);
    printf("Enter the value of r: ");
    scanf("%d",&r);
    int nCr = factorial(n) / (factorial(r) * factorial(n-r));
    printf("The value of nCr is: %d", nCr);
    return 0;
}
//nPr = n! / (n-r)! ||||almost same as nCr but without r! in denominator