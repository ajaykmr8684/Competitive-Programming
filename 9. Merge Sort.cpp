/*

Problem/Concept: Merge Sort Practice
Source: NA
Difficulty: NA
Link: NA





*/


#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 10;

int arr[N];



void merge(int l, int r, int mid) {

    // Making two array L and R (Spliting into two)
    int l_sz = mid - l + 1;
    int L[l_sz + 1];
    int r_size = r - mid;
    int R[r_size + 1];


    // Filling those arrays one by one
    for (int i = 0; i < l_sz; ++i) {
        L[i] = arr[i + l];
    }

    for (int i = 0; i < r_size; ++i) {
        R[i] = arr[i + mid + 1];
    }

    // To avoid extra while loop, (used in filling remaining elements)
    L[l_sz] = R[r_size] = INT_MAX;


    // to indicate which array is active currently
    int l_i = 0;
    int r_i = 0;


    // Merging the arrays
    for (int i = l; i <= r; ++i) {
        if (L[l_i] <= R[r_i]) {
            arr[i] = L[l_i];
            l_i++;
        } else {

            arr[i] = R[r_i];
            r_i++;

        }
    }

}


void mergeSort(int l, int r) {

    if (l == r) return;

    int mid = (l + r ) / 2;

    mergeSort(l, mid);
    mergeSort(mid + 1, r);
    merge(l, r, mid);

}



int main() {
    int n;
    cin >> n;

    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    mergeSort(0, n - 1);

    for (int i = 0; i < n; ++i) {
        cout << arr[i] << " ";
    }


}


// O(nLogn) :)
