/*************************************************************
Izveido programmu, kas
1) Liek lietotājam ievadīt statiska masīva masivs[20] izmēru no 1 līdz 20.
2) Liek lietotājam ievadīt masīva elemntus, kuri ir naturāli skaitļi >0.
3) Pārbaude ievades vērtības.
4) Atrod otru lielāko elementu masīvā un to izdrukā.
5) Ja nav otra lielākā elementa vai visi ir vienādi,
tad izdrukāt atbilstošu atbildi.
**************************************************************/
///Programma izveidota: 29.11.2024
///Autors: Niklāvs M. Klušs
#include <iostream>
using namespace std;
int main(){
int ok;
do{
int masivs[20];
int n;
//Lietotājs nosaka masīva garumu ar ievades apstrādi.
cout << "Ludzu ievadiet masiva garumu intervala no 1-20!" << endl;
cin >> n;
while (n>20 || n<1) {
    cout << "Ludzu ievadiet masiva garumu intervala no viens(1) lidz divdesmit(20)!" << endl;
    cin >> n;
}
//Lietotājs aizpilda masīvu ar naturāliem skaitļiem.
cout << "Ludzu ievadiet masiva elementus, ka naturalus skaitlus(n>0): " << endl;
for(int i=0;i<n;i++){
    cout << i+1 << ". elements: " ;
    cin >> masivs[i];
    while(masivs[i] < 0) {
        cout << "Ludzu ievadiet elementus, kas ir lielaki par nulli(0)!" << endl;
        cin >> masivs[i];
    }
}

int lielakais = masivs[0];
int otrslielakais = -1;
//Nosaku otru lielako elementu.
for(int j=1;j<n;j++){
    if(masivs[j] > lielakais) {
        otrslielakais = lielakais;
        lielakais = masivs[j];
    } else if(masivs[j] > otrslielakais && masivs[j] < lielakais) {
        otrslielakais = masivs[j];
    }

}
//Izdrukaju atbilstosu atbildi.
if(otrslielakais == -1) {
    cout << "Nav otra lielaka elementa!" << endl;
}else {
    cout << "Otrs lielakais elements ir " << otrslielakais << endl;
}

cout << "Turpinat(1) vai beigt(0)?" << endl;
cin >> ok;
while(ok != 1 && ok != 0) {
    cout << "Ludzu ievadiet viens(1), lai turpinātu vai nulle(0), lai beigtu!" << endl;
    cin >> ok;
}
} while(ok == 1);
}
