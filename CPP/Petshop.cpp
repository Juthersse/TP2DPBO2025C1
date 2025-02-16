#include <iostream>
#include <string>

using namespace std;

class Petshop{
	private:
		int ID;
		string Nama_Produk;
		string Kategori_Produk;
		double Harga;
		
	public:
		// Konstruktor (untuk menambah objek)
		Petshop(){
		}
		
		Petshop(int id, string nama_produk, string kategori_produk, double harga){
			ID = id;
			Nama_Produk = nama_produk;
			Kategori_Produk = kategori_produk;
			Harga = harga;
		}
		
		// Setter (untuk mengubah data objek & menambahkan data baru jika kosong)
		void setId(int id){ID = id;}
		void setNamaProduk(string nama_produk){Nama_Produk = nama_produk;}
		void setKategoriProduk(string kategori_produk){Kategori_Produk = kategori_produk;}
		void setHarga(double harga){Harga = harga;}
		
		// Getter (untuk mencari data yang diinginkan berdasarkan produk)
		int getId(){return ID;}
		string getNamaProduk(){return Nama_Produk;}
		string getKategoriProduk(){return Kategori_Produk;}
		double getHarga(){return Harga;}
		
		// Fungsi-fungsi wajib
		// Menampilkan data produk
		void display(){
			cout << "ID: " << ID << endl;
			cout << "Nama Produk: " << Nama_Produk << endl;
			cout << "Kategori Produk: " << Kategori_Produk << endl;
			cout << "Harga: Rp." << Harga << endl;
			cout << endl;
		}
		
		// Menghapus data yang diinginkan
		void reset(int num){
			switch(num){
				case 1:						// reset(1) untuk menghapus id
					ID = 0;
					cout << "ID berhasil dihapus" << endl << endl;
					break;
				case 2:						// reset(2) untuk menghapus nama produk
					Nama_Produk = "";
					cout << "Nama produk berhasil dihapus" << endl << endl;
					break;
				case 3:						// reset(3) untuk menghapus kategori produk
					Kategori_Produk = "";
					cout << "Kategori produk berhasil dihapus" << endl << endl;
					break;
				case 4:						// reset(4) untuk menghapus harga
					Harga = 0.0;
					cout << "Harga berhasil dihapus" << endl << endl;
					break;
				case 5:						// reset(5) untuk menghapus semua data dalam objek
					ID = 0;
					Nama_Produk = "";
					Kategori_Produk = "";
					Harga = 0.0;
					cout << "Semua data objek berhasil dihapus" << endl << endl;
					break;
			}
		}
		
		// Destruktor
		~Petshop(){
		}
};