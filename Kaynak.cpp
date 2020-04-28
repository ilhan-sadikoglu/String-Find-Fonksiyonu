#include<iostream>
#include<string>
using namespace std;
int bul(const string &text, const string& str, size_t pos) {
	int loc=-1; //konumu belirtir. İlk değeri sıfır
	int flag = -1;
	//text aranacak metin, str bulunacak metindir.
	//str yani arananın ilk harfini gördüğünde devamı uyuyor mu diye bakacak
	for (int i = pos; i < text.size(); i++) { //text stringinin tamamını tarıyor
		
		if (text[i] == str[0]) { //str 'ın ilk harfini text içinde bulunca
			flag = 0; //ilk harfi bulduğu konumdan itibaren kaç harfin str ile aynı olduğunu tutuyor
			for (int k = 0; k < str.size(); k++) { //str'ın ilk harfi ve  sonraki str kadar harfi kıyaslıyor
				
				if (text[i+k] == str[k]) //mesela ilk harfin bulunduğu konumdan 2 sonraki harf ile str'ın 3. harfi aynı ise flag 1 artar
					flag++;
				if (text[i + k] == '\0')// null görünce biter
					break;
			}

		}
		if (flag == str.size()) { //aynı harf sayısı str'ın boyutuna eşitse bulunmuş demektir
			loc = i; //bulunan konummu loc değişkenine atadık
			break;// daha aramaya gerek yok
		}

	}

return loc; // eğer bulunduysa bulunduğu konumu, bulunmadıysa ilk değeri olan -1 i döner
}

int main() {

	string text; //aranacak metin
	string str; //bulunacak kelime
	getline(cin,text); //aranacak metni aldık. Boşluk girilebileceğinden getline ile aldık
	cin >> str; //bulunacak metni girdik
	int pos = 0;
    int loc=bul(text,str,pos);

	cout << loc;
}
