<?php
class Petshop{
	private $ID = 0;
	private $Nama_Produk = "";
	private $Kategori_Produk = "";
	private $Harga = 0.0;
	private $Gambar = "";
	
	function __construct(){
		
	}
	
	// Setter
	function setId($id){$this->ID = $id;}
	function setNamaProduk($nama_produk){$this->Nama_Produk = $nama_produk;}
	function setKategoriProduk($kategori_produk){$this->Kategori_Produk = $kategori_produk;}
	function setHarga($harga){$this->Harga = $harga;}
	function setGambar($gambar){$this->Gambar = $gambar;}
	
	// Getter
	function getId(){return $this->ID;}
	function getNamaProduk(){return $this->Nama_Produk;}
	function getKategoriProduk(){return $this->Kategori_Produk;}
	function getHarga(){return $this->Harga;}
	function getGambar(){return $this->Gambar;}
	
	// Fungsi-fungsi wajib
	// Menampilkan data produk
	function display(){
		echo "ID: " . $this->getId() . "<br>";
		echo "Nama Produk: " . $this->getNamaProduk() . "<br>";
		echo "Kategori Produk: " . $this->getKategoriProduk() . "<br>";
		echo "Harga: " . $this->getHarga() . "<br>";
		echo "Gambar:<br><img src='" . $this->getGambar() . "' alt='Gambar Produk'><br><br>";
	}
	
	// Menghapus data yang diinginkan
	function remove($num){
		switch($num){
			case 1:
				$this->setId(0);
				echo "ID berhasil dihapus<br>";
				break;
			case 2:
				$this->setNamaProduk("");
				echo "Nama produk berhasil dihapus<br>";
				break;
			case 3:
				$this->setKategoriProduk("");
				echo "Kategori produk berhasil dihapus<br>";
				break;
			case 4:
				$this->setHarga(0.0);
				echo "Harga berhasil dihapus<br>";
				break;
			case 5:
				$this->setGambar("");
				echo "Gambar berhasil dihapus<br>";
				break;
			case 6:
				$this->setId(0);
				$this->setNamaProduk("");
				$this->setKategoriProduk("");
				$this->setHarga(0.0);
				$this->setGambar("");
				echo "Data produk berhasil dihapus<br>";
				break;
		}
		echo "<br>";
	}
	
	function __destruct(){
		
	}
}
?>