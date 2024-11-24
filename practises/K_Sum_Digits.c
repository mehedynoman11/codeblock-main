#include <stdio.h>
// #include <string.h>

int main() {
    // Write Your Code Here
    int N;
    scanf("%d", &N);

    char A[N + 1];
    scanf("%s", A);

    int sum = 0;
    for(int i=0; i<N; i++)
    {
        sum += A[i] - '0';
    }
    printf("%d\n", sum);
    
    
    return 0;
}