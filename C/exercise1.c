
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

int main(){
    // Understanding pointers
    int m = 10;
    int *z;     //the pointer
    int n;
    int o;

    printf("m=%d : *z=%d : z=%x : &z=%x : n=%d : o=%d\n",m,*z,z,&z,n,o);

}