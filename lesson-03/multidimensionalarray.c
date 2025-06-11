#include <stdio.h>

int main(){
    int scores[2][4];

    scores[0][0] = 5;
    scores[0][1] = 20;
    scores[0][2] = 15;
    scores[0][3] = 17;

    scores[1][0] = 15;
    scores[1][1] = 10;
    scores[1][2] = 12;
    scores[1][3] = 18;

    int i;
    int j;
    int average;

    for (i = 0;i<2;i++){
        average = 0;
        for (j = 0;j<4;j++){
            average += scores[i][j];
        }
        average = average / j;
    printf("your average score in scores %d is: %d\n",i,average);
    }


    return 0;
}
