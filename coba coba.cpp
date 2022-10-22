#include <string>
#include <iostream>

using namespace std;
int main()
{
	string kata;
	
	cout << "Masukan Sembarang Kata = ";
	getline(cin, kata);
	
	string katatitip=kata;
	reverse(kata.begin(), kata.end());
	
	if (katatitip==kata) {
		cout<<"Kata yang Anda masukkan memiliki balikan yang sama!"<<endl;
		return 0;
	}
	cout << "Hasil Perubahan = " << kata;
}