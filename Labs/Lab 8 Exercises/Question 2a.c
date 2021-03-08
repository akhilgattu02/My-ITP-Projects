#include <stdio.h>
#include <math.h>
#include <stdlib.h>
struct xypoint_t
{
    double x;
    double y;
};
typedef struct xypoint_t xypoint_t;
void xypoint_to_rtpoint_converter(struct xypoint_t xypoint);
int main()
{
    xypoint_t xypoint;
    double x1;
    printf("Enter x coordinate: \n");
    scanf("%lf", &x1);
    xypoint.x = x1;
    double y1, theta1;
    printf("Enter y coordinate: \n");
    scanf("%lf", &y1);
    xypoint.y = y1;
    xypoint_to_rtpoint_converter(xypoint);
    return EXIT_SUCCESS;
}
void xypoint_to_rtpoint_converter(struct xypoint_t xypoint)
{
    struct rtpoint_t
    {
        double radius;
        double angle;
    };
    struct rtpoint_t rtpoint;
    rtpoint.radius = sqrt(((xypoint.x) * (xypoint.x)) + ((xypoint.y) * (xypoint.y)));
    rtpoint.angle = atan((xypoint.y) / (xypoint.x));
    printf("Your coordinates in (r,theta in radians) are: (%lf,%lf)", rtpoint.radius, rtpoint.angle);
}