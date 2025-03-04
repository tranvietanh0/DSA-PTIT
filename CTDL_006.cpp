#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){
    int n; cin >> n;
    int m[10000];
    bool check[10000] = {false};
    for (int i = 0; i < n; i++){
        cin >> m[i];
    }
    for (int i = 0; i < n; i++){
        if(!check[m[i]]){
            cout << m[i] << " ";
            check[m[i]] = true;
        }
    }
    return 0;
}