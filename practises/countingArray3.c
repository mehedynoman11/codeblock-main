// #include <stdio.h>

// int main()
// {
//     // Write Your Code Here
//     int N;
//     scanf("%d", &N);

//     int A[N];
//     for (int i = 0; i < N; i++)
//     {
//         scanf("%d", &A[i]);
//     }
//     int count1 = 0, count2 = 1;
//     for (int i = 0; i < N; i++)
//     {
//         // printf("%d\n", A[i]);

//         if (A[i] == 0)
//         {
//             count1++;
//         }
//         if (A[i] == 1)
//         {
//             count2++;
//         }

//     }
//     printf("zero count is : %d\n", count1[i]);
//     printf("zero count is : %d\n", count2);

//     return 0;
// }

#include <stdio.h>

int main()
{
    // Write Your Code Here
    int N;
    scanf("%d", &N);

    int A[N];
    for (int i = 0; i < N; i++)
    {
        scanf("%d", &A[i]);
    }

    int count[10] = {0};
    for (int i = 0; i < N; i++)
    {
        int value = A[i];
        count[value]++;
    }

    for (int i = 0; i < 10; i++)
    {
        /* code */
        printf("%d count is : %d\n", i, count[i]);
    }

    return 0;
}