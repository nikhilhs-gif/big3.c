#include <stdio.h>
#include <string.h>

int main() {
    char str[100], reversed[100];
    int len, i, j;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Remove newline character if present
    len = strlen(str);
    if (str[len - 1] == '\n') {
        str[len - 1] = '\0';
        len--;
    }

    // Reverse the string
    for (i = len - 1, j = 0; i >= 0; i--, j++) {
        reversed[j] = str[i];
    }
    reversed[j] = '\0';  // Null-terminate the reversed string

    printf("Reversed string: %s\n", reversed);

    return 0;
}

