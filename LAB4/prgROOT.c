#include <stdio.h>
#include <math.h>
float root(float a,float b,float c)
{
    float d;
    float r1 , r2 ,i;

    d = (b * b) - (4 * a * c);


    if(d > 0)
    {
        r1 = (-b + sqrt(d)) / (2*a);
        r2 = (-b - sqrt(d)) / (2*a);

        printf("Two distinct and real roots exists: %.2f and %.2f", r1, r2);
    }
    else if(d == 0)
    {
        r1 = r2 = -b / (2 * a);

        printf("Two equal and real roots exists: %.2f and %.2f", r1, r2);
    }
    else if(d < 0)
    {
        r1 = r2 = -b / (2 * a);
        i = sqrt(-d) / (2 * a);

        printf("Two distinct complex roots exists: %.2f + i%.2f and %.2f - i%.2f",
                r1, i, r2, i);
    }
}

int main()
{
    float e, f, g;
    printf("Enter values of a, b, c :\n ");
    scanf("%f %f %f", &e, &f, &g);
    root(e,f,g);
    return 0;
}
