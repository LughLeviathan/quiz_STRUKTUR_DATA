#include <iostream>
using namespace std;

int main() {
    int data[5];
    int top = -1;
    int pilih, nilai;

    do {
        cout << "\n===== Menu Stack =====\n";
        cout << "1. Push 2. Pop 3. peek 4.display 5.exit\n";
        cout << "choose operation: ";
        cin >> pilih;

        if(pilih == 1) {
            if (top == 4 ) cout << "stack overflow\n";
            else {
               cout <<  "enter value\n";
               cin >> nilai;
               top++;
               data[top] = nilai;
               cout << nilai << "inserted successfuly\n";
            }

        }
        else if (pilih == 2 ) {
            if (top == 1 ) cout  << "stack overflow\n";
            else {
                cout << data[top] << "removed\n";
                top--;  
            }

        }
        else if (pilih == 3) {
            if (top == -1 ) cout << "stack kosong \n";
            else cout << "top element: " << data[top] << endl;


        }

        else if (pilih == 4) {
            for (int i = top; i >= 0; i++ ) cout << data[i] << " ";
        }
    }while (pilih != 5);
}