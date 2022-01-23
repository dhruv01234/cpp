// C++ implementation to find the
// value of P.Q -1 mod 998244353

#include <bits/stdc++.h>
using namespace std;

// Function to find the value of
// P * Q^-1 mod 998244353
long long calculate(long long p,
					long long q)
{
	long long mod = 998244353, expo;
	expo = mod - 2;

	// Loop to find the value
	// until the expo is not zero
	while (expo) {

		// Multiply p with q
		// if expo is odd
		if (expo & 1) {
			p = (p * q) % mod;
		}
		q = (q * q) % mod;

		// Reduce the value of
		// expo by 2
		expo >>= 1;
	}
	return p;
}

// Driver code
int main()
{
	int p = 1, q = 4;

	// Function Call
	cout << calculate(p, q) << '\n';
	return 0;
}
