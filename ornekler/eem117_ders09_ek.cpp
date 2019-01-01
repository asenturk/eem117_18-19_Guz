//parametresiz fonksiyon örneği
#include <iostream>

using namespace std;

void girhesaplaveyaz(void)
{
int a, b,c;    
cout<<"birinci sayiyi giriniz:";
cin>>a;    
cout<<"ikinci sayiyi giriniz:";
cin>>b;

c=a+b;
cout<<c;    
}

int main (void)
{ 
girhesaplaveyaz();           
system("pause");
return 1;
}


___________


//parametre alan fonksiyon örneği
#include <iostream>

using namespace std;

void alhesaplaveyaz(int s1,int s2)
{
int c;
c=s1+s2;
cout<<c;    
}

int main (void)
{ 
int a, b;   
cout<<"birinci sayiyi giriniz:";
cin>>a;    
cout<<"ikinci sayiyi giriniz:";
cin>>b;

alhesaplaveyaz(a,b);
            
system("pause");
return 1;
}


___________


//parametre alan ve sonuç gönderen fonksiyon örneği
#include <iostream>

using namespace std;

int alhesaplavegonder(int s1,int s2)
{
int sonuc;
sonuc=s1+s2;
return sonuc;   
}

int main (void)
{ 
int a, b,c;   
cout<<"birinci sayiyi giriniz:";
cin>>a;    
cout<<"ikinci sayiyi giriniz:";
cin>>b;

//fonksiyondan gelen sonucun bir değişkene alınarak kullanılması
c=alhesaplavegonder(a,b);
cout<<c;          

//fonksiyondan gelen sonucun doğrudan ekrana yazdırılması
cout<<alhesaplavegonder(a,b);
   
system("pause");
return 1;
}

