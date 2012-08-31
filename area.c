#include <stdio.h>
#include <math.h>

double distance(double x1, double y1, double x2, double y2){
    double distance = sqrt((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2));
    printf("两点之间的距离为: %f\n", distance);
    return distance;
}

double area(double distance){
    double pi = 3.1416;
    double area = pi * distance * distance;
    printf("由这两点的之间的距离为半径的圆的面积为: %f\n", area);
    return area;
}

int main(void){
    float x1, y1, x2, y2;
    printf("请输入四个整数作为两点间的距离: ");
    scanf("%f %f %f %f", &x1, &y1, &x2, &y2);
    double distances = distance(x1, y1, x2, y2);
    area(distances);
    return 0;
}
