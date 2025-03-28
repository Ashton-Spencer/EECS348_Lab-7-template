#include "football.h"
#include <stdio.h>

int main() {
    int score;
    while (1) {
        printf("Enter the NFL score (0 or 1 to STOP): ");
        scanf("%d", &score); //Gets score input
        if (score <= 1) break; //If less than 1 program stops
        int combinations = count_combinations(score); //Counts the combinations
        printf("Total possible combinations: %d\n", combinations);  //Prints out the number of combinations
        print_combinations(score); //Prints the combinations
    }
    return 0;
}