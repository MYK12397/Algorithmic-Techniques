#include<bits/stdc++.h>

#define int int64_t
using namespace std;

// queue approach(require extra space)
void FirstNegNum(int a[], int n, int k) {
    queue<int> q;
    for (int i = 0; i < n; i++)
        if (a[i] < 0)
            q.push(i);//store index
    int cur = 0;
    for (int i = 0; i < n - k + 1; i++) {
        if (q.empty() || q.front() > i + k - 1)
            cout << 0 << " ";
        else {
            if (i == q.front()) {
                cout << a[q.front()] << " ";
                q.pop();
            }
            else if (i < q.front())
                cout << a[q.front()] << " ";
        }
    }
}
//optimized approach

void FrstnegNum(int a[], int n, int k) {

    int id = 0, ele;

    for (int i = k - 1; i < n; i++) {
        while (id < i && ((a[id] > 0) || id <= i - k))// id<=i-k (this condition skips those negative elements which already considered)
            id++;
        //when while condition false ,this means we hit the negative number.

        /* Dry Run */
        // id(0)<i(2) && a[0](12)>0 -->id++ ->1;
        // id(1)<i(2) && a[1]>(-1)>!0 || id(1)<=i(2)-k(3).. 1<=-1?no;
        // output -1, i=3;
        // id(1)<i(3) && a[1]>0?No || id(1)<=(i(3)-k(3))?No id=1;
        // output -1 -1, i=4;
        // id(1)<i(4)&& a[1]>0?No|| id(1)<=i(4)-k(3)?yes, id=2;
        // id(2)<i(4) && a[2]>0?No || id(2)<=i(4)-k(3)?no;
        // output -1 -1 -7 , i=5;
        // id(2)<i(5) && a[2]>0?No || id(2)<=i(5)-k(3)?yes,id=3;
        // id(3)<i(5) && a[3]>0?yes,id=4;
        // id(4)<i(5) && a[4]>0?no || id(4)<=i(5)-k(3)?no;
        // output -1 -1 -7 -15 , i=6;
        // id(4)<i(6) && a[4]>0?no || id(4)<=i(6)-k(3)?no;
        // output -1 -1 -7 -15 -15,i=7
        // id(4)<i(7) && a[4]>0?no || id(4)<=i(7)-k(3)?yes,id=5;
        // id(5)<i(7) && a[5]>0?yes,id=6;
        // id(6)<i(7) && a[6]>0?yes,id=7;
        // id(7)<i(7)no
        //output -1 -1 -7 -15 -15 0, i=8(i(8)<!=n(7))
        // loop ends.
        if (a[id] < 0)
            ele = a[id];
        else
            ele = 0;

        cout << ele << " ";
    }
}




int32_t main() {
    int a[] = {12, -1, -7, 8, -15, 30, 16, 28};
    int n = sizeof(a) / sizeof(a[0]);

    int k = 3;
    FirstNegNum(a, n, k);



    return 0;
}