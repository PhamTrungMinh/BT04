#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n;
    cin >> n;
    int a[n], b[n+1];
    for(int i=0; i<n; i++) cin >> a[i];
    for(int i=0; i<=n; i++) cin >> b[i];
    for(int i=0; i<=n; i++){
        for(int j=0; j<n; j++){
            if(a[j] == b[i]){
                a[j]=-1; b[i]=-1;
                break;
            }
        }
    }
    for(int i=0; i<=n; i++){
        if(b[i] != -1) cout << b[i];
    }
}

