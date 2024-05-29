#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>

int main() {
    pid_t pid;

    pid = fork();

    if (pid < 0) {
        perror("Fork failed");
        exit(EXIT_FAILURE);
    } else if (pid == 0) {
        // Child process
        printf("Child process executing...\n");
        // Replace child process with another program
        execl("/bin/ls", "ls", NULL);
        // If execl fails, following lines will be executed
        perror("Exec failed");
        exit(EXIT_FAILURE);
    } else {
        // Parent process
        printf("Parent process waiting for child...\n");
        wait(NULL); // Wait for child process to finish
        printf("Child process completed. Parent exiting.\n");
        exit(EXIT_SUCCESS);
    }
}
    