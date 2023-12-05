#include<bits/stdc++.h>
using namespace std;

int main(){
    float igualar,jarraA, jarraB, copo;
    int qtd;
    cin >> qtd; 
    while(qtd != 0){
        cin >> jarraA >> jarraB >> copo ;
        igualar = (jarraA + jarraB)/2; 
        if(jarraA <= jarraB){
            igualar = igualar - jarraA;
        }else{
            igualar = igualar - jarraB;
        }
        igualar = igualar / copo;
        int i = int(igualar);
        if(igualar > i){
            i = i + 1;
            cout << i << endl;
        }else{
            cout << i << endl;
        }
        
        qtd--;
    }
    return 0;
}