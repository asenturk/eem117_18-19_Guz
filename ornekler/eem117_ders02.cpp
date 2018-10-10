#include <iostream>
using namespace std;
int main(void){
	//bir dairenin alanýný hesaplayan program
	//dairenin yarýçapý kullanýcýdan alýnacak.
	//int r , alan;
	float r, alan;
	cout << "Dairenin yaricapini giriniz: ";
	cin >> r;
	alan = 3.14 * r * r;
	cout << "yaricapi " << r << " olan dairenin alani: " << alan << endl;

	system("pause");
	return 1;
}

______________


#include <iostream>
using namespace std;
int main(void){
	
	// int a, b, c;
	float a, b, c;
	cout << "3 sayi giriniz: ";
	// cin >> a;
	// cin >> b;
	// cin >> c;
	cin >> a >> b >> c;
	cout << "girdiginiz 3 sayinin ortalamasi: " << (a + b + c) / 3 << endl;

	system("pause");
	return 1;
}

______________


#include <iostream>
using namespace std;
int main(void){
	
	bool sonuc;
	sonuc = true;
	cout << sonuc << endl;
	sonuc = false;
	cout << sonuc << endl;
	sonuc = 5 < 10;
	cout << sonuc << endl;
	sonuc = 10 > 3;
	cout << sonuc << endl;
	sonuc = 10 > 20;
	cout << sonuc << endl;
	sonuc = 10 > 10;
	cout << sonuc << endl;
	sonuc = 10 >= 10; // buyuk esit >=
	cout << sonuc << endl;
	sonuc = 10 <= 10; // kucuk esit <=
	cout << sonuc << endl;
	sonuc = 7 == 10; //7 10'a eþit mi? sonuc 1 veya 0 cikar
	cout << sonuc << endl;
	sonuc = 7 != 10; // 7 10'a eþit deðil mi?
	cout << sonuc << endl;
	system("pause");
	return 1;
}

______________


#include <iostream>
using namespace std;
int main(void){
	
	int a, b;
	
	cout << "iki say giriniz: ";
	cin >> a>> b;
		
	cout <<   (a>b) * (a-b)     << endl;

	system("pause");
	return 1;
}

______________


#include <iostream>
using namespace std;
int main(void){
	
	int a, b;
	
	cout << "iki say giriniz: ";
	cin >> a>> b;
	
	if (a > b)
		cout << (a - b) << endl;
	else
		cout << 0 << endl;


	// cout <<   (a>b) * (a-b)     << endl;

	system("pause");
	return 1;
}

______________


#include <iostream>
using namespace std;
int main(void){
	
	int a, b;
	
	cout << "iki say giriniz: ";
	cin >> a>> b;
	
	if (a > b)
		cout << "buyuk sayi: " << a << endl;
	else
		cout << "buyuk sayi: " << b << endl;


	system("pause");
	return 1;
}

______________


#include <iostream>
using namespace std;
int main(void){
	
	int a, b, c;
	
	cout << "uc farkli sayi giriniz: ";
	cin >> a>> b >> c;
	if ( a > b)
		if (a > c)
			cout << a << endl;
		else
			cout << c << endl;
	else
		if (b>c)
			cout << b << endl;
		else
			cout << c << endl;


	system("pause");
	return 1;
}
