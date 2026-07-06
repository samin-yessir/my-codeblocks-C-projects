#include <stdio.h>

int main(){
    double R, r, areaIN, areaOUT, shaded;
    const double PI = 3.1416;

    R = 4;
    r = 0.5 * R;
    areaIN = PI * r * r;
    areaOUT = PI * R * R;
    shaded = areaOUT - areaIN;

    printf("1. Inner circle radius = r = %.1lf\n", r);
    printf("2. Area of outer circle = %lf\n", areaOUT);
    printf("3. Area of inner circle = %lf\n", areaIN);
    printf("4. Area between two circles = %lf\n", shaded);
return 0;
    }
