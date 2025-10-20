/********************************
*Имя:Солдатов Владимир Сергеевич*
*Вариант:26                     *
*********************************/

#include <iostream>
#include <vector>

using namespace std;

int main() {
    const int n = 5;
    vector<double> G(n);
    vector<double> H(n);
    vector<double> F(n);

    cout << "Enter " << n << " element for massiv G:\n";
    for (int i = 0; i < n; i++) {
        cin >> G[i];
    }

    cout << "Enter " << n << " elements for  H:\n";
    for (int i = 0; i < n; i++) {
        cin >> H[i];
    }

    double sumG = 0, sumH = 0, sumF = 0;

    for (int i = 0; i < n; i++) {
        F[i] = G[i] / H[i];

        sumG += G[i];
        sumH += H[i];
        sumF += F[i];
    }

    cout << "mG:";
    for (int i = 0; i < n; i++) cout << G[i] << " ";

    cout << "\nmGH:";
    for (int i = 0; i < n; i++) cout << H[i] << " ";

    cout << "\nmF(G/H):";
    for (int i = 0; i < n; i++) cout << F[i] << " ";

    cout << "\n\nG:" << sumG;
    cout << "\nH:" << sumH;
    cout << "\nF:" << sumF;

    return 0;
}
