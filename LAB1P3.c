#include <stdio.h>
#include <string.h>

int main() {
    char data[100], stuffed[200];
    char flag, esc;
    int i, j = 0;

    printf("Enter the data: ");
    fgets(data, sizeof(data), stdin);
    data[strcspn(data, "\n")] = '\0';

    printf("Enter the flag character: ");
    scanf("%c", &flag);

    getchar();

    printf("Enter the escape character: ");
    scanf("%c", &esc);

    stuffed[j++] = flag;

    for (i = 0; data[i] != '\0'; i++) {
        if (data[i] == flag || data[i] == esc) {
            stuffed[j++] = esc;
        }
        stuffed[j++] = data[i];
    }

    stuffed[j++] = flag;
    stuffed[j] = '\0';

    printf("After character stuffing: %s\n", stuffed);

    return 0;
}
