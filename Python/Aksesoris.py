from Petshop import Petshop

class Aksesoris(Petshop):
    def __init__(self, id, nama_produk, kategori_produk, harga, jenis, bahan, warna):
        super().__init__(id, nama_produk, kategori_produk, harga)
        self.Jenis = jenis
        self.Bahan = bahan
        self.Warna = warna

    # Setter
    def setJenis(self, jenis):
        self.Jenis = jenis
    def setBahan(self, bahan):
        self.Bahan = bahan
    def setWarna(self, warna):
        self.Warna = warna

    # Getter
    def getJenis(self):
        return self.Jenis
    def getBahan(self):
        return self.Bahan
    def getWarna(self):
        return self.Warna