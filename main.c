#include <stdio.h>

int findLeastCommonMultiple(int a, int b) {
    int originalA = a, originalB = b;
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    int greatestCommonDivisor = a;
    return (originalA / greatestCommonDivisor) * originalB;
}

int main() {
    int numCount;
    scanf("%d", &numCount);

    if (numCount < 2 || numCount > 20) {
        printf("Must be (2 ≤ p ≤ 20) \n");
        return 1;
    }

    int numbers[numCount];
    for (int i = 0; i < numCount; i++) {
        scanf("%d", &numbers[i]);
    }

    int leastCommonMultiple = numbers[0];
    for (int i = 1; i < numCount; i++) {
        leastCommonMultiple = findLeastCommonMultiple(leastCommonMultiple, numbers[i]);
    }

    printf("%d\n", leastCommonMultiple);

    return 0;
}
