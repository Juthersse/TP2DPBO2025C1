class Baju extends Aksesoris {
    private String Untuk;
    private String Size;
    private String Merk;

    public Baju(int id, String nama_produk, String kategori_produk, int harga, String jenis, String bahan, String warna, String untuk, String size, String merk) {
        super(id, nama_produk, kategori_produk, harga, jenis, bahan, warna);
        this.Untuk = untuk;
        this.Size = size;
        this.Merk = merk;
    }

	// Setter
    void setUntuk(String untuk){this.Untuk = untuk;}
    void setSize(String size){this.Size = size;}
    void setMerk(String merk){this.Merk = merk;}

	// Getter
    String getUntuk(){return Untuk;}
    String getSize(){return Size;}
    String getMerk(){return Merk;}

    public void addBaju(int id, String namaProduk, String kategoriProduk, int harga, String jenis, String bahan, String warna, String untuk, String size, String merk) {
        setId(id);
        setNamaProduk(namaProduk);
        setKategoriProduk(kategoriProduk);
        setHarga(harga);
        setJenis(jenis);
        setBahan(bahan);
        setWarna(warna);
        setUntuk(untuk);
        setSize(size);
        setMerk(merk);
    }
}