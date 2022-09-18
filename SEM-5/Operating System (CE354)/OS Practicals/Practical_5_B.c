#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/wait.h>
int main(void)
{
    pid_t pid = 0;
    int status;
    pid = fork();
    if (pid == 0)
    {
        printf("I am the child.");
        execl("/bin/ls", "ls", "-l", "/", (char *)0);
        perror("In exec(): ");
    }
    if (pid > 0)
    {
        printf("I am the parent, and the child is %d.\n", pid);
        pid = wait(&status);
        printf("End of process %d: ", pid);
        if (WIFEXITED(status))
        {
            printf("The process ended with exit(%d).\n", WEXITSTATUS(status));
        }
        if (WIFSIGNALED(status))
        {
            printf("The process ended with kill -%d.\n", WTERMSIG(status));
        }
    }
    if (pid < 0)
    {
        perror("In fork():");
    }
    exit(0);
    printf("\n20DCE019-Yatharth Chauhan\n");
}
