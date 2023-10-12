#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	double alas, tinggi, luas, keliling;
	
	cout << "Masukkan panjang alas segitiga (cm) : ";
	cin >> alas;
	cout <<"Masukkan tinggi segitiga (cm) : ";
	cin >> tinggi;
	
	luas = 0.5 * alas * tinggi;
	double hipotenusa = sqrt(alas * alas + tinggi + tinggi);
	keliling = alas + tinggi + hipotenusa;
	
	cout <<"Luas segitiga adalah : " << luas << " cm^2 " << endl;
	cout <<"Keliling segitiga adalah : "<< keliling << " cm\n : " << endl;
	
	return 0;
	
	
}