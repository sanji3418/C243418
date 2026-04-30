#include <stdio.h>

int main() {
    int n;

    printf("Enter rod length: ");
    scanf("%d", &n);

    int price[n + 1];
    int dp[n + 1];

    printf("Enter prices for lengths 1 to %d:\n", n);
    for (int i = 1; i <= n; i++) {
        scanf("%d", &price[i]);
    }

    dp[0] = 0;

    for (int i = 1; i <= n; i++) {
        int maxValue = 0;

        for (int j = 1; j <= i; j++) {
            int val = price[j] + dp[i - j];
            if (val > maxValue) {
                maxValue = val;
            }
        }

        dp[i] = maxValue;
    }

    printf("Maximum Profit = %d\n", dp[n]);

    return 0;
}
