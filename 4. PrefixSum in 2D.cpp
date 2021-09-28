/* Prefix sum in 2D array

Given a,b,c,d as coordinate points i.e, (a,b) & (c,d)

Constraints:

1 <= Q <= 10^5  (Q = queries --> same as Test case)
1 <= a[i][j] <= 10^9
1 <= N <= 10^3
1 <= a,b,c,d <= N

*/

// This is a wrong approach
// #include <bits/stdc++.h>
// using namespace std;

// const int N = 1e3 + 10;
// int arr[N][N];


// int main() {
// 	int n;
// 	cin >> n;

// 	for (int i = 1; i <= n; ++i) {
// 		for (int j = 1; j <= n; ++j)
// 		{
// 			cin >> arr[i][j];

// 		}
// 	}

// 	int t;
// 	cin >> t;

// 	while (t--) {
// 		int a, b, c, d;
// 		cin >> a >> b >> c >> d;

// 		long long int sum = 0;

// 		for (int i = a; i <= c; ++i)
// 		{
// 			for (int j = b; j <= d; ++j)
// 			{
// 				sum = sum + arr[i][j];
// 			}
// 		}

// 		cout << sum << endl;
// 	}

// }


//Using Prefixsum (10^6)
#include <bits/stdc++.h>
using namespace std;

const int N = 1e3 + 10;
int arr[N][N];
int pf[N][N];


int main() {
	int n;
	cin >> n;

	for (int i = 1; i <= n; ++i) {
		for (int j = 1; j <= n; ++j)
		{
			cin >> arr[i][j];
			pf[i][j] = arr[i][j] + pf[i - 1][j] + pf[i][j - 1] - pf[i - 1][j - 1];

		}
	}

	int t;
	cin >> t;

	while (t--) {
		int a, b, c, d;
		cin >> a >> b >> c >> d;

		cout << pf[c][d] - pf[a - 1][b] - pf[c][b - 1] + pf[a - 1][b - 1] << endl;
	}

}

