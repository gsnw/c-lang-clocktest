#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stddef.h>
#include <unistd.h>

#define CLOCK_MONOTONIC_NAME "CLOCK_MONOTONIC"
#define CLOCK_REALTIME_NAME "CLOCK_REALTIME"
#define CLOCK_UPTIME_NAME "CLOCK_UPTIME"

static void printClock(char *clockIdName, clockid_t CLOCK_ID)
{
    struct timespec curr_tm;
    clock_gettime(CLOCK_ID, &curr_tm);
    printf("[%s] Seconds: %ld Nanoseconds: %ld\n", clockIdName, curr_tm.tv_sec, curr_tm.tv_nsec);
}

int main(void)
{
    printClock(CLOCK_MONOTONIC_NAME, CLOCK_MONOTONIC);
    printClock(CLOCK_REALTIME_NAME, CLOCK_REALTIME);
#if defined(BSD)
    printClock(CLOCK_UPTIME_NAME, CLOCK_UPTIME);
#endif
    return EXIT_SUCCESS;
}
