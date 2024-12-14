#include <stdio.h>

void sum_n_avg(double num1, double num2, double num3, double *sum, double *avg);
void sum_n_avg(double num1, double num2, double num3, double *sum, double *avg) {
    *sum = num1 + num2 + num3;
    *avg = (*sum) / 3;
}

int main() {
    double sum, avg;
    double n1, n2, n3;
    n1 = 10.5, n2 = 20.8, n3 = 45;
    sum_n_avg(n1, n2, n3, &sum, &avg);
    printf("%.2lf\t%.2lf", sum, avg);

    return 0;
}

/*
Output
76.30	25.43
*/