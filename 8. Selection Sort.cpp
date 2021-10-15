#include <bits/stdc++.h>
using namespace std;




void selectSort(int arr[], int n) {
    for (int i = 0; i < n; ++i) {
        int minIndex = i;
        for (int j = i + 1; j < n; ++j) {

            if (arr[minIndex] > arr[j]) {
                minIndex = j;
            }

        }

        swap(arr[i], arr[minIndex]);
    }
}




int main() {

    int n;
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    selectSort(arr, n);

    for (int i = 0; i < n; ++i) {
        cout << arr[i] << " ";
    }

}

// O(N^2) :(



