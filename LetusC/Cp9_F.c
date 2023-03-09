#include <stdio.h>
#include <math.h>

float dis(float, float, float, float);
float area(float , float, float, float, float, float);
int is_in(float, float, float, float, float, float, float, float);

int main(){
    float x1, x2, x3, y1, y2, y3, x, y;
    printf("Enter first point: ");
    scanf("(%f, &f)", &x1, &y1);
    fflush(stdin);
    printf("Enter second point: ");
    scanf("(%f, %f)", &x2, &y2);
    fflush(stdin);
    printf("Enter third point: ");
    scanf("(%f, %f)", &x3, &y3);
    fflush(stdin);
    printf("Enter test point: ");
    scanf("(%f, %f)", &x, &y);
    if(is_in(x, y, x1, y1, x2, y2, x3, y3)){
        printf("The point is inside the triangle.\n");
    } else {
        printf("The point is not inside the triangle.\n");
    }
}

float dis(float x1, float y1, float x2, float y2){
    float dis_s = pow(x2-x1, 2) + pow(y2-y1, 2);
    float dis = pow(dis_s, 0.5);
    return dis;
}

float area(float x1, float y1, float x2, float y2, float x3, float y3){
    float a = dis(x1, y1, x2, y2);
    float b = dis(x2, y2, x3, y3);
    float c = dis(x3, y3, x1, y1);
    float s  = (a+b+c)/2.0;
    float area_square = s*(s-a)*(s-b)*(s-c);
    float area = pow(area_square, 0.5);
    return area;
}

int is_in(float x, float y, float x1, float y1, float x2, float y2, float x3, float y3){
    float area1 = area(x, y, x1, y1, x2, y2);
    float area2 = area(x, y, x2, y2, x3, y3);
    float area3 = area(x, y, x3, y3, x1, y1);
    float total_area = area(x1, y1, x2, y2, x3, y3);
    if((total_area-(area1+area2+area3))<1){
        return 1;
    }
    else{
        return 0;
    }
}