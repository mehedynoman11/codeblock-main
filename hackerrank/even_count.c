#include <stdio.h>

int main() {
    // Write Your Code Here
    int N;
    scanf("%d", &N);

    int A[N];
    for(int i=0;i<N;i++){
        scanf("%d",&A[i]);
    }
    int even_count = 0;
    for(int i=0;i<N;i++){
        if(A[i] % 2 == 0) {
            even_count++; 
        } 
    }
    printf("%d\n",even_count);

    return 0;
}