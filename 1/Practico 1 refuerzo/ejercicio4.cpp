#include <iostream>
#include <cmath>
using namespace std;

int main() {
    char simbolo = '$';
    float numero = 475.250000;
    string total;
    total = simbolo + to_string(numero);
    cout<< total <<endl;
    return 0;
}