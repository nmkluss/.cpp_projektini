/******************
Programma C++,
kas sareizina divas matricas.
Lietotājs ievada matricu rindu un kolonnu lielumu.
Programmai jānodrošina, ka
1. matricas kolonnas == 2. matricas rindām.
******************/
#include <iostream>
using namespace std;
/******************
void reizinajums(int **matrica1, int **matrica2, int **matrica3);
Funkcija reizinajums(matrica1, matrica2, matrica3) -
sareizina matricu1 ar matricu2
un saglabā to matricā matrica3
******************/
void reizinajums(int **matrica1, int **matrica2, int **matrica3, const int rindas1, const int kolonnas2, const int kopigi){
for(int i = 0; i < rindas1; i++){
    for(int j = 0; j < kolonnas2; j++){
        matrica3[i][j] = 0;
        for(int k = 0; k < kopigi; k++){
            matrica3[i][j] += matrica1[i][k] * matrica2[k][j];
        }
    }
}
}
int main(){
cout << "2 matricu reizinajums!" << endl;
int rindas1;
int kopigi; //Izmantošu kā 1. matricas kolonnas un 2. matricas rindu izmeru.
int kolonnas2;
cout << "Ievadiet pirmas matricas rindu lielumu!" << endl;
cin >> rindas1;
cout << "Ievadiet pirmas matricas kolonnas lielumu, kas bus ari otras matricas rindu lielums!" << endl;
cin >> kopigi;
cout << "Ievadiet otras matricas kolonnu lielumu!" << endl;
cin >> kolonnas2;
//Izveidoju matricas
int** matrica1 = new int*[rindas1];
for (int i = 0; i < rindas1; i++) {
            matrica1[i] = new int[kopigi];
}
int** matrica2 = new int*[kopigi];
for (int i = 0; i < kopigi; i++) {
            matrica2[i] = new int[kolonnas2];
}
int** matrica3 = new int*[rindas1];
for (int i = 0; i < rindas1; i++) {
            matrica3[i] = new int[kolonnas2];
}
//Matricu aizpildīšana
//Pirmā
cout << "Ludzu ievadiet pirmas matricas elementus!" << endl;
for(int i=0;i<rindas1;i++){
    for(int j=0;j<kopigi;j++){
        cout << i+1 << ". rindas " << j+1 << ". kolonnas elements: ";
        cin >> matrica1[i][j];
    }
}
cout << "Sadi izskatas pirma matrica! " << endl;
    for (int i = 0; i < rindas1; i++) {
        for (int j = 0; j < kopigi; j++) {
            cout << matrica1[i][j] << "\t";
        }
        cout << endl;
    }
//Otrā
cout << "Ludzu ievadiet otras matricas elementus!" << endl;
for(int i=0;i<kopigi;i++){
    for(int j=0;j<kolonnas2;j++){
        cout << i+1 << ". rindas " << j+1 << ". kolonnas elements: ";
        cin >> matrica2[i][j];
    }
}
cout << "Sadi izskatas otra matrica! " << endl;
    for (int i = 0; i < kopigi; i++) {
        for (int j = 0; j < kolonnas2; j++) {
            cout << matrica2[i][j] << "\t";
        }
        cout << endl;
    }
//Matricu reizināšana
reizinajums(matrica1, matrica2, matrica3, rindas1, kolonnas2, kopigi);
//Rezultāts
cout << "Matricu reizinajums ir: " << endl;
    for(int i = 0; i < rindas1; i++){
        for(int j = 0; j < kolonnas2; j++){
            cout << matrica3[i][j] << "\t";
        }
        cout << endl;
    }
//Atbrīvoju atmiņu
for (int i = 0; i < rindas1; i++) {
            delete[] matrica1[i];
        }
        delete[] matrica1;
for (int i = 0; i < kopigi; i++) {
            delete[] matrica2[i];
        }
        delete[] matrica2;
for (int i = 0; i < rindas1; i++) {
            delete[] matrica3[i];
        }
        delete[] matrica3;
return 0;
}
