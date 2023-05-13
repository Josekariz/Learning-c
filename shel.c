#include "main.h"

/* This program reads input from the user and mirrors it back to them. */
int main()
{
    char *line = NULL;
    ssize_t read;
    size_t length = 0;

    while (1)
    {
        printf("Mirrortext:$ ");

        /* Read the user input from stdin using the getline function. */
        read = getline(&line, &length, stdin);

        /* If the return value of getline is -1, it means there was an error or
           the end-of-file (EOF) was reached, so we break out of the loop. */
        if (read == -1)
        {
            break;
        }

        /* Print the mirrored text back to the user. */
        printf("This is the mirror text: %s", line);
    }

    /* Free the memory allocated for the input line. */
    free(line);

    /* Return 0 to indicate successful completion of the program. */
    return 0;
}
