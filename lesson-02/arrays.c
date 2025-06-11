#include <stdio.h>

int main(){
    int grades [3];
    int average;
    grades[0] = 75;
    grades[1] = 85;
    grades[2] = 95;

    average = (grades[0] + grades[1] + grades[2]) / 3;

    printf("Your average score is %d\n",average);
    return 0;
}
