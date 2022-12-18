#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stddef.h>
#include <unistd.h>

static void printClock(char *clockIdName, clockid_t CLOCK_ID)
{
    struct timespec curr_tm;
    clock_gettime(CLOCK_ID, &curr_tm);
    printf("[%s] Seconds: %ld\n", clockIdName, curr_tm.tv_sec);
    printf("[%s] Nanoseconds: %ld\n", clockIdName, curr_tm.tv_nsec);
}

int main(void)
{
    printClock("CLOCK_MONOTONIC", CLOCK_MONOTONIC);
    printClock("CLOCK_REALTIME", CLOCK_MONOTONIC);
    printClock("CLOCK_UPTIME", CLOCK_MONOTONIC);
    return EXIT_SUCCESS;
}
