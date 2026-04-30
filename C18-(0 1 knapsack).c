#include <stdio.h>

int max(int a, int b) {
    return (a > b) ? a : b;
}

int main() {
    int n, W;

    printf("Enter number of items: ");
    scanf("%d", &n);

    int value[n], weight[n];

    printf("Enter value and weight of items:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d %d", &value[i], &weight[i]);
    }

    printf("Enter knapsack capacity: ");
    scanf("%d", &W);

    // DP table
    int dp[n + 1][W + 1];

    // Initialize DP table
    for (int i = 0; i <= n; i++) {
        for (int w = 0; w <= W; w++) {
            if (i == 0 || w == 0)
                dp[i][w] = 0;
            else if (weight[i - 1] <= w)
                dp[i][w] = max(value[i - 1] + dp[i - 1][w - weight[i - 1]],
                               dp[i - 1][w]);
            else
                dp[i][w] = dp[i - 1][w];
        }
    }

    printf("Maximum value in Knapsack = %d\n", dp[n][W]);

    return 0;
}
