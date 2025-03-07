#include <stdio.h>
#include <iostream>
#include <vector>
using namespace std;

int* KnapsackKP(int* w, int* v, int n, int wx);

int main() {
    int wx, n, ans = 0;
    printf("Enter n : ");
    scanf("%d", &n);
    printf("Enter wx : ");
    scanf("%d", &wx);

    int* w = new int[n];
    int* v = new int[n];
    for (int i = 0; i < n; i++) {
        printf("weight for item %d : ", i);
        scanf("%d", &w[i]);
    }
    for (int i = 0; i < n; i++) {
        printf("value for item %d : ", i);
        scanf("%d", &v[i]);
    }

    int* x = KnapsackKP(w, v, n, wx);
    for (int i = 0; i < n; i++) printf("%d ", x[i]);
    for (int i = 0; i < n; i++) if (x[i] == 1) ans += v[i];
    printf("\nValue = %d", ans);

    delete[] w;
    delete[] v;
    delete[] x;
    return 0;
}

int* KnapsackKP(int* w, int* v, int n, int wx) {
    vector<vector<int>> dp(n + 1, vector<int>(wx + 1, 0));

    // Fill DP table
    for (int i = 1; i <= n; i++) {
        for (int j = 0; j <= wx; j++) {
            if (w[i - 1] <= j)
                dp[i][j] = max(dp[i - 1][j], v[i - 1] + dp[i - 1][j - w[i - 1]]);
            else
                dp[i][j] = dp[i - 1][j];
        }
    }

    // Backtrack to find the selected items
    int* x = new int[n]();
    int j = wx;
    for (int i = n; i > 0 && j > 0; i--) {
        if (dp[i][j] != dp[i - 1][j]) {
            x[i - 1] = 1;
            j -= w[i - 1];
        }
    }
    return x;
}


