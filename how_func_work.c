#include<stdio.h>
void USA(){
    printf("You are in USA\n");
    return;
}
void Australia(){
    printf("You are in Australia\n");
    USA();
    return;
}
void Bangladesh(){
    printf("You are in Bangladesh\n");
    Australia();
    return;
}
int main(){
    Bangladesh();
    return 0;
}