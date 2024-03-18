// The only line of input contains two space-separated integers a and b.

// Output Format
// Output Yes, if (a,b)form a Oneful Pair. Output No if they do not.
 

 #include <stdio.h>

int main() {
    int a, b,c;
    scanf("%d %d", &a, &b);
    // Your code goes here (if needed)
     c= a+b+(a*b);
     if(c==111){
         printf("Yes");
     }else{
         printf("No");
     } return 0;
}
