#include <stdio.h>

int main() {
    //set max score the game to 500
    int maxScore = 500;
    //the actual score of the score
    int userScore = 423;

    /* Calculate the percantage of the user's score in relation to the maximum available score.
    Convert userScore to float to make sure that the division is accurate */

    float percentage = (float) userScore / maxScore * 100;

    //print result
    printf("User percentage: %.2f", percentage);
    
    return 0;
}