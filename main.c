#include <stdio.h>

int main() {
    int n, i;
    float mark, sum = 0, average;

    printf("Enter number of subjects: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++) {
        printf("Enter mark of subject %d: ", i);
        scanf("%f", &mark);
        sum += mark;
    }

    average = sum / n;

    printf("Average = %.2f\n", average);

    return 0;
}
