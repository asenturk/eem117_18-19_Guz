#include <iostream>
#include <conio.h> // getch ve getchar komutlarý icin

using namespace std;
int main(int argc, char** argv) {
	
	cout << "getch getchar fonksiyonlari"<< endl;
	
	//system("pause"); // yerine getch kullaniliyor.
	getch();
	return 0;
}


_________________


#include <iostream>
#include <conio.h> // getch ve getchar komutlarý icin

using namespace std;
int main(int argc, char** argv) {
	
	char a;
	a=getch();
	cout << "--- atanan deger -----"<< endl;
	cout << a << endl;
	
	getch();
	return 0;
}


_________________


#include <iostream>
#include <conio.h> // getch ve getchar komutlarý icin

using namespace std;
int main(int argc, char** argv) {
	
	char a;
	
	do{
		a=getch();
		cout << (int)a << " ";
	}while(a != 13 ); //enter'a basilmasinin kontrolu
	
	
	getch();
	return 0;
}


_________________


#include <iostream>
#include <conio.h> // getch ve getchar komutlarý icin

using namespace std;
int main(int argc, char** argv) {
	
	char a;
	a=getchar();
	cout << "girilen karakterin ascii degeri: " << (int) a << endl;
	
	getch();
	return 0;
}


_________________


#include <iostream>
#include <conio.h> // getch ve getchar komutlarý icin
#include <ctime> //veya #include <time.h>

using namespace std;
int main(int argc, char** argv) {
	
	int sene;
	time_t ham_zaman; // raw_time
	time(&ham_zaman);
	
	cout << "simdiki zaman:" << ctime(&ham_zaman)<<endl;
	cout << "1 Ocak 1970'den itibaren gecen saniye:" << endl;
	cout << "zaman: " << time(NULL)<<endl;
	
	sene= 1970+time(NULL)/( 365 * 24 * 60 * 60 );
	
	cout << sene << endl;
	
	getch();
	return 0;
}


_________________


#include <iostream>
#include <conio.h> // getch ve getchar komutlarý icin
#include <ctime> // time.h
#include <stdlib.h> //rand(), srand() fonksiyonu icin
using namespace std;
int main(int argc, char** argv) {
	
	int a;
	
	srand(2); //rastgele sayiyi beslemek icin
	
	a=rand(); // random: rastgele
	cout << a << endl;
	a=rand();
	cout << a << endl;
	a=rand();
	cout << a << endl;
	a=rand();
	cout << a << endl;
	
	getch();
	return 0;
}


_________________


#include <iostream>
#include <conio.h> // getch ve getchar komutlarý icin
#include <ctime> // time.h
#include <stdlib.h>
using namespace std;
int main(int argc, char** argv) {
	
	int a;
	int seed; 
	int sene;
	//time_t ham_zaman; // raw_time
	//time(&ham_zaman);
	
	seed = time(NULL);
	cout << seed << endl;
	
	srand(seed); //rastgele sayiyi beslemek icin
	
	a=rand(); // random: rastgele
	cout << a << endl;
	a=rand();
	cout << a << endl;
	a=rand();
	cout << a << endl;
	a=rand();
	cout << a << endl;
	
	getch();
	return 0;
}


_________________


#include <iostream>
#include <conio.h> 
#include <ctime> 
#include <stdlib.h>
using namespace std;
int main(int argc, char** argv) {
	
	int rastgele_sayi;
	int seed;
	int tahmin;
	
	srand(time(NULL)); //rastgele sayiyi beslemek icin
	
	rastgele_sayi=rand(); // random: rastgele
	
	rastgele_sayi = rastgele_sayi % 10;
	cout << "0 ile 9 arasinda rastgele bir sayiyi" << endl;
	cout << "tahmin ediniz: ";
	do{
		cin >> tahmin;
		if(tahmin>rastgele_sayi)
			cout << "kucuk bir sayi giriniz"<<endl;
		else if(tahmin<rastgele_sayi)
			cout << "buyuk bir sayi giriniz"<<endl;
		else{
			cout << "tebrikler " << rastgele_sayi << " sayisini dogru tahmin ettiniz" << endl;
			break;	
		}	
	}while(1);
	
	getch();
	return 0;
}


_________________


#include <iostream>
#include <conio.h> 
#include <ctime>
#include <stdlib.h>
using namespace std;
int main(int argc, char** argv) {
	
	int rastgele_sayi;
	int seed;
	int tahmin;
	
	srand(time(NULL)); //rastgele sayiyi beslemek icin
	
	rastgele_sayi=rand(); // random: rastgele
	
	rastgele_sayi = rastgele_sayi % 7;
	cout << "20 ile 27 arasinda rastgele bir sayiyi" << endl;
	cout << rastgele_sayi+20 << endl;
	
	getch();
	return 0;
}


_________________


#include <iostream>
#include <conio.h> 
using namespace std;
int main(int argc, char** argv) {
	
	int arasinav_notlari[10];
	arasinav_notlari[0]=10;
	arasinav_notlari[1]=50;
	arasinav_notlari[2]=30;
	
	cout << "1. ogrencinin notu: " << arasinav_notlari[0]<<endl;
	cout << "2. ogrencinin notu: " << arasinav_notlari[1]<<endl;
	cout << "3. ogrencinin notu: " << arasinav_notlari[2]<<endl;
	
	getch();
	return 0;
}


_________________


#include <iostream>
#include <conio.h> 
using namespace std;
int main(int argc, char** argv) {
	
	int arasinav_notlari[10];
	int i;
	float toplam, ortalama;
	for(i=0;i<10;i++){
		cout << i+1 << ". ogrencinin notu: ";
		cin >> arasinav_notlari[i];
	}
	
	for(i=0;i<10;i++){
		toplam += arasinav_notlari[i];
	}
	ortalama=toplam/10;
	
	cout << "notlarin ortalamasi: " << ortalama <<endl;
	
	while(1){
		cout << "1-10 arasinda notunu ogrenmek istediginiz ogrencinin sirasini giriniz:" << endl;
		cout << "cikmak icin negatif sayi giriniz"<<endl;
		cin >> i;
		if(i<0) break;
		cout << i <<". ogrencinin notu: " << arasinav_notlari[i-1] << endl;	
	}
	
	getch();
	return 0;
}


_________________


#include <iostream>
#include <conio.h> 
using namespace std;
int main(int argc, char** argv) {
	
	int arasinav_notlari[10];
	int i;
	float toplam, ortalama;
	for(i=0;i<10;i++){
		cout << i+1 << ". ogrencinin notu: ";
		cin >> arasinav_notlari[i];
	}
	
	for(i=0;i<10;i++){
		toplam += arasinav_notlari[i];
	}
	ortalama=toplam/10;
	
	cout << "notlarin ortalamasi: " << ortalama <<endl;
	
	while(1){
		cout << "1-10 arasinda notunu ogrenmek istediginiz ogrencinin sirasini giriniz:" << endl;
		cout << "cikmak icin negatif sayi giriniz"<<endl;
		cin >> i;
		if(i<0) break;
		cout << i <<". ogrencinin notu: " << arasinav_notlari[i-1] << endl;	
	}
	
	getch();
	return 0;
}


_________________


#include <iostream>
#include <conio.h>
#include <stdio.h>  
using namespace std;

int main(){
   int sicaklik[7];             //7 adet integer tipli elemana sahip sicaklik dizisi tanýmlandý
// int sicaklik[]={18,17,19,21,17,16,19};   //7 adet integer tipli elemana sahip sicaklik dizisini ilk deðerlerini atayarak tanýmlama

   int j;
   for(j=0; j<7; j++)          //7 adet sýcaklýk verisi girildi
		{
		cout << j<<". gunun sicakligini giriniz: ";
		cin >> sicaklik[j];               //dizi elemanlarýna sýra ile eriþim
		}
      
    cout<<"Girdiginiz sicakliklar:\n";
   	for(j=0; j<7; j++)              //7 adet sýcaklýðý listele
    	cout << "Girdiginiz "<<j<<". gun sicakligi:" << sicaklik[j] << endl;

    int toplamsicaklik=0;
   	for(j=0; j<7; j++)              //7 adet sýcaklýðý topla
    	toplamsicaklik+=sicaklik[j];
      
	cout << "Girdiginiz "<<j<<" gunluk sicakligin toplami:" << toplamsicaklik << endl;
	cout << "Girdiginiz "<<j<<" gunluk sicakligin ortalamasi:" << toplamsicaklik/j << endl;
	
	sicaklik[3]=50; 
	int aratoplam=sicaklik[0]+sicaklik[3]+sicaklik[5];//istenilen dizi elemanlarýna eriþim
	cout << "0., 3. ve 5. gunlerin sicaklikleri toplami:"<< aratoplam<< endl;            

      
   getch();
   return 0;
}


______________
   
   
#include <iostream>
#include <conio.h> // getch ve getchar komutlarý icin
#include <cstring> //string.h // c dilinin string kutuphanesi
#include <string> //c++ dilinin string kutuphanesi
using namespace std;
int main(int argc, char** argv) {
	
	// #define MAX 80
	const int MAX = 80; //MAX'ýn degeri sonra degistirilemez.
	
	// c tipi string tanimlamasi
	char str1[] = "BILGInin beste dordu ILGIdir.";
	char str2[MAX];
	
	strcpy(str2, str1);
	
	cout << "kopyalama sonucu str2'nin icerigi: ";
	cout << str2 << endl;
	// str2=str1; // bu ifade yanlis
	
	
	
	///---------------------------///
	// C++ tarzi string tanimlamalari:
	///---------------------------///
	cout << endl << endl;
	
	string cumle = "BILGInin beste dordu ILGIdir.";
	
	cout << "uzunluk: " << cumle.size() << endl;
	cout << "beste ifadesinin basladigi yer: " << cumle.find("beste")<<endl;
	
	cout << "ilk kucuk harfin gectigi yer: " << cumle.find_first_of("aeiou")<<endl;
	cout << "BILGnaeiou harflerin olmadigi ilk karakterin yeri: "
										<< cumle.find_first_not_of("BILGnaeiou") <<endl;
										
	//string nesnesinin replace(): degistirmek, insert(): araya eklemek, size(): uzunluk, 
	// append(): sona eklemek, find(): bulmak, substr(): alt string, erase(): silmek gibi fonksiyonlarý vardýr.
	
	string s1("Ey Ogul! Agac yas iken egilir.");
	string s2("genc");
	string s3("Unutma! ");
	
	cout << "s1 in baslangi ifadesi: " << s1 <<endl;
	
	s1.erase(0,9); //0. karakterden itibaren 9 karakter sil
	cout << "s1 in silme islemi sonucu: " << s1<<endl;
	
	// Agac yas iken egilir
	s1.replace(5, 3, "genc"); //5. karakterden itibaren 3 karakteri sil
	//yerine "genc" ifadesini yaz.
	cout << "degistirme islemi sonucu: " << s1<<endl;
	
	s1.insert(0,  s3);
	cout << "ekleme islemi sonucu: " << s1<<endl;
	
	// ifadenin sonundaki noktayý silin ! yapýn.
	s1.erase(s1.size()-1,1);
	cout << "silme islemi sonucu: " << s1<<endl;
	
	//appand: sona ekleme
	s1.append("!");
	cout << "ekleme islemi sonucu: " << s1<<endl;
	
	//1. boslugun yerini bulalim	
	cout << "1. boslugun yeri: " <<s1.find(" ") << endl;
	
	int x=s1.find(" ");
	while(x<s1.size()){
		s1.replace(x,1,"*");
		x=s1.find(" ");
	}
	cout << s1 << endl;
	
	
	string ad, soyad;
	char a;
	cout << "adinizi soyadinizi giriniz: ";
	cin >> ad >> soyad;
	string ifadeler;
	a=getche(); // bir karakter almak icin
	cout << endl;
	ifadeler= ad + soyad + a;
	cout << ifadeler << endl;
	
	
	getch();
	return 0;
}


_________________


#include <iostream>
#include <conio.h> // getch ve getchar komutlarý icin
#include <cstring> //string.h // c dilinin string kutuphanesi
#include <string> //c++ dilinin string kutuphanesi
using namespace std;
int main(int argc, char** argv) {
		
	string kelime1, kelime2;
	
	cin >> kelime1 >> kelime2;
	
	//ascci degerlerine gore karsilastirir
	if(kelime1 > kelime2)
		cout << "EVET" <<endl;
	else
		cout << "HAYIR" <<endl;
		
	
	getch();
	return 0;
}


_________________


#include <iostream>
#include <conio.h> // getch ve getchar komutlarý icin
#include <cstring> //string.h // c dilinin string kutuphanesi
#include <string> //c++ dilinin string kutuphanesi
using namespace std;
int main(int argc, char** argv) {
			
	string sifre("elektronik");
	string giris;
	cout << "sifreyi giriniz: ";
	cin >> giris;
	
	if(sifre == giris)
		cout << "girisiniz onaylandi." << endl;
	else
		cout << "yanlis sifre girdiniz." << endl;

	
	if(sifre.compare(giris) == 0) //karsilastirma fonksiyon eger karsilastirma dogru ise 0 degerini verir.
		cout << "girisiniz onaylandi." << endl;
	else
		cout << "yanlis sifre girdiniz." << endl;
	
	cout << "sifrenizisin 3. karakterinden itibaren 4 karakterini giriniz: ";
	cin >> giris; //ektr girmesi gerekiyor.
	if(sifre.compare(2,4, giris) == 0) //karsilastirma fonksiyon eger karsilastirma dogru ise 0 degerini verir.
		cout << "girisiniz onaylandi." << endl;
	else
		cout << "yanlis sifre girdiniz." << endl;
	
	getch();
	return 0;
}

