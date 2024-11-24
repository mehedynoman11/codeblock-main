#include <stdio.h>

int main() {
    // Write Your Code Here
    int M1, M2, D;
    scanf("%d %d %d",&M1,&M2,&D);

    int days = M1 * D / M2;
    

    printf("%d", days);
    
    
    return 0;
}