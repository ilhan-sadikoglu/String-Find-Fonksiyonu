#include<iostream>
#include<string>
using namespace std;
int bul(const string &text, const string& str, size_t pos) {
	int loc=-1;
	int flag = -1;

	for (int i = pos; i < text.size(); i++) {
		
		if (text[i] == str[0]) {
			flag = 0;
			for (int k = 0; k < str.size(); k++) {
				
				if (text[i+k] == str[k])
					flag++;
				if (text[i + k] == '\0')
					break;
			}

		}
		if (flag == str.size()) {
			loc = i;
			break;
		}

	}

return loc;
}

int main() {

	string text; //aranacak metin
	string str; //bulunacak kelime
	getline(cin,text);
	cin >> str;
	int pos = 0;
    int loc=bul(text,str,pos);

	cout << loc;
}