//*********************************************************************************** */
//Logan Farmer
// 9/8/24
//COP 3223c, Juan Para
//This assignment does not rely on the main functions but relys on the user to fracture multiple funtions throughout the assignment.
// This assignment takes in multiple 
//*********************************************************************************** */

#include <stdio.h>
#include <math.h>

// this stucture is used just to define the x and y coordinates
typedef struct {
    double x, y;
} Point;

// this function takes in the x and y coordinates from the user
Point getPoint(int pointNumber) {
    Point point;
    printf("Enter coordinates for Point #%d (x y): ", pointNumber);
    scanf("%lf %lf", &point.x, &point.y);
    return point;
}

// this function takes in the two points and calculates the distance
double calculate_Distance(Point point1, Point point2) {
    double dx = point2.x - point1.x;
    double dy = point2.y - point1.y;
    return sqrt(dx * dx + dy * dy); // the only way I was able to figure out this function was by splitting the distance funcion in two
}

// function takes in the calculated points and outputs the distance and outputs the value
double calculateDistance() {
    Point point1 = getPoint(1);
    Point point2 = getPoint(2);
    printf("Point #1 entered: x1 = %f; y1 = %f\n", point1.x, point1.y);
    printf("Point #2 entered: x2 = %f; y2 = %f\n", point2.x, point2.y);
    double distance = calculate_Distance(point1, point2);
    printf("The distance between the two points is %f\n", distance);
    return 5.0; // this was the hardest function since i had to figure out how to bring in the point function
}

// function takes in points and calculates the perimeter of the city and outputs the value
double calculatePerimeter() {
    Point point1 = getPoint(1);
    Point point2 = getPoint(2);
    printf("Point #1 entered: x1 = %f; y1 = %f\n", point1.x, point1.y);
    printf("Point #2 entered: x2 = %f; y2 = %f\n", point2.x, point2.y);
    double distance = calculate_Distance(point1, point2);
    double perimeter = 2 * (distance + distance);
    printf("The perimeter of the city encompassed by your request is %f\n", perimeter);
    return 4.0; // the main difficulty with this function was actually getting the equation for the perimiter
}

// function takes in points to calculate the area of the city and outputs the value
double calculateArea() {
    Point point1 = getPoint(1);
    Point point2 = getPoint(2);
    printf("Point #1 entered: x1 = %f; y1 = %f\n", point1.x, point1.y);
    printf("Point #2 entered: x2 = %f; y2 = %f\n", point2.x, point2.y);
    double distance = calculate_Distance(point1, point2);
    double area = distance * distance;
    printf("The area of the city encompassed by your request is %f\n", area);
    return 4.0; // again the main difficulty i had with this function was the equation
}

// function caluculates width
double calculateWidth() {
    Point point1 = getPoint(1);
    Point point2 = getPoint(2);
    printf("Point #1 entered: x1 = %f; y1 = %f\n", point1.x, point1.y);
    printf("Point #2 entered: x2 = %f; y2 = %f\n", point2.x, point2.y);
    double width = fabs(point2.x - point1.x);
    printf("The width of the city encompassed by your request is %f\n", width);
    return 1.0; // the equation in this function was much more simple
}

// function takes in the points, calculates height, and outputs on the screen
double calculateHeight() {
    Point point1 = getPoint(1);
    Point point2 = getPoint(2);
    printf("Point #1 entered: x1 = %f; y1 = %f\n", point1.x, point1.y);
    printf("Point #2 entered: x2 = %f; y2 = %f\n", point2.x, point2.y);
    double height = fabs(point2.y - point1.y);
    printf("The height of the city encompassed by your request is %f\n", height);
    return 1.0; // This was essentiall copying and pasting from the last function
}

// the main function just calls all of the other functions
int main(int argc, char **argv) {
    calculateDistance();
    calculatePerimeter();
    calculateArea();
    calculateWidth();
    calculateHeight();
    return 0;
}