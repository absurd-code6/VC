#include <stdio.h>
#include <string.h>

void sort_strings(char *str[], int n) {
    int i, j;
    char *temp;

    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (strcmp(str[j], str[j + 1]) > 0) {
                temp = str[j];
                str[j] = str[j + 1];
                str[j + 1] = temp;
            }
        }
    }
}

int main() {
    char *str[10];  // Array of pointers to strings
    int i, n;

    printf("Enter the number of strings: ");
    scanf("%d", &n);

    printf("Enter %d strings:\n", n);
    for (i = 0; i < n; i++) {
        str[i] = (char *)malloc(50 * sizeof(char));  /*Allocate memory for each 
        string*/
        fgets(str[i], 50, stdin);

        // Manually remove trailing newline
        int len = strlen(str[i]);
        if (str[i][len - 1] == '\n') {
            str[i][len - 1] = '\0';
        }
    }

    sort_strings(str, n);

    printf("\nSorted strings:\n");
    for (i = 0; i < n; i++) {
        printf("%s\n", str[i]);
        free(str[i]);  // Free allocated memory
    }

    return 0;
}