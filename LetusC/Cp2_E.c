#include <stdio.h>
#include <math.h>

int main() {
    float latx, laty, lonx, lony;
    printf("Enter the latitude: ");
    scanf("(%f, %f)", &latx, &laty);
    printf("Enter the longitude: ");
    scanf("\n(%f, %f)", &lonx, &lony);
    
    float D = 3963*acos(sin(latx)*sin(laty)+(cos(latx)*cos(laty)*cos(lony-lonx)));
    printf("Distance in nautical miles: %f", D);
}