#include <stdio.h>
#include <time.h>
#include <unistd.h>

#define DATE_TIME() printf("Today: %s\nNow: %s\n", __DATE__, __TIME__)

int main(int argc, char *argv[]) {
    DATE_TIME();

    time_t start_a;
    time_t end_a;

    time(&start_a);
    sleep(2);
    time(&end_a);
    double elapsed_time = difftime(end_a, start_a);
    printf("%f\n", elapsed_time);

    struct tm *pt;
    time_t t = time(NULL);
    pt = localtime(&t);
    printf("%s", asctime(pt));

    return 0;
}
