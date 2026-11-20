#include <stdio.h>
#include <math.h>
 ////Global variables///
float A, B, C;
float cubeWidth;
int width = 160, height = 45;
float zBuffer[width * height];
char buffer[width * height];
int backgoundASCIIcode = ' ';

float calculateZ(int i , int j , int k)
{
    return (k * cos(A) * cos(B) - j * sin(A) * cos(B) + i * sin(B));
}
float calculateY(int i, int j, int k)
{
    return (j * cos(A) * cos(C) + k * sin(A) * cos(C) - j * sin(A) *sin(B) * sin(C)
            + k * cos(A) * sin(B) * sin(C) - i * cos(B) * sin(C));
}

float calculateX(int i, int j, int k)
{
    return (j * sin(A) * sin(B) * cos(C) - k * cos(A) * sin(B) * cos(C)
            + j * cos(A) * sin(C) + k * sin(A) * sin(c) + i * cos(B) * cos(C));
}

int main(void)
{
    return (0);
}
