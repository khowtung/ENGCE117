#include <stdio.h>
#include <math.h>

double f(double x, int mode);
double RootOfFunction(double xl, double xr, double epsilon, int mode);

int main() {
    double root, first_value;
    int mode = 0;
    scanf("%d %lf", &mode, &first_value);
    printf("Ans =\n");
    root = RootOfFunction(-1, first_value, 0.1, mode);
    printf("root = %.1f", root);
    return 0;
}

double f(double x, int mode) {
    if (mode == 0) return 2 * x - 5;
    else return 8 * x + 16;
}

double RootOfFunction(double xl, double xr, double epsilon, int mode) {
    double xm;
    while (fabs(xr - xl) > epsilon) {
        xm = (xl + xr) / 2;
        printf("%.1f %.1f %.1f\n", xl, xm, xr);
        if (f(xm, mode) == 0.0) break;
        else if (f(xm, mode) * f(xl, mode) < 0)
            xr = xm;
        else
            xl = xm;
    }
    // return round(xm * 10) / 10.0;
}

