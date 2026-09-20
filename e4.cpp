#include <bits/stdc++.h>
using namespace std;
int main() {
    vector<int> attendance= {85, 72, 90, 68, 78, 74};
    int count= 0;
    cout<<"Attendance Percenatage: \n";
    for (auto percentage:attendance) {
        cout<<percentage<<"% \n";
        if (percentage>75) {
            count++;
        }
    }
    cout<<"No. of students with attendance more than 75%: "<<count<<"\n";
    return 0;
}