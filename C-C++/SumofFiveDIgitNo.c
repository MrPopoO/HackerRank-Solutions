#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
	
    int n;
    scanf("%d", &n);
    //Complete the code to calculate the sum of the five digits on n.
    int sum=0, temp;
    if(n>=10000&&n<=99999){
        while(n>0){
            temp = n%10;
            sum = sum + temp;
            n = n/10;
        }
        printf("%d",sum);
    }else{
        printf("Invalid Input"); 
    }
        
    return 0;
}