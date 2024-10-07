// OOP 3.cpp : Bu dosya 'main' işlevi içeriyor. Program yürütme orada başlayıp biter.
//

#include <iostream>

class silah {  // BASE CLASS
protected:
    int deger;
public:
    std::string isim;
    int mermikapasitesi;
    std::string renk; // hepsi için yeni bir özellik tanımlamak çok kolay

    silah() {
        std::cout << "silah olusturuldu";
    }
};

class ak47 : public silah {
public:
    bool seritek;

    ak47() {
        std::cout << " ak47 olustu";
    }
    void ateset(){
        deger = 20;
    }
};

class pistol : public silah {
public:
    bool tolee;
    int lmao;

    void ateset() {

    }
};

class m1 : public silah {
public:
    bool tolesse;
    int lmasso;

    void ateset() {

    }
};
 
void goster(silah* silahPtr) {  // UP CASTING WITH POINTER
    std::cout << silahPtr->isim;
}
int main()
{
    ak47 ak47;
    ak47.seritek = true;
    ak47.renk = "black";
    ak47.isim = "Ak47";
    goster(&ak47);

    m1 m1;
    m1.renk = "orange";
    m1.isim = "M1 Zula";
    goster(&m1);
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
