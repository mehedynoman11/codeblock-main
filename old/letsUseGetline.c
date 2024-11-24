#include <stdio.h>

int main() {
    // Write Your Code Here
    char X[1000001];
    fgets(X,100001, stdin);

    for(int i = 0;X[i] !='\\';i++){
        printf("%c", X[i]);
    }

    return 0;
}