#include <stdio.h>
#include <math.h>
double Sine(double x);
double Cosine(double x);
double SumSeries();
int main() 
{
    float d, x;
    printf("Enter value of x in degrees: ");
    scanf("%f", &d);
    x = d * (3.14 / 180);
    printf("%f degree = %f rad\n", d, x);
    Sine(x);
    Cosine(x);
    SumSeries();
    return 0;
}
double Sine(double x) 
{
    double term = x, sum = x;
    int i = 1;
    do {
        term = term * (-1 * x * x) / ((2 * i) * (2 * i + 1));
        sum += term;
        i++;
    } while (fabs(term/sum) > 0.000001);
    printf("Sine of x:    %f\n", sum); 
    return sum;
}

double Cosine(double x) {
    double term = 1.0, sum = 1.0;
    int i = 1;
    do {
        term = term * (-1 * x * x) / ((2 * i - 1) * (2 * i));
        sum += term;
        i++;
    } while (fabs(term/sum) > 0.000001);
    
    
    
    printf("Cosine of x:  %f\n", sum);
    return sum;
}

double SumSeries() {
    double term, sum = 0;
    int n = 1;
    do {
        term = pow((1.0 / n), n);
        sum += term;
        n++;
    } while (term > 0.000001);
    
    printf("Sum Series:   %f\n", sum);
    return sum;
}
