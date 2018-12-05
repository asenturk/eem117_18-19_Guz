#include <iostream>
using namespace std;
int main(int argc, char** argv) {

	float toplam=0, ortalama, sayi;
	int i=1;
	cin >> sayi;
	while(sayi>0){
		i++;
		toplam += sayi;
		cin >> sayi;
	}	
	ortalama=toplam/i;
	cout<<"sayilarin toplami: "<<toplam<<"\nortalamasi: "<<ortalama<<endl;
	
	system("pause");

	return 0;
}


_______________


#include <iostream>
using namespace std;
int main(int argc, char** argv) {
	float toplam=0, ortalama, sayi;
	int i=0;
	//cin >> sayi;
	do{
		cin >> sayi;
		toplam += sayi;
		i++;
	}while(sayi>0);
	ortalama=toplam/(i-1);
	cout<<"sayilarin toplami: "<<toplam<<"\nortalamasi: "<<ortalama<<endl;
	
	system("pause");

	return 0;
}


_______________



#include <iostream>
using namespace std;
int main(int argc, char** argv) {
	
	int a, b;
	int i=1, ebob=1;
	cin >> a >> b;
	while(i<=a && i<=b){
		if(a%i==0 && b%i==0)
			ebob=i;
		i++;
	}
	cout << a << " ve " << b << " sayilarinin ebobu: " << ebob<<endl;
	
	system("pause");

	return 0;
}


_______________


#include <iostream>
using namespace std;
int main(int argc, char** argv) {
	//bu ornek degiskenlerin durumlarinin incelenmesini gerektirmektedir.	
	int i,j,a,b,c;
	cin >> a >> b;
	
	for(i=1;i<a;i++){
		for(j=1;j<b;j+=3){
			// cout <<"i: " <<i <<" j: "<< j << endl;
			c=(i+5)*(j*j);
			i++;
			if(c>100)
				break;
			cout << c <<" "; //\n
		}
	}
	cout << "\n";
	
	system("pause");

	return 0;
}


_______________


#include <iostream>
using namespace std;
int main(int argc, char** argv) {
	//bu ornek degiskenlerin durumlarinin incelenmesini gerektirmektedir.	
	int i;
	for(i=0;i<30;i++){
		if(i%3==0 || i%5==0)
			continue;
		
		cout << i << " ";
	}

	system("pause");

	return 0;
}


_______________


#include <iostream>
using namespace std;
int main(int argc, char** argv) {
	//bu ornek degiskenlerin durumlarinin incelenmesini gerektirmektedir.	
	int i=0;
	for(;;){//sonsuz dongu
		if(i>=30)
			break;
			i++;
		if(i%3==0 || i%5==0)
			continue;
		cout << i << " ";
	}

	system("pause");

	return 0;
}


_______________


#include <iostream>
using namespace std;
int main(int argc, char** argv) {
	
	int i;
	unsigned char a;
	for(i=0;i<256;i++){
		a=i;
		cout << i<< ":"<< a << "\n";
		
	}
		
	
	
	system("pause");

	return 0;
}


_______________


#include <iostream>
using namespace std;
int main(int argc, char** argv) {
	unsigned char i;
	for(i='a';i<='z';i++){
		cout << i << " ";
		
	}	
	system("pause");

	return 0;
}


_______________


#include <iostream>
using namespace std;
int main(int argc, char** argv) {
	unsigned char i,j;
	for(i='z';i>='a';i=i-1){
		j=i-('a'-'A');
		cout << i << j <<" ";	
	}
	
	system("pause");

	return 0;
}


