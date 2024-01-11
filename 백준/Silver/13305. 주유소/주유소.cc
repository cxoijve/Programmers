#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N;
    cin >> N;

    vector<long long> distances(N - 1);
    vector<long long> prices(N);

    // 각 도로의 길이를 입력받는다.
    for (int i = 0; i < N - 1; ++i) {
        cin >> distances[i];
    }

    // 각 도시의 주유 가격을 입력받는다.
    for (int i = 0; i < N; ++i) {
        cin >> prices[i];
    }

    // 최소 비용을 계산한다.
    long long minCost = 0;
    long long currentPrice = prices[0]; // 현재 가격을 첫 번째 도시의 가격으로 초기화

    for (int i = 0; i < N - 1; ++i) {
        // 현재 도시의 기름 가격이 더 싼 경우, 현재 가격을 사용
        if (currentPrice > prices[i]) {
            currentPrice = prices[i];
        }
        // 현재 가격으로 다음 도시까지 이동하는데 필요한 기름 값을 더한다.
        minCost += currentPrice * distances[i];
    }

    cout << minCost << endl; // 최소 비용 출력
    return 0;
}
