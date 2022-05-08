#include <iostream>
#include <fstream>
#include <cstdlib>

using namespace std;

class muzyka{
public:

    int nr_muzyki=1;
    string autor;
    string tytul;



    void wczytaj();
    void wyswietl();
    void wyswietl2();
};
