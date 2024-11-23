#include <stdio.h>
#include <math.h>
#include <stdbool.h>

typedef struct {
    double x;
    double y;
} Point;

double calculateDistance(Point p1, Point p2) {
    double a = sqrt(pow(p2.x - p1.x, 2) + pow(p2.y - p1.y, 2));
    return a;
}

int isPointInsideRectangle(Point p, Point topLeft, Point bottomRight) {
    if(p.x >= topLeft.x && p.x <= bottomRight.x && p.y <= topLeft.y && p.y >= bottomRight.y){
        return 0;
    };
    return 1;
}

int main() {
    Point p1 = {2.0, 3.0};
    Point p2 = {5.0, 7.0};

    double distance = calculateDistance(p1, p2);
    printf("Distance between points: %.2f\n", distance);

    Point topLeft = {0.0, 10.0};
    Point bottomRight = {10.0, 0.0};

    Point p3 = {3.0, 5.0};
    int a = isPointInsideRectangle(p3, topLeft, bottomRight);
    if (a==0) {
        printf("Point (%.2f, %.2f) lies within the rectangle.\n", p3.x, p3.y);
    } else {
        printf("Point (%.2f, %.2f) does not lie within the rectangle.\n", p3.x, p3.y);
    }

    return 0;
}
