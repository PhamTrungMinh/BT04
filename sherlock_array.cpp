#include <iostream>
using namespace std;

bool check(const int *a, const int n, const int j)
{
    int tong_trai=0, tong_phai=0;
    for(int i=0; i<j; i++) tong_trai+=a[i];
    for(int i=j+1; i<n; i++) tong_phai+=a[i];
    if(tong_phai == tong_trai) return true;
    return false;
}

int main()
{
    int t;
    cin >> t;
    for(int i=1; i<=t; i++){
        bool co=false;
        int n; cin >> n;
        int a[n];
        for(int j=0; j<n; j++)  cin >> a[j];
        for(int j=0; j<n; j++){
            if(check(a,n,j)){
                co=true;
            }
        }
        if(co)  cout << "YES" << endl;
        else cout << "NO" << endl;
    }
}
