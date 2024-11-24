#include <stdio.h>
#include <string.h>

int main() {
    // Write Your Code Here
    char A[11], B[11];
    scanf("%s", A);
    scanf("%s", B);

    int length1 = strlen(A);
    int length2 = strlen(B);

    printf("%d %d\n", length1,length2);

    char concatenate[22];
    strcpy(concatenate, A);
    strcat(concatenate, B);

    printf("%s\n", concatenate);

    int tmp = A[0];
    A[0] = B[0];
    B[0] =tmp;
    printf("%s %s\n",A,B);
    return 0;
}