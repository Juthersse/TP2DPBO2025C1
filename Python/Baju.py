from Aksesoris import Aksesoris

class Baju(Aksesoris):
    def __init__(self, id, nama_produk, kategori_produk, harga, jenis, bahan, warna, untuk, size, merk):
        super().__init__(id, nama_produk, kategori_produk, harga, jenis, bahan, warna)
        self.Untuk = untuk
        self.Size = size
        self.Merk = merk

    # Setter
    def setUntuk(self, untuk):
        self.Untuk = untuk
    def setSize(self, size):
        self.Size = size
    def setMerk(self, merk):
        self.Merk = merk

    # Getter
    def getUntuk(self):
        return self.Untuk
    def getSize(self):
        return self.Size
    def getMerk(self):
        return self.Merk

    # Fungsi utk menambahkan item
    def addBaju(self, id, nama_produk, kategori_produk, harga, jenis, bahan, warna, untuk, size, merk):
        self.set_ID(id)
        self.set_Nama_Produk(nama_produk)
        self.set_Kategori_Produk(kategori_produk)
        self.set_Harga(harga)
        self.set_Jenis(jenis)
        self.set_Bahan(bahan)
        self.set_Warna(warna)
        self.set_Untuk(untuk)
        self.set_Size(size)
        self.set_Merk(merk)