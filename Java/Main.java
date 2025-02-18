class Main{
	public static void main(String[] args){
		Petshop produk = new Petshop();
		
		// Menambahkan data baru
		produk.setId(101);
		produk.setNamaProduk("Whiskas Cat Food 1kg");
		produk.setKategoriProduk("Makanan Hewan");
		produk.setHarga(25000.00);
		
		// Tampilkan data produk
		produk.display();
		
		// Edit data produk yang sudah ada
		produk.setNamaProduk("Mainan Gigitan Anjing");
		produk.setKategoriProduk("Mainan Hewan");
		produk.setHarga(10000.00);
		
		// Tampilkan data produk
		produk.display();
		
		// Hapus data produk (misalkan semua)
		produk.reset(5);
		
		// Tampilkan data produk
		produk.display();
		
		// Cari data produk (misal harga)
		System.out.println(produk.getHarga());
	}
}