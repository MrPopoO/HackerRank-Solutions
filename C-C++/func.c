#include <stdio.h>
/*
Add `int max_of_four(int a, int b, int c, int d)` here.
*/
int max_of_four(int a, int b, int c, int d){
    int max;
    max = (a>b && a>c && a>d) ? a : (b>a && b>c && b>d) ? b : (c>a && c>b && c>d) ? c:d;
    return max;
}
int main() {
    int a, b, c, d;
    scanf("%d\n %d\n %d\n %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);
    
    return 0;
}
