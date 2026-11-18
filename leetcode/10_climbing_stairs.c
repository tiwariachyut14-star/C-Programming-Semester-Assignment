#include <stdio.h>

int climbStairs(int n) {
    if (n <= 2) return n;
    int first = 1, second = 2;
    for (int i = 3; i <= n; i++) {
        int third = first + second;
        first = second;
        second = third;
    }
    return second;
}

int main() {
    printf("Ways to climb 5 stairs: %d\n", climbStairs(5));
    return 0;
}
