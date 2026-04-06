#pragma once
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

//Рандомна збірка масиву з додатковими діапазонами
template <typename T>
void randArray(T arr[], int size, int a = 0, int b = 10)
{
	for (int i = 0; i < size; i++)
	{
		arr[i] = rand() % (b - a + 1) + a;
	}
}
// Вивод на екран масиву
template <typename T>
void printArray(T arr[], int size, int Wcout = 4)
{
	for (int i = 0; i < size; i++)
	{
		cout.width(Wcout);
		cout << arr[i];
	}
	cout << endl;
}
// Максимальний елемент масиву
template <typename T>
int indexMaxElement(T arr[], int size)
{
	T max = arr[0];
	int ind = 0;
	for (int i = 1; i < size; i++)
	{
		if (arr[i] > max)
		{
			max = arr[i];
			ind = i;

		}
	}
	return ind;
}
//Мінімальний елемент масиву
template <typename T>
int indexMinElement(T arr[], int size)
{
	T min = arr[0];
	int ind = 0;
	for (int i = 1; i < size; i++)
	{
		if (arr[i] < min)
		{
			min = arr[i];
			ind = i;

		}
	}
	return ind;
}
// сума елементів масиву
template <typename T>
T sumArray(T arr[], int size)
{
	T sum = 0;
	
	for (int i = 0; i < size; i++)
	{
		sum += arr[i];
		
	}
	return sum;
}
// знаходження  індексу заданого критерію в масиві
template <typename T,typename K>
int search(T arr[], int size, K value)
{
	int ind = -1;
	for (int i = 0; i < size; i++)
	{
		if (arr[i] == value)
		{
			ind = i;
			break;
		}
	}
	return ind;
}
// Додавання елемента в кінець масива
template<typename T>                    
void addItemBack(T*& arr, int& size, T value)
{
	T* tmp = new T[size + 1];                  //Створюємо масив +1 клітинка
	for (int i = 0; i < size; i++)              
	{
		tmp[i] = arr[i];                     //   Переносимо дані в новий масив
	}
	if (arr != nullptr)
		delete[] arr;                          //  Видаляємо старий масив
	tmp[size] = value;
	arr = tmp;                                  // Присвоюємо новий адрес та розмір масиву
	size++;
}
// Додавання елемента в начало масива
template<typename T>                    
void addItemBegin(T*& arr, int& size, T value)
{
	T* tmp = new T[size + 1];                  //Створюємо масив +1 клітинка
	for (int i =0; i < size; i++)
	{
		tmp[i+1] = arr[i];                     //   Переносимо дані в новий масив
	}
	if (arr != nullptr)
		delete[] arr;                          //  Видаляємо старий масив
	tmp[0] = value;
	arr = tmp;                                  // Присвоюємо новий адрес та розмір масиву
	size++;
}
// Видалення елемента з масива за індексом
template<typename T>
void deleteItem(T*& arr, int& size, int index)
	{
		T * tmp = new  T[size - 1];
        int j = 0;
		for (int i = 0; i < size; i++)
		{
			if (i != index)
			{
				tmp[j++] = arr[i];
			}
		}
		if (arr != nullptr) delete[]arr;
		arr = tmp;
		size--;
	}
// количество елементів за обраним внутри ф.критеріем
template<typename T>
int amountEven(int* arr, int size)
{
	int amount = 0;
	for (int i = 0; i < size; i++)
	{
		if (arr[i]%2==0)
		{
			amount++;
		}
	}
	return amount;
}
// Збірка малого масива з більшого за визначеними критеріями
template<typename T>
void createEvenArray(T* arr, int size, T*& even, int& sizeEven)
{
	sizeEven = amountEven <T>(arr, size);
	if (sizeEven == 0)
	{
		return;
	}
	else
	{
		even = new T[sizeEven];
		int j = 0;
		for (int i = 0; i < size; i++)
		{
			if (arr[i] % 2 == 0)
			{
				even[j++] = arr[i];
			}
		}
	}
}
// визначає кількість елементів масиву за критерієм:
template <typename T>
int myCountIf(T* arr, int size, bool (*fp)(T))
{
	int amount = 0;
	for (int i = 0; i < size; i++)
	{
		if (fp(arr[i]) == true)
			amount++;
	}
	return amount;
}
//визначає суму елементів масиву за критерієм
template<typename T>
T mySumIf(T* arr, int size, bool (*fp)(T))
{
	T sum = 0;
	for (int i = 0; i < size; i++)
	{
		if (fp(arr[i]) == true)
			sum+=arr[i];
	}
	return sum;
}
// знаходить Індекс першого елемента масиву за критерієм:
int myFindIf(int* arr, int size, bool (*fp)(int))
{

	for (int i = 0; i < size; i++)
	{
		
		if (fp(arr[i]))
			
		return i;
	}
	return -1;
	
}
//Заміна елемента за критеріем в масиві
void myReplaceIf(int* arr, int size, bool (*fp)(int), int value)
{
	for (int i = 0; i < size; i++)
	{
		if (fp(arr[i]))
			arr[i] = value;
	}
}
// Видалення єлемента з масива за критеріем
template <typename T>
void myRemoveIf(T *& arr, int & size, bool (*fp)(T))
{
	
	for (int i = 0; i < size; i++)
	{
		if (fp(arr[i]))
		{
			deleteItem(arr, size, i);
			i--;
		}
			
		
	}
}
// виборка та зборка малого масиву з більшого за заданим відризком
template <typename T>
void createArrayBetween(int* arr, int size, int from, int to, T* & sub_arr, T & sub_size)   // 4
{
	if (from < 0) from = 1;
	if (from > size) from = size;
	if (to < 0 || to<from || to>size) to = from;

	sub_size = to - from + 1;
	sub_arr = new int[sub_size];
	int j = 0;
	for (int i = from; i <= to; i++)
	{
		sub_arr[j++] = arr[i - 1];
	}
}
// Сортування масиву 
template <typename T>
void mySort(T* arr, int size, bool (*cmp)(T, T))
{
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size - i - 1; j++)
		{
			if (cmp(arr[j], arr[j + 1])) {
				T temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}

		}
	}
}
// Знаходження последнего елемента масива за значенням
int myFindLast_if(int* arr, int size, bool (*fp)(int))
{

	for (int i = size-1; i >= 0; i--)
	{

		if (fp(arr[i]))

			return i;
	}
	return -1;

}
// Количество заданних символів в строке
int getNumberOfStars(const char* str,char ch)
{
	int n = 0;
	for (int i = 0; str[i]; i++)
	{
		if (str[i] == ch) n++;

	}
	return n;
}
//Копіювання символів у допоміжну змінну-масив після вводу користувача через fgets()
void copyStrPart(char* dest, char* src, int n)
{
	for (int i = 0; i < n - 1; i++)
	{
		dest[i] = src[i];
	}
	dest[n - 1] = '\0';
}

//Знаходження цілого одного числа в рядку
int strIsdigit(const char* str, int a)
{

	for (int i = 0; i < strlen(str); i++)
	{
		if (isdigit(str[i]))
		{
			if (a > 0)
			{
				a *= 10;
			}
			a += str[i] - 48;
		}

	}
	return a;
}
















