/***************************
Izveidot programmu, kas
    1) Dinamiski atvēl atmiņu masīvam masivs izmantojot norādi.
    2) Saņem no lietotāja masīva masivs izmēru un aizpilda to ar naturāliem skaitļiem.
    3) Izmantojot norādes
        3.1) aprēķina masīva elementu summu,
        3.2) noskaidro lielāko elementu,
        3.3) izdrukā masīvu pretējā secībā.
    4) Atbrīvo atmiņu.
***************************/
///Programma izveidota: 01.12.2024
///Autors: Niklāvs M. Klušs
#include <iostream>
using namespace std;
/*****************************
int summa(int masivs[], int n);
Funckija summa(masivs, n) -
atgriež visu masīva masivs elementu summu
*****************************/
int summa(int masivs[], int n){
    int summa = 0;
    for(int i=0;i<n;i++){
    summa = summa + masivs[i];
    }
    return summa;
}
/***************************
int lielakais(int* masivs, n);
Funckija lielakais(masivs, n) -
atgriež masīva masīvs lielāko elementu.
***************************/
int lielakais(int* masivs,int n){
    int lielakais = masivs[0];
    for(int i=1;i<n;i++){
        if(masivs[i] > lielakais){
            lielakais = masivs[i];
        }
    }
    return lielakais;
}
/********************
void preteji(int* masivs,int n);
Funkcija preteji(masivs, n) -
izdrukā doto masīvu masivs pretējā secībā.
********************/
void preteji(int* masivs,int n){
    cout << "Masiva elementi preteja seciba: ";
    for(int i=n-1;i>=0;i--){
        cout << masivs[i] << " ";
    }
    cout << endl;
}



int main(){
int ok;
do{
int n; ///Masīva izmērs
cout << "Ludzu ievadiet masiva izmeru n(n>0): " << endl;
cin >> n;
while (n < 1) {
    cout << "Ludzu ievadiet masiva izmeru, kas ir lielaks par 0!" << endl;
    cin >> n;
}
int* masivs;
masivs = new int [n];
cout << "Ludzu ievadiet masiva elementus lidz n(n>=0)" << endl;
for(int i=0;i<n;i++){
    cout << i+1 << ". elements:";
    cin >> masivs[i];
    while(masivs[i] <0) {
        cout << "Ludzu masiva ievadiet tikai naturalus skaitlus lielakus vai vienadus ar nulli!" << endl;
        cin >> masivs[i];
    }
 }

cout << "Masiva elementu summa ir " << summa(masivs, n) << endl;
cout << "Masiva lielakais elements ir: " << lielakais(masivs, n) << endl;
preteji(masivs, n);

delete [] masivs;


cout << "Turpinat(1) vai beigt(0)?" << endl;
cin >> ok;
while (ok != 0 && ok != 1){
    cout << "Ludzu ievadiet viens(1), lai turpinatu un nulle(0)?" << endl;
    cin >> ok;
}
} while(ok == 1);
}
