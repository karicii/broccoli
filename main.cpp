#include <iostream>
#include <string>
#include <vector>
void print_usage() {
    std::cout << "Kullanım: ./mycli <komut>\n"
              << "Kullanılabilir komutlar için './mycli -help' yazın." << std::endl;
}
void print_help() {
    std::cout << "Kullanılabilir Komutlar:\n"
              << "  -aya, --aya      Rastgele bir mesaj gösterir\n"
              << "  -help, --help    Bu yardım menüsünü gösterir" << std::endl;
}
int main(int argc, char* argv[]) {
    const std::vector<std::string> args(argv + 1, argv + argc);
    if (args.empty()) {
        std::cerr << "Hata: Komut girilmedi." << std::endl; 
        print_usage();
        return 1; 
    }
    const std::string& command = args[0];
    if (command == "-help" || command == "--help") {
        print_help();
    } else if (command == "-aya" || command == "--aya") {
        std::cout << "Bu, örnek bir komutun çıktısıdır! :)" << std::endl;
    } else {
                std::cerr << "Hata: Bilinmeyen komut '" << command << "'" << std::endl;
        print_usage();
        return 1;
    }

    return 0;
}