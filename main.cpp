#include <iostream>
#include <string>

int main(int argc, char* argv[]) {
    if (argc < 2) {
        std::cout << "Komut girilmedi.\nKullanım: ./mycli -help" << std::endl;
        return 1;
    }

    std::string command = argv[1];

    if (command == "-help") {
        std::cout << "Kullanılabilir Komutlar:\n";
        std::cout << "-aya   Rastgele bir mesaj gösterir\n";
        std::cout << "-help  Bu ekranı gösterir\n";
    }
    else if (command == "-aya") {
        std::cout << "Bu, örnek bir komutun çıktısıdır! :)\n";
    }
    else {
        std::cout << "Bilinmeyen Komut: " << command << "\n";
        std::cout << "Yardım için: ./mycli -help" << std::endl;
    }

    return 0;
}
