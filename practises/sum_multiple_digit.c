#include <stdio.h>

int main() {
    // Write Your Code Here
    int N, M;
    scanf("%d %d",&N,&M);

    int A[N];
    for (int i = 0; i < N; i++)
    {
        scanf("%d",&A[i]);
    }
    
    int sum = 0;
    for(int i = 0; i < N; i++)
    {
       if (A[i] % M == 0)
       {
        sum+= A[i];
       }
    }
    printf("%d\n",sum);

    return 0;
}