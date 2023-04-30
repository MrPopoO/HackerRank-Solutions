#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//Complete the following function.



void calculate_the_maximum(int n, int k) {
    //Write your code here.
    int max_And = 0, max_Or = 0, max_Xor = 0;
    int val_And = 0, val_Or = 0, val_Xor = 0;
    for (int i=1; i<=n; i++) {
        for (int j=i+1; j<=n; j++) {
            val_And = i & j;
            val_Or = i | j;
            val_Xor = i ^ j;
            if (val_And > max_And && val_And < k){
              max_And = val_And;
            }
            if (val_Or > max_Or && val_Or < k){
              max_Or = val_Or;
            }
            if (val_Xor > max_Xor && val_Xor < k){
              max_Xor = val_Xor;
            }
        }
    }
    printf("%d\n%d\n%d\n", max_And, max_Or, max_Xor);
}

int main() {
    int n, k;
  
    scanf("%d %d", &n, &k);
    calculate_the_maximum(n, k);
 
    return 0;
}
