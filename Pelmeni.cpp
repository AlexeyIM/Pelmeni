#include <iostream>

using namespace std;

int main()
{
    setlocale(0, "");
    int p, t, at, qp, qt, qf, Qp, np;
    cout << "Введите \n";
    cin >> p >> t >> at >> qp >> qt >> qf;
    ///
    Qp = p / (2 * t);
    np = Qp / qp;
    ///
    Qt = at * Qp;
    nt = Qt / qt;
    Qf = (1 - at) * Qp;
    nf = Qf / qf;

    cout << "Количество машин которые делаю продукт" << np;
    cout << "Количество машин которые делает фарш" << nf;
    cout << "Количество машин которые делает тесто" << nt;
}