#include <iostream>
using namespace std;
//bu program ms derleyicisinde calismadi
//devcpp de calisiyor.
int main(int argc, char** argv) {
	
	string isim;
	
	cout << "isminizi giriniz: ";
	cin >> isim;
	
	cout << "Merhaba " << isim <<"."<<endl;
	system("pause");
	return 0;
}

_____________

//asagidaki programlarin akis diyagramini cizdik
//sozde kodunu yazdik.

#include <iostream>
using namespace std;
int main() {
	
	int i=1;
	
	while(i<=5){
		cout << i<< " ";
		i++;
	}
		
	return 0;
}


// sozde kodu:
// 1. BAŞLA
// 2. i=1
// 3. i<=5 İSE GİT 5
// 4. GİT 8
// 5. YAZ i
// 6. i=i+1
// 7. GİT 3
// 8. BİTİR

_____________

#include <iostream>
using namespace std;

int main() {
	int sayi;
	cin >> sayi;
	if(sayi>5)
		cout << "buyuk\n";
	else
		cout << "kucuk esit\n";
	
	
	system("pause");	
	return 0;
}
//dikkat sinifta yapilan calismadan
//biraz farkli.
//bu sözde kod yapilan kodlamaya daha uygun.
// sozde kodu:
// 1. BAŞLA
// 2. GİR sayi
// 3. sayi<5 DEĞİL İSE GİT 6
// 4. YAZ buyuk
// 5. GİT 7 
// 6. YAZ kucuk esit
// 7. BİTİR
_____________

#include <iostream>
using namespace std;

int main() {
	int n,i=1,fakt=1;
	cout <<"fakt alinacak sayi: ";
	cin >> n;
	while(i<=n){
		fakt=fakt*i;
		i++;
	}
	cout << "fakt: " << fakt<<"\n";
	
	system("pause");	
	return 0;
}

// dikkat sinifta yapilan calismadan
// biraz farkli.
// bu sözde kod yapilan kodlamaya daha uygun.
// sozde kodu:
// 1. BAŞLA
// 2. i=1, fakt=1
// 3. GİR n
// 4. i<=n DEĞİL İSE GİT 7
// 5. fakt=fakt*i, i=i+1
// 6. GİT 4
// 7. YAZ fakt
// 8. BİTİR

// değişkenlerin tablosu: n=5 girilmis olsun
// | şimdiki durum | sonraki durum |
// | fakt  |  i    |  fakt |  i    |     
//  -------------------------------
// |   1   |  1     |   1  |  2    |
// |   1   |  2     |   2  |  3    |
// |   2   |  3     |   6  |  4    | 
// |   6   |  4     |  24  |  5    |
// |  24   |  5     | 120  |  6    |
// | 120   |  6     |      |       |
