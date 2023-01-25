#include <cmath>
#include <iostream>
#include <omp.h>

int main() {
    double x;
    int n;

    std::cout &#8203;`oaicite:{"index":0,"invalid_reason":"Malformed citation << \"Enter value of x: \";\n    std::cin >>"}`&#8203; x;

    std::cout &#8203;`oaicite:{"index":1,"invalid_reason":"Malformed citation << \"Enter value of n: \";\n    std::cin >>"}`&#8203; n;

    double sinx = 0.0;

    #pragma omp parallel for schedule(guided) lastprivate(sinx)
    for (int i = 0; i <= n; i++) {
        double term = pow(-1, i) * pow(x, 2 * i + 1) / factorial(2 * i + 1);
        sinx += term;
    }

    std::cout << "sin(" << x << ") = " << sinx << std::endl;

    return 0;
}
