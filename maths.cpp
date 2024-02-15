#include <iostream>
#include <math.h>


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

    if(nombre2 == 0){
        std::cout << "\nEntree incorecte ! Impossible de diviser par 0 !";
    }else{
        solution = nombre1 / nombre2;
        std::cout << "\nReponse : " << nombre1 << " / " << nombre2 << " = " << solution;
    }
}


void racineCaree(){
    float nombre1, solution;
    std::cout << "\nDe quel nombre souhaitez vous connaitre la racine carrée ?\n";

    std::cout << "Nombre 1 : ";
    std::cin >> nombre1;

    solution = sqrt(nombre1);
    std::cout << "\nReponse : la racine caree de " << nombre1 << " est " << solution;

}


void puissance(){
    float nombre1,nombre2, solution;
    std::cout << "\nQuel nombre souhaitez vous mettre à quelle puissance ?\n";

    std::cout << "Nombre 1 : ";
    std::cin >> nombre1;

    std::cout << "Nombre 2 : ";
    std::cin >> nombre2;

    solution = pow(nombre1, nombre2);
    std::cout << "\nReponse : " << nombre1 << "^" << nombre2 << " = " << solution;
}
