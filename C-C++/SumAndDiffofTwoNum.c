#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
	int a, b, sum, subs;
    float x, y, su, sub;
    scanf("%d %d", &a, &b);
    scanf("%f %f", &x, &y);
    sum = a + b;
    subs = a - b;
    su  = x + y;
    sub = x - y;
    printf("%d %d\n", sum, subs);
    printf("%.1f %.1f", su, sub);
    return 0;
}