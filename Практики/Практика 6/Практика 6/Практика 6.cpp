#include <iostream>
#include <vector>
#include <string>

void print(std::vector<std::string>  &fruits) {
	for (size_t i = 0; i < fruits.size(); i++) {
		std::cout << fruits[i] << " ";
	}
	std::cout << "\n";
}

int main() {
	setlocale(LC_ALL, "rus");
	std::vector<std::string> fruits = { "Апельсин", "Яблоко" };
	fruits.push_back("Персик"); //вставляет новое значение в конец вектора
	std::cout << "Проверка push_back: ";
	print(fruits);
	fruits.erase(fruits.begin()); //удаляет первое значение в векторе
	std::cout << "Проверка erase: ";
	print(fruits);
	fruits.insert(fruits.begin() + 1, "Груша"); // вставляет на второе место грушу
	std::cout << "Проверка insert: ";
	print(fruits);
	fruits.emplace_back("Нектарин"); // вставляет в конец вектора НОВЫЙ элемент
	std::cout << "Проверка emplace_back: "; 
	print(fruits);
	fruits[2] = "Ананас";
	std::cout << "Проверка присваивания: ";
	print(fruits);
	fruits.resize(2); // сокращает размер вектора до двух значений
	std::cout << "Проверка resize: ";
	print(fruits);
	fruits.shrink_to_fit(); //очищение памяти
	std::cout << "Сколько памяти используется ДО reserve: ";
	std::cout << fruits.capacity() << "\n"; // возвращает количество элементов, которое может содержать вектор 
	fruits.reserve(3); // зарезервировано 3 места 
	std::cout << "Проверка reserve: ";
	std::cout << fruits.capacity() << "\n";
	fruits.clear(); // удаление всех элементов
	std::cout << "Проверка clear: ";
	print(fruits);
	std::cout << "Сколько памяти используется ДО shrink_to_fit: ";
	std::cout << fruits.capacity() << "\n";
	fruits.shrink_to_fit(); //очищение памяти
	std::cout << "Сколько памяти используется ПОСЛЕ shrink_to_fit: ";
	std::cout << fruits.capacity() << "\n";
	std::cout << sizeof(std::vector<std::string>);
}