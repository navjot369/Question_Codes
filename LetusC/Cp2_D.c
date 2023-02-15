#include <stdio.h>
#include <math.h>

int main() {
    float x, y;
    printf("Enter Co-ordinates: ");
    scanf("(%f, %f)", &x, &y);

    float r = pow((x*x + y*y), 0.5);
    float tan_i = atan(y/x);
    printf("In polar form: (%f, %f)", r, tan_i);
}