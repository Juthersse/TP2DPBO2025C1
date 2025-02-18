from Petshop import Petshop

def main():
    produk = Petshop()
    
    produk.setId(101)
    produk.setNamaProduk("Whiskas Cat Food 1kg")
    produk.setKategoriProduk("Makanan Hewan")
    produk.setHarga(25000.00)
    
    produk.display()
    
    produk.setNamaProduk("Mainan Gigitan Anjing")
    produk.setKategoriProduk("Mainan Hewan")
    produk.setHarga(10000.00)
    
    produk.display()
    
    produk.reset(2)
    
    produk.display()
    
    print("ID: ", produk.getId())
    
main()