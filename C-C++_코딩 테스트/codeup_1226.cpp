#include <stdio.h>
int main() {
    int a[8], b[7], bonus, cnt=0, bonus2=0;
    
    for(int i=1; i<=6; i++)
        scanf("%d", &a[i]);
    scanf("%d", &bonus);
    for(int i=1; i<=6; i++)
        scanf("%d", &b[i]);
    
    for(int i=1; i<=6; i++)
        for(int j=1; j<=6; j++)
            if(a[i]==b[j]) cnt++;
    for(int i=1; i<=6; i++)
        if(bonus == b[i])
            bonus2=1;
    
    if(cnt==6) printf("1");
    else if(cnt==5 && bonus2==1) {
        printf("2");
    }
    else if(cnt==5 && bonus2==0) {
        printf("3");
    }
    else if(cnt==4) {
        printf("4");
    }
    else if(cnt==3) {
        printf("5");
    }
    else {
        printf("0");
    }
     
    return 0;
}
