#include <iostream>

class Counter {
public:
    void plus() {
        this->num1 += 1;
    }
    void minus() {
        this->num1 -= 1;
    }
    Counter() {
        this->num1 = 1;
    }
    Counter(int num) {
        this->num1 = num;
    }
    int get_num1() {
        return num1;
    }
private:
    int num1;
};

int main()
{
    setlocale(LC_ALL, "Rus");
    system("chcp 1251 >> null");
    std::string input = " ";
    Counter counter;
    while (true) {
        std::cout << "Вы хотите указать начальное значение счетчика? Введите y/n: " << std::endl;
        std::cin >> input;
        if (input == "y") {
            int num = 0;
            std::cout << "Введите начальное значение счетчика?" << std::endl;
            std::cin >> num;
            Counter countrConstr(num);
            break;
        }
        else if (input == "n") {
            break;
        }
        else {
            std::cout << "Вы ввели что то не то" << std::endl;
        }
    }
    do {
        std::cout << "Введите команду ('+', '-', '=' или 'x'): " << std::endl;
        std::cin >> input;
        if (input == "+") {
            counter.plus();
        }
        else if (input == "-") {
            counter.minus();
        }
        else if (input == "=") {

            int num = counter.get_num1();
            std::cout << num << std::endl;
        }
        else if (input == "x" || input == "х") {
            std::cout << "До свидания!" << std::endl;
            break;
        }
        else {
            std::cout << "Что за команда! не могу разобрать" << std::endl;
        }

    }while (input != "x");
    return 0;
    
}

