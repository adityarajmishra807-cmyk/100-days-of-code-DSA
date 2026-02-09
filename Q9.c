#include <stdio.h>
#include <string.h>

int main() {
    char s[100];

    // Take input string
    scanf("%s", s);

    // Find length of string
    int len = strlen(s);

    // Print characters in reverse order
    for (int i = len - 1; i >= 0; i--) {
        printf("%c", s[i]);
    }

    return 0;
}
