#include <iostream>
#include <iomanip>
#include <algorithm>
using namespace std;
int main()
{
    int n;
    cin >> n;
    double boy[n], girl[n];
    int count =0;
    for(int i=0; i<n; i++){
        cin >> boy[i] >> girl[i];
        if(boy[i] < girl[i]) count++;
    }
    if(count){
        sort(boy, boy+n);
        sort(girl, girl+n);
        for(int i=0; i<n; i++){
            if(boy[i]<girl[i]){
                cout << "NO";
                return 0;
            }
        }
        cout << "YES";
    }
    else cout << "YES";
}
