#include <stdio.h>

int main() {
    // Write Your Code Here
    int N,S,K;
    scanf("%d",&N);
    S=0;
    K= 2 * N - 1;
    for(int i=N;i>=1;i--) {
        for(int j=1;j<=S;j++) {
            printf(" ");
        }
        for(int j=1;j<=K;j++) {
            printf("*");
        }
        S++;
        K-=2;
        printf("\n");
    }


    return 0;
}