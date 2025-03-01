class Petshop:
    def __init__(self, id, nama_produk, kategori_produk, harga):
        self.__ID = id
        self.__Nama_Produk = nama_produk
        self.__Kategori_Produk = kategori_produk
        self.__Harga = harga
    
    # Setter
    def setId(self, id):
        self.__ID = id
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