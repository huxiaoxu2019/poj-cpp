#include<stdio.h>
#include<cmath>

using namespace std;

int main() {
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n; ++i) {
        float x, y;
        scanf("%f%f", &x, &y);
        float r2 = pow(x, 2) + pow(y, 2);
        float year = 3.14159 * r2 / 100.0;
        int ryear = ceil(year);
        printf("Property %d: This property will begin eroding in year %d.\n", i, ryear);
    }
    printf("END OF OUTPUT.\n");
    return 0;
}