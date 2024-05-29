#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main() {
    printf("Executing ls command with arguments...\n");
    // Execute ls command with arguments using execl
    execl("/bin/ls", "ls", "-l", NULL);
    perror("Exec failed");
    exit(EXIT_FAILURE);
}
