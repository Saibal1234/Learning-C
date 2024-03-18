// The first and only line of input contains two space-separated integers x,ythe marks of Alice and Bob respectively.
// Output Format
// For each testcase, print Yes if Alice is happy and No if she is not, according to the problem statement


#include <stdio.h>

int main() {
    int x, y;
    scanf("%d %d", &x, &y);
    // Your code goes here (if needed)
  if(x>=2*y){
      printf("Yes");
  } else{
      printf("No");
  }return 0;
}
