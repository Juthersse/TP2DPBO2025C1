from Baju import Baju

def display(arrBaju, row):
    headers = ["ID", "Nama Produk", "Kategori Produk", "Harga", "Jenis", "Bahan", "Warna", "Untuk", "Size", "Merk"]
    col = 10

    width = [2, 11, 15, 5, 5, 5, 5, 5, 4, 4]

    # Menghitung lebar maksimal tiap kolom
    for i in range(row):
        width[0] = max(width[0], len(str(arrBaju[i].getId())))
        width[1] = max(width[1], len(arrBaju[i].getNamaProduk()))
        width[2] = max(width[2], len(arrBaju[i].getKategoriProduk()))
        width[3] = max(width[3], len(str(arrBaju[i].getHarga())))
        width[4] = max(width[4], len(arrBaju[i].getJenis()))
        width[5] = max(width[5], len(arrBaju[i].getBahan()))
        width[6] = max(width[6], len(arrBaju[i].getWarna()))
        width[7] = max(width[7], len(arrBaju[i].getUntuk()))
        width[8] = max(width[8], len(arrBaju[i].getSize()))
        width[9] = max(width[9], len(arrBaju[i].getMerk()))

    # Print table header
    for i in range(col):
        print("+", end="")
        if i != 3:
            print("-" * (width[i] + 1), end="")
        else:
            print("-" * (width[i] + 4), end="")
    print("+")

    for i in range(col):
        print("|", headers[i], end="")
        if i != 3:
            print(" " * (width[i] - len(headers[i])), end="")
        else:
            print(" " * (width[i] + 3 - len(headers[i])), end="")
    print("|")

    for i in range(col):
        print("+", end="")
        if i != 3:
            print("-" * (width[i] + 1), end="")
        else:
            print("-" * (width[i] + 4), end="")
    print("+")

    # Print isi tabel
    for i in range(row):
        print("|", arrBaju[i].getId(), end="")
        print(" " * (width[0] - len(str(arrBaju[i].getId()))), end="")

        print("|", arrBaju[i].getNamaProduk(), end="")
        print(" " * (width[1] - len(arrBaju[i].getNamaProduk())), end="")

        print("|", arrBaju[i].getKategoriProduk(), end="")
        print(" " * (width[2] - len(arrBaju[i].getKategoriProduk())), end="")

        print("|Rp.", arrBaju[i].getHarga(), end="")
        print(" " * (width[3] - len(str(arrBaju[i].getHarga()))), end="")

        print("|", arrBaju[i].getJenis(), end="")
        print(" " * (width[4] - len(arrBaju[i].getJenis())), end="")

        print("|", arrBaju[i].getBahan(), end="")
        print(" " * (width[5] - len(arrBaju[i].getBahan())), end="")

        print("|", arrBaju[i].getWarna(), end="")
        print(" " * (width[6] - len(arrBaju[i].getWarna())), end="")

        print("|", arrBaju[i].getUntuk(), end="")
        print(" " * (width[7] - len(arrBaju[i].getUntuk())), end="")

        print("|", arrBaju[i].getSize(), end="")
        print(" " * (width[8] - len(arrBaju[i].getSize())), end="")

        print("|", arrBaju[i].getMerk(), end="")
        print(" " * (width[9] - len(arrBaju[i].getMerk())), end="")

        print("|")

    for i in range(col):
        print("+", end="")
        if i != 3:
            print("-" * (width[i] + 1), end="")
        else:
            print("-" * (width[i] + 4), end="")
    print("+")

def main():
    arr_baju = []  # Menggunakan list untuk objek Baju
    arr_baju.append(Baju(1, "Kaos Anjing Polos Lengan Pendek", "Pakaian Anjing", 35000.00, "Atasan", "Katun", "Merah", "Anjing", "M", "PetLuv"))
    arr_baju.append(Baju(2, "Jaket Anjing Musim Dingin Hangat", "Pakaian Anjing", 150000.00, "Jaket", "Fleece, Poliester", "Biru tua", "Anjing", "L", "WarmPaws"))
    arr_baju.append(Baju(3, "Gaun Kucing Motif Bunga", "Pakaian Kucing", 60000.00, "Gaun", "Katun, Renda", "Pink", "Kucing", "S", "KittyStyle"))
    arr_baju.append(Baju(4, "Rompi Anjing Tahan Air", "Pakaian Anjing", 120000.00, "Rompi", "Nilon, Poliester", "Hijau Army", "Anjing", "XL", "AdventurePets"))
    arr_baju.append(Baju(5, "Kostum Kucing Kelelawar Halloween", "Pakaian Kucing", 80000.00, "Kostum", "Fleece, Felt", "Hitam", "Kucing", "M", "SpookyCats"))
    row = 5

    state = 0
    while state == 0:
        print("1. ADD")
        print("2. DISPLAY")
        print("0. EXIT")
        option = int(input())

        if option == 1:
            id = int(input("ENTER ID: "))
            nama_produk = input("ENTER NAMA PRODUK: ")
            kategori_produk = input("ENTER KATEGORI PRODUK: ")
            harga = float(input("ENTER HARGA: "))
            jenis = input("ENTER JENIS: ")
            bahan = input("ENTER BAHAN: ")
            warna = input("ENTER WARNA: ")
            untuk = input("ENTER UNTUK: ")
            size = input("ENTER SIZE: ")
            merk = input("ENTER MERK: ")

            arr_baju.append(Baju(id, nama_produk, kategori_produk, harga, jenis, bahan, warna, untuk, size, merk))
            row += 1
        elif option == 2:
            display(arr_baju, row)
        elif option == 0:
            state = 1
        else:
            print("INVALID INPUT")
    
main()