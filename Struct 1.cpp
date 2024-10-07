// Struct 1.cpp : Bu dosya 'main' işlevi içeriyor. Program yürütme orada başlayıp biter.
//

#include <iostream>
using namespace std;

struct Rectangle 
{
    int length, breadth;
    double heigth;
    char x;
    double area = length * breadth;
    double volume =area* heigth;
} r1, r2;

struct Rectangle r3;

void fun(struct Rectangle rect) 
{
    rect.area = 100;
    cout << "Volume in r1 is " << rect.volume << endl;
}

int main()
{
    double height;
    cout << "enter the heigth:" << endl;
    cin >> height;
    struct Rectangle  r1 = { 14, 8,height };
    struct Rectangle  r2 = { 5, 11,height };
    struct Rectangle  r3 = { 2, 17, 2* height };

    struct Rectangle  r4 = { r1.length/2.0, r2.breadth, 2 * height };
    
    cout << r1.length << endl;
    cout << r2.breadth << endl;

    r3.breadth = 28;

    cout << r3.breadth << endl;
    cout << r3.area << endl; // 2 * 17 not 28

    cout << r3.volume << endl << r4.volume << endl;

    struct Rectangle* p = &r1;
    r1.length = 1;

    cout << r1.length << endl;

    fun(r1);

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
