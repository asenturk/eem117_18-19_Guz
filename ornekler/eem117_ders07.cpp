#include <iostream>
using namespace std;
int main(int argc, char** argv) {
	
	int i=1, toplam=0, n;
	
	cin>> n;
	while(i<=n){
		toplam=toplam+i*2;
		i++;
	}
	cout << toplam << endl;
	//ikinci yontem
	toplam=0;
	for(i=1;i<=n;i++){
		toplam += 2*i;
	}
	cout << toplam << endl;
	
	
	system("pause");
	
	return 0;
}


_______________


#include <iostream>
using namespace std;
int main(int argc, char** argv) {
	
	int i, n;
	cin >> n;
	
	for(i=1;i<=n;i++){
		cout << i*i*i << " ";
	}
	
	
	
	system("pause");
	
	return 0;
}


_______________


#include <iostream>
using namespace std;
int main(int argc, char** argv) {
	
	int x,y;
	cin >> x;
	
	if(x<0){
		for(y= -x; y>0; y=y/10)
			cout<< y%10;
		cout << "-";
	}else{
		for(y= x; y>0; y=y/10)
			cout<< y%10;
	}
	
	
	system("pause");
	
	return 0;
}


_______________


#include <iostream>
using namespace std;
int main(int argc, char** argv) {
	
	int x,y;
	cin >> x;
	y=x;
	if(x<0)
		y= -x;
	for(; y>0; y=y/10)
			cout<< y%10;
	if(x<0)
		cout << "-";
	
	system("pause");
	
	return 0;
}


_______________


#include <iostream>
using namespace std;
int main(int argc, char** argv) {
	
	int i, j;
	int n=10;
	for(i=1; i<n;i++){
		for(j=1;j<n;j++)
			cout << i*j << "\t";
		cout << endl;
	}
	
	
	system("pause");
	
	return 0;
}


_______________


#include <iostream>
using namespace std;
int main(int argc, char** argv) {
	
	int i,j;
	int n=5;
	for(i=5;i>=1;i--){
		for(j=1;j<=i;j++)
			cout << j ;
		cout << endl;
	}
	
	
	system("pause");
	
	return 0;
}


_______________


#include <iostream>
using namespace std;
int main(int argc, char** argv) {
	
	int i,j,k;
	int n=5;
	for(i=1;i<=n;i++){
		for(j=n-1;j>=i;j--) //bosluklar
			cout << " " ;
		
		for(k=i;k>=1;k--)
			cout<<k;
		
		cout << endl;
	}
	
	
	system("pause");
	
	return 0;
}


_______________

#include <iostream>
using namespace std;
int main(int argc, char** argv) {
	
	int i,j,k;
	int n=5;
	for(i=5;i>=1;i--){
		
		for(j=1;j<i;j++) //bosluklar
			cout << " " ;
		
		for(k=n-i+1; k>=1; k--)
			cout<<k;
		
		cout << endl;
	}
	
	
	system("pause");
	
	return 0;
}


