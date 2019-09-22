//
// Created by fabrizio on 19/09/2019.
//

#include <iostream>
#include <map>
#include <iomanip>
using namespace std;

int main(){
    int numero,contralador = 1;
    int primos[25]={2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59, 61, 67, 71, 73, 79, 83, 89, 97};

    while(cin>>numero){
        if(numero==0)
            continue;

        map<int,int> cuentas;
        for (auto primo:primos)
            cuentas[primo]=0;

        for(int i=numero;i>1;i--){
            auto temp=i;
            while(temp!=1){
                for(auto primo:primos){
                    if(temp%primo==0){
                        cuentas[primo]++;
                        temp/=primo;}}}}


        cout<<setw(3)<<numero<<"! =";

        auto x=0;
        for(auto cuenta:cuentas){
            x++;
            if(cuenta.second==0)
                break;
            else{
                if(x==16){ cout <<endl << "      ";x=0;}
                cout<<setw(3)<<cuenta.second;}
        }
        cout<<endl;
        }}