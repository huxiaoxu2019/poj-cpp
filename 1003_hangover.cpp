#include<stdio.h>

using namespace std;

int main() {
    float n, sum;
    int cards = 0;
    scanf("%f", &n);
    while (n != 0) {
        sum = 0, cards = 0;
        while (sum < n) {
            cards++;
            sum += 1.0 / (cards + 1);
        }
        printf("%d card(s)\n", cards);
        scanf("%f", &n);
    }
    return 0;
}