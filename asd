/********************************
*Имя:Солдатов Владимир Сергеевич*
*Вариант:26                     *
*********************************/

#include <iostream>
using namespace std;

int main() {
    
    const int n = 5;
    double G[n] = {10.0, 20.0, 30.0, 40.0, 50.0};
    double H[n] = {2.0, 4.0, 5.0, 8.0, 10.0};
    double F[n];
    
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
    
    cout << "\n\n" << sumG;
    cout << "\nH:"  << sumH;
    cout << "\nF:" << sumF;
    
    return 0;
}
