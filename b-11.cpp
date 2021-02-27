#include <iostream>
using namespace std;

string dao(string s)
{
    string s1="";
    for(int i=s.size()-1; i>=0; i--){
        s1 += s[i];
    }
    return s1;
}

int main()
{
    int n;
    cin >> n;
    string s[n];
    for(int i=0; i<n; i++) cin >> s[i];
    for(int i=0; i<n-1; i++){
        for(int j=i+1; j<n; j++){
            if(s[i] == dao(s[j])){
                cout << s[i].size() << " " << s[i][s[i].size()/2];
            }
        }
    }
}
