#include <iostream>
using namespace std;

int main(void){
	int i=0;
	cout << "1 2 3 4 .."<<endl;
	cout << "1\n2\n3\n4\n..";
	while (i<1000)
	{
		i = i + 1;
		cout << i << " ";
	}

	system("pause");
	return 1;
}

________________

#include <iostream>
using namespace std;

int main(void){
	int i=0;
	while (i<=100)
	{
		cout << i << " ";
		i = i + 2;
	}
	cout << endl;
	system("pause");
	return 1;
}

________________

#include <iostream>
using namespace std;

int main(void){
	int i=100;
	while (i>=0)
	{
		if (i%5==0 || i%7==0)
			cout << i << " ";
		i = i - 1;
	}
	cout << endl;
	system("pause");
	return 1;
}

________________

#include <iostream>
using namespace std;

int main(void){
	int i=0;
	while (i<=50)
	{
		if (!(i%3==0 || i%5==0))
			cout << i << " ";
		
		i = i + 1;
	}
	cout << endl;
	system("pause");
	return 1;
}

________________

#include <iostream>
using namespace std;

int main(void){

	float sayi, toplam=0, ortalama;
	
	cout << "Sayi gir: ";
	cin >> sayi;
	toplam = toplam + sayi;
	cout << "Sayi gir: ";
	cin >> sayi;
	toplam = toplam + sayi;
	cout << "Sayi gir: ";
	cin >> sayi;
	toplam = toplam + sayi;
	cout << "Sayi gir: ";
	cin >> sayi;
	toplam = toplam + sayi;
	cout << "Sayi gir: ";
	cin >> sayi;
	toplam = toplam + sayi;

	cout << "sayilarin toplami: " << toplam << endl;
	ortalama = toplam / 5;
	cout << "girilen sayilarin ortalamasi: " ortalama << endl;


	system("pause");
	return 1;
}

________________

#include <iostream>
using namespace std;

int main(void){

	float sayi, toplam=0, ortalama;
	int i = 0;
	
	while (i < 5){
		cout << "Sayi gir: ";
		cin >> sayi;
		toplam = toplam + sayi;
		i++;
	}
	cout << "sayilarin toplami: " << toplam << endl;
	ortalama = toplam / 5;
	cout << "girilen sayilarin ortalamasi: " << ortalama << endl;


	system("pause");
	return 1;
}

________________

#include <iostream>
using namespace std;

int main(void){
	int sayi, toplam=0, basamak;
	cout << "sayi giriniz: ";
	cin >> sayi;
	while (sayi > 0){
		basamak = sayi % 10;
		sayi = sayi / 10;
		toplam += basamak;}
	cout << "basamaklarin toplami: " << toplam << endl;

	
	system("pause");
	return 1;
}

________________

#include <iostream>
using namespace std;

int main(void){
	int sayi, bolen=2,ebb; //ebb en buyuk bolen
	bool asal = true;
	cout << "bir sayi giriniz: ";
	cin >> sayi;
	while (bolen<sayi){
		if (sayi%bolen == 0){
			asal = false;
			ebb = bolen;
		}
		bolen++;
	}
	if (asal == true)
		cout << "sayi asaldir"<<endl;
	else{
		cout << "sayi asal degildir" << endl;
		cout << "en buyuk bolen: " << ebb << endl;
	}

	system("pause");
	return 1;
}

________________

#include <iostream>
using namespace std;

int main(void){
	
	int i;

	for (i = 0; i < 10; i++)
	{
		cout << i << " ";
	}
	cout << endl;

	system("pause");
	return 1;
}