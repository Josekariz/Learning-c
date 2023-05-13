#include "main.h"

/**
 * main - Entry point
 * getpid() - returns the process id that is running
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    pid_t my_pid;

    my_pid = getpid();
    printf("This is my PID: %u\n", my_pid);
    return (0);
}
