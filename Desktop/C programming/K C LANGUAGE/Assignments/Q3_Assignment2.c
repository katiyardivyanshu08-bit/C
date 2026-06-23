/*
A data compression module in an embedded IoT system stores sensor logs as long strings of repeated characters (e.g., "TTTTTHHHHHPPP" for Temperature, Humidity, and Pressure). To save transmission bandwidth, you must write a recursive compression function that compresses the input string using Run-Length Encoding (RLE) — e.g., "TTTTTHHHHHPPP" → "T5H5P3".
However, to make it IoT-efficient:
You must avoid dynamic memory allocation.
The compression must be in-place, modifying the original string.
Recursion depth must adapt automatically to string length.
Input Format
A single line containing a string S (1 ≤ |S| ≤ 100000, only uppercase alphabets).
Constraints
1 ≤ |S| ≤ 100000
S contains only uppercase English letters (A–Z).
Recursion depth must be handled safely (use tail recursion where possible).
Output Format
Print the compressed string where each character is followed by its count.
Sample Input 0
A
Sample Output 0
A1
Sample Input 
SSSSSSSSSTTTTTNNPPPPPPPPPP
Sample Output 1
S9T5N2P10
Sample Input 2
AAABBBCCDAA
Sample Output 2
A3B3C2D1A2*/

#include <stdio.h>
void compress(char s[], int i, int n, int out) {
    if (i >= n) {
        s[out] = '\0';
        return;     // end of recursion
    }
    char c = s[i];
    int count = 1;
    // count repeating characters
    while (i + count < n && s[i + count] == c) {
        count++;
    }
    // write character
    s[out++] = c;
    // write count (may be 1, 2 digits etc.)
    if (count >= 10) {
        s[out++] = (count / 10) + '0';
        s[out++] = (count % 10) + '0';
    } else {
        s[out++] = count + '0';
    }
    // tail recursion for next segment
    compress(s, i + count, n, out);
}
int main() {
    char s[100005];
    scanf("%s", s);
    int n = 0;
    while (s[n] != '\0') n++;
    compress(s, 0, n, 0);
    printf("%s", s);
    return 0;
}
