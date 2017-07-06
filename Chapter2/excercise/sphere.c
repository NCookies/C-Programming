/*
 * Name: sphere.c
 * Date: 2017-06-19
 * Purpose: Computes the volume of a sphere with a 10-meter radius
 * Author: NCookie
 */

#include <stdio.h>

//#define RADIUS 10
#define PI 3.14159265358979323846

int main(void) {
    //int radius_cube = RADIUS * RADIUS * RADIUS;
    int radius, radius_cube;
    float fraction = 4.0f / 3.0f;
    float volume;

    printf("Enter radius of sphere: ");
    scanf("%d", &radius);

    radius_cube = radius * radius * radius;
    volume = fraction * PI * radius_cube;

    printf("Volume of sphere: %.5f\n", volume);

    return 0;
}
