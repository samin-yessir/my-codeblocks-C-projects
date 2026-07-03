//FUNCTIONS
#include <stdio.h>
#include <math.h>
const double PI = 3.1415926535;

// 1. Square
double squared(double side){
    return side*side;
}
// 2. Cube
double cubed(double side){
    return side*side*side;
}
// 3. Circle
double circle(double radius){
    printf("Area = %.3lf, Circumference = %.3lf\n", PI * radius*radius, 2*PI*radius);
    return 0;
}
// 4. Triangle
void triangle(double a, double b, double c, double angle){
    double radians = angle * (PI/180);
    printf("Area = %.3lf, Perimeter = %.3lf\n", 0.5*a*b*sin(radians), a+b+c);
}
// 5. Coordinate problems (Distance)
void distance(double x1, double x2, double y1, double y2){
    printf("Distance = %.3lf\n", sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2)));
}
// 6. Sphere
void sphere(double radius){
    printf("Volume of sphere = %.3lf\n", (4.0/3.0)*PI*radius*radius*radius);
}



int main(){
    double side, rC, a, b, c, angle, x1, x2, y1, y2, rS;

    printf("Enter the side to be squared and cubed = ");
    scanf("%lf", &side);
    printf("\n");
    printf("Enter the radius of circle = ");
    scanf("%lf", &rC);
    printf("\n");
    printf("Enter the three sides of triangle = ");
    scanf("%lf %lf %lf", &a, &b, &c);
    printf("Enter the angle of triangle opposite to the longest = ");
    scanf("%lf", &angle);
    printf("\n");
    printf("Enter x1, x2, y1 and y2 = ");
    scanf("%lf %lf %lf %lf", &x1, &x2, &y1, &y2);
    printf("\n");
    printf("Enter the radius of sphere = ");
    scanf("%lf", &rS);
    printf("\n");
    printf("\n");

    printf("Squared value = %.0f\n", squared(side));
    printf("Cube value = %.0f\n", cubed(side));
    circle(rC);
    triangle(a, b, c, angle);
    distance(x1, x2, y1, y2);
    sphere(rS);


return 0;
}
