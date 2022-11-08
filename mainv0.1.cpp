#include <iostream>
#include <iomanip>
#include <string>
#include <math.h>
using namespace std;
class studentas{
    private:
    string vardas;
    string pavarde;
    int namudarbai[15];
    int namudarbukiekis;
    int egzaminas;
    double vidurkis;
    public:
    void input(){
        
        cout << "Iveskite varda" << endl;
        cin >> vardas;
        cout << "Iveskite pavarde" << endl;
        cin >> pavarde;
        cout << "Iveskite namu darbu kieki" << endl;
        cin >> namudarbukiekis;
        cout << "Iveskite namu darbu pazymi" << endl;
        for (int i = 0; i < namudarbukiekis; i++)
		    {
			  cout << "Iveskite pazymi" << endl;
			  cin >> namudarbai[i];
		    }
        cout << "Iveskite egzamino rezultata" << endl;
        cin >> egzaminas;
    }
        void vidurkioskaiciavimas(){
          double suma=0;
          for (int i = 0; i < namudarbukiekis; i++)
          suma += namudarbai[i];
          vidurkis = suma / namudarbukiekis;
        }
//     //1. copy constructor
//         studentas(const studentas& that) : vardas(that.vardas), pavarde(that.pavarde), namudarbai(that.namudarbai), egzaminas(that.egzaminas)
// {
// }

// // 2. copy assignment operator
//         studentas& operator=(const studentas& that)
// {
//         vardas = that.vardas;
//         pavarde = that.pavarde;
//         namudarbai = that.namudarbai;
//         egzaminas = that.egzaminas; 
//         return *this;
// }

// //3. destructor
//     ~studentas()
//     {
//     }

void output() {
		cout << left << setw(15) << "Pavardė" << "|" << setw(15) << "Vardas" << "|" << setw(15) << "Galutinis (Vid.)" << endl;
		cout <<"____________________________________________________" << endl;
		cout << left << setw(15) << pavarde << "|" << setw(15) << vardas <<"|" << setw(15) << egzaminas*0.6+0.4*vidurkis << endl;
}
};

int main(){
  studentas studentas;
  studentas.input();
  studentas.vidurkioskaiciavimas();
  studentas.output();
  


    return 0;
}
