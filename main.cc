#include <iostream>
#include <string>
#include "hf.h"

using namespace std::string_literals;

int main(void)
{
    std::cout << "Indeed a wise choice"s << std::endl;
    hf::Button oui("yes"s, sf::Vector2f(50.f, 50.f));
    oui.setFunction([&]()
                    {
                        std::cout << "maybe" << std::endl;
                    });

    return EXIT_SUCCESS;
}
