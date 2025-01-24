#include <iostream>
#include <typeinfo>


#include "Color.hpp"
#include "Toy.hpp"
// Мосты
// паттерн служит для объединения разных семейств наследования
// для совместной работы по общему свойству
// 
// 



int main()
{
    Color red(255, 0, 0);
    Color green(0, 255, 0);
    if (red == green) {
        std::cout << "same color\n";
    }
    std::cout << red;
    Toy q{ "fluffy",Color(128,128,128),Form::Forms::Octogone};

    std::cout << "\n" << q << '\n';
}