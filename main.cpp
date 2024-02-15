#include <iostream>
#include "maths.hpp"

int main()
{
    bool end_program = false;
    std::cout << "Bonjour et bienvenue !";
    while(!end_program){
        int reponse = 0;
        std::cout << "\n\nQuelle operation souhaitez vous realiser ?\n";
        std::cout << "1. Une addition\n";
        std::cout << "2. Une soustraction\n";
        std::cout << "3. Une multiplication\n";
        std::cout << "4. Une division\n";
        std::cout << "5. Aucune. Je veux partir\n";
        std::cin >> reponse;
        switch(reponse)
        {
            case 1:
                addition();
                break;
            case 2:
                soustraction();
                break;
            case 3:
                multiplication();
                break;
            case 4:
                division();
                break;
            case 5:
                std::cout << "Tres bien. Au revoir !\n";
                end_program = true;
                break;
            default:
                std::cout << "Entree Incorrecte !\n";
                break;
        }
    }

    return 0;
}
