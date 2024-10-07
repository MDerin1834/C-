// Array Problems.cpp : Bu dosya 'main' işlevi içeriyor. Program yürütme orada başlayıp biter.
//

#include <iostream>
using namespace std;

int main() {

	/* ------------------------------ ADDING MULTIDIM ARRAYS (can do multiplication or any operation)
	const int r_size = 2;
	const int c_size = 2;
	int arr1[r_size][c_size];
	int arr2[r_size][c_size];

	cout << "Enter Elements of Array One\n";

	for (int i = 0; i <= r_size - 1; i++) {

		for (int j = 0; j <= c_size - 1; j++) {

			cin >> arr1[i][j];

		}
	cout << "Enter Elements of Array Two\n";

	for (int i = 0; i <= r_size - 1; i++) {

			for (int j = 0; j <= c_size - 1; j++) {

				cin >> arr1[i][j];

			}
		}

	int arr3[r_size][c_size];

	for (int i = 0; i <= r_size - 1; i++) {

			for (int j = 0; j <= c_size - 1; j++) {

				arr3[i][j] = arr1[i][j] + arr2[i][j];

			}
		}

	for (int i = 0; i <= r_size - 1; i++) {

			for (int j = 0; j <= c_size - 1; j++) {

				cout << arr3[i][j] << " ";

			}
			cout << endl;
		}*/

  /* -----------------------------------PROBLEM 1 AVERAGE
	const int size = 5;
	double arr[size];
	int sum = 0;
	cout << "Enter Values of Array\n";
	for (int i = 0; i <= size - 1; i++) {
		cin >> arr[i];

	}
	for (int j = 0; j <= size - 1; j++)
	{
		sum += arr[j];
	}
	cout << "Average Values for these 5 elements = " << (sum/5.0);
	*/

	/* ---------------------------------------FINDING MAX VALUE
	const int size = 10;
	double arr[size];
	double max = -1;
	cout << "ENTER the elements of Array" << endl;
	for (int i = 0; i <= size - 1; i++) {

		cin >> arr[i];
	}
	for (int j = 0; j <= size - 1; j++)
	{
		if (max < arr[j])
			max = arr[j];
	}
	cout << "Max Value in Array = " << max;
	*/

	/* -------------------------------------------FINDING MINIMUM
	const int size = 10;
	double arr[size];
	double min = 100000;
	cout << "ENTER the elements of Array" << endl;
	for (int i = 0; i <= size - 1; i++) {

		cin >> arr[i];
	}
	for (int j = 0; j <= size - 1; j++)
	{
		if (min > arr[j])
			min = arr[j];
	}
	cout << "Max Value in Array = " << min;*/

	/* ------------------------------------------------ ARRAY SORTING
	const int size = 5; 
	int arr[size];

	cout << "Enter Elements of Array\n";
	for (int i = 0; i <= size - 1; i++) {

		cin >> arr[i];
	}
	for (int i = 0; i <= size - 1; i++) {

		for (int j = i + 1; j <= size - 1; j++) {

			if (arr[i] > arr[j])
			{
				int v;
				v = arr[i];
				arr[i] = arr[j];
				arr[j] = v;
			}
		}
	}
	for (int i = 0; i <= size - 1; i++) {
		cout << arr[i] << " ";
	} */
    /* --------------------------------------- FINDING THE NUMBER OF ZEROS
	const int size = 10;
	int arr[size];
	int count = 0;

	cout << "Enter Values of Array\n";
	for (int i = 0; i <= size - 1; i++) {

		cin >> arr[i];
	}

	for (int j = 0; j <= size - 1; j++) {

		if (arr[j] == 0){
			count += 1; }
	}
	cout << "Number of zeros: " << count; */
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
