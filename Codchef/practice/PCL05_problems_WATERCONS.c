// Recently, Chef visited his doctor. The doctor advised Chef to drink at least 2000 ml of water each day.Chef drank X ml of water today. Determine if Chef followed the doctor's advice or not.

#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);

    // Loop for each test case
    while (t--) {
        int x;
        scanf("%d", &x);

        // Your code for each test case goes here
        if(x>=2000){
            printf("YES\n");
        } else{
            printf("NO\n");
        }
    } return 0;

}
