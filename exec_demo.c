//
// Created by navneet on 10-02-2024.
//
#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>

int main(void)
{
    printf("%s: Before calling exec mypid = %d\n", __FILE__, getpid());

    if(execl("./sleep_demo", "sleep_demo", NULL))
        perror("exec");

    printf("%s After calling exec mypid = %d\n", __FILE__, getpid());
}
