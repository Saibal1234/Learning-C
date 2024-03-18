//Your task is very simple: given two integers A and B, write a program to add these two numbers and output the sum.

#include <stdio.h>

int main() {
    int t,sum;
    scanf("%d", &t);

    // Loop for each test case 
    while (t--) {
        int a, b;

        scanf("%d %d", &a, &b);

        // Your code for each test case goes here 
        sum=a+b;
        printf("%d\n",sum);
    } return 0;
}
