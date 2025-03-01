<?php
include "Baju.php";

// Membuat object
$arrBaju = [];

// Menambahkan data ke 5 objek baju
$arrBaju[0] = new Baju();
$arrBaju[0]->addBaju(1, "Kaos Anjing Polos Lengan Pendek", "Pakaian Anjing", 35000.00, "Atasan", "Katun", "Merah", "Anjing", "M", "PetLuv", "images/kaos_anjing.jpeg");
$arrBaju[1] = new Baju();
$arrBaju[1]->addBaju(2, "Jaket Anjing Musim Dingin Hangat", "Pakaian Anjing", 150000.00, "Jaket", "Fleece, Poliester", "Biru tua", "Anjing", "L", "WarmPaws", "images/jaket_anjing.jpg");
$arrBaju[2] = new Baju();
$arrBaju[2]->addBaju(3, "Gaun Kucing Motif Bunga", "Pakaian Kucing", 60000.00, "Gaun", "Katun, Renda", "Pink", "Kucing", "S", "KittyStyle", "images/gaun_kucing.jpeg");
$arrBaju[3] = new Baju();
$arrBaju[3]->addBaju(4, "Rompi Anjing Tahan Air", "Pakaian Anjing", 120000.00, "Rompi", "Nilon, Poliester", "Hijau Army", "Anjing", "XL", "AdventurePets", "images/rompi_anjing.jpeg");
$arrBaju[4] = new Baju();
$arrBaju[4]->addBaju(5, "Kostum Kucing Kelelawar Halloween", "Pakaian Kucing", 80000.00, "Kostum", "Fleece, Felt", "Hitam", "Kucing", "M", "SpookyCats", "images/kostum_kucing.jpg");
?>

<table style="border-collapse: collapse; width: 100%;">
    <thead>
        <tr>
            <th style="border: 1px solid black;">ID</th>
            <th style="border: 1px solid black;">Nama Produk</th>
            <th style="border: 1px solid black;">Kategori Produk</th>
            <th style="border: 1px solid black;">Harga</th>
            <th style="border: 1px solid black;">Jenis</th>
            <th style="border: 1px solid black;">Bahan</th>
            <th style="border: 1px solid black;">Warna</th>
            <th style="border: 1px solid black;">Untuk</th>
            <th style="border: 1px solid black;">Size</th>
            <th style="border: 1px solid black;">Merk</th>
			<th style="border: 1px solid black;">Foto Produk</th>
        </tr>
    </thead>
    <tbody>
        <?php foreach ($arrBaju as $baju): ?>
            <tr>
                <td style="border: 1px solid black;"><?php echo $baju->getId(); ?></td>
                <td style="border: 1px solid black;"><?php echo $baju->getNamaProduk(); ?></td>
                <td style="border: 1px solid black;"><?php echo $baju->getKategoriProduk(); ?></td>
                <td style="border: 1px solid black;"><?php echo "Rp " . number_format($baju->getHarga(), 2, ',', '.'); ?></td>
                <td style="border: 1px solid black;"><?php echo $baju->getJenis(); ?></td>
                <td style="border: 1px solid black;"><?php echo $baju->getBahan(); ?></td>
                <td style="border: 1px solid black;"><?php echo $baju->getWarna(); ?></td>
                <td style="border: 1px solid black;"><?php echo $baju->getUntuk(); ?></td>
                <td style="border: 1px solid black;"><?php echo $baju->getSize(); ?></td>
                <td style="border: 1px solid black;"><?php echo $baju->getMerk(); ?></td>
				<td style="border: 1px solid black;"><img src="<?php echo $baju->getFotoProduk(); ?>" alt="Foto Produk" width="100"></td>
            </tr>
        <?php endforeach; ?>
    </tbody>
</table>