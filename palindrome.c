#include <string.h>
#include <stdbool.h>
bool isPalindrome(int x) {
    if (x < 0)
        return (false);
    long reversedx = 0;
    long originalx = x;
    int y;
    int z;
    int n = 1;
    while (originalx != 0)
    {
        if (n == 1)
            if ((originalx % 10) == 0)
                return (false);
        n--;
        reversedx = reversedx + (originalx % 10);
        originalx /= 10;
        reversedx *= 10;
    }
    reversedx /= 10;
    while (x != 0)
    {
        z = x % 10;
        y = reversedx % 10;
        if (z != y)
            return (false);
        x /= 10;
        reversedx /= 10;
    }
    return (true);
}
#include <stdio.h>
int main() {
    int testCases[] = {12321, -12321, 10, 0, 9999, 2002};
    int numTestCases = sizeof(testCases)/sizeof(testCases[0]);
    for(int i=0; i<numTestCases; i++){
        int test = testCases[i];
        printf("Is %d a palindrome? %s\n", test, isPalindrome(test) ? "Yes" : "No");
    }
    return 0;
}