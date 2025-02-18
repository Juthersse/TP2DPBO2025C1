class Petshop:
    def __init__(self):
        self.__ID = 0
        self.__Nama_Produk = ""
        self.__Kategori_Produk = ""
        self.__Harga = 0.0
    
    # Setter
    def setId(self, id_produk):
        self.__ID = id_produk
    def setNamaProduk(self, nama_produk):
        self.__Nama_Produk = nama_produk
    def setKategoriProduk(self, kategori_produk):
        self.__Kategori_Produk = kategori_produk
    def setHarga(self, harga):
        self.__Harga = harga
        
    # Getter
    def getId(self):
        return self.__ID
    def getNamaProduk(self):
        return self.__Nama_Produk
    def getKategoriProduk(self):
        return self.__Kategori_Produk
    def getHarga(self):
        return self.__Harga
        
    # Fungsi-fungsi wajib
    # Menampilkan data produk
    def display(self):
        print(f"ID: {self.getId()}")
        print(f"Nama Produk: {self.getNamaProduk()}")
        print(f"Kategori Produk: {self.getKategoriProduk()}")
        print(f"Harga: {self.getHarga()}\n")
        
    def reset(self, num):
        if num == 1:
            self.setId(0)
            print("ID berhasil dihapus\n")
        if num == 2:
            self.setNamaProduk("")
            print("Nama Produk berhasil dihapus\n")
        if num == 3:
            self.setKategoriProduk("")
            print("Kategori Produk berhasil dihapus\n")
        if num == 4:
            self.setHarga(0.0)
            print("Harga berhasil dihapus\n")
        if num == 5:
            self.setId(0)
            self.setNamaProduk("")
            self.setKategoriProduk("")
            self.setHarga(0.0)
            print("Data produk berhasil dihapus\n")