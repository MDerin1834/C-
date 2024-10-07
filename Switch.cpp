// Switch.cpp : Bu dosya 'main' işlevi içeriyor. Program yürütme orada başlayıp biter.
//

#include <iostream>

int main()
{
    int a = 0;
    int b = 0;
    char islem = '*';

    std::cout << "First Num" << std::endl;
    std::cin >> a;
    std::cout << "Second Num" << std::endl;
    std::cin >> b;

    std::cout << "islem giriniz: " << std::endl;
    std::cin >> islem;

    switch (islem)
    {
        case '+':
            std::cout << "Sonuc: " << a + b;
            break;
        case '-':
            std::cout << "Sonuc: " << a - b;
            break;
        case '*':
            std::cout << "Sonuc: " << a * b;
            break;
        case '/':
            std::cout << "Sonuc: " << a / b;
            break;
        default:
            std::cout << "What is this?";
            break;
    }
    std::cout << "Bitti" ;
    
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
