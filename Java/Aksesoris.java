class Aksesoris extends Petshop{
    private String Jenis;
    private String Bahan;
    private String Warna;

    public Aksesoris(int id, String nama_produk, String kategori_produk, int harga, String jenis, String bahan, String warna) {
        super(id, nama_produk, kategori_produk, harga);
        this.Jenis = jenis;
        this.Bahan = bahan;
        this.Warna = warna;
    }

	// Setter
    void setJenis(String jenis){this.Jenis = jenis;}
	void setBahan(String bahan){this.Bahan = bahan;}
	void setWarna(String warna){this.Warna = warna;}

	// Getter
    String getJenis(){return Jenis;}
    String getBahan(){return Bahan;}
    String getWarna(){return Warna;}
}