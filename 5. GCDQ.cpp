/* GCDQ

Given an array and two integers L & R. Find GCDQ in the array excluding L and R.

It's assured that after excluding L and R, array is no empty.

Constraints:

Subtask #1: 40 points

2 ≤ T, N ≤ 100, 1 ≤ Q ≤ N, 1 ≤ A[i] ≤ 105
1 ≤ L, R ≤ N and L ≤ R

Subtask #2: 60 points

2 ≤ T, N ≤ 105, 1 ≤ Q ≤ N, 1 ≤ A[i] ≤ 105
1 ≤ L, R ≤ N and L ≤ R
Sum of N over all the test cases will be less than or equal to 106.

Link[Codechef]: https://www.codechef.com/problems/GCDQ


*/


#include <bits/stdc++.h>
using namespace std;



int main() {
	int t;
	cin >> t;


	while (t--) {
		int n, q;
		cin >> n >> q;
		int a[n + 10];
		int forward[n + 10];
		int backward[n + 10];
		forward[0] = backward[n + 1] = 0;


		for (int i = 1; i <= n; ++i) {
			cin >> a[i];

		}

		for (int i = 1; i <= n; ++i) {
			forward[i] = __gcd(forward[i - 1], a[i]);
		}
		for (int i = n; i >= 1; --i) {
			backward[i] = __gcd(backward[i + 1], a[i]);
		}

		while (q--) {
			int l, r;
			cin >> l >> r;
			cout << __gcd(forward[l - 1], backward[r + 1]) << endl;
		}


	}


}

