// Diziler 2.cpp : Bu dosya 'main' işlevi içeriyor. Program yürütme orada başlayıp biter.
//

#include <iostream>

void test(int dizw[3],int size) {
    
    for (int a = 0; a < size; a++)
    {
        std::cout << dizw[a] << '\n';
    }
}

int main()
{
    int dizi[3][2] // static dizi
    { {2,3},{4,3},{22,11} };

    for (int i = 0; i < 3; i++)
    {
        for (int i2 = 0; i2 < 2; i2++)
        {
            std::cout << dizi[i][i2] << '\n';
        } 
    }

    std::cout<<std::size(dizi); //dizi kapsamı ve eleman sayısı

    int dizw[3]{ 3,6,9 };
    test(dizw, std::size(dizw));
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
