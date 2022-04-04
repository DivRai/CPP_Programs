#include<iostream>
using namespace std;

int main(){

    int l, b;
    int a, a1;

    cout << "Enter the Length: ";
    cin >> l;
    cout << "Enter the breadth: ";
    cin >> b;

    a = l * b;

    for (int i = 1; i <= l && i <= b; i++){
        if (l % i == 0 && b % i == 0){

            a1 = a / (i * i);
        }
    }
    cout << "Minimum possible number of square pieces are: " << a1 << endl;

    return 0;
}

