#include <stdio.h>

/*
This is Client
*/

int main(int argc, char argv[]){

    /*Get IP as an Input*/
    if(argc > 1){
        strcmp(argv[0], 'start');
        printf('Starting Client...\n');
    }else{
        printf('No argument...\n');
        pritnf('Client [start|stop] [IP]');
        return 0;
    }

    return 0;
}