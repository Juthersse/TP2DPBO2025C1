<?php
include "Petshop.php";

$produk = new Petshop();

// Menambahkan data baru
$produk->setId(101);
$produk->setNamaProduk("Whiskas Cat Food 1kg");
$produk->setKategoriProduk("Makanan Hewan");
$produk->setHarga(25000.00);
$produk->setGambar("images/whiskas_cat_food_1kg.jpg");

// Tampilkan produk
$produk->display();

// Mengubah data yang sudah ada
$produk->setNamaProduk("Mainan Gigitan Anjing");
$produk->setKategoriProduk("Mainan Hewan");
$produk->setHarga(10000.00);
$produk->setGambar("images/mainan_gigitan_anjing.jpeg");

// Tampilkan produk
$produk->display();

// Menghapus data dari objek (misalkan kategori)
$produk->remove(3);

// Tampilkan produk
$produk->display();

// Mencari data objek (misalkan nama produk)
echo "Nama Produk: " . $produk->getNamaProduk();

?>