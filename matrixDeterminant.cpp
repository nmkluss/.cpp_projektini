/************************
Programma C++, kas aprēķina
kvadrātiskas 2x2 vai 3x3 matricas  determinantu
lietotāja ievadītiem matricas elementiem.
************************/
#include <iostream>
using namespace std;
/************************
int determinants(int** matrica,int izvele);
Funkcija determinants(matrica, izvele) -
atgriež attiecīgās 2x2 vai 3x3 matricas determinantu.
************************/
int determinants(int matrica[][3],int izvele){
int d;
if(izvele == 2) {
    d = matrica[0][0] * matrica[1][1] - matrica[0][1] * matrica[1][0];
} else if(izvele == 3){
    d = matrica[0][0] * (matrica[1][1] * matrica[2][2] - matrica[1][2] * matrica[2][1])
          - matrica[0][1] * (matrica[1][0] * matrica[2][2] - matrica[1][2] * matrica[2][0])
          + matrica[0][2] * (matrica[1][0] * matrica[2][1] - matrica[1][1] * matrica[2][0]);
    }
return d;
}
int main(){
int izvele;
int rezultats;
cout << "Determinanta aprēkinasana 2x2 vai 3x3 kvadratiskai matricai!" << endl;
cout << "Izvelaties matricas izmerus, ievadot 2 2x2 matricai vai 3 3x3 matricai!" << endl;
cin >> izvele;
while(izvele!= 2 && izvele!= 3){
    cout << "Ludzu ievadiet 2, lai aprekinatu determinantu 2x2 matricai un 3, lai aprekinatu determinantu 3x3 matricai!" << endl;
    cin >> izvele;
}
int matrica[3][3] = {0};
if(izvele == 2){
    cout << "Ievadiet elementus matricai!" << endl;
    for(int i=0; i<izvele; i++){
        for(int j=0; j<izvele; j++){
            cout << i+1 << ". rindas " << j+1 << ". kolonnas elements: ";
            cin >> matrica[i][j];
        }
    }
    cout << "Jusu matrica!" << endl;
    for(int i=0; i<izvele; i++){
        for(int j=0; j<izvele; j++){
            cout << matrica[i][j] << " ";
        }
        cout << endl;
    }
//Determinants
rezultats = determinants(matrica, izvele);
cout << "Determinants ir " << rezultats << endl;
} else if(izvele == 3){
    cout << "Ievadiet elementus matricai!" << endl;
    for(int i=0; i<izvele; i++){
        for(int j=0; j<izvele; j++){
            cout << i+1 << ". rindas " << j+1 << ". kolonnas elements: ";
            cin >> matrica[i][j];
        }
    }
    cout << "Jusu matrica!" << endl;
    for(int i=0; i<izvele; i++){
        for(int j=0; j<izvele; j++){
            cout << matrica[i][j] << " ";
        }
        cout << endl;
    }
//Determinants
rezultats = determinants(matrica, izvele);
cout << "Determinants ir " << rezultats << endl;
} else {
 cout << "Ievades kluda!" << endl;
 return 1;
}
}
