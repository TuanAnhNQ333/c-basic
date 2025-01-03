/**
 * Problem: Compute sum 1 over i for i from 1 to n
Description
Given a positive integer n, compute T = 1/1 + 1/2 + . . . + 1/n.
Input
Line 1: contains a positive integer (1 <= n <= 1000000)
Output
Write T (with 5 digits after the float point)

Example
Input 
2
Output
1.50000
 */
#include<stdio.h>
#include<math.h>
double sum(int n) {
    double sumary = 0;
    for(int i = 1; i <= n; i ++) {
        if(n == 0) break;
        else {
            sumary +=(float)1/i; // ep kieu
        }
    }
    return sumary;
}
int main() {
    int n;
    scanf("%d", &n);
    double result = sum(n);
    printf("%.5lf", result);
    return 0;
}
