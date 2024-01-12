#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

vector<long long> sieve(long long max_limit) {
    vector<bool> is_prime(max_limit + 1, true);
    vector<long long> primes;

    for (long long i = 2; i <= max_limit; ++i) {
        if (is_prime[i]) {
            primes.push_back(i);
            for (long long j = i * 2; j <= max_limit; j += i) {
                is_prime[j] = false;
            }
        }
    }
    return primes;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    long long Min, Max;
    cin >> Min >> Max;

    vector<long long> primes = sieve(sqrt(Max));

    int count = 0;
    
    for (long long prime : primes) {
        long long prime_power = prime * prime;
        while (prime_power <= Max) {
            if (prime_power >= Min) {
                count++;
            }
            if (Max / prime < prime_power) break;
            prime_power *= prime;
        }
    }

    cout << count << "\n";
    return 0;
}
