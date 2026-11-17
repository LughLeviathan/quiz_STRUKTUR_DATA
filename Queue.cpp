#include <iostream>
using namespace std;

int main () {
    int data[5];
    int depan = 0, belakang = -1;
    int pilih, nilai;

    do {
        cout << "\n===== Menu Queue =====\n";
        cout << "1. Enqueue 2. Dequeue 3. peek 4.display 5.exit\n";
        cout << "choose operation: ";
        cin >> pilih;

        if(pilih == 1) {
            if (belakang == 4 ) cout << "queue overflow\n";
            else {
               cout <<  "enter value\n";
               cin >> nilai;
               belakang++;
               data[belakang] = nilai;
               cout << nilai << "inserted successfuly\n";
            }

        }
        else if (pilih == 2 ) {
            if (depan > belakang ) cout  << "queue underflow\n";
            else {
                cout << data[depan] << "removed\n";
                depan++;  
            }

        }
        else if (pilih == 3) {
            if (depan > belakang ) cout << "queue kosong \n";
            else cout << "front element: " << data[depan] << endl;
        }
        else if (pilih == 4) {
            for (int i = depan; i <= belakang; i++ ) cout << data[i] << " ";
            cout << endl;
        }
    }while (pilih != 5);
        

}