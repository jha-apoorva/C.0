#include<stdio.h>
#include<unistd.h>
#include<sys/wait.h>

int main() {
    if(vfork()==0)
    {
        printf("Hello");
        exit(0);
    }
    else {
        printf(" World");
    }
    printf("\n");
    //_exit(0);
    
    return(0);
    }
