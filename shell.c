#include "execute.h"

int main() {
    while (1) {
        printf("catsh $ ");
        fflush(stdout);
        char command[1000] = {0};
        read(STDIN_FILENO, command, 100);
        executeLine(command);
    }
    return 0;
}