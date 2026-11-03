#include<stdio.h>
void swap(int* a, int* b){
    int temp = *a; 
    *a = *b;        
    *b = temp;  
    return;   
}
int main(){
    int a,b;
    printf("Enter two numbers: ");
    scanf("%d %d",&a,&b);
    int* x=&a; //Pointer variable x is declared and initialized with the address of variable a.
    int* y=&b; //Pointer variable y is declared and initialized with the address of variable b.
    swap(x,y);
    printf("After swapping a and b is: %d %d",a,b);
    return 0;
} 