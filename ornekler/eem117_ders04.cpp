// bu dersimizde bit byte 
// 2 tabaninda sayi (binary, kisa ifadesi bin)
// 16 tabaninda sayi (hexadecimal, kisa ifadesi hex
// işaretli sayı, işaretsiz sayı (signed, unsigned)
// 2'nin tumleyeni sistemi
// iki tabaninda negatif-pozitif sayilar nasil temsil edilir
// int tur degiskenin bellekte ne kadar yer kapladigi
// short int turunun ne oldugu ve bellekte ne kadar yer kapladigi
// unsigned int ile int arasindaki fark
// int ile maksimum yazilabilecek sayinin ne oldugu 
// gibi konulari isledik.


#include <iostream>
using namespace std;

int main(int argc, char** argv) {
	
	int sayi;
	unsigned int sayi2;
	unsigned short int sayi3;
	unsigned short int sonuc;
	short int sayi4;
	short int sonuc2;
	
	sayi2=0xffffffff;
	sayi1=0x7fffffff; //int icin yazilabilecek maks. pozitif sayi
	cout << sayi1 << endl;
	sayi1=0x80000000; //int icin yazilabilecek min. negatif sayi
	cout << sayi1 << endl;
	cout<< sayi2 << endl;
	
	sayi3=0xffff;
	cout<<sayi3<<endl;
	sonuc = sayi3 + 1;
	cout<<sonuc<<endl;
	
	sayi4= 0xffff;
	cout<<sayi4<<endl;
	
	sonuc2 = sayi4 - (-1);
	cout<<sonuc2<<endl;
	
	system("pause");
	return 0;
}
