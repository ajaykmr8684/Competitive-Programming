/*

Problem/Concept: The Monk and Class Marks
Source: HackerEarth
Difficulty: Easy
Link: https://www.hackerearth.com/problem/algorithm/the-monk-and-class-marks/





*/

//first


#include <bits/stdc++.h>
using namespace std;

int main() {

    int t;
    cin >> t;

    map<int, multiset<string>> marks_map;

    while (t--) {
        string name;
        int marks;
        cin >> name >> marks;
        marks_map[-1 * marks].insert(name);
    }

    for (auto &mark_student_pair : marks_map) {
        auto &students = mark_student_pair.second;
        auto marks = mark_student_pair.first;

        for (auto student : students) {

            cout << student << " " << -1 * marks << endl;

        }

    }



}









