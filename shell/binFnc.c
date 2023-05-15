#include "shell.h"

int own_cd(char **args)
{
    // Implementation of the own_cd function
    // Add your own logic here to change the directory
    // based on the arguments passed to the function
    
    // Example: Change directory to the specified path
    if (args[1] == NULL) {
        fprintf(stderr, "own_cd: expected argument to \"cd\"\n");
    } else {
        if (chdir(args[1]) != 0) {
            perror("own_cd");
        }
    }
    
    // Return 1 to indicate success
    return 1;
}

int own_exit(char **args)
{
    // Implementation of the own_exit function
    // Add your own logic here if needed
    
    // Example: Exit the shell
    return 0;
}

int own_env(char **args)
{
    // Implementation of the own_env function
    // Add your own logic here to display environment variables
    
    // Example: Print all environment variables
    int i = 0;
    while (environ[i] != NULL) {
        printf("%s\n", environ[i]);
        i++;
    }
    
    // Return 1 to indicate success
    return 1;
}

int own_help(char **args)
{
    // Implementation of the own_help function
    // Add your own logic here to display help information
    
    // Example: Print help information
    printf("This is a simple shell program.\n");
    printf("You can use the following built-in commands:\n");
    printf("cd <directory> : Change directory\n");
    printf("env : Display environment variables\n");
    printf("help : Display help information\n");
    printf("exit : Exit the shell\n");
    
    // Return 1 to indicate success
    return 1;
}