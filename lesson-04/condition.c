#include <stdio.h>
 void guessNumber(int guess){
    if (guess < 500){
        printf("Your guess is less than 500\n");
    }else if (guess == 500){
        printf("Your guess is equal to 500\n");
    }else{
        printf("Your guess is greaer than 500\n");
    }
}

int main (){
    guessNumber(500);
    guessNumber(600);
    guessNumber(400);
    return 0;
}
