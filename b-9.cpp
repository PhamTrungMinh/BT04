#include <iostream>

using namespace std;

bool dau_hau(const int x1, const int y1, const int x2, const int y2)
{
    if(x1==x2 || y1==y2) return true;
    if(abs(x1-x2) == abs(y1-y2)) return true;
    return false;
}

int main()
{
    int n;
    cin >> n;
    int x[n], y[n];
    for(int i=0; i<n; i++){
        cin >> x[i] >> y[i];
    }
    for(int i=0; i<n-1; i++){
        for(int j=i+1; j<n; j++){
            if(dau_hau(x[i], y[i],x[j],y[j])){
                    cout << "yes";
                    return 0;
            }
        }
    }
    cout << "no";
    return 0;
}
