#include <iostream>
using namespace std;

int main(void){
	int maas, fazla_mesai;
	cout << "Maas: ";
	cin >> maas;
	cout << "Fazla mesai saati: ";
	cin >> fazla_mesai;
	if (fazla_mesai <= 10) //bu ifade fazla mesai 10'dan kucukse demek
		maas = maas + fazla_mesai * 20;
	else if (fazla_mesai > 10 && fazla_mesai < 20)
		maas = maas + 25 * fazla_mesai;
	else
		maas = maas + 30 * fazla_mesai;

	cout << "Toplam alinacak: " << maas<< endl;
	
	system("pause");
	return 1;
}

______________


#include <iostream>
using namespace std;

int main(void){
	int maas, fazla_mesai, mesai_ucreti;
	cout << "Maas: ";
	cin >> maas;
	cout << "Fazla mesai saati: ";
	cin >> fazla_mesai;
	if (fazla_mesai <= 10){ //bu ifade fazla mesai 10'dan kucukse demek
		mesai_ucreti = fazla_mesai * 20;
		maas = maas + mesai_ucreti;
	}
	else if (fazla_mesai > 10 && fazla_mesai < 20){
		mesai_ucreti = fazla_mesai * 25;
		maas = maas + mesai_ucreti;
	}
	else{
		mesai_ucreti = fazla_mesai * 30;
		maas = maas + mesai_ucreti;
	}

	cout << "Toplam alinacak: " << maas<< endl;

	system("pause");
	return 1;
}

______________


#include <iostream>
using namespace std;

int main(void){
	float alan, kenar, yukseklik, yaricap;
	int secenek;
	cout << "Hangi tur alan hesaplamasi "<<endl;
	cout << "daire:1, kare:2, dikdortgen:3 yazýnýz: ";
	cin >> secenek;

	if (secenek == 1){
		cout << "Yaricap: ";
		cin >> yaricap;
		alan = 3.14 * yaricap*yaricap;
	}else if (secenek ==2){
		cout << "karenin kenarini giriniz: ";
		cin >> kenar;
		alan = kenar*kenar;
	}else if (secenek==3){
		cout << "diktortgenin kenarlarini giriniz: ";
		cin >> kenar >> yukseklik;
		alan = kenar*yukseklik;
	}else
		cout << "yanlis bir secim yaptiniz";
	cout << "Alan: " << alan << endl;

	system("pause");
	return 1;
}

______________


#include <iostream>
using namespace std;
int main(void){
	
	int a=10;
	cout << a << endl;
	a = a + 1;
	cout << a << endl;
	a += 1;
	cout << a << endl;
	a++;
	cout << a << endl;
	++a;
	a++;
	cout << a++ << endl;
	cout << a++ << endl;
	cout << ++a << endl;

	system("pause");
	return 1;
}

______________


#include <iostream>
using namespace std;
int main(void){
	
	int a=10, b=20;
	
	a += ++a + b++;
	
	cout << a << endl;
	cout << b << endl;
	

	system("pause");
	return 1;
}

______________


#include <iostream>
using namespace std;
int main(void){
	
	int a = 10, b = 3, c;
	
	c = a / b;

	cout << c << endl;

	system("pause");
	return 1;
}

______________


#include <iostream>
using namespace std;
int main(void){
	
	int a = 10, b = 3;
	float c;
	c = a / b;

	cout << c << endl;

	system("pause");
	return 1;
}

______________


#include <iostream>
using namespace std;
int main(void){
	
	int a = 10 ;
	float c, b=3;
	c = a / b;

	cout << c << endl;

	system("pause");
	return 1;
}

______________


#include <iostream>
using namespace std;
int main(void){
	
	int a = 10, b=3 ;
	float c;
	c = (a+0.0) / b;

	cout << c << endl;

	system("pause");
	return 1;
}

______________


#include <iostream>
using namespace std;
int main(void){
	
	int a = 10, b=20, c=30 ;

	cout << (a<b) << endl;
	cout << (a>b) << endl;
	cout << (b<a<c) << endl;
	cout << (10+a<b) << endl;
	cout << (a<b && a>c) << endl;
	cout << (a<b || a>c) << endl;
	cout << !(a<b || a>c) << endl;

	system("pause");
	return 1;
}