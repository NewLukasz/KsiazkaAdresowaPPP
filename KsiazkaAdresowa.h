#ifndef KSIAZKAADRESOWA_H
#define KSIAZKAADRESOWA_H

#include <iostream>

#include "UzytkownikMenedzer.h"
#include "AdresatMenedzer.h"

using namespace std;

class KsiazkaAdresowa {
    UzytkownikMenedzer uzytkownikMenedzer;
    AdresatMenedzer *adresatMenedzer;
    const string NAZWA_PLIKU_Z_ADRESATAMI;
    vector <Uzytkownik> uzytkownicy;

public:
    KsiazkaAdresowa(string nazwaPlikuZUzytkownikami, string nazwaPlikuZAdresatami) : uzytkownikMenedzer(nazwaPlikuZUzytkownikami), NAZWA_PLIKU_Z_ADRESATAMI(nazwaPlikuZAdresatami) {
        adresatMenedzer= NULL;
    };
    ~KsiazkaAdresowa(){
        delete adresatMenedzer;
        adresatMenedzer=NULL;
    }
    void rejestracjaUzytkownika();
    void wypiszWszystkichUzytkownikow();
    char wybierzOpcjeZMenuUzytkownika();
    char wybierzOpcjeZMenuGlownego();
    int logowanieUzytkownika();
    void dodajAdresata();
    void wypiszDaneWszytkichAdresatow();
    int przeslijIdOstatniegoAdresata();
    void wyswietlKontaktyWyszukanePoImieniu();
    void wyswietlKontaktyWyszukanePoNazwisku();
    void usunWybranegoAdresata();
    void zaladujUzytkownikowPonownieZPliku();
    void edytujAdresata();
    void edytujHasloUzytkownika();
};
#endif
