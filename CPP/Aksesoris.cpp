#include "Petshop.cpp"

class Aksesoris: public Petshop{
	private:
		string Jenis;
		string Bahan;
		string Warna;
	
	public:
		Aksesoris(){
			
		}
		Aksesoris(string jenis, string bahan, string warna){
			Jenis = jenis;
			Bahan = bahan;
			Warna = warna;
		}
		
		void setJenis(string jenis){Jenis = jenis;}
		void setBahan(string bahan){Bahan = bahan;}
		void setWarna(string warna){Warna = warna;}
		
		string getJenis(){return Jenis;}
		string getBahan(){return Bahan;}
		string getWarna(){return Warna;}
		
		~Aksesoris(){
			
		}
};