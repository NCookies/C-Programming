/*
 * FileName: scanf.c
 * Date: 2107-07-04
 * Purpose: Test excercise problem
 * Author: NCookie
 */

#include <stdio.h>

int main(void)
{
    int i1, j1;
    float x1;

//    scanf("%d%f%d", &i1, &x1, &j1);
//    printf("%d | %f | %d\n", i1, x1, j1);


    float x2, y2;
    int i2;

    scanf("%f%d%f", &x2, &i2, &y2);
    printf("%f | %d | %f\n", x2, i2, y2);

    return 0;
}
