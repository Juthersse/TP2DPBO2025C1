<?php
class Petshop{
	private $ID = 0;
	private $Nama_Produk = "";
	private $Kategori_Produk = "";
	private $Harga = 0;
	private $Foto_Produk = "";
	
	function __construct($id, $nama_produk, $kategori_produk, $harga, $foto_produk){
		$this->ID = $id;
		$this->Nama_Produk = $nama_produk;
		$this->Kategori_Produk = $kategori_produk;
		$this->Harga = $harga;
		$this->Foto_Produk = $foto_produk;
	}
	
	// Setter
	function setId($id){$this->ID = $id;}
	function setNamaProduk($nama_produk){$this->Nama_Produk = $nama_produk;}
	function setKategoriProduk($kategori_produk){$this->Kategori_Produk = $kategori_produk;}
	function setHarga($harga){$this->Harga = $harga;}
	function setFotoProduk($foto_produk){$this->Foto_Produk = $foto_produk;}
	
	// Getter
	function getId(){return $this->ID;}
	function getNamaProduk(){return $this->Nama_Produk;}
	function getKategoriProduk(){return $this->Kategori_Produk;}
	function getHarga(){return $this->Harga;}
	function getFotoProduk(){return $this->Foto_Produk;}
	
	
	function __destruct(){
		
	}
}
?>