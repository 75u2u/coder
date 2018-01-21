#include <stdio.h>
#include <math.h>

int main() {
int n;
int swap;
int a, b = 0;

scanf("%d %d", &a, &b);
if(b>=100) n = a*1000+b;
else if(b>=10) n = a*100+b;
else n = a*10+b;
swap = (int)sqrt((double)n);
if (swap*swap == n) {
    printf("Yes\n"); 
} else {
    printf("No\n"); 
}

return 0;
}