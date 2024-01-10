#include "schedule.h"
#define FILENAME "schedule.txt"
#define LENGTH 20


char** readSchedule(){
    char activities = calloc(LENGTH, sizeof(&char));

    int log = open(FILENAME, O_RDONLY, 0);

  if (log < 0)  {  
    perror("open");  
    exit(1);  
}  
for(int i = 0; i < LENGTH; i++){
    int stopRead; 
    
    ssize_t readed = read(log, activities[i], )
}
    return activities;
}

void calculateTime(){
    
}

void displaySchedule(){
    printf("Entry Format : Activity, Time(24Hour)");
}

