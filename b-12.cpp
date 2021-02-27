#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n];
    for(int i=0; i<n; i++){
        a[i]=i+1;
    }
    for(int i=2; i<=n; i++){
        for(int j=i+i; j<=n; j+=i){
            if(a[j-1]>0) a[j-1] = -1;
        }
    }
    for(int i=2; i<=n; i++)
        if(a[i-1]>1) cout << a[i-1] << " ";
}
