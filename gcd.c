#include<stdio.h>
int min(int a,int b){
    if(a<b)
        return a;
    else
        return b;
}
int gcd(int a,int b){
    int x;
    for(int i=1;i<=min(a,b);i++){
        if(a%i==0 && b%i==0)
            x=i;
    }
    return x;
}
int main(){
    int a,b;
    printf("Enter the value of a: ");
    scanf("%d",&a);
    printf("Enter the value of b: ");
    scanf("%d",&b);

    int i = gcd(a,b);
    
    printf("The GCD of %d and %d is: %d",a,b,i);
}