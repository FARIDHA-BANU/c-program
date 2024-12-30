#include<stdio.h>

void main(){
    int m1, p1, m2, p2, n;
    scanf("%d%d%d%d%d",&m1, &p1, &m2, &p2, &n);
    int min_cost = -1;
    
    for(int i = 0; m1 * i <= n; i++) {
        int count2 = n - i * m1;
        if(count2 % m2 == 0) {
            int cost = p1 * i + p2 * (count2 / m2);
            min_cost = (cost < min_cost || min_cost == -1) ? cost : min_cost;
        }
    }
    
    printf("%d\n", min_cost);
}
