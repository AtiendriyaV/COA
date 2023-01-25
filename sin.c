#include <omp.h>
#include <math.h>
#include <stdio.h>

int main(int argc, char* argv[]) {
    double x, sinx = 0.0;
    int n, i;

 int factorial(int n) {
    int result = 1;
    for (int i = 1; i <= n; i++) {
        result *= i;
    }
    return result;
}

    printf("Enter x and n: ");
    scanf("%lf %d", &x, &n);

    #pragma omp parallel for schedule(guided) lastprivate(i) reduction(+:sinx)
    for (i = 0; i < n; i++) {
        sinx += pow(-1, i) * pow(x, 2*i+1) / factorial(2*i+1);
    }

    printf("sin(%lf) = %lf\n", x, sinx);

    return 0;
}

