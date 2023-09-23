#include <stdio.h>
int main() {
    double n;
    scanf("%lf", &n);
    
    if(n>=50 && n<=60) {
        printf("win\n");
    }
    else {
        printf("lose\n");
    }
     return 0;
}
