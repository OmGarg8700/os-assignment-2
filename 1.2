#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<unistd.h>
#include<wait.h>
#include<pthread.h>
#include<sys/wait.h>
#include<math.h>
#include<time.h>

int main(){
    printf("For process 1: \n");
    struct timespec end; 

    struct timespec t1, t2, t3;

    long int initial1_nsec, initial2_nsec, initial3_nsec;
    long int initial1_sec, initial2_sec, initial3_sec;

    pid_t pid = fork();
    clock_gettime(CLOCK_MONOTONIC, &t1);
    initial1_nsec = t1.tv_nsec;
    initial1_sec = t1.tv_sec;

    if(pid == 0){

        char temp[10];
        sprintf(temp, "%d", getpid());
        printf("%s", temp);

        char command[100] = "/usr/bin/chrt -f -p 7 ";
        strcat(command, temp);
        system(command);
        
        char comm[] = "/usr/bin/chrt -p ";
        strcat(comm, temp);

        system(comm);

        char* comm_[2] = {NULL};
        execvp("./new.sh", comm_);
    }
    // clock_gettime(CLOCK_MONOTONIC, &t2);

    // printf("Execution time is: %f \n", (t1.tv_nsec) - initial);


    printf("For process 2: \n");

    // struct timespec t1,t2;
    // clock_gettime(CLOCK_MONOTONIC, &t1);
    // initial = t1.tv_nsec;

    pid = fork();
    // printf("Out: %d\n", pid);
    clock_gettime(CLOCK_MONOTONIC, &t2);
    initial2_nsec = t2.tv_nsec;
    initial2_sec = t2.tv_sec;

    if(pid == 0){
        // clock_gettime(CLOCK_MONOTONIC, &t2);
        // initial2 = t2.tv_nsec;

        char temp[10];
        sprintf(temp, "%d", getpid());
        printf("%s", temp);

        char command[100] = "/usr/bin/chrt -f -p 2 ";
        strcat(command, temp);
        system(command);
        
        char comm[] = "/usr/bin/chrt -p ";
        strcat(comm, temp);

        system(comm);

        char* comm_[2] = {NULL};
        execvp("./new.sh", comm_);
    }
    // clock_gettime(CLOCK_MONOTONIC, &t2);

    // printf("Execution time is: %f \n", (t1.tv_nsec) - initial);


    printf("For process 3: \n");

    // struct timespec t1,t2;
    // clock_gettime(CLOCK_MONOTONIC, &t1);
    // initial = t1.tv_nsec;

    pid = fork();

    clock_gettime(CLOCK_MONOTONIC, &t3);
    initial3_nsec = t3.tv_nsec;
    initial3_sec = t3.tv_sec;

    if(pid == 0){

        char temp[10];
        sprintf(temp, "%d", getpid());
        printf("%s", temp);

        char command[100] = "/usr/bin/chrt -f -p 50 ";
        strcat(command, temp);
        system(command);
        
        char comm[] = "/usr/bin/chrt -p ";
        strcat(comm, temp);

        system(comm);

        char* comm_[2] = {NULL};
        execvp("./new.sh", comm_);
    }
    // clock_gettime(CLOCK_MONOTONIC, &t2);

    // printf("Execution time is: %f \n", (t1.tv_nsec) - initial);



    while(wait(NULL) > 0){
        clock_gettime(CLOCK_MONOTONIC, &end);
    }

    long int final_nsec = end.tv_nsec;
    long int final_sec = end.tv_sec;

    printf("\nFor process1: %f \nFor process2: %f \nFor process3: %f\n", (final_sec - initial1_sec + (final_nsec - initial1_nsec)/1e9), (final_sec - initial2_sec + (final_nsec - initial2_nsec)/1e9), (final_sec - initial3_sec + (final_nsec - initial3_nsec)/1e9));

    return 0;
}
