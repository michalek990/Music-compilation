#include <iostream>
#include "muzyka.h"
using namespace std;


int main()
{
    string odp;
    int w,n;
    cout<<"Skladanka muzyczna 2020 rok!"<<endl;
    cout<<"O to lista utowrow na plycie:"<<endl;
    muzyka p[20];
    for(int i=0;i<20;i++){
        p[i].nr_muzyki=i+1;
        p[i].wczytaj();
        p[i].wyswietl();
    }
    cout<<"########################"<<endl;
    cout<<"Czy chcesz sluchac muzyki?"<<endl;
    cout<<"tak lub nie"<<endl;
    cin>>odp;
    while(odp=="tak"){
    cout<<"Co chcesz zrobic?"<<endl;
    cout<<"1- wybierz muzyke"<<endl<<"2-losuj muzyke"<<endl<<"3-Koniec"<<endl;

    cin>>w;
    cout<<"########################"<<endl;
    while(w==1 || w==2 || w==3){
        if(w==1){

            cout<<"Podaj jakiego utowru chcesz posluchac"<<endl;
            cin>>n;
            while(n<0 || n>20){
            cout<<"Podales zly numer"<<endl;
            cin>>n;
            }
            p[n-1].wyswietl2();
        }
        if(w==2){
            int x= rand()%(20-1+1)+1;
            cout<<"Wylosowany numer to: "<<x+1<<endl;
            p[x].wyswietl2();
        }
        if(w==3){
            cout<<"Do uslyszenia"<<endl;
            exit(0);
        }
   cout<<"########################"<<endl;
    cout<<"########################"<<endl;
    cout<<"Czy chcesz sluchac muzyki?"<<endl;
     cout<<"tak lub nie"<<endl;
    cin>>odp;
    if(odp=="nie"){
        cout<<"Dowidzenia!"<<endl;
        exit(0);
    }
     cout<<"1- wybierz muzyke"<<endl<<"2-losuj muzyke"<<endl<<"3-Koniec"<<endl;
   cin>>w;
    }
    }

    return 0;
}

