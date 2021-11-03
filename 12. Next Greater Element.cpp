/*

Problem/Concept: Next Greater Element
Source: Leetcode
Difficulty: Easy
Link: NA


Here don't get confused with the logic used. Instead of the elements, I have used indexes where stack is
saving the indexs of the processing elements and nge vector is saving the indexes of the Next greater element
of the st.top in itself.



*/


#include <bits/stdc++.h>
using namespace std;

vector<int> NGE(vector <int> v) {
    vector <int> nge(v.size());
    stack <int> st;

    for (int i = 0; i < v.size(); ++i ) {
        while (!st.empty() && v[i] > v[st.top()] ) {
            nge[st.top()] = i;
            st.pop();
        }
        st.push(i);
    }

    while (!st.empty()) {
        nge[st.top()] = -1;
        st.pop();
    }
    return nge;
}


int main() {

    int t;
    cin >> t;
    vector<int> v(t);

    for (int i = 0; i < t; ++i) {
        cin >> v[i];
    }

    vector <int> nge = NGE(v);

    for (int i = 0; i < t; ++i) {
        cout << v[i] << " " << (nge[i] == -1 ? -1 : v[nge[i]]) << endl;
    }



}









