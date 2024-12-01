/**********************************
Izveidot programmu, kas
1) Saņem no lietotāja masīva garumu masivs intervālā no 1-20.
2) Liek lietotājam aizpildīt masīvu ar veseliem skaitļiem.
3) Satur vairākas funkcijas:
    funkciju seciba, kas sakārto masiva elementus augošā secībā
    funckija secibasizdruka, kas izdrukā pārkārtotos masiva elementu
    funckija videjais, kas aprēķina masīva aritmētisko vidējo
    funkcija mediana, kas atrod un atgriež masīva mediānu
    funkcija, kas izprintē visbiežāko skaitli,skaitļus
4) Parāda lietotājam visus rezultātus.
***********************************/
#include <iostream>
using namespace std;
/********************
int seciba(int masivs[20], int n);
Funkcija seciba(masivs, n) -
pārkārto masīvu masivs augošā secībā izmantojot burbuļkārtošanu
padošanai izdrukas funkcijai secibasizdruka
********************/
void seciba(int masivs[], int n){
for(int j=0;j<n-1;j++){
    bool apmainits = false;
    for(int i=0;i<n-1;i++){
        if(masivs[i] > masivs[i+1]){
            swap(masivs[i], masivs[i+1]);
            apmainits = true;
            }
        }
    if(!apmainits){
    break;
    }
    }
}
/********************************
void secibasizdruka(int n, cont int masivs[20]);
Funkcija secibasizdruka(n, masivs) -
izdrukā lietotājam funkcijā seciba pārkārtoto masīvu.
********************************/
void secibasizdruka(int n, const int masivs[]){
    cout << "Elementi augosa seciba: ";
for(int i=0;i<n;i++){
    cout << masivs[i] << " ";
}
    cout << endl;
}
/**********************************
float videjais(const int masivs[20], int n);
Funkcija videjais(masivs, n) -
atgriež aritmētisko vidējo no masīva masivs.
***********************************/
float videjais(const int masivs[20], int n){
int summa = 0;
    for(int i=0;i<n;i++){
        summa = summa + masivs[i];
    }
    return (float)summa/n;
}
/***************************
float mediana(const int masivs[20], int n);
Funckija mediana(masivs, n) -
atgriež mediānu no jau sakārtotā skaitļu masīva masivs.
****************************/
float mediana(const int masivs[20], int n){
    if(n%2==0){
            return (masivs[(n-1)/2] + masivs[n/2])/2.0;
    }else {
            return masivs[n/2];
    }
}
/******************************
int biezakais(const int masivs[20], int n);
Funkcija biezakais(masivs, n) -
atgriež biežāko vai biežākos skaitļus skaitļu masīvā masivs.
*******************************/
int biezakais(const int masivs[20], int n){
    int maxBiezums = 0;
    int biezakaisSkaitlis = masivs[0    ];
    for(int i=0;i<n;i++){
        int skaits = 0;
        for(int j=0;j<n;j++){
            if(masivs[j] == masivs[i]){
                skaits++;
            }
        }
    if(skaits > maxBiezums) {
        maxBiezums = skaits;
        biezakaisSkaitlis = masivs[i];
    }
    }
return biezakaisSkaitlis;
}


int main(){
int ok;
do {
int n;
int masivs[20];
cout << "Ludzu ievadiet masiva izmetu intervala no 1 lidz 20!" << endl;
cin >> n;
while(n<1 || n>20) {
   cout << "Ludzu ievadiet izmeru intervala no 1 lidz 20!" << endl;
   cin >> n;
}
cout << "Ludzu ievadiet masiva elementus, ka veselus skaitlus!" << endl;
for(int i=0;i<n;i++){
    cout << i+1 << ". elements: ";
    cin >> masivs[i];
    while(masivs[i] == 0) {
        cout << "Ludzu ievadiet tikai veselo skaitlu kopas elementus, nulle nav vesels skaitlis.";
        cin >> masivs[i];
    }
}


seciba(masivs, n);
secibasizdruka(n, masivs);
cout << "Skaitlu aritmetiskais videjais ir " << videjais(masivs, n) << endl;
cout << "Skaitlu masiva mediana ir " << mediana(masivs, n) << endl;
cout << "Biezakais skaitlis ir " << biezakais(masivs, n) << endl;


cout << "Turpinat(1) vai beigt(0)?" << endl;
cin >> ok;
while(ok != 1 && ok != 0) {
    cout << "Ludzu ievadiet viens(1), lai turpinatu un nulle(0), lai beigtu!" << endl;
    cin >> ok;
}
}while(ok == 1);
}
