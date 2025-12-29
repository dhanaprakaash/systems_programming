#include <stdio.h>
#include <unistd.h>
#include <sys/wait.h>

int main() {
    printf("PID = %d\n", (int) getpid()); 
    int rc = fork();

    if (rc == 0) {
        printf("Child running (pid=%d)\n", getpid());
        sleep(2);
        printf("Child exiting\n");
    } else {
        printf("Parent waiting (pid=%d)\n", getpid());
        //int child_id = wait(NULL);
        //printf("terminated Child PID = %d\n", child_id); 
        printf("Parent resumed\n");
    }
    return 0;
}