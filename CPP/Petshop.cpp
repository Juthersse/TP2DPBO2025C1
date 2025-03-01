#include <iostream>
#include <string>

using namespace std;

class Petshop{
	private:
		int ID;
		string Nama_Produk;
		string Kategori_Produk;
		int Harga;
		
	public:
		// Konstruktor (untuk menambah objek)
		Petshop(){
		}
		
		Petshop(int id, string nama_produk, string kategori_produk, int harga){
			ID = id;
			Nama_Produk = nama_produk;
			Kategori_Produk = kategori_produk;
			Harga = harga;
		}
		
		// Setter (untuk mengubah data objek & menambahkan data baru jika kosong)
		void setId(int id){ID = id;}
		void setNamaProduk(string nama_produk){Nama_Produk = nama_produk;}
		void setKategoriProduk(string kategori_produk){Kategori_Produk = kategori_produk;}
		void setHarga(int harga){Harga = harga;}
		
		// Getter (untuk mencari data yang diinginkan berdasarkan produk)
		int getId(){return ID;}
		string getNamaProduk(){return Nama_Produk;}
		string getKategoriProduk(){return Kategori_Produk;}
		int getHarga(){return Harga;}
		
		// Destruktor
		~Petshop(){
		}
};