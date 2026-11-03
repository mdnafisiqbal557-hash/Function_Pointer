#include<stdio.h>
int main (){
    int a =5;
    int* x = &a; //Pointer variable x is declared and initialized with the address of variable a.
    int** y = &x; //Pointer variable y is declared and initialized with the address of pointer variable x.
    printf("%d\n",a); // Here %d is used to print the value of variable a.
    printf("%d\n",*x); // Here %d is used to print the value of pointer variable x.
    printf("%d\n",**y); // Here %d is used to print the value of pointer variable y.

    return 0;
}