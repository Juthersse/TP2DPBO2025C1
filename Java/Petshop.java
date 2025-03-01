class Petshop{
    private int ID = 0;
    private String Nama_Produk = "";
    private String Kategori_Produk = "";
    private int Harga = 0;

    // Konstruktor
    public Petshop(int id, String nama_produk, String kategori_produk, int harga) {
        this.ID = id;
        this.Nama_Produk = nama_produk;
        this.Kategori_Produk = kategori_produk;
        this.Harga = harga;
    }

    // Setter
    void setId(int id){this.ID = id;}
    void setNamaProduk(String namaProduk){this.Nama_Produk = namaProduk;}
    void setKategoriProduk(String kategoriProduk){this.Kategori_Produk = kategoriProduk;}
    void setHarga(int harga){this.Harga = harga;}

    // Getter
    int getId(){return this.ID;}
    String getNamaProduk(){return this.Nama_Produk;}
    String getKategoriProduk(){return this.Kategori_Produk;}
    int getHarga(){return this.Harga;}
}
