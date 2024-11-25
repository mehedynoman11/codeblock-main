#include <stdio.h>
#include <string.h>

int main() {
    // Write Your Code Here
    int N;
    // K=1
    scanf("%d", &N);
    
    for(int i=N; i>=1; i--) {
        for(int j=1; j<=i; j++) {
            printf("*");
        }
        // K++;
        printf("\n");
    }

    return 0;
}