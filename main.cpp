// Командный проект. Группа ПИ-52.
// Команда: Теплов (в. 30, техлид), Прохоренков (в. 74), Козлов (в. 7).

#include <iostream>
#include <windows.h>
// === БЛОК ПОДКЛЮЧЕНИЙ: каждый участник добавляет свой заголовочный файл ===
// #include "teplov.h"
// #include "prokhorov.h"
#include "kozlov.h"
// === КОНЕЦ БЛОКА ПОДКЛЮЧЕНИЙ ===
using namespace std;

int main() {
    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);
    int choice;
    double	x,	y;
    do {
        cout << "\n=== Командный проект: сборник расчётов ===\n";

        // === БЛОК МЕНЮ: каждый участник добавляет свои пункты ===
        cout <<	"7. Площадь прямоугольного треугольника\n";
        cout <<	"8. Гипотенуза прямоугольного треугольника\n";
        // === КОНЕЦ БЛОКА МЕНЮ ===

        cout << "0. Выход\n";
        cout << "Выберите пункт: ";
        cin >> choice; 

        switch (choice) {
        // === БЛОК ОБРАБОТКИ: каждый участник добавляет свои case ===
        case 7:
        cout <<	"Введите стороны x и y : ";
		cin	>> x >> y;
		cout << "Площадь = " <<	rightTriangleArea(x, y) << "\n";
        break;
        case 8:
		cout << "Введите стороны x и y : ";
		cin	>> x >> y;
        cout << "Гипотенуза = "	<< hypotenuse(x, y) << "\n";
		break;
        // === КОНЕЦ БЛОКА ОБРАБОТКИ ===
        case 0:
            cout << "Работа завершена.\n";
            break;
        default:
            cout << "Такого пункта нет.\n";
        }

        } while (choice != 0);
    return 0;
}
