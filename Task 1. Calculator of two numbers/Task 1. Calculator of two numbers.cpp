#include <iostream>

class Calculator {
public:
    double num1;
    double num2;
    double doubleAdd() {
        return this->num1 + this->num2;
    }
    double doubleMultiply() {
        return this->num1 * this->num2;
    }
    double doubleSubtract_1_2() {
        return this->num1 - this->num2;
    }
    double doubleSubtract_2_1() {
        return this->num2 - this->num1;
    }
    double doubleDivide_1_2() {
        return this->num1 / this->num2;
    }
    double doubleDivide_2_1() {
        return this->num2 / this->num1;
    }
    bool set_num1(int num1) {
        if (num1 != 0) {
            this->num1 = num1;
            return true;
        }
        else {
            std::cout << "Неверный ввод!" << std::endl;
            return false;
        }
    }
    bool set_num2(int num2) {
        if (num2 != 0) {
            this->num2 = num2;
            return true;
        }
        else {
            std::cout << "Неверный ввод!" << std::endl;
            return false;
        }
    }
};

int main()
{
    setlocale(LC_ALL, "Rus");
    int num1 = 0, num2 = 0;
    double res = 0;
    Calculator calc;
    while (true) {
        std::cout << "Введите num1: " << std::endl;
        std::cin >> num1;
        std::cout << "Введите num2: " << std::endl;
        std::cin >> num2;
        bool r = true, l = true;
        r = calc.set_num1(num1);
        l = calc.set_num2(num2);

        if (r == true && l == true) {
            res = calc.doubleAdd();
            std::cout << "num1 + num2 = " << res << std::endl;
            res = calc.doubleMultiply();
            std::cout << "num1 * num2 = " << res << std::endl;
            res = calc.doubleSubtract_1_2();
            std::cout << "num1 - num2 = " << res << std::endl;
            res = calc.doubleSubtract_2_1();
            std::cout << "num2 - num1 = " << res << std::endl;
            res = calc.doubleDivide_1_2();
            std::cout << "num1 / num2 = " << res << std::endl;
            res = calc.doubleDivide_2_1();
            std::cout << "num2 / num1 = " << res << std::endl;
        }
    }
    return 0;
}
