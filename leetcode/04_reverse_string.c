#include <stdio.h>

void reverseString(char* s, int sSize) {
    int left = 0, right = sSize - 1;
    while (left < right) {
        char temp = s[left];
        s[left] = s[right];
        s[right] = temp;
        left++;
        right--;
    }
}

int main() {
    char s[] = {'h', 'e', 'l', 'l', 'o'};
    reverseString(s, 5);
    printf("Reversed: %.*s\n", 5, s);
    return 0;
}
