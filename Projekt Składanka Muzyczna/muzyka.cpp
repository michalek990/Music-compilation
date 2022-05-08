#include "muzyka.h"
#include <iostream>
#include <fstream>
#include <cstdlib>
using namespace std;

void muzyka::wczytaj(){
 fstream plik;
 plik.open("piosenki2.txt",ios::in);
 if(plik.good()==false){
    cout<<"Plik pusty"<<endl;
    exit(0);
 }
    int nr_linii=(nr_muzyki-1)*2+1;
    int aktualny_nr=1;
    string linia;
    while(getline(plik,linia)){
        if(aktualny_nr==nr_linii){
                autor=linia;
        }
        if(aktualny_nr==nr_linii+1){
                tytul=linia;
        }


        aktualny_nr++;
    }

plik.close();
}
void muzyka::wyswietl(){

  cout<<nr_muzyki<<"."<<autor<<"-"<<tytul<<endl;
}

void muzyka::wyswietl2(){
    cout<<autor<<endl;
    cout<<tytul<<endl;
    cout<<"To jest tekst piosenki "<<tytul<<endl;
}
