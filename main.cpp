#include <iostream>

int main (){

    int digit;
    bool isFinished = false;

    std::cout <<"Nurcu Komünist Bankacılık Sistemine Hoş Geldiniz!" << std::endl;
    /* while döngüsünü buraya koy */
    std::cout << "0:Hesap Oluşturma" << std::endl;
    std::cout << "1:Hesap Girişi" << std::endl;
    std::cout << "2:Hesap Silme" << std::endl;
    std::cout << "3:Müşteri Hizmetleri" << std::endl;
    std::cout << "4:Çıkış Yap" << std::endl;
    std::cout << "Yapmak istediğiniz işlem için gereken rakamı giriniz:" << std::endl;

    while(!isFinished){
        std::cin >> digit;

        if (digit>4 || digit<0){
            std::cout << "Geçersiz rakam girdiniz. Lütfen tekrar deneyiniz." << std::endl;
        }    
        else if (digit == 0){
            std::cout << "Hesabınız oluşturuluyor..." << std::endl;
        }
        else if (digit == 1){
            std::cout << "Hesaba giriş yapılıyor..." << std::endl;
        }
        else if (digit == 2){
            std::cout << "Hesabınız siliniyor..." << std::endl;
        }
        else if (digit == 3){
            std::cout << "Müşteri hizmetlerine bağlanıyorsunuz..." << std::endl;   
        }
        else if (digit == 4){
            std::cout << "Çıkış yapılıyor..." << std::endl;
            isFinished = true;
        }
    }
    return 0;
}

