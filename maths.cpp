#include <iostream>

void addition(){
    float nombre1,nombre2, solution;
    std::cout << "\nQuels nombres souhaitez vous additionner ?\n";

    std::cout << "Nombre 1 : ";
    std::cin >> nombre1;

    std::cout << "Nombre 2 : ";
    std::cin >> nombre2;

    solution = nombre1 + nombre2;
    std::cout << "\nReponse : " << nombre1 << " + " << nombre2 << " = " << solution;
}


void soustraction(){
    float nombre1,nombre2, solution;
    std::cout << "\nQuels nombres souhaitez vous soustraire ?\n";

    std::cout << "Nombre 1 : ";
    std::cin >> nombre1;

    std::cout << "Nombre 2 : ";
    std::cin >> nombre2;

    solution = nombre1 - nombre2;
    std::cout << "\nReponse : " << nombre1 << " - " << nombre2 << " = " << solution;
}


void multiplication(){
    float nombre1,nombre2, solution;
    std::cout << "\nQuels nombres souhaitez vous multiplier ?\n";

    std::cout << "Nombre 1 : ";
    std::cin >> nombre1;

    std::cout << "Nombre 2 : ";
    std::cin >> nombre2;

    solution = nombre1 * nombre2;
    std::cout << "\nReponse : " << nombre1 << " x " << nombre2 << " = " << solution;
}


void division(){
    float nombre1,nombre2, solution;
    std::cout << "\nQuels nombres souhaitez vous diviser ?\n";

    std::cout << "Nombre 1 : ";
    std::cin >> nombre1;

    std::cout << "Nombre 2 : ";
    std::cin >> nombre2;

    solution = nombre1 / nombre2;
    std::cout << "\nReponse : " << nombre1 << " / " << nombre2 << " = " << solution;
}
