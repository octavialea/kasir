#include <iostream>

using namespace std;

int main()
{ 
 // Deklarasi variabel
 int m_cover, db, novel_bf, k_op, ens_sains;
 float Book, Stat, Disc, FixBook, FixStat;
 
 // Menampilkan daftar harga
 cout<<"\n\t\t======== Daftar barang beserta harganya ========="<<endl;
 cout<<"\t\t| Magazine Cover		: Rp 80.000,00 	|"<<endl;
 cout<<"\t\t| Drawing Book			: Rp 15.000,00 	|"<<endl;
 cout<<"\t\t| Novel	Butterflies		: Rp 100.000,00	|"<<endl;
 cout<<"\t\t| Komik One piece vol.3		: Rp 50.000,00 	|"<<endl;
 cout<<"\t\t| Ensiklopedia Sains   		: Rp 75.000,00 	|"<<endl;
 cout<<"\t\t=================================================\n"<<endl;
 
 // Memasukkan jumlah barang yang dibeli
 cout<<"Masukkan jumlah Magazine cover yang dibeli				: "; cin>>m_cover;
 cout<<"Masukkan jumlah Drawing Book yang dibeli   			 	: "; cin>>db;
 cout<<"Masukkan jumlah Novel Butterflies yang dibeli   			: "; cin>>novel_bf;
 cout<<"Masukkan jumlah Komik One Piece yang dibeli  				: "; cin>>k_op;
 cout<<"Masukkan jumlah Ensiklopedia Sains yang dibeli         			: "; cin>>ens_sains;
 cout<<"\n"<<endl;
 
 // Menampilkan customer's bill
 cout<<"\t========================== Customer's BILL =============================="<<endl;
 cout<<"\t| Jumlah \tDeskripsi \t\tHarga Satuan \tTotal Harga	|"<<endl;
 cout<<"\t| ------ \t--------- \t\t------------ \t-----------	|"<<endl;
 cout<<"\t|   "<<m_cover<<"\t\t Magazine Cover  \t   80000 \t  "<<m_cover*80000<<"\t\t|"<<endl;
 cout<<"\t|   "<<db<<"\t\t Drawing Book  \t\t   15000 \t  "<<db*15000<<"\t\t|"<<endl;
 cout<<"\t|   "<<novel_bf<<"\t\t Novel Butterflies  \t  100000 \t "<<novel_bf*100000<<"\t\t|"<<endl;
 cout<<"\t|   "<<k_op<<"\t\t Komik One Piece  \t   50000\t "<<k_op*50000<<"\t\t|"<<endl;
 cout<<"\t|   "<<ens_sains<<"\t\t Ensiklopedia Sains  \t   75000\t  "<<ens_sains*75000<<"\t\t|"<<endl;
 cout<<"\t|-----------------------------------------------------------------------|"<<endl;
 Book = m_cover*80000+db*15000+novel_bf*100000+k_op*50000+ens_sains*75000;
 Disc = 10.0/100*Book;
 cout<<"\t|\t\t\tHarga Total Buku \t: "<<Book<<"\t        |"<<endl;
 cout<<"\t|\t\t\tPotongan Harga \t\t: "<<Disc<<"\t    		|"<<endl;
 cout<<"\t|\t\t\tHarga Setelah Diskon \t: "<<Book-Disc<<"\t	|"<<endl;
 FixBook = Book-Disc;
 cout<<"\t|\t\t\t------------------------------------------------|"<<endl;
 cout<<"\t|\t\t\tTotal Pembayaran \t: "<<FixBook<<"\t    	|"<<endl;
 cout<<"\t========================================================================="<<endl;
}
