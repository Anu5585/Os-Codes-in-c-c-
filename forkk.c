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

        // Execute a new program using exec()
        execlp("ls", "ls", "-l", NULL);

        // If exec fails, print an error message
        perror("exec");
        exit(EXIT_FAILURE);
    }

    // Parent process
    printf("Parent process waiting for the child...\n");

    // Wait for the child process to finish
    int status;
    waitpid(pid, &status, 0);

    printf("Parent process exiting...\n");

    return 0;
}
