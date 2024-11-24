#include <stdio.h>

int main() {
    // Write Your Code Here
    int N;
    scanf("%d", &N);
    int A[N];
    for (int i = 0; i < N; i++)
    {
        scanf("%d", A[i]);
    }
    int min = 0, max = 0;
    for (int i = 0; i < N; i++)
    {
        if (A[i] < A[min])
        {
            min = i;
        }
        if (A[i] > A[max])
        {
            max = i;
        }
    }
    int tmp = min;
    A[min] = A[max];
    A[max] = tmp;
    
for (int i = 0; i < N; i++)
{
    printf("%d", A[i]);

}


    return 0;
}