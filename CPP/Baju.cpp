#include "Aksesoris.cpp"

class Baju: public Aksesoris{
	private:
		string Untuk;
		string Size;
		string Merk;
		
	public:
		Baju(){
			
		}
		
		Baju(string untuk, char size, string merk){
			Untuk = untuk;
			Size = size;
			Merk = merk;
		}
		
		// Setter
		void setUntuk(string untuk){Untuk = untuk;}
		void setSize(string size){Size = size;}
		void setMerk(string merk){Merk = merk;}
		
		// Getter
		string getUntuk(){return Untuk;}
		string getSize(){return Size;}
		string getMerk(){return Merk;}
		
		// Fungsi utk menambahkan item
		void addBaju(int id, string nama_produk, string kategori_produk, double harga, string jenis, string bahan, string warna, string untuk, string size, string merk){
			setId(id);
			setNamaProduk(nama_produk);
			setKategoriProduk(kategori_produk);
			setHarga(harga);
			setJenis(jenis);
			setBahan(bahan);
			setWarna(warna);
			setUntuk(untuk);
			setSize(size);
			setMerk(merk);
		}
		
		~Baju(){
			
		}
};