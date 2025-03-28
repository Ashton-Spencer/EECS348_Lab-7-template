#include "football.h"
#include <stdio.h>

int count_combinations(int points) {
    int count = 0;
    for (int td2 = 0; td2 * 8 <= points; td2++) {
        for (int td1 = 0; td1 * 7 + td2 * 8 <= points; td1++) {
            for (int td = 0; td * 6 + td1 * 7 + td2 * 8 <= points; td++) {
                for (int fg = 0; fg * 3 + td * 6 + td1 * 7 + td2 * 8 <= points; fg++) {
                    for (int safety = 0; safety * 2 + fg * 3 + td * 6 + td1 * 7 + td2 * 8 <= points; safety++) {
                        if (td2 * 8 + td1 * 7 + td * 6 + fg * 3 + safety * 2 == points) {
                            count++;
                        }
                    }
                }
            }
        }
    }
    return count;
}

void print_combinations(int points) {
    printf("Possible combinations of scoring plays if a team’s score is %d:\n", points);
    for (int td2 = 0; td2 * 8 <= points; td2++) {
        for (int td1 = 0; td1 * 7 + td2 * 8 <= points; td1++) {
            for (int td = 0; td * 6 + td1 * 7 + td2 * 8 <= points; td++) {
                for (int fg = 0; fg * 3 + td * 6 + td1 * 7 + td2 * 8 <= points; fg++) {
                    for (int safety = 0; safety * 2 + fg * 3 + td * 6 + td1 * 7 + td2 * 8 <= points; safety++) {
                        if (td2 * 8 + td1 * 7 + td * 6 + fg * 3 + safety * 2 == points) {
                            printf("%d TD + 2pt, %d TD + FG, %d TD, %d 3pt FG, %d Safety\n", td2, td1, td, fg, safety);
                        }
                    }
                }
            }
        }
    }
}
