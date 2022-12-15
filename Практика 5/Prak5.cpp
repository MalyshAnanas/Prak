#include <iostream>
class dimmassiv {
private:
	int m_element;
	int m_size = 1;
	int* m_mas = new int[m_size];
public:
	dimmassiv (int elem) {
		m_element = elem;
		m_mas[0] = m_element;
	}

	void AddEnd(int element) { //Добавление элементов в конец массива
		int* newmas = new int[m_size + 1];
		for (int i = 0; i < m_size; i++) {
			newmas[i] = m_mas[i];
		}
		m_size += 1;
		newmas[m_size-1] = element;
		delete[] m_mas;
		m_mas = newmas;
	}

	void NumberOfElements() { //Количество элементов
		std::cout << m_size << "\n";
	}
	void ElementByIndex(int index) { // Вывод элемента  по индексу
		std::cout << m_mas[index] << "\n";
	}
	void ChangeElement(int index, int element) { //Изменение элемента по индексу
		m_mas[index] = element;
	}
	void DeleteElement(int index) { //Удаление элемента по индексу
		for (int i = index; i < m_size-1; i++) {
			m_mas[i] = m_mas[i + 1];
		}
		m_size -= 1;
	}
	void InsertElement(int index, int element) { //Вставка элемента 
		int* newmas = new int[m_size + 1];
		for (int i = 0; i < m_size; i++) {
			newmas[i] = m_mas[i];
		}
		m_size += 1;
		for (int i = index + 1; i < m_size; i++) {
			newmas[i] = newmas[i - 1];
		}
		newmas[index] = element;
		delete[] m_mas;
		m_mas = newmas;
	}
	void print() { //вывод массива
		for (int i = 0; i < m_size; i++) {
			std::cout << m_mas[i] <<"\n";
		}
	}
};

int main(){
	setlocale(LC_ALL, "rus");
	dimmassiv dimmassiv1(1);
	dimmassiv1.AddEnd(3);
	std::cout << "Проверка добавления в конец элемента: "<<"\n";
	dimmassiv1.print();
	std::cout << "\n";
	dimmassiv1.InsertElement(1, 9);
	std::cout << "Проверка вставки элемента: " << "\n";
	dimmassiv1.print();
	std::cout << "\n";
	dimmassiv1.ChangeElement(0, 2);
	std::cout << "Проверка изменения элемента: " << "\n";
	dimmassiv1.print();
	std::cout << "\n";
	dimmassiv1.DeleteElement(0);
	std::cout << "Проверка удаления элемента: " << "\n";
	dimmassiv1.print();
	std::cout << "\n";
	std::cout << "Проверка вывода элемента по индексу: " << "\n";
	dimmassiv1.ElementByIndex(1);
	std::cout << "\n";
	std::cout << "Проверка вывода количества элементов: " << "\n";
	dimmassiv1.NumberOfElements();
}
