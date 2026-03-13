#include <stdio.h>
#include <math.h>

double calculateSine(double x) {
    double term = x, sum = x;
    int i = 1;
    do {
        term = term * (-1 * x * x) / ((2 * i) * (2 * i + 1));
        sum += term;
        i++;
    } while (fabs(term/sum) > 0.000001);
    return sum;
}

double calculateCosine(double x) {
    double term = 1.0, sum = 1.0;
    int i = 1;
    do {
        term = term * (-1 * x * x) / ((2 * i - 1) * (2 * i));
        sum += term;
        i++;
    } while (fabs(term/sum) > 0.000001);
    return sum;
}

double calculateSumSeries() {
    double term, sum = 0;
    int n = 1;
    do {
        term = pow((1.0 / n), n);
        sum += term;
        n++;
    } while (term > 0.000001);
    return sum;
}

int main() {
    float d,x,sinx=0,term,cosx=0;
    int i=1;
    printf("enter value of x:");
    scanf("%f",&d);
    x=d*(3.14/180);
    printf("%f degree = %f rad\n",d,x);


    printf("\n--- Results ---\n");
    printf("Sine of x:    %.6f\n", calculateSine(x));
    printf("Cosine of x:  %.6f\n", calculateCosine(x));
    printf("Sum Series:   %.8f\n", calculateSumSeries());

    return 0;
}