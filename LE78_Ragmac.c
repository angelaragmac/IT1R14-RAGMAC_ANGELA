#include <stdio.h>
#include <string.h>

int main() {
    int n, i;
    int numbers[100];
    int largest;
    char text[100];
    int vowels = 0;


    printf("Enter number of elements in the array: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &numbers[i]);
    }

    largest = numbers[0];
    for (i = 1; i < n; i++) {
        if (numbers[i] > largest) {
            largest = numbers[i];
        }
    }
    printf("The largest element in the array is: %d\n\n", largest);

    
    getchar();
    printf("Enter a string: ");
    fgets(text, 100, stdin);
    strlwr(text);

    for (i = 0; i < strlen(text); i++) {
        if (text[i] == 'a' || text[i] == 'e' || text[i] == 'i' ||
            text[i] == 'o' || text[i] == 'u') {
            vowels++;
        }
    }
    printf("The number of vowels in the string is: %d\n", vowels);

    return 0;
}