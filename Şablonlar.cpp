// Şablonlar.cpp : Bu dosya 'main' işlevi içeriyor. Program yürütme orada başlayıp biter.
//

#include <iostream>
using namespace std;

template <typename T, typename U, typename D>  //ŞABLON KULLANIMI
T maxx(T a, U b,D c) {
    return (a > b) ? a+c : b+c;
}

template <typename T, typename K> // SINIF İÇİN ŞABLON
class Mat {
public:
    T a{};
    K b{};
    K topla(T a, K b) {
        return a * b;
    }
};
int main()
{
    cout << maxx(2223.3,111.5,22)<<endl;
    cout << maxx(2, 11,6.8765456) << endl;
    cout << maxx<int,float,double>(83,39.1f,11.1111111)<<endl;

    Mat<int, float> mat;
    mat.a = 11;
    mat.b = 72.87;
    cout << mat.topla(mat.a,mat.b);
    
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
