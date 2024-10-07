// Functions continued.cpp : Bu dosya 'main' işlevi içeriyor. Program yürütme orada başlayıp biter.
//

#include <iostream>
#include <string>

void print(std::string text = "hello HaY", int a = 0, bool as = false) {
    std::cout << text << a << as << '\n';  // string ifade ile fonksiyonlar
}

int topla(int a, int b) {
    return a + b;
}
int getir(int(*neint)(int, int)) {
    int a = neint(12, 34);
    return a;            //fonskiyon geri çağırma

}
inline int multipy(int a, int b, int c) {
    return a + b * c;
}
int main()
{
    print();
    int b = getir(topla);
    std::cout << b;
    std::cout << multipy(3,4,8);
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
