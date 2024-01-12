#include "schedule.h"
#define FILENAME "schedule.txt"
#define LENGTH 20


char** readSchedule(){
    char** activities = calloc(LENGTH, sizeof(char activities*));

    int log = open(FILENAME, O_RDONLY, 0);

  if (log < 0)  {  
    perror("open");  
    exit(1);  
}  
char *c;
int i;
while((ssize_t readed = read(log, c[i], i)) != 0) i++;

int counter = 0;
char *l;
while((l = strsep(&c, " ")) != NULL){
activities[counter] = l;
counter++;
}
    return activities;
}

void calculateTime(){
    
}

void displaySchedule(){
    printf("%s", activities[1]);
    printf("\nEntry Format : Activity, Time(24Hour)");
}

