#include<iostream>
#include<conio.h>
#include<string>

using namespace std;

class buku{ //buku sebagai class
	public:
		//atribut-atribut yang ada 
		string judul;
		string pengarang;
		int cetakan;
		int tahun;
};

int main() {
	int tc;
	
	buku novel; //novel sebagai sebuah object
	
	cout<<"testcase: ";
	cin>>tc;
	
	for(int i=0;i<tc;i++) {
		cin.ignore(); //untuk mengabaikan enter
		cout<<"Judul: ";getline(cin,novel.judul);
		cout<<"pengarang: ";getline(cin,novel.pengarang);
		//getline digunakan untuk membaca inputan dalam 1 baris
		cout<<"cetakan ke: ";cin>>novel.cetakan;
		cout<<"tahun: ";cin>>novel.tahun;
		
		//menampilkan hasil
		cout<<novel.judul<<endl;
		cout<<novel.pengarang<<endl;
		cout<<novel.cetakan<<endl;
		cout<<novel.cetakan<<endl<<endl;
		
	}
	getch();
}
