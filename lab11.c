#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>  //For usleep function
#include <sys/wait.h>

/*
  Purpose: Forks a parent proccess. The child executes the ps command
  and the parent waits for the child and executes a countdown.
  Inputs: command line arguments
  Outputs: success status
 */
int main(int argc, char * argv[]){
    int status, i;
    printf("The parent's PID is %i.\n",getpid());
    printf("The parent is now forking.\n");
    if ((i = fork()) < 0) {
        printf("The call to fork failed\n");
        exit(1);
    }
    if (i == 0) { //child
        printf("The child's PID is %i.\n",getpid());
        printf("The child is executing ps.\n");
        char * psArgs[] = {"ps"};
        i = execvp("ps",psArgs);
    } else {
        i = wait(&status);
        printf("The parent waited patiently for its child to complete.\n");
        printf("The parent is executing ./countdown.out %s.\n", argv[1]);
        char * countdownArgs[] = {"./countdown.out",argv[1], NULL};
        i = execvp("./countdown.out",countdownArgs);
    }
    return 0;
}
