#include <stdio.h>

int main()
{
    int array[10] = {1,2,3,4,5,6,7,8,9,10};
    int i;
    int factorial = 1;

    for (i = 9;i>0;i--){
        factorial = array[i] * factorial;
    }
    printf("!10 is %d\n",factorial);
}
