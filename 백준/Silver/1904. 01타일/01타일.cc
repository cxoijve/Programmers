#include <iostream>
using namespace std;

const int MOD = 15746;

int main() {
    int N;
    cin >> N;

    int dp[N+1];
    dp[1] = 1;
    dp[2] = 2;

    for (int i = 3; i <= N; i++) {
        dp[i] = (dp[i-1] + dp[i-2]) % MOD;
    }

    cout << dp[N];
    return 0;
}
