#include <stdio.h>

int main() {
    char str[100], longest[50];
    int i = 0, j = 0, max = 0, len = 0, start = 0;

    printf("Enter a sentence: ");
    gets(str);

    while(1) {
        if(str[i] != ' ' && str[i] != '\0') {
            len++;
        } else {
            if(len > max) {
                max = len;
                start = i - len;
            }
            len = 0;
        }

        if(str[i] == '\0')
            break;
        i++;
    }

    for(i = 0; i < max; i++)
        longest[i] = str[start + i];

    longest[max] = '\0';

    printf("Longest word = %s", longest);

    return 0;
}