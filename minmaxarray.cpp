/********************
Izveidot programmu,
kas statiskā masīvā masivs[20] ar maksimalo elementu skaitu 20,
kur elements ir naturals skaitlis.
nosaka maksimalu un minimalo elementu.
Izdrukat sos skaitlus.
*********************/
///Programma izveidota 28.11.2024
///Autors: Niklāvs M. Klušs
#include <iostream>
using namespace std;
int main(){
int ok;
do{
int n;
int masivs[20];
cout << "Ludzu izveleties masiva lielumu intervala no 1-20: " << endl;
cin >> n;
while(n<1 || n>20) {
    cout << "Ludzu izvelieties lielumu intervala no viens(1) lidz divdesmit(20)!" << endl;
    cin >>n;
}

cout << "Ludzu ievadiet masiva elementus, ka naturalus skaitlus(n>0): " << endl;
for(int i=0;i<n;i++){
    cout << i+1 << ". elements: ";
    cin >> masivs[i];
    while(masivs[i]<0) {
        cout << "Ludzu ievadiet naturalu skaitli, kur N>0: " << endl;
        cin >> masivs[i];
    }
}
int max = masivs[0];
int min = masivs[0];
for(int j=0;j<n;j++){
    if(masivs[j]>max){
        max = masivs[j];
    }
    if(masivs[j]<min){
        min = masivs[j];
    }
}
cout << "Masiva lielakais elemnts ir: " << max << " un masiva mazakais elements ir: " << min << endl;

cout << "Turpinat(1) vai beigt(0)?" << endl;
cin >> ok;
while(ok !=1 &&  ok !=0){
    cout << "Ludzu ievadiet viens(1), lai turpinatu un nulle(0), lai beigtu!" << endl;
    cin >> ok;
}
}while(ok == 1);
}

