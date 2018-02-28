
#include <stdio.h>

/*
Here is m=10, n and o are two integer variable and *z is an integer 

z stores the address of m  = 0x7ffd40630d44                                                                  
                                                                                                              
*z stores the value of m = 10                                                                                
                                                                                                              
&m is the address of m = 0x7ffd40630d44                                                                      
                                                                                                              
&n stores the address of n = 0x7ffd40630d48                                                                  
                                                                                                              
&o  stores the address of o = 0x7ffd40630d4c                                                                 
                                                                                                              
&z stores the address of z = 0x7ffd40630d50 
*/

void swap(int x, int y);
void swap1(int *, int *);

int main(){
    // Understanding pointers
    int x = 1;
    int y = 2, z[10];
    int *ip;    // ip is a pointer that points to int

    ip = &x;    // ip now points to x
    y = *ip;    //y is now 1
    *ip = 0;    //x is now 0
    ip = &z[0]; //ip now points to z[0]

    int a = 5;
    int b = 10;

    printf("Swap: a:%d b:%d\n", a, b);
    swap(a, b);
    printf("Swap: a:%d b:%d\n", a, b);
    printf("Swap1: a:%d b:%d\n", a, b);
    swap1(&a, &b);
    printf("Swap1: a:%d b:%d\n", a, b);

    return 0;

}

void swap(int x, int y){
    int temp;
    
    temp = x;
    x = y;
    y = temp;
}

void swap1(int *x, int *y){
    int temp;
    
    temp = *x;
    *x = *y;
    *y = temp;
}