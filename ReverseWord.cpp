#include <iostream>
using namespace std;

int main() {            
    char kata[50], tumpukan[50], hasil[50];
    int top = -1;

    cout << "enter word: ";
    cin >> kata;

    int i = 0;
    while (kata[i] != '\0') {
        top++;
        tumpukan[top] = kata[i];
        i++;
    }

    int j = 0;
    while (top >= 0) {
        hasil[j] = tumpukan[top];
        top--;
        j++;
    }

    hasil[j] = '\0';
    cout << "reversed word: " << hasil << endl;
    cout << "original word: " << kata << endl;

}