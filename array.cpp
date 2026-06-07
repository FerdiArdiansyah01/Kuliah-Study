#include <iostream>
using namespace std;

int main() {

    int jumlah;
    int terkecil;
    int total = 0;
    int rata;
    int terbesar;

    // input jumlah data
    cout << "Masukkan jumlah data : ";
    cin >> jumlah;

    // array
    int data[jumlah];

    // input data
    for(int i = 0; i < jumlah; i++) {
        cout << "Masukkan Data ke " << i+1 << " : ";
        cin >> data[i];

        total = total + data[i];
    }

    // mencari nilai terbesar
    terbesar = data[0];

    for(int i = 1; i < jumlah; i++) {
        if(data[i] > terbesar) {
            terbesar = data[i];
        }
    }

	// mencari nilai terkecil
	terkecil = data [0];
	
	for(int i = 1; i < jumlah; i++) {
		if(data[i] < terkecil) {
			terkecil = data[i];
		}
	}
	
    // hitung rata-rata
    rata = total / jumlah;

    // tampilkan data
    cout << "\nTampilkan Data : ";
    for(int i = 0; i < jumlah; i++) {
        cout << data[i] << " ";
    }

    // output
    cout << "\nTotal : " << total << endl;
    cout << "Rata-rata : " << rata << endl;
    cout << "Nilai terbesar : " << terbesar;

    return 0;
}