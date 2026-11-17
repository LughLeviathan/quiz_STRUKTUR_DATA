#include <iostream>
using namespace std;

int arr[5];
int depan = 0, belakang = -1, jumlah = 0;

void enqueue( int nilai) {
    if (jumlah == 5){
        cout << "queue overflow\n";
        return;
    }
    belakang = (belakang + 1) % 5;
    arr[belakang] = nilai;
    jumlah++;

}

void dequeue() {
    if (jumlah == 0) {
        cout << "queue underflow\n";
        return;
    }
    depan = (depan + 1) % 5;
    jumlah--;
}

void display(){
    cout << "Queue: ";
    for (int i = 0; i < jumlah; i++) 
        cout << arr[(depan + i) % 5] << " ";
    cout << endl;
}

int main() {
    enqueue(10); enqueue(20);enqueue(30);  enqueue(40);enqueue(50);
    dequeue();
    dequeue();
    enqueue(60); 
    enqueue(70);
    display();
}