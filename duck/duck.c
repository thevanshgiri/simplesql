#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

int main(void){

    time_t t = time(NULL);
    struct tm tm = *localtime(&t);
    int day = tm.tm_mday;
    int month = tm.tm_mon + 1;
    int year = tm.tm_year + 1900;
    int hour = tm.tm_hour;
    int min = tm.tm_min;
    int sec = tm.tm_sec;

    char * strin = malloc(100);
    sprintf(strin, "Ping: %d-%d-%d %d:%d:%d", day, month, year, hour, min, sec);

    char * strout = malloc(100);
    sprintf(strout, "cd .. && echo %s >> duck.log", strin);
    system(strout);
    system("cd .. && nano duck.log");

}