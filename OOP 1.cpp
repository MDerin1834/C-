// OOP 1.cpp : Bu dosya 'main' işlevi içeriyor. Program yürütme orada başlayıp biter.
//

#include <iostream>

class Hesapla {
public:
    int genislik;
    int yükseklik;
    int alan;
    
    void giris() {
        std::cout << "Yuskeklik gir: " << std::endl;
        std::cin >> yükseklik;

        std::cout << " genislik gir: " << std::endl;
        std::cin >> genislik;
    }
    void hesapla() {
        alan = yükseklik * genislik;
        std::cout << alan;
    }

};

class Payment {

private: // değiştirilemez
    std::string hasCode = "123456789";
public: // int main kısmında değiştirilebilir
    std::string paraBirimi = "tl";
    std::string tutar = "0.0";
    
    void pay() {
        std::cout << "Veriler bankaya gönderildi. Parabirimi: " 
            + this->paraBirimi +" tutar: " + this->tutar + " hasCode: "+ this->hasCode;
    }
};

int main()
{
    Hesapla hesap;
    hesap.giris();
    hesap.hesapla();

    Payment payment;
    payment.paraBirimi = "tl";
    payment.tutar = "50.6";
    payment.pay();
    return 0;






}

// Programı çalıştır: Ctrl + F5 veya Hata Ayıkla > Hata Ayıklamadan Başlat menüsü
// Programda hata ayıkla: F5 veya Hata Ayıkla > Hata Ayıklamayı Başlat menüsü

// Kullanmaya Başlama İpuçları: 
//   1. Dosyaları eklemek/yönetmek için Çözüm Gezgini penceresini kullanın
//   2. Kaynak denetimine bağlanmak için Takım Gezgini penceresini kullanın
//   3. Derleme çıktısını ve diğer iletileri görmek için Çıktı penceresini kullanın
//   4. Hataları görüntülemek için Hata Listesi penceresini kullanın
//   5. Yeni kod dosyaları oluşturmak için Projeye Git > Yeni Öğe ekle veya varolan kod dosyalarını projeye eklemek için Proje > Var Olan Öğeyi Ekle adımlarını izleyin
//   6. Bu projeyi daha sonra yeniden açmak için Dosya > Aç > Proje'ye gidip .sln uzantılı dosyayı seçin
