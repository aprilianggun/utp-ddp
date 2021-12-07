#include<iostream>
using namespace std;

int main(){
	//kursus
	int gelombang;
	int uangpendaftaran;
	int lamakursus;
	int biayakursus;
	int i;
	
	cout<<"gelombang        = "; cin>>gelombang;
	cout<<"biaya pendaftaran= "; cin>>uangpendaftaran;
	cout<<"biaya kursus     = "; cin>>biayakursus;
	cout<<"lama kursus      = "; cin>>lamakursus;
	
cout<<"==============================PERCABANGAN==================================="<<endl;
	if(gelombang=1){
		cout<<"yang harus dibayarkan untuk mendaftar= "<<(uangpendaftaran-(uangpendaftaran*50/100))<<endl;
	}else if(gelombang=2){
		cout<<"yang harus dibayarkan untuk mendaftar= "<<(uangpendaftaran-(uangpendaftaran*25/100))<<endl;
	}else if(gelombang=3){
		cout<<"yang harus dibayarkan untuk mendaftar= "<<(uangpendaftaran)<<endl;
	}
cout<<"===============================PERULANGAN==================================="<<endl;
for(i=1; i<=lamakursus; i++){
	biayakursus+=10000;
	cout<<"cicilan biaya bulan ke-= "<<(biayakursus/lamakursus)<<endl;
}
}
