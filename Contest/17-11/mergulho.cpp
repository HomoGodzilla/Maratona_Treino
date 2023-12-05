#include<bits/stdc++.h>
using namespace std;

int main(){
    int foi, voltou;
    while(cin >> foi >> voltou){
        vector<int> a(foi, 0);
            int g;
            for(int i =0; i < voltou; i++){
                cin >> g;
                a[g-1] = g;
            }
        if(foi != voltou){
            for(int i = 0; i < foi; i++){
                if(a[i] == 0){
                    cout << i+1 << ' ';
                }
            }
        }else{
            cout << '*';
        } 
        cout << endl;          
    }
    return 0;
}