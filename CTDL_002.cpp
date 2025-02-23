#include <bits/stdc++.h>
using namespace std;
int a[100], ok, n, k;

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
    if(i == 0) ok = 0;
    else a[i] = 1;

}

int main(){
    cin >> n >> k;
    vector<int> v;
    for (int i = 0; i < n; i++){
        int x; cin >> x;
        v.push_back(x);
    }
    ok = 1;
    ktao();
    int dem = 0;
    while(ok){
        int sum = 0;
        for (int i = 1; i <= n; i++){
            sum += (v[i - 1] * a[i]);
        }
        if(sum == k){
            dem++;
            for (int i = 1; i <= n; i++){
                if(a[i] == 1){
                    cout << v[i - 1] << " ";
                }
            }
            cout << "\n";
        }
        sinh();
    }
    cout << dem;
    return 0;
}