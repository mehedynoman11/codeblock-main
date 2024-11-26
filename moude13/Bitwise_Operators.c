#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//Complete the following function.


void calculate_the_maximum(int n, int k) {
  //Write your code here.
  int and=0, or=0, xor=0;
  for(int a = 1; a < n; a++){
    for(int b = a + 1; b <= n; b++){
        int and_result = a & b;
        int or_result = a | b;
        int xor_result = a ^ b;

        if(and_result < k && and < and_result) {
            and = and_result;
        }
        if(or_result < k && or < or_result) {
            or = or_result;
        }
        if (xor_result < k && xor < xor_result) {
            xor = xor_result;
        }
    }
  }
  printf("%d\n",and);
  printf("%d\n",or);
  printf("%d\n",xor);
  
}

int main() {
    int n, k;
  
    scanf("%d %d", &n, &k);
    calculate_the_maximum(n, k);
 
    return 0;
}