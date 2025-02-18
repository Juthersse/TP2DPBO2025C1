class Petshop{
    private int ID = 0;
    private String Nama_Produk = "";
    private String Kategori_Produk = "";
    private double Harga = 0.0;

    // Konstruktor
    Petshop(){
    }

    // Setter
    void setId(int id){this.ID = id;}
    void setNamaProduk(String namaProduk){this.Nama_Produk = namaProduk;}
    void setKategoriProduk(String kategoriProduk){this.Kategori_Produk = kategoriProduk;}
    void setHarga(double harga){this.Harga = harga;}

    // Getter
    int getId(){return this.ID;}
    String getNamaProduk(){return this.Nama_Produk;}
    String getKategoriProduk(){return this.Kategori_Produk;}
    double getHarga(){return this.Harga;}

    // Display product details
    void display(){
        System.out.println("ID: " + getId());
        System.out.println("Nama Produk: " + getNamaProduk());
        System.out.println("Kategori Produk: " + getKategoriProduk());
        System.out.println("Harga: " + getHarga());
        System.out.println();
    }

    // Remove specific product data
    void reset(int num){
        switch (num){
            case 1:
                setId(0);
                System.out.println("ID berhasil dihapus");
                break;
            case 2:
                setNamaProduk("");
                System.out.println("Nama produk berhasil dihapus");
                break;
            case 3:
                setKategoriProduk("");
                System.out.println("Kategori produk berhasil dihapus");
                break;
            case 4:
                setHarga(0.0);
                System.out.println("Harga berhasil dihapus");
                break;
            case 5:
                setId(0);
                setNamaProduk("");
                setKategoriProduk("");
                setHarga(0.0);
                System.out.println("Data produk berhasil dihapus");
                break;
        }
        System.out.println();
    }
}
