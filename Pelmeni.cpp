#include <iostream>

using namespace std;

int main()
{
    setlocale(0, "");
    float p, t, at, qp, qt, qf, Qp, Qt, Qf;
    float np, nf, nt;
    cout << "Введите суточную выроботку цеха ";
    cin >> p;
    cout << "Введите время смены ";
    cin >> t;
    cout << "Введите массовую долю теста ";
    cin >> at;
    cout << "Введите производительность пельменного аппарата ";
    cin >> qp;
    cout << "Введите производительность тестомесителья ";
    cin >> qt;
    cout << "Введите производительность куттер ";
    cin >> qf;
    ///
    Qp = p / (2 * t);
    np = Qp / qp;
    ///
    Qt = at * Qp;
    nt = Qt / qt;
    Qf = (1 - at) * Qp;
    nf = Qf / qf;

    cout << "Количество машин которые делаю продукт " << np<<endl;
    cout << "Количество машин которые делает фарш " << nf<<endl;
    cout << "Количество машин которые делает тесто " << nt<<endl;
}