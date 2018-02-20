#include <stdio.h>
#include <stdbool.h>

bool dfs(int i, int sum);

int main() {
    int a, n, k;

    scanf("%d %d %d", &n, &a, &k);

    if(dfs(0, 0)) printf("Yes\n");
    else printf("No\n");
    return 0;
}

bool dfs(int i, int sum) {
    if(i==n) return true;
    if(dfs(i+1, sum)) return true;
    if(dfs(i+1), sum+a[i]) return true;
    return false;
}
