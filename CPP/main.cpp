#include "Petshop.cpp"

int main(){
	// Membuat object
	Petshop produk;
	
	// Menambah data baru
	produk.setId(101);
	produk.setNamaProduk("Whiskas Cat Food 1kg");
	produk.setKategoriProduk("Makanan Hewan");
	produk.setHarga(25000.00);
	
	// Tampilkan produk
	produk.display();
	
	// Mengubah data yang sudah ada
	produk.setNamaProduk("Mainan Gigitan Anjing");
	produk.setKategoriProduk("Mainan Hewan");
	produk.setHarga(10000.00);
	
	// Tampilkan produk
	produk.display();
	
	// Menghapus data dari objek (misalkan harga)
	produk.reset(4);
	
	// Tampilkan produk
	produk.display();
	
	// Mencari data objek (misalkan kategori)
	cout << "Kategori Produk: " << produk.getKategoriProduk() << endl;
	
	return 0;
}