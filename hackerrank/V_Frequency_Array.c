#include <stdio.h>
#include <string.h>

int main() {
    // Write Your Code Here
    int N,M;
    scanf("%d %d",&N,&M);
    
    int A[N];

    int count[M + 1];
    memset(count, 0, sizeof(count));
    for (int i = 0; i < N; i++)
    {
        scanf("%d", &A[i]);
        count[A[i]]++;
    }
    for (int i = 1; i <= M; i++)
    {
        printf("%d\n", count[i]);
    }
    return 0;
}