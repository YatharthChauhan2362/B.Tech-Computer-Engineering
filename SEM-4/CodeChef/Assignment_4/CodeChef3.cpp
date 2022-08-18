#include <bits/stdc++.h>
#define ll long long
using namespace std;

bool Permutation(int a[], int b[], int n, int start, int end) {
    int l = end - start + 1;
    int x[l], y[l];
    for(int i = 0; i < l; i++) {
        x[i] = a[start + i];
        y[i] = b[start + i];
    }

    sort(x, x + l);
    sort(y, y + l);

    bool isE = true;
    for(int i = 0; i < l; i++) {
        if(x[i] != y[i]) {
            isE= false;
            break;
        }
    }

    if(isE) {
        return true;
       
    }
    else {
        return false;
       
    }
}

void run() {
    ll n;
    cin >> n;
    int a[n], b[n];
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for(int i = 0; i < n; i++){
        cin >> b[i];
    }

    int m = 0;
    for(int i = 0; i < n; i++)
        for(int j = i; j < n; j++)
            if(Permutation(a, b, n, i, j))
                m = max(m, j - i + 1);
   
    cout << m << endl;
}

int main() {
    ll t;
    cin >> t;
    while(t--) {
        run();
        }
    return 0;
}