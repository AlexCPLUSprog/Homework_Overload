#include "Overload.h"

int main() {
	setlocale(0, "Ru");

	Overload person("Alex");
	Overload person1("Bob");
	std::cout << "Person name = " << person.getName() << std::endl;

	std::cout << "��������� ������ ��������� '+': " << person.getName() + person1.getName() << std::endl;

	std::cout << "��������� ������ ��������� '-': " << person - 2  << std::endl;	 

	std::cout << "��������� ������ ��������� '*': " << person * 2 << std::endl;

	std::cout << "��������� ������ ��������� '/': " << person / 2 << std::endl;

	std::cout << "��������� ������ ��������� '==': " << (person == person1) << std::endl;

	std::cout << "��������� ������ ��������� '!=': " << (person != person1) << std::endl;
	
	std::cout << "��������� ������ ��������� '+=' " << (person += person1) << std::endl;

	std::cout << "��������� ������ ��������� '<<' " << person1 << std::endl;
}
