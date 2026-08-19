#include <stdio.h>

int main() {
    int data[100], result[100];
    int n, i, j = 0, count = 0;

    printf("Enter number of bits: ");
    scanf("%d", &n);

    printf("Enter the bits: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &data[i]);
    }

    for (i = 0; i < n; i++) {
        result[j++] = data[i];

        if (data[i] == 1) {
            count++;

            if (count == 5) {
                i++;
                count = 0;
            }
        } else {
            count = 0;
        }
    }

    printf("After bit destuffing: ");
    for (i = 0; i < j; i++) {
        printf("%d", result[i]);
    }

    printf("\n");

    return 0;
}
