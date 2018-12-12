#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;
int main(int argc, char** argv) {
	int i, n, karesi, kupu, us_4;

	cin >> n;
	cout << setw(10);
	for (i = 1; i <= n; i++) 
	{
		karesi = pow(i, 2);
		kupu = pow(i, 3);
		us_4 = pow(i, 4);

		cout <<setw(5) << i << " "<< setw(7) <<karesi <<" "<< setw(7) <<kupu <<" "<<setw(10) <<us_4 << endl;
	}
	system("pause");
	return 1;
}


_________________


#include <iostream>
#include <cmath>
#include <iomanip>
#define PI 3.1415

using namespace std;
int main(int argc, char** argv) {
	float derece, radyan;
	
	for(derece=0;derece<=360;derece=derece+10){
		radyan=(derece/180)*PI;
		cout << setw(7)<<derece<<setw(13)<<sin(radyan)<<endl; 	
	} 
		
	system("pause");
	return 1;
}


_________________


#include <iostream>
using namespace std;

int main(int argc, char** argv) {
	
	int a,n,i,sonuc=1;
	cin>>a>>n;
	
	for(i=0;i<n;i++)
		sonuc=sonuc*a;
	
	cout << a << " sayisinin " << n << ". kuvveti: " << sonuc <<endl;
		
	system("pause");
	return 1;
}


_________________


#include <iostream>
using namespace std;

int us(int a, int n){
	int i, sonuc=1;
	for(i=0;i<n;i++)
		sonuc=sonuc*a;
	return sonuc;
}

int main(int argc, char** argv) {
	
	int a,n;
	cin>>a>>n;
	
	cout << a << " sayisinin " << n << ". kuvveti: " << us(a,n) <<endl;
	
	system("pause");
	return 1;
}


_________________


#include <iostream>
using namespace std;

void bas(void){
	cout << "#######Program Baslangici######"<<endl;
	cout << "###############################"<<endl;
	cout << endl;
}
void bit(void){
	cout << endl;
	cout << "############################"<<endl;
	cout << "#######Program Sonu#########"<<endl;
}

int main(int argc, char** argv) {
	
	int a,b;
	bas();
	
	cout << "1. ve 2. sayiyi giriniz: ";
	cin>>a>>b;
	cout << "sayilarin toplami:"<< a+b<< endl;
	bit();
	
	system("pause");
	return 1;
}


_________________


#include <iostream>
using namespace std;
/// int asal_mi(int n) -> bu ifade fonksiyonun prototipi olarak adlandırılır.
/// parantez içindeki int n fonksiyonun parametre(leri || si) olara adlandırılır.
/// fonksiyonun başındaki int ifadesi fonksiyonun döndüreceği değerin tipidir.

int asal_mi(int n){
	int i;
	for(i=2;i<n;i++)
		if(n%i==0){
			return 0;
		}
	return 1;
}

int main(int argc, char** argv) {
	
	int a;
	cin >> a;
	if(asal_mi(a))
		cout<< a << " sayisi asaldir.";
	else
		cout<< a << " sayisi asal degildir.";
	
	system("pause");
	return 1;
}


_________________


#include <iostream>
using namespace std;

int asal_mi(int n){
	int i;
	for(i=2;i<n;i++)
		if(n%i==0){
			return 0;
		}
	return 1;
}

int main(int argc, char** argv) {
	
	int a,i;
	cin >> a;
	
	for(i=2;i<=a;i++){
		if(asal_mi(i))
			cout << i << " ";
	}
	
	system("pause");
	return 1;
}


_________________


#include <iostream>
using namespace std;

int asal_mi(int n){
	int i;
	for(i=2;i<n;i++)
		if(n%i==0){
			return 0;
		}
	return 1;
}

void asallar(int n){
	int i;
	for(i=2;i<=n;i++){
		if(asal_mi(i))
			cout << i << " ";
	}
}

int main(int argc, char** argv) {
	
	int a,i;
	cin >> a;
	asallar(a);
	system("pause");
	return 1;
}


_________________


#include <iostream>
using namespace std;

int a=10;

void f(int a){
	a++;
	cout << "fonksiyonun icindeki deger: " << a <<endl;
}

int main(int argc, char** argv) {
	
	cout << "a'nin degeri: " << a << endl;
	f(a);
	cout << "f fonksiyonundan sonra a'nin degeri: " << a<<endl;
	
	system("pause");
	return 1;
}


_________________


#include <iostream>
using namespace std;

int a=10;

void f(int a){
	a++;
	cout << "fonksiyonun icindeki deger: " << a <<endl;
}

int main(int argc, char** argv) {
	int a=5;	
	cout << "a'nin degeri: " << a << endl;
	f(a);
	cout << "f fonksiyonundan sonra a'nin degeri: " << a<<endl;
	
	system("pause");
	return 1;
}


_________________


#include <iostream>
using namespace std;

int uzunluk(int n){
	int i=0;
	while(n>0){
		n=n/10;
		i++;
	}
	return i;
}

int us(int a, int n){
	int i, sonuc=1;
	for(i=1;i<=n;i++)
		sonuc=sonuc*a;
	return sonuc;
}

int main(int argc, char** argv) {	
	
	int sayi=5491, l;
	
	l=uzunluk(sayi);
	cout<< sayi/(us(10,l-1)) <<"-";
	
	sayi=sayi%(us(10,l-1));
	l=uzunluk(sayi);
	cout<< sayi/(us(10,l-1)) << "-";
	
	sayi=sayi%(us(10,l-1));
	l=uzunluk(sayi);
	cout<< sayi/(us(10,l-1)) << "-";
	
	sayi=sayi%(us(10,l-1));
	l=uzunluk(sayi);
	cout<< sayi/(us(10,l-1)) <<endl;

	system("pause");
	return 1;
}


_________________


#include <iostream>
using namespace std;

int uzunluk(int n){
	int i=0;
	while(n>0){
		n=n/10;
		i++;
	}
	return i;
}

int us(int a, int n){
	int i, sonuc=1;
	for(i=1;i<=n;i++)
		sonuc=sonuc*a;
	return sonuc;
}

int main(int argc, char** argv) {	
	
	int sayi=5491, l;
	
	while(sayi>0){
		l=uzunluk(sayi);
		if(l>1)
			cout<< sayi/(us(10,l-1))<<"-";
		else
			cout<< sayi/(us(10,l-1));
		sayi=sayi%(us(10,l-1));
	}

	system("pause");
	return 1;
}
