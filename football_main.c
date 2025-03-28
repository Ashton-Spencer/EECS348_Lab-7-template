#include "football.h"
#include <stdio.h>

int main() {
    int score;
    while (1) {
        printf("Enter the NFL score (0 or 1 to STOP): ");
        scanf("%d", &score);
        if (score <= 1) break;
        int combinations = count_combinations(score);
        printf("Total possible combinations: %d\n", combinations);
        print_combinations(score);
    }
    return 0;
}