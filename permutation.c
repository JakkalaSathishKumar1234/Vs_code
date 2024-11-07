#include <stdio.h>
#include <string.h>

// Function to swap two characters
void swap(char *x, char *y) {
    char temp = *x;
    *x = *y;
    *y = temp;
}

// Recursive function to generate permutations
void permute(char *str, int left, int right) {
    if (left == right) {
        printf("%s\n", str);  // Print the permutation
    } else {
        for (int i = left; i <= right; i++) {
            swap((str + left), (str + i));  // Swap characters
            permute(str, left + 1, right);  // Recursively call for the next level
            swap((str + left), (str + i));  // Backtrack to original string
        }
    }
}

int main() {
    char str[100];
    printf("Enter a string: ");
    scanf("%s", str);

    int n = strlen(str);
    printf("Permutations of the string are:\n");
    permute(str, 0, n - 1);

    return 0;
}
