/*

Problem/Concept: Balanced Brackets
Source: HackerRank
Difficulty: Easy
Link: https://www.hackerrank.com/challenges/balanced-brackets/problem





*/


#include <bits/stdc++.h>
using namespace std;

string isBalanced(string s) {

    stack <int> st;

    unordered_map<char, int> bracket_map = {{'{', -1}, {'[', -2}, {'(', -3}, {'}', 1}, {']', 2}, {')', 3}};

    for (auto brackets : s) {
        if (bracket_map[brackets] < 0) {
            st.push(brackets);
        }
        else {
            if (st.empty()) return "NO";
            char top = st.top();
            st.pop();
            if (bracket_map[top] + bracket_map[brackets] != 0) return "NO";


        }
    }

    if (st.empty())return "YES";
    return "NO";
}

int main() {

    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        cout << isBalanced(s) << endl;
    }

}









