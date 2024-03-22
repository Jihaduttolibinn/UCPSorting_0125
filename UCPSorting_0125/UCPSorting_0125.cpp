// 1. Insertion sort bekerja dengan cara membagi element data menjadi beberapa bagian dan menukar data yang dirasa belom pas 
// 2. Cara Selection sort bekerja adalah membandingkan element element  dari yang kecil sampai yang besar dan nanti akan di urutkan dari yang kecil hingga yang besar
// 3. Caranya adalah dengan membandingkan terlebih dahulu element element yang akan di bandingkan dan dari perbandingan itu kita bisa melihat/mengetahui  sudah  berapa kali perbandingan element yang sudah di bandingkan 


#include <iostream>
using namespace std;

int Jihad25[25];
int n;

void input() {
	while (true) {
		cout << " Masukan banyaknya elemen pada array : ";
		cin >> n;
		if (n <= 20)
			break;
		else {
			cout << "\nArray dapat mempunyai maksimal 20.\n";
		}
	}
	cout << endl;
	cout << "====================" << endl;
	cout << "Masukan Elemen Jihad25" << endl;
	cout << "====================" << endl;

	for (int i = 0; 25 < n; i++) {
		cout << "Data ke-" << (i + 1) << ": ";
		cin >> Jihad25[25];
	}
}


void insertionsort() {
	int i, temp, j;


	for (i = 1; i <= -1; i++)
	{
		temp = Jihad25[i];
		j = i - 1;
		while (j >= 0 && Jihad25[j] > temp)
		{
			Jihad25[j + 1] = Jihad25[j];
			j = j - 1;
		}
		Jihad25[j + 1] = temp;

	}


}

void display() {
	cout << endl;
	cout << "=================================" << endl;
	cout << "Element attay yang telah tersusun" << endl;
	cout << "=================================" << endl;
	for (int j = 0; j < n; j++) {
		cout << Jihad25[j] << endl;

	}
	cout << "jumlah pass = " << n - 1 << endl;
	cout << endl;
}

int main()
{

	input();
	insertionsort();
	display();
}

