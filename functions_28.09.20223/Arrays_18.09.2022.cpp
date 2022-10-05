#include<iostream>
float mean (float num1, float num2) {
	float aver = (num1 + num2) / 2;
	return aver;
	}
int arrMeanValue(int arr[], int size) {
	int m;
	m = 0;
	int aver;
	for (int i = 0; i < size; i++) {

		m+=arr[i];
		aver = m / size;
		
	}
	


	return aver;

	
	
}
void arr(int ar[], int lenght) {
	for (int i = 0; i < lenght; i++) {
		if (ar[i] < 0)
			ar[i] = -ar[i];
		else
			ar[i] = ar[i];
		std::cout <<"\t"<<ar[i]<<"\n";
	}
	
	
	

}
void func(int N, static int S=5) {
	std::cout << "статичная переменная = 5"<<"\n";
std::cout<<"результат = " << N * S << "\n";
	
	
}

	int main(){
	setlocale(LC_ALL, "Russian");


	std::cout << "Домашнаяя работа" << "\n";
	std::cout << "Задача 1_функция выводящая среднее значение" << "\n";
	float a, b;
	std::cout << "Введите число 1" << "\n";
	std::cin >> a;
	std::cout << "Введите число 2" << "\n";
	std::cin >> b;
	std::cout<<"среднее между числами 1 и 2 "<<"\n"<<mean(a, b) << "\n\n";

	std::cout << "Задача 2_среднее арифметическое массива"<< "\n";
	const int L=5;
	std::cout<<"длина массива = "<<L<<"\n";
	std::cout << "введите массив " << "\n";
	int t[L];
	for (int i = 0; i < L; i++) {
		std::cin >> t[i];
	}
		std::cout << "среднее значение массива  " << arrMeanValue(t, L) << "\n\n";
	
	
	std::cout << "Задача 3_сортировка функции" << "\n\n";
	
	const int l = 5;
	std::cout << "Длина массива = " << l<<"\n";
	int j[l];
	for (int i = 0; i < l; i++)
	{
		std::cin >> j[i];
	}
		arr(j,l);
	
	std:: cout << "Задача 3" << "\n\n";
	int X;
	std::cout << "введите число " << "\n";
	std::cin >> X;
	func(X);





	return 0;


}


