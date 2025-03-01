<?php
include "Aksesoris.php";

class Baju extends Aksesoris{
	private $Untuk;
	private $Size;
	private $Merk;
	
	function __construct($untuk = null, $size = null, $merk = null){
		if($untuk !== null && $size !== null && $merk !== null){
			$this->Untuk = $untuk;
			$this->Size = $size;
			$this->Merk = $merk;
		}
	}
	
	// Setter
	function setUntuk($untuk){$this->Untuk = $untuk;}
	function setSize($size){$this->Size = $size;}
	function setMerk($merk){$this->Merk = $merk;}
	
	// Getter
	function getUntuk(){return $this->Untuk;}
	function getSize(){return $this->Size;}
	function getMerk(){return $this->Merk;}
	
	public function addBaju($id, $nama_produk, $kategori_produk, $harga, $jenis, $bahan, $warna, $untuk, $size, $merk, $foto_produk) {
        $this->setId($id);
        $this->setNamaProduk($nama_produk);
        $this->setKategoriProduk($kategori_produk);
        $this->setHarga($harga);
        $this->setJenis($jenis);
        $this->setBahan($bahan);
        $this->setWarna($warna);
        $this->setUntuk($untuk);
        $this->setSize($size);
        $this->setMerk($merk);
		$this->setFotoProduk($foto_produk);
    }
	
	function __destruct(){
		
	}
}

?>