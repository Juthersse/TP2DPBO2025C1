import java.util.Scanner;

class Main{
	public static void display(Baju[] arrBaju, int row) {
        String[] headers = {"ID", "Nama Produk", "Kategori Produk", "Harga", "Jenis", "Bahan", "Warna", "Untuk", "Size", "Merk"};
        int col = 10;

        int[] width = {2, 11, 15, 5, 5, 5, 5, 5, 4, 4};

        // Menghitung lebar maksimal tiap kolom
        for (int i = 0; i < row; i++) {
            width[0] = Math.max(width[0], String.valueOf(arrBaju[i].getId()).length());
            width[1] = Math.max(width[1], arrBaju[i].getNamaProduk().length());
            width[2] = Math.max(width[2], arrBaju[i].getKategoriProduk().length());
            width[3] = Math.max(width[3], String.valueOf(arrBaju[i].getHarga()).length());
            width[4] = Math.max(width[4], arrBaju[i].getJenis().length());
            width[5] = Math.max(width[5], arrBaju[i].getBahan().length());
            width[6] = Math.max(width[6], arrBaju[i].getWarna().length());
            width[7] = Math.max(width[7], arrBaju[i].getUntuk().length());
            width[8] = Math.max(width[8], arrBaju[i].getSize().length());
            width[9] = Math.max(width[9], arrBaju[i].getMerk().length());
        }

        // Print table header
        for (int i = 0; i < col; i++) {
            System.out.print("+");
            if (i != 3) {
                for (int j = 0; j < width[i]; j++) System.out.print("-");
            } else {
                for (int j = 0; j < width[i] + 3; j++) System.out.print("-");
            }
        }
        System.out.println("+");

        for (int i = 0; i < col; i++) {
            System.out.print("|" + headers[i]);
            if (i != 3) {
                for (int j = headers[i].length(); j < width[i]; j++) System.out.print(" ");
            } else {
                for (int j = headers[i].length(); j < width[i] + 3; j++) System.out.print(" ");
            }
        }
        System.out.println("|");

        for (int i = 0; i < col; i++) {
            System.out.print("+");
            if (i != 3) {
                for (int j = 0; j < width[i]; j++) System.out.print("-");
            } else {
                for (int j = 0; j < width[i] + 3; j++) System.out.print("-");
            }
        }
        System.out.println("+");

        // Print isi tabel
        for (int i = 0; i < row; i++) {
            System.out.print("|" + arrBaju[i].getId());
            for (int j = String.valueOf(arrBaju[i].getId()).length(); j < width[0]; j++) System.out.print(" ");

            System.out.print("|" + arrBaju[i].getNamaProduk());
            for (int j = arrBaju[i].getNamaProduk().length(); j < width[1]; j++) System.out.print(" ");

            System.out.print("|" + arrBaju[i].getKategoriProduk());
            for (int j = arrBaju[i].getKategoriProduk().length(); j < width[2]; j++) System.out.print(" ");

            System.out.print("|Rp." + arrBaju[i].getHarga());
            for (int j = String.valueOf(arrBaju[i].getHarga()).length(); j < width[3]; j++) System.out.print(" ");

            System.out.print("|" + arrBaju[i].getJenis());
            for (int j = arrBaju[i].getJenis().length(); j < width[4]; j++) System.out.print(" ");

            System.out.print("|" + arrBaju[i].getBahan());
            for (int j = arrBaju[i].getBahan().length(); j < width[5]; j++) System.out.print(" ");

            System.out.print("|" + arrBaju[i].getWarna());
            for (int j = arrBaju[i].getWarna().length(); j < width[6]; j++) System.out.print(" ");

            System.out.print("|" + arrBaju[i].getUntuk());
            for (int j = arrBaju[i].getUntuk().length(); j < width[7]; j++) System.out.print(" ");

            System.out.print("|" + arrBaju[i].getSize());
            for (int j = arrBaju[i].getSize().length(); j < width[8]; j++) System.out.print(" ");

            System.out.print("|" + arrBaju[i].getMerk());
            for (int j = arrBaju[i].getMerk().length(); j < width[9]; j++) System.out.print(" ");

            System.out.println("|");
        }

        for (int i = 0; i < col; i++) {
            System.out.print("+");
            if (i != 3) {
                for (int j = 0; j < width[i]; j++) System.out.print("-");
            } else {
                for (int j = 0; j < width[i] + 3; j++) System.out.print("-");
            }
        }
        System.out.println("+");
    }
	
	public static void main(String[] args) {
        Baju[] arrBaju = new Baju[25]; // Static array with size 25
        arrBaju[0] = new Baju(1, "Kaos Anjing Polos Lengan Pendek", "Pakaian Anjing", 35000, "Atasan", "Katun", "Merah", "Anjing", "M", "PetLuv");
        arrBaju[1] = new Baju(2, "Jaket Anjing Musim Dingin Hangat", "Pakaian Anjing", 150000, "Jaket", "Fleece, Poliester", "Biru tua", "Anjing", "L", "WarmPaws");
        arrBaju[2] = new Baju(3, "Gaun Kucing Motif Bunga", "Pakaian Kucing", 60000, "Gaun", "Katun, Renda", "Pink", "Kucing", "S", "KittyStyle");
        arrBaju[3] = new Baju(4, "Rompi Anjing Tahan Air", "Pakaian Anjing", 120000, "Rompi", "Nilon, Poliester", "Hijau Army", "Anjing", "XL", "AdventurePets");
        arrBaju[4] = new Baju(5, "Kostum Kucing Kelelawar Halloween", "Pakaian Kucing", 80000, "Kostum", "Fleece, Felt", "Hitam", "Kucing", "M", "SpookyCats");
        int row = 5;

        Scanner scanner = new Scanner(System.in);
        int state = 0;
        while (state == 0) {
            System.out.println("1. ADD");
            System.out.println("2. DISPLAY");
            System.out.println("0. EXIT");
            int option = scanner.nextInt();
            scanner.nextLine(); // Consume newline

            if (option == 1) {
                if (row < arrBaju.length) { // Check if there is space in array
                    System.out.print("ENTER ID: ");
                    int id = scanner.nextInt();
                    scanner.nextLine(); // Consume newline

                    System.out.print("ENTER NAMA PRODUK: ");
                    String namaProduk = scanner.nextLine();

                    System.out.print("ENTER KATEGORI PRODUK: ");
                    String kategoriProduk = scanner.nextLine();

                    System.out.print("ENTER HARGA: ");
                    int harga = scanner.nextInt();
                    scanner.nextLine(); // Consume newline

                    System.out.print("ENTER JENIS: ");
                    String jenis = scanner.nextLine();

                    System.out.print("ENTER BAHAN: ");
                    String bahan = scanner.nextLine();

                    System.out.print("ENTER WARNA: ");
                    String warna = scanner.nextLine();

                    System.out.print("ENTER UNTUK: ");
                    String untuk = scanner.nextLine();

                    System.out.print("ENTER SIZE: ");
                    String size = scanner.nextLine();

                    System.out.print("ENTER MERK: ");
                    String merk = scanner.nextLine();

                    arrBaju[row] = new Baju(id, namaProduk, kategoriProduk, harga, jenis, bahan, warna, untuk, size, merk);
                    row++;
                } else {
                    System.out.println("Array is full, cannot add more items.");
                }
            } else if (option == 2) {
                display(arrBaju, row);
            } else if (option == 0) {
                state = 1;
            } else {
                System.out.println("INVALID INPUT");
            }
        }
        scanner.close();
    }
}