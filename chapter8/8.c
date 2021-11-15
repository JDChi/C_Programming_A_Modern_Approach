#include <stdio.h>

int main(int argc, char const *argv[])
{
    float a[5][5];
    float row_totals[5] = {0}, column_totals[5] = {0};
    int i, j;
    float highest[5] = {0}, lowest[5] = {0};
    for (i = 0; i < 5; i ++) {
        printf("Enter Student %d scores: ", i + 1);
        for (j = 0; j < 5; j ++) {
            scanf("%f", &a[i][j]);
            row_totals[i] = row_totals[i] + a[i][j];
            column_totals[j] = column_totals[j] + a[i][j];
            if (i == 0) {
                highest[j] = a[i][j];
                lowest[j] = a[i][j];
            } else {
                if (highest[j] < a[i][j]) {
                    highest[j] = a[i][j];
                }
                if (lowest[j] > a[i][j]) {
                    lowest[j] = a[i][j];
                }

            }
        }

    }


    for (int i = 0; i < 5; i++) {
        printf("Student %d total score is %.1f , average score is %.1f\n", i + 1, row_totals[i], row_totals[i] / 5);
    }
    for (int i = 0; i < 5; i++) {
        printf("the average score of lesson %d is %.1f\n", i + 1, column_totals[i]/5);
    }
    for (int i = 0; i < 5; i++) {
        printf("the highest score of lesson %d is %.1f\n", i + 1, highest[i]);
    }
    for (int i = 0; i < 5; i++) {
        printf("the lowest score of lesson %d is %.1f\n", i + 1, lowest[i]);
    }
    return 0;
}