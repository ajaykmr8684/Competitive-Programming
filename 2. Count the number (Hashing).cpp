/* Given T test cases and in each test case
a number N. Find the count of that number in the array

Constraints:

1 <= T <= 10^5
1 <= a[i] <= 10^7
1 <= N <= 10^5

*/

// O(N)
#include <bits/stdc++.h>
using namespace std;

const int N = 1e7 + 10;

int hashx[N];


int main() {
	int n;
	cin >> n;
	int a[n];

	for (int i = 0; i < n ; ++i) {
		cin >> a[i];
		hashx[a[i]]++;
	}

	int t;
	cin >> t;
	while (t--) {
		int x;
		cin >> x;

		cout << hashx[x] << endl;
	}



}

