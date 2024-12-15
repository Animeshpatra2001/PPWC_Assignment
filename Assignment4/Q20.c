#include <stdio.h>

void sum_n_avg(double num1, double num2, double num3, double *sum, double *avg);
void sum_n_avg(double num1, double num2, double num3, double *sum, double *avg) {
    *sum = num1 + num2 + num3;
    *avg = (*sum) / 3;
}

int main() {
    double one, two, three, sum_of_3, avg_of_3;
    printf("Enter three numbers> ");
    scanf("%lf%lf%lf", &one, &two, &three);
    sum_n_avg(one, two, three, &sum_of_3, &avg_of_3);
    return 0;
}