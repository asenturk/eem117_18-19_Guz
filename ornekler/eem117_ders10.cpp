#include <iostream>

using namespace std;

int main(int argc, char** argv) {	
	
	char a[]="a bir karakter dizisidir";
	int i,j;
	char b;
	
	cout << a << endl;
	cout << "anin 3. karakteri: " << a[3] << endl;
	
	//diziyi karakter karakter yazdirma
	for(i=0; a[i] != '\0'; i++)
		cout << a[i];
	cout << endl;
	
	//diziyi tersten yazdirma
	for(j=i-1; j>=0; j--)
		cout << a[j];
	cout << endl;
	
	//dizinin 3 ile 8. karakterleri arasini yazdirma
	for(i=3;i<=8;i++)
		cout << a[i];
	cout << endl;
	
	//karakter dizisinin cift numarali karakterleri
	for(i=0; a[i]!='\0'; i=i+2)
		cout << a[i];
	cout << endl;
	
	
	//karakter dizisinin elemanlarinin ascii kodlari
	for(i=0;a[i]!='\0';i++)
		cout << (int) a[i] << " ";
	cout << endl;
	
	
	for (i=0;a[i]!='\0';i++){
		//b=a[i]-32;
		b=a[i]-('a'-'A');
		cout << b;
	}
	cout << endl;
		
	system("pause");
	return 1;
}


______________


#include <iostream>

using namespace std;

int main(int argc, char** argv) {	
	
	char a[]="A 1 karakter dizisidir";
	int i,j;
	char b;
	
	cout << a << endl;
	
	for (i=0;a[i]!='\0';i++){
		//b=a[i]-32;
		b=a[i]-('a'-'A');
		cout << b;
	}
	cout << endl;
	
	for (i=0;a[i]!='\0';i++){
		if(a[i] >= 'a' && a[i] <= 'z') 
			b=a[i]-('a'-'A');
		else
			b=a[i];
		cout << b;
	}
	cout << endl;
		
	system("pause");
	return 1;
}


______________


#include <iostream>

using namespace std;

int main(int argc, char** argv) {	
	
	char a[100];
	
	a[0]='a';
	a[1]='\0';
	
	cout << a << endl;
		
	system("pause");
	return 1;
}


______________


#include <iostream>
#include <cstring>

using namespace std;

int main(int argc, char** argv) {	
	
	char a[100]="birinci karakter dizisi";
	char b[100]="ikinci karakter dizisi";
	char c[200]; //birlestirilmis karakter dizisi
	int i,j;
	for(i=0;a[i]!='\0';i++)
		c[i]=a[i];
	
	for(j=0;b[j]!='\0';j++ , i++)
		c[i]=b[j];
		
	c[i]='\0';
	cout << c << endl;
	
	system("pause");
	return 1;
}


______________


#include <iostream>
#include <cstring> // <string.h>

using namespace std;

int main(int argc, char** argv) {	
	
	char a[100]="birinci karakter dizisi";
	char b[100], c[200];
	// a dizisinin uzunlugu
	cout << strlen(a) << endl;
	//a dizini b dizisine kopyalayan fonksiyon
	strcpy(b,a);
	cout << "b dizisinin yeni hali: " << b << endl;
	
	system("pause");
	return 1;
}


______________


#include <iostream>
#include <cstring> // <string.h>

using namespace std;

int main(int argc, char** argv) {	
	
	char a[10]="abdca";
	char b[20]="abdc";
	int ayni=1;
	int i;
	
	for(i=0;a[i]!='\0' && b[i]!='\0'; i++)
		if(a[i]!=b[i]){
			ayni=0;
			break;
		}
	
	if(ayni==1)
		cout << "karakter dizileri ayni" <<endl;
	else
		cout << "karakter dizileri farkli" <<endl;	
	
	system("pause");
	return 1;
}


______________


#include <iostream>
#include <cstring> // <string.h>

using namespace std;

int main(int argc, char** argv) {	
	
	char a[10]="abdca";
	char b[20]="abdc";
	int ayni=1;
	int i;
	
	for(i=0;a[i]!='\0' && b[i]!='\0'; i++)
		if(a[i]!=b[i]){
			ayni=0;
			break;
		}
	
	if(a[i]!=b[i]){
		ayni=0;
	}
	
	if(ayni==1)
		cout << "karakter dizileri ayni" <<endl;
	else
		cout << "karakter dizileri farkli" <<endl;
	
	system("pause");
	return 1;
}


______________


#include <iostream>
#include <cstring> // <string.h>

using namespace std;

int main(int argc, char** argv) {	
	
	char a[10]="abdc";
	char b[20]="abdc";
	int ayni=1;
	int i;
	
	for(i=0;a[i]!='\0' || b[i]!='\0'; i++)
		if(a[i]!=b[i]){
			ayni=0;
			break;
		}
	
	if(ayni==1)
		cout << "karakter dizileri ayni" <<endl;
	else
		cout << "karakter dizileri farkli" <<endl;
		
	system("pause");
	return 1;
}


______________


#include <iostream>
#include <cstring> // <string.h>

using namespace std;

int main(int argc, char** argv) {	
	
	char a[10]="abdc";
	char b[20]="abdc";
	
	if(strcmp(a,b)==0)
		cout << "karakter dizileri ayni" <<endl;
	else
		cout << "karakter dizileri farkli" <<endl;	
	
	system("pause");
	return 1;
}


______________


#include <iostream>
#include <cstring> // <string.h>

using namespace std;

int main(int argc, char** argv) {	
	
	char a[30]="abc";
	char b[30]="xyz";

	strcat(a,b);
	cout << a << endl;
	
	strcat(a,b);
	cout << a << endl;
	
	system("pause");
	return 1;
}


______________


#include <iostream>
#include <cstring> // <string.h>

using namespace std;

int main(int argc, char** argv) {	
	
	char a[30]="abc";
	char b[30]="xyz";
	char c[30]="";
	
	strcat(c,a);
	strcat(c,b);
	cout << a << endl;
	
	strcpy(a,c);
	strcat(a,c);
	cout << a << endl;
		
	system("pause");
	return 1;
}


______________


#include <iostream>
#include <string> // cpp string kutuphanesi

using namespace std;

int main(int argc, char** argv) {	
	
	string a="baslangic atamasi";
	string b="ikinci_string";
	cout << a << endl;
	
	cin >> a;
	cout << a<<endl;

	cout << "a'nin uzunlugu: " << a.size() << endl;
	
	a=a+b;
	
	cout << a << endl;
	
	system("pause");
	return 1;
}


______________


#include <iostream>
#include <string> // cpp string kutuphanesi

using namespace std;

int main(int argc, char** argv) {	
	
	string a, b;
	
	cin >> a >> b;
	if(a==b) // bu islemi cstring tarziyla yapamiyoruz.
		cout << "girilen ifadeler ayni";
	else
		cout << "girilen ifadeler farkli";
	
	system("pause");
	return 1;
}


______________


#include <iostream>
#include <string> // cpp string kutuphanesi

using namespace std;

int main(int argc, char** argv) {	
	
	string a;
	int i;
	
	cin >> a;
	
	for (i=0;i<a.size();i++){
		cout << a.at(i);
		if(i<a.size()-1)
			cout << "-";
		}
	
	cout << endl;
	
	system("pause");
	return 1;
}


______________


#include <iostream>
#include <string> // cpp string kutuphanesi

using namespace std;

int main(int argc, char** argv) {	
	
	string a;
	// aralarinda bosluk olan ifadeler girebilmek icin
	//ornek: buraya bir kac kelime yazalim
	getline(cin, a, '\n');
	
	cout << "girilen ifade: " << a <<endl;
	cout << "girilen ifadenin uzunlugu: " << a.size() << endl;
	
	system("pause");
	return 1;
}


______________


#include <iostream>
#include <string> // cpp string kutuphanesi

using namespace std;

int main(int argc, char** argv) {	
	
	string a;
	int i, toplam=0;
	getline(cin, a, '\n');
	//girilen ifadedeki harf olmayan karakterlerin sayisi
	
	for(i=0;i<a.size();i++)
		if( !((a.at(i)>='a' && a.at(i)<='z') ||
			  (a.at(i)>='A' && a.at(i)<='Z'))){
			  	toplam++;
			  }
	cout << "harf olmayan karakterlerin sayisi: " << toplam << endl;
	system("pause");
	return 1;
}
