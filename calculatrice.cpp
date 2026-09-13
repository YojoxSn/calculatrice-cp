#include <iostream> //
using namespace std;

double nombre1, nombre2, nombre3;
char operation;

int main() {
int quantite;
cout << "Combien de nombres veux-tu entrer ?";
cin >> quantite;

double nombre;
double resultat = 0;
 
cout << "Quelle operation voulait vous faire ?";
cin >> operation;


    if (operation == '+') {
        resultat =0;
         for (int i = 0; i < quantite; i++) {
            cout << "Entre un nombre";
            cin >> nombre; 
            resultat = resultat + nombre;       
    }
    cout << "Le resultat est : " << resultat << endl;
}

    if (operation == '-') {
          resultat =0;
         for (int i = 0; i < quantite; i++) {
            cout << "Entre un nombre";
            cin >> nombre; 
            resultat = resultat - nombre;  
         }
         cout << "le resultat est : " <<resultat << endl;
    }

    if (operation == '*') {
          resultat =1;
         for (int i = 0; i < quantite; i++) {
            cout << "Entre un nombre";
            cin >> nombre; 
            resultat = resultat * nombre;  
         }
         cout << "le resultat est : " <<resultat << endl;
    }

    if (operation == '/') {
        resultat =1;
         for (int i = 0; i < quantite; i++) {
            cout << "Entre un nombre";
            cin >> nombre; 
            resultat = resultat / nombre; 
         }
        cout << "le resultat est : " <<resultat << endl;
    }


    return 0;
}
