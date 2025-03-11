/**************
Programma C++,
kas ļauj lietotājam ievadīt divas 2x2 matricas.
Izmantojot funkciju saskaita tās un izvada rezultātu.
**************/
#include <iostream>
using namespace std;
/**************
void saskaitisana(int * matrica1, int * matrica2, int matrica3);
Funkcija saskaitisana(matrica1, matrica2, matrica2) -
saskaita matricas matrica1 un matrica2,
un ieraksta rezultātu matricā matrica3
**************/
void saskaitisana(int matrica1[2][2], int matrica2[2][2], int matrica3[2][2]){
for(int i=0;i<2;i++){
    for(int j=0;j<2;j++){
        matrica3[i][j] = matrica1[i][j] + matrica2[i][j];
    }
}
}
int main(){
//Matricu realizācijai izmantošu divdimensionālus masīvus.
// matrica[rinda][kolonna]
int matrica1[2][2];
int matrica2[2][2];
int matrica3[2][2];
//Pirmas matricas apstrade
cout << "Divu 2x2 matricu saskaitisana." << endl;
cout << "Ludzu ievadiet pirmas 2x2 matricas elementus! " << endl;
for(int i=0;i<2;i++){
    for(int j=0;j<2;j++){
        cout << i+1 << ". rindas " << j+1 << ". kolonnas elements: ";
        cin >> matrica1[i][j];
    }
}
cout << "Sadi izskatas pirma matrica! " << endl;
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            cout << matrica1[i][j] << " ";
        }
        cout << endl;
    }
//Otras matricas apstrade
cout << "Ludzu ievadiet otras 2x2 matricas elementus! " << endl;
for(int i=0;i<2;i++){
    for(int j=0;j<2;j++){
        cout << i+1 << ". rindas " << j+1 << ". kolonnas elements: ";
        cin >> matrica2[i][j];
    }
}
cout << "Sadi izskatas otra matrica! " << endl;
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            cout << matrica2[i][j] << " ";
        }
        cout << endl;
    }
//Matricu saskaitisana
saskaitisana(matrica1, matrica2, matrica3);
//Rezultats
cout << "Matricu summa ir:" << endl;
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            cout << matrica3[i][j] << " ";
        }
        cout << endl;
    }
return 0;
}
