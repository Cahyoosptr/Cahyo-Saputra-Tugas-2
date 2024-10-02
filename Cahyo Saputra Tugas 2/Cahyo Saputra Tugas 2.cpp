#include <iostream>

int main() {
    double hargaAsli = 150000;
    double besarPersentaseDiskon = 12.5;

    double jumlahHargaDiskon = hargaAsli * (besarPersentaseDiskon / 100);
    double hargaAkhir = hargaAsli - jumlahHargaDiskon;

    std::cout << "harga  : " << hargaAsli << std::endl;
    std::cout << "Diskon : " << besarPersentaseDiskon << std::endl;
    std::cout << "Besarnya diskon dari harga : " << jumlahHargaDiskon << std::endl;
    std::cout << "Harga setelah diskon : " << hargaAkhir << " ribu" << std::endl;

    return 0;
}
