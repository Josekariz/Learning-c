#include "main.h"

/**
 * main - Entry point
 * getpid() - returns the process id that is running
 *
 * getppid() - returns the process id that is parent to the current 
 * Return: Always 0 (Success)
 */
int main(void)
{
    pid_t my_pid, parentId;

    my_pid = getpid();
    parentId = getppid();
    printf("This is my PID: %u\n", my_pid);
    printf("This is my Parent process id: %u\n", parentId);
    return (0);
}
