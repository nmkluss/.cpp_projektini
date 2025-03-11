/**************
Programma C++,
kas ļauj lietotājam ievadīt
patvaļīgu matricas rindu, kā arī to kolonnu izmēru,
un ievietot tās elementus.
Izmantojot funkciju saskaita tās un izvada rezultātu.
**************/
#include <iostream>
using namespace std;
/**************
int saskaitisana(int **matrica1, int **matrica2, const int rindas, const int kolonnas);
Funkcija saskaitisana(matrica1, matrica2, rindas, kolonnas) -
saskaita matricas matrica1 un matrica2,
un ieraksta rezultātu matricā matrica2
**************/
void saskaitisana(int **matrica1, int **matrica2, const int rindas, const int kolonnas){
for(int i=0;i<rindas;i++){
    for(int j=0;j<kolonnas;j++){
        matrica2[i][j] = matrica1[i][j] + matrica2[i][j];
    }
}
}
int main(){
cout << "Divu matricu saskaitisana." << endl;
//Matricu realizācijai izmantošu dinamiskus masīvus.
// matrica[rinda][kolonna]
int rindas, kolonnas;
cout << "Ludzu ievadiet matricas rindu izmeru!" << endl;
cin >> rindas;
cout << "Ludzu ievadiet matricas kolonnu izmeru!" << endl;
cin >> kolonnas;
//Izveidoju matricas
int** matrica1 = new int*[rindas];
for (int i = 0; i < rindas; i++) {
            matrica1[i] = new int[kolonnas];
}
int** matrica2 = new int*[rindas];
for (int i = 0; i < rindas; i++) {
            matrica2[i] = new int[kolonnas];
}

//Pirmas matricas apstrade
cout << "Ludzu ievadiet pirmas matricas elementus! " << endl;
for(int i=0;i<rindas;i++){
    for(int j=0;j<kolonnas;j++){
        cout << i+1 << ". rindas " << j+1 << ". kolonnas elements: ";
        cin >> matrica1[i][j];
    }
}
cout << "Sadi izskatas pirma matrica! " << endl;
    for (int i = 0; i < rindas; i++) {
        for (int j = 0; j < kolonnas; j++) {
            cout << matrica1[i][j] << " ";
        }
        cout << endl;
}
//Otras matricas apstrade
cout << "Ludzu ievadiet otras matricas elementus! " << endl;
for(int i=0;i<rindas;i++){
    for(int j=0;j<kolonnas;j++){
        cout << i+1 << ". rindas " << j+1 << ". kolonnas elements: ";
        cin >> matrica2[i][j];
    }
}
cout << "Sadi izskatas otra matrica! " << endl;
    for (int i = 0; i < rindas; i++) {
        for (int j = 0; j < kolonnas; j++) {
            cout << matrica2[i][j] << " ";
        }
        cout << endl;
}
//Matricu saskaitisana
saskaitisana(matrica1, matrica2, rindas, kolonnas);
//Rezultats
cout << "Matricu summa ir:" << endl;
    for (int i = 0; i < rindas; i++) {
        for (int j = 0; j < kolonnas; j++) {
            cout << matrica2[i][j] << " ";
        }
        cout << endl;
    }
//Atbrivoju dinamiski pieprasito atminu
for (int i = 0; i < rindas; i++) {
            delete[] matrica1[i];
        }
        delete[] matrica1;
for (int i = 0; i < rindas; i++) {
            delete[] matrica2[i];
        }
        delete[] matrica2;
return 0;
}
