// Loops.cpp : Bu dosya 'main' işlevi içeriyor. Program yürütme orada başlayıp biter.
//

#include <iostream>

int main()
{
	for (int i = 0; i < 14; i++)
	{
		std::cout << "Dongu " << i << std::endl;
	}

	for (int b = 0; b < 14; b = b+2)
	{
		std::cout << "what " << b << std::endl;
	}

	int k = 0;
	int m = 0;
	bool a = true;
	while (a) {
		std::cout << "first num" << std::endl;
		std::cin >> k;
		std::cout << "second num" << std::endl;
		std::cin >> m;
		if (k >= m) {
			std::cout << k + m;
		}
		else if (k * m > 18) {
			a = false;
		}
		else {
			std::cout << k % m;
		}
	}

	for (int o = 0; o < 21; o = o + 4)
	{
		if (o==20) {
			goto stop;
			break;
		}
	stop:
		std::cout << o * o;
	    
	}

    
	
	//do {
	//	std::cout << "DoWhile farki while'in ici false olsa bile 1 kere calismasidir";
	//} while (false);

	
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
