/****************************************
Reizrekina viktorina.
Programma, kas liek lietotajam izpildit
reizrekina darbibas no 1x1 lidz 5x5
un atgriez pareizi izpildito piemeru skaitu.
Programma ir atkartoti izpildama,
neizejot no command prompt.
****************************************/
///Programma izveidota: 24.11.2024
///Autors: Niklāvs Markus Klušs (ideja no chatGPT)
#include <iostream>
using namespace std;
int main(){
cout << "Sveicinats! Veic so reizrekina viktorinu, lai noskaidrotu savas prasmes! Piemeri bus no 1x1 līdz 5x5." << endl;
//Izveidoju ciklu, lai programmu varetu atkartoti izpildit.
int ok;
do{
int atbilde;
int pareizi = 0;
//Divi cikli ar skaititaju, kas ar katru iteraciju apskata visus piemerus,
//sanem lietotaja atbildi un parbauda atbildi.
for(int i=1;i<=5;i++){
    for(int j=1;j<=5;j++) {
        cout << "Cik ir " << i << "x" << j << " ?" << endl;
          while (!(cin >> atbilde)) {
                    cout << "Ludzu ievadiet skaitli!" << endl;
                    cin.clear();
                    cin.ignore(1000, '\n'); }
        if(atbilde == i*j) {
            cout << "Pareizi!" << endl;
            pareizi++;
        } else {
            cout << "Nepareizi!" << "Pareiza atbilde ir: " << i*j << endl;
        }
    }
}
//Gala rezultata izdruka.
if(pareizi==25) {
    cout << "Labi pastradats! Viss ir pareizi " << pareizi << "/25" << endl;
} else if(pareizi<25 && pareizi>=20) {
    cout << "Vel ir kur tiekties! Turpini vingrinaties! " << pareizi << "/25" << endl;
} else {
    cout << "Varetu but labak! Noteikti ir ko sasniegt, turpini vingrinaties! " << pareizi<< "/25" << endl;
}
cout << "Turpinat(1) vai beigt(0)?" << endl;
cin >> ok;
while (ok != 1 && ok != 0) {
    cout << "Ludzu ievadiet 1, lai turpinatu un 0, lai beigtu!" << endl;
    cin >> ok;
}
if (ok==0) {
    cout << "Visu labu!" << endl;
}
}while(ok==1);
}
/*******************************Testa plāns***************



