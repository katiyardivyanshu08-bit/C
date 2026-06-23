/*
You’re part of a bioinformatics AI team working on DNA sequencing. A DNA sequence is represented as a string containing the characters A, T, G, C. A mutation occurs when the sequence contains three or more consecutive identical bases (like AAA or GGG).
Write a recursive function using pointers to count how many mutations exist in the given DNA strand.
Input Format
One string S representing a DNA sequence.
Constraints
1 ≤ |S| ≤ 100000
Use recursion and pointer arithmetic only.
Must not use loops or string library functions.
Output Format
Print the total number of mutation segments.
Sample Input 0
AAAAA
Sample Output 0
1
Sample Input 1
ATGCATGC
Sample Output 1
0
Sample Input 2
CCCGGGTTTAAA
Sample Output 2
4*/

#include <stdio.h>

int skipSame(const char *p, char c) {
    if (*p != c) return 0;             // stop when different
    return 1 + skipSame(p + 1, c);     // count same characters
}
int countMut(const char *p) {
    if (*p == '\0') return 0;          // end of string
    int run = skipSame(p, *p);         // length of same-letter run
    if (run >= 3) {
        return 1 + countMut(p + run);  // one mutation, skip whole run
    }
    return countMut(p + 1);            // no mutation, move ahead
}
int main() {
    char S[100005];
    scanf("%s", S);
    printf("%d", countMut(S));
    return 0;
}
