/* Prefix sum in 1D array

Constraints:

1 <= Q <= 10^5  (Q = queries --> same as Test case)
1 <= a[i] <= 10^9
1 <= N <= 10^5
1 <= L, R <= N

*/

// O(N)
#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 10;
int arr[N];
int pf[N];



int main() {

	int n;
	cin >> n;
	for (int i = 1; i <= n; ++i) {
		cin >> arr[i];
		pf[i] = pf[i - 1] + arr[i];
	}

	int t;
	cin >> t;

	while (t--) {

		int sum = 0;

		int l, r;
		cin >> l >> r;

		sum = pf[r] - pf[l - 1];

		cout << sum << endl;



	}


}

