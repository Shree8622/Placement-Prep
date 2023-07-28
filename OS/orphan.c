#include<stdio.h>
#include<stdlib.h>
#include<stdlib.h>

int main()
{
    int child_pid = fork();
    if(child_pid)
        printf("Parent pid %d",getpid());
    else
        printf("Child pid %d",getpid());
}