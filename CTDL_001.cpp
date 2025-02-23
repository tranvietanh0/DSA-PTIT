#include <bits/stdc++.h>
using namespace std;
int n, a[100], ok;
void ktao(){
    for (int i = 1; i <= n; i++){
        a[i] = 0;
    }
}
void sinh(){
    int i = n;
    while(i >= 1 && a[i] == 1){
        a[i] = 0;
        --i;
    }
    if(i == 0){
        ok = 0;
    }
    else{
        a[i] = 1;
    }
}
bool checktn(vector<int> v){
    for (int i = 1; i <= n; i++){
        if(a[i] != a[n - i + 1]){
            return false;
        }
    }
    return true;
}
int main(){
    cin >> n;
    ok = 1;
    ktao();
    while(ok){
        vector<int> v = {};
        for (int i = 1; i <= n; i++){
            v.push_back(a[i]);
        }
        // cout << "\n";
        if(checktn(v)){
            for (int i = 0; i < n; i++){
                cout << v[i] << " ";
            }
            cout << "\n";
        }
        sinh();
    }
    return 0;
}