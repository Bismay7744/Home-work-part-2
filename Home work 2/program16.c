#include <stdio.h>

void checkNum(int N) {

    if (N == 0) {
        printf("Zero\n");
    }
    else if (N < 0) {
        printf("Negative\n");
    }
    else {
        printf("Positive\n");
    }
}

int main() {
    int N = 11;
    checkNum(N);
    return 0;
}
