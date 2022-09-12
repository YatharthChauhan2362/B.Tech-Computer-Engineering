#include <sys/types.h>
#include <sys/types.h>
#include <stdio.h>
#include <unistd.h>
#include <sys/wait.h>
int main()
{

    pid_t pid = fork();
    int gpid;
    if (pid < 0)
    {
        fprintf(stderr, "Fork Failed");
        return 1;
    }
    else if (pid == 0)
    {
        printf("I'm the child \n");
        gpid = getpid();
        printf("Current Process ID is : %d\n", gpid);
    }
    else
    {
        wait(NULL);
        printf("Child Complete \n");
    }
    return 0;
}