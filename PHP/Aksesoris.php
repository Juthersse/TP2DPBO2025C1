<?php
include "Petshop.php";

class Aksesoris extends Petshop{
	private $Jenis;
	private $Bahan;
	private $Warna;
	
	function __construct($jenis = null, $bahan = null, $warna = null){
		if($jenis !== null && $bahan !== null && $warna !== null){
			$this->Jenis = $jenis;
			$this->Bahan = $bahan;
			$this->Warna = $warna;
		}
	}
	
	function setJenis($jenis){$this->Jenis = $jenis;}
	function setBahan($bahan){$this->Bahan = $bahan;}
	function setWarna($warna){$this->Warna = $warna;}
	
	function getJenis(){return $this->Jenis;}
	function getBahan(){return $this->Bahan;}
	function getWarna(){return $this->Warna;}
	
	function __destruct(){
		
	}
}

?>