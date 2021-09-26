/* Given T test cases and in each test case
a number N. Print its factorial for each test
case % M where M = 10^9 +7.

Constraints:

1 <= T <= 10^5
1 <= N <= 10^5

*/


// This is a basic approach where TLE can be an issue. O(T*N) = 10 ^10 > 10^7
/* #include <bits/stdc++.h>
using namespace std;

int M = 1e9 + 7;

int main() {

	int t;
	cin >> t;

	while (t--) {
		int x;
		cin >> x;
		int fact = 1;
		for (int i = 1; i <= x; ++i ) {
			fact = (fact * i) % M;
		}

		cout << fact << endl;
	}



}

*/


//This is a better approach. O(N) + O(T) = 2 * 10^5
#include <bits/stdc++.h>
using namespace std;

int M = 1e9 + 7;
int N = 1e5 + 10;



int main() {

	long long int fact[N];

	fact[0] = fact[1] = 1;

	for (int i = 2; i < N; ++i) {
		fact[i] = i * fact[i - 1];
	}

	int t;
	cin >> t;

	while (t--) {

		int x;
		cin >> x;

		cout << fact[x] << endl;
	}

}

