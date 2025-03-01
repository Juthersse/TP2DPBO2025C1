#include "Baju.cpp"

void display(Baju* arrBaju, int row){
	string headers[] = {"ID", "Nama Produk", "Kategori Produk", "Harga", "Jenis", "Bahan", "Warna", "Untuk", "Size", "Merk"};
	int col = 10;
	
	int width[col] = {2, 11, 15, 5, 5, 5, 5, 5, 4, 4};
	
	// Menghitung lebar maksimal tiap kolom
	for(int i = 0; i < row; i++){
		width[0] = max(width[0], (int)to_string(arrBaju[i].getId()).length());
		width[1] = max(width[1], (int)arrBaju[i].getNamaProduk().length());
		width[2] = max(width[2], (int)arrBaju[i].getKategoriProduk().length());
		width[3] = max(width[3], (int)to_string(arrBaju[i].getHarga()).length());
		width[4] = max(width[4], (int)arrBaju[i].getJenis().length());
		width[5] = max(width[5], (int)arrBaju[i].getBahan().length());
		width[6] = max(width[6], (int)arrBaju[i].getWarna().length());
		width[7] = max(width[7], (int)arrBaju[i].getUntuk().length());
		width[8] = max(width[8], (int)arrBaju[i].getSize().length());
		width[9] = max(width[9], (int)arrBaju[i].getMerk().length());
	}
	
	// Print table header
	for(int i = 0; i < col; i++){
		cout << "+";
		if(i != 3){
			for(int j = 0; j < width[i]; j++) cout << "-";
		}else{
			for(int j = 0; j < width[i] + 3; j++) cout << "-";
		}
	}
	cout << "+\n";
	
	for(int i = 0; i < col; i++){
		cout << "|" << headers[i];
		if(i != 3){
			for(int j = headers[i].length(); j < width[i]; j++) cout << " ";
		}else{
			for(int j = headers[i].length(); j < width[i] + 3; j++) cout << " ";
		}
	}
	cout << "|\n";
	
	for(int i = 0; i < col; i++){
		cout << "+";
		if(i != 3){
			for(int j = 0; j < width[i]; j++) cout << "-";
		}else{
			for(int j = 0; j < width[i] + 3; j++) cout << "-";
		}
	}
	cout << "+\n";
	
	// Print isi tabel
	for(int i = 0; i < row; i++){
		cout << "|" << arrBaju[i].getId();
		for(int j = to_string(arrBaju[i].getId()).length(); j < width[0]; j++) cout << " ";
		
		cout << "|" << arrBaju[i].getNamaProduk();
		for(int j = arrBaju[i].getNamaProduk().length(); j < width[1]; j++) cout << " ";
		
		cout << "|" << arrBaju[i].getKategoriProduk();
		for(int j = arrBaju[i].getKategoriProduk().length(); j < width[2]; j++) cout << " ";
		
		cout << "|Rp." << arrBaju[i].getHarga();
		for(int j = to_string(arrBaju[i].getHarga()).length(); j < width[3]; j++) cout << " ";
		
		cout << "|" << arrBaju[i].getJenis();
		for(int j = arrBaju[i].getJenis().length(); j < width[4]; j++) cout << " ";
		
		cout << "|" << arrBaju[i].getBahan();
		for(int j = arrBaju[i].getBahan().length(); j < width[5]; j++) cout << " ";
		
		cout << "|" << arrBaju[i].getWarna();
		for(int j = arrBaju[i].getWarna().length(); j < width[6]; j++) cout << " ";
		
		cout << "|" << arrBaju[i].getUntuk();
		for(int j = arrBaju[i].getUntuk().length(); j < width[7]; j++) cout << " ";
		
		cout << "|" << arrBaju[i].getSize();
		for(int j = arrBaju[i].getSize().length(); j < width[8]; j++) cout << " ";
		
		cout << "|" << arrBaju[i].getMerk();
		for(int j = arrBaju[i].getMerk().length(); j < width[9]; j++) cout << " ";
		
		cout << "|\n";
	}
	
	for(int i = 0; i < col; i++){
		cout << "+";
		if(i != 3){
			for(int j = 0; j < width[i]; j++) cout << "-";
		}else{
			for(int j = 0; j < width[i] + 3; j++) cout << "-";
		}
	}
	cout << "+\n";
}

int main(){
	// Membuat object
	Baju arrBaju[25];
	
	// Menambahkan data ke 5 objek baju
	arrBaju[0].addBaju(1, "Kaos Anjing Polos Lengan Pendek", "Pakaian Anjing", 35000.00, "Atasan", "Katun", "Merah", "Anjing", "M", "PetLuv");
	arrBaju[1].addBaju(2, "Jaket Anjing Musim Dingin Hangat", "Pakaian Anjing", 150000.00, "Jaket", "Fleece, Poliester", "Biru tua", "Anjing", "L", "WarmPaws");
	arrBaju[2].addBaju(3, "Gaun Kucing Motif Bunga", "Pakaian Kucing", 60000.00, "Gaun", "Katun, Renda", "Pink", "Kucing", "S", "KittyStyle");
	arrBaju[3].addBaju(4, "Rompi Anjing Tahan Air", "Pakaian Anjing", 120000.00, "Rompi", "Nilon, Poliester", "Hijau Army", "Anjing", "XL", "AdventurePets");
	arrBaju[4].addBaju(5, "Kostum Kucing Kelelawar Halloween", "Pakaian Kucing", 80000.00, "Kostum", "Fleece, Felt", "Hitam", "Kucing", "M", "SpookyCats");
	int row = 5;
	
	int state = 0;
	int option;
	while(state == 0){
		cout << "1. ADD\n"
			 << "2. DISPLAY\n"
			 << "0. EXIT\n";
		cin >> option;
		
		if(option == 1){
			int id, harga;
			string nama_produk, kategori_produk, jenis, bahan, warna, untuk, size, merk;
			
			cout << "ENTER ID: ";
			cin >> id;
			cin.ignore();
			
			cout << "ENTER NAMA PRODUK: ";
			getline(cin, nama_produk);
			
			cout << "ENTER KATEGORI PRODUK: ";
			getline(cin, kategori_produk);
			
			cout << "ENTER HARGA: ";
			cin >> harga;
			cin.ignore();
			
			cout << "ENTER JENIS: ";
			getline(cin, jenis);
			
			cout << "ENTER BAHAN: ";
			getline(cin, bahan);
			
			cout << "ENTER WARNA: ";
			getline(cin, warna);
			
			cout << "ENTER UNTUK: ";
			getline(cin, untuk);
			
			cout << "ENTER SIZE: ";
			getline(cin, size);
			
			cout << "ENTER MERK: ";
			getline(cin, merk);
			
			arrBaju[row].addBaju(id, nama_produk, kategori_produk, harga, jenis, bahan, warna, untuk, size, merk);
			row++;
		}else if(option == 2){
			display(arrBaju, row);
		}else if(option == 0){
			state = 1;
		}else{
			cout << "INVALID INPUT\n";
		}
	}
	
	return 0;
}