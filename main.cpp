#include <iostream>
using namespace std;

int main()
{
    int N, M, res;

    cout << "Enter your base number: ";
    cin >> N;
    cout << "Enter your exponent: ";
    cin >> M;

    cout << N << " to power number: ";

    res = N;
    cout << "1, ";
    for (int i = 0; i <= M - 1; i++){
        cout << res;
        res = res * N;  
        if (i <= M -1){
            cout << ", ";
        }
    }
    

    cout << endl;

    return 0;
}
