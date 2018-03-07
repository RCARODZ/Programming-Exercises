#include <stdio.h>

/*
This is Server
*/

int main(int argc, char argv[]){

    /*Configure Server*/
    if(argc > 1){
        strcmp(argv[0],'start');
        printf('Start Server...\n');
    }else{
        printf('No arguments added please tell the server what to do...\n');
        printf('server.c  [start|stop] [IP] [port]\n');
        return 0;
    }

    return 0;
}