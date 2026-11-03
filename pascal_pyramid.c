#include<stdio.h>
int factorial(int num){
    int fact=1;
    for(int i=2;i<=num;i++){
        fact=fact*i;
    }
    return fact;
}
int combination(int n, int r){
    int nCr = factorial(n) / (factorial(r) * factorial(n-r));
    return nCr;
}
int main(){
    int n;
    printf("Enter the value of n: ");
    scanf("%d",&n);
    for(int i=0;i<=n;i++){
        for(int j=0;j<=n-i;j++){
            printf(" ");
        }
        for(int k=0;k<=i;k++){
            int iCk = combination(i, k);
            printf("%d ", iCk);
        }
        printf("\n");
    }
    return 0;
}