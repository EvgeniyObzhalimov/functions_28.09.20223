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
	std::cout << "��������� ���������� = 5"<<"\n";
std::cout<<"��������� = " << N * S << "\n";
	
	
}

	int main(){
	setlocale(LC_ALL, "Russian");


	std::cout << "��������� ������" << "\n";
	std::cout << "������ 1_������� ��������� ������� ��������" << "\n";
	float a, b;
	std::cout << "������� ����� 1" << "\n";
	std::cin >> a;
	std::cout << "������� ����� 2" << "\n";
	std::cin >> b;
	std::cout<<"������� ����� ������� 1 � 2 "<<"\n"<<mean(a, b) << "\n\n";

	std::cout << "������ 2_������� �������������� �������"<< "\n";
	const int L=5;
	std::cout<<"����� ������� = "<<L<<"\n";
	std::cout << "������� ������ " << "\n";
	int t[L];
	for (int i = 0; i < L; i++) {
		std::cin >> t[i];
	}
		std::cout << "������� �������� �������  " << arrMeanValue(t, L) << "\n\n";
	
	
	std::cout << "������ 3_���������� �������" << "\n\n";
	
	const int l = 5;
	std::cout << "����� ������� = " << l<<"\n";
	int j[l];
	for (int i = 0; i < l; i++)
	{
		std::cin >> j[i];
	}
		arr(j,l);
	
	std:: cout << "������ 3" << "\n\n";
	int X;
	std::cout << "������� ����� " << "\n";
	std::cin >> X;
	func(X);





	return 0;


}


