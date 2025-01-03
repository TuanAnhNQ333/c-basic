/**
 * Problem: Draw a square by using the character *
Description
Given a positive integer n, write a program to draw a square (size n x n) by using the character * (see example below, with n = 5)
*****
*   *
*   *
*   *
*****

Input
Line 1: contains a positive integer n (2 <= n <= 1000)

Output
Write the square described above

Example
Input 
5
Output 
*****
*   *
*   *
*   *
*****

 */
#include<stdio.h>
#include<stdlib.h>
void square(char **arr, int n) {
    for(int i = 0; i < n; i ++ ) {
        for(int j = 0; j < n; j ++) {
            if(i == 0 || j == 0 ||i == n - 1 || j == n - 1) {
                arr[i][j] = '*';
            }
            else  {
                arr[i][j] = ' ';
            }
            
        }
    }

}
int main() {
    int n;
    scanf("%d", &n);
    char **arr = (char **) malloc(n * sizeof(char *));
    for(int i = 0; i < n; i ++) {
        arr[i] = (char *) malloc(n * sizeof(char));
    }
    square(arr, n);
    for(int i = 0; i < n; i ++) {
        for(int j = 0; j < n; j ++) {
            printf("%c", arr[i][j]);
        }
        printf("\n");
    }
    for(int i = 0; i < n; i ++) {
        free(arr[i]);
    }
    free(arr);
    return 0;
}