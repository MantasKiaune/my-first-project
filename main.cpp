#include <iostream>
#include <cstddef>
#include <cstring>
using namespace std;
class studentas{
    private:
    string vardas;
    string pavarde;
    int namudarbai[];
    int egzaminas;
    double vidurkis;
    public:
    void output{
        cout << "Iveskite varda" << endl;
        cin >> vardas;
        cout << "Iveskite pavarde" << endl;
        cin >> pavarde;
        cout << "Iveskite namu darbu kieki" << endl;
        cin >> namudarbai;
        cout << "Iveskite egzamino rezultata" << endl;
        cin >> egzaminas;
    }
    int main(){


    return 0;
}
