#include <iostream>
#include <map>
using namespace std;
int main(){
//Gramatu saraksts
typedef map<string,string> biblioteka;
typedef biblioteka::iterator pozicija;
biblioteka gramatas;
gramatas["Finansu instrumenti 2"] = "V. Praude";
gramatas["Autoantivielas un autoimunas slimibas"] = "Inese Mihailove";
gramatas["Mikroekonomika"] = "Roberts Skapars";
gramatas["Latinu valoda"] = "Lija Cerfasa, Tamara Fomina, Pavils Zicans";
gramatas["Our Lives in Their Portfolios"] = "Brett Christophers";
gramatas["Megre un zinotajs"] = "Zorzs Simenons";
gramatas["Matematikas rokasgramata skoleniem"] = "Janis Mencis, Arturs Sika";
gramatas["Flirts ar patiesibu"] = "Marcis Auzins";
gramatas["Latviesu-Vacu sarunu vardnica"] = "K. Sejeja, B. Veinerte";
gramatas["How to Become a Straight-A Stundent"] = "Cal Newport";
gramatas["A Midsummer Nights Dream"] = "William Shakespeare";
gramatas["Aizraujosi par elektroniku"] = "J. Sedovs";
gramatas["Nolaupitais katriona"] = "R. Stivensons";
gramatas["Etide Purpura Tonos"] = "A. Konans Doils";
gramatas["Wealth of nations"] = "Adam Smith";
gramatas["Karamaksla"] = "Sundzi";
gramatas["Divainas pasaules neizbegaminba"] = "D. Danins";
gramatas["Kriminalistika simt gadu"] = "J. Torvalds";
for(auto &pozicija : gramatas)
    cout << pozicija.first << " - " << pozicija.second << endl;
cout << endl;

//Gramatu meklesana
cout << "Ievadiet meklejamo gramatu!" << endl;
string s;
getline(cin, s);
pozicija meklet = gramatas.find(s);
if(meklet != gramatas.end()){
    cout <<"Gramata " <<  meklet->first << " - " << meklet->second << "ir pieejama!" << endl;
} else {
    cout << "Gramata nav atrasta!" << endl;
}

//Gramatu pievienosana
char izvele;
do{
    cout << "Vai Jus velaties pievienot gramatu? 'Y' - ja un 'N' - ne."  << endl;
    cin >> izvele;
    cin.ignore();

    if(izvele == 'Y' || izvele == 'y'){
        string autors, nosaukums;
        cout << "Ievadiet gramatas nosaukumu! " << endl;
        getline(cin, nosaukums);
        cout << "Ievadiet gramatas autoru! " << endl;
        getline(cin, autors);
        gramatas[nosaukums] == autors;
        cout << "Gramata pievienota!" << endl;
    } else if(izvele != 'n' || izvele != 'N') {
        cout << "Ludzu izvelaties vai nu Y, ka ja vai N, ka ne!" << endl;
    }
} while(izvele == 'Y' || izvele == 'y');

//Jauna izdruka
cout << endl;
cout << "Jaunais gramatu saraksts." << endl;
for(auto &pozicija : gramatas)
    cout << pozicija.first << " - " << pozicija.second << endl;
cout << endl;

return 0;
}
