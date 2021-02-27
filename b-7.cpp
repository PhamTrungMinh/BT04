#include <iostream>
using namespace std;
int main()
{
    string s;
    cin >> s;
    int i;
    for(int i=0; i<s.size(); i++){
        for(int j=0; j<s.size(); j++){
            cout << s[i] << s[j] << " ";
            for(int l=0; l<s.size(); l++){
                cout << s[i] << s[j] << s[l] << " ";
            }
        }
    }
}
