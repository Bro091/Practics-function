#include <iostream>
#include <cstdlib>
#include <ctime>
#include <algorithm>

template <typename T>
void print_arr(T arr[], const int length) {
	std::cout << '[';
	for (int i = 0; i < length; i++)
		std::cout << arr[i] << ", ";
	std::cout << "\b\b]\n";
}

template <typename T>
void fill_arr(T arr[], const int length, int left, int right) {
	srand(time(NULL));
	for (int i = 0; i < length; i++)
		arr[i] = rand() % (right - left) + left;

}
template <typename T>
void clear_arr(T arr[], const int length, int a) {
	for (int i = 0; i < length; i++)
		if (arr[i] == a)
			arr[i] = 0;
} 

int index_sum(int arr1[], int arr2[], const int length1, const int length2, int a) {
	if (a >= length1 || a >= length2 || a < 0){
		std::cout << "ERROR";
	return 0;
}
		return arr1[a] + arr2[a];
}


template <typename T>
double mean_arr(T arr, const int length) {
	double min = arr[0];
	double max = arr[0];
	for (int i = 1; i < length; i++){
		if (arr[i] < min)
			min = arr[i];
		if (arr[i] > max)
			max = arr[i];
	}
		return ((min + max) / 2);
	
}
 

void prime_range(int num1, int num2) {
	
	for (int i = num1; i <= num2; i++){
	int counter = 0;
		if (i % i == 0)
			counter++;
			std::cout <<  i << ' ';

			for (int i = 1; i < num2; i++) {
				if (counter == 2)
					std::cout << i << ' ';
			}
	}
}


void prime_range(double num1, double num2) {
	int counter = 0;
	for (int i = num1; i <= num2; i++) {
		if (i % i == 0)
			counter++;
		std::cout << i << ' ';
		for (int i = num1; i < num2; i++) {
			if (counter == 2)
				std::cout << i << ' ';
		}
	}
}
void prime_range(double num1) {
	for (int i = 1; i < num1; i++) {
		int counter = 0;
		if (i % i == 0)
			counter++;
		for (int i = 1; i < num1; i++) {
			if (i % i == 2)
				std::cout << i << ' ';
		}
	}
}


int main() {
	setlocale(LC_ALL, "Russian");
	int n, m;


	//Задача 1
	const int size = 10;
	int arr[size];
	fill_arr(arr, size, 0, 100);
	print_arr(arr, size);
	std::cout << "Задача 1\nВведите число-> ";
	std::cin >> n;
	clear_arr(arr, size, n);
	print_arr(arr, size); 
	std::cout << '\n';

	

	//Задача 2
	std::cout << "Задача 2\n";
	const int size2 = 15;
	int arr1[size2];
	int arr2[size2];
	fill_arr(arr1, size2, 5, 50);
	fill_arr(arr2, size2, 7, 70);
	std::cout << "Массив 1:\n";
	print_arr(arr1, size2);
	std::cout << "Массив 2:\n";
	print_arr(arr2, size2);
	std::cout << "Введите число-> ";
	std::cin >> n;
	std::cout << "Сумма элементов под индексом " << n << " = " << index_sum(arr1, arr2, size2, size2, n) << std::endl;


	//Задача 3
	std::cout << "Задача 3\n";
	const int size3 = 10;
	int arr3[size3];
	fill_arr(arr3, size3, 2, 15);
	print_arr(arr3, size3);
	std::cout << "Ср. арифметическое min и max в массиве = " << mean_arr(arr3, size3) << std::endl;

	//Задача 4

	std::cout << "Простые числа от 20 до 40:  ";
	prime_range(20, 40);
	
	


	return 0;

}