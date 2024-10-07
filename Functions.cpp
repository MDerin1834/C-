// Functions.cpp : Bu dosya 'main' işlevi içeriyor. Program yürütme orada başlayıp biter.
//

#include <iostream>
void mesaj() {
    std::cout << "Hello World\n";
}
void mesaj2(char msg,char msg2) {
    std::cout << msg << '\n' << msg2 <<'\n';
    mesaj(); //fonksiyon çağırma
}
int topla(int num1, int num2) {
    std::cout << "int\n";
    return num1+num2;
    
}
double topla(double num1, double num2) {
    std::cout << "double\n";
    return num1 + num2;

}
int main()
{
    mesaj();
    mesaj2('a','2');
    std::cout << topla(21, 32) << '\n';
    std::cout << topla(21.2, 32.3);
}
//iç içe fonkiyon yazılmaz
// Programı çalıştır: Ctrl + F5 veya Hata Ayıkla > Hata Ayıklamadan Başlat menüsü
// Programda hata ayıkla: F5 veya Hata Ayıkla > Hata Ayıklamayı Başlat menüsü

// Kullanmaya Başlama İpuçları: 
//   1. Dosyaları eklemek/yönetmek için Çözüm Gezgini penceresini kullanın
//   2. Kaynak denetimine bağlanmak için Takım Gezgini penceresini kullanın
//   3. Derleme çıktısını ve diğer iletileri görmek için Çıktı penceresini kullanın
//   4. Hataları görüntülemek için Hata Listesi penceresini kullanın
//   5. Yeni kod dosyaları oluşturmak için Projeye Git > Yeni Öğe ekle veya varolan kod dosyalarını projeye eklemek için Proje > Var Olan Öğeyi Ekle adımlarını izleyin
//   6. Bu projeyi daha sonra yeniden açmak için Dosya > Aç > Proje'ye gidip .sln uzantılı dosyayı seçin
