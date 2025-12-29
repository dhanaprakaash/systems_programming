#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(int argc, char *argv[]) {

    printf("Before fork: pid = %d\n", (int)getpid());

    int rc = fork();

    if (rc < 0) {
        printf("fork() failed\n");
        exit(1);
    } else if (rc == 0) {
        printf("Child:  pid = %d, rc = %d\n", (int)getpid(), rc);
    } else {
        printf("Parent: pid = %d, child_pid(rc) = %d\n", (int)getpid(), rc);
    }

    return 0;
}
