#pragma once
#include <SFML/Graphics.hpp>
#include <string>
#include <functional>
namespace hf
{
    class Button
    {
    public:
        Button(std::string text, sf::Vector2f size);
        void setText(std::string value);
        void setSize(sf::Vector2f size);
        void setPosition(sf::Vector2f position);
        void setFunction(std::function<void(void)> func);
    private:
        sf::Text _text;
        sf::RectangleShape _buttonShape;
        std::function <void(void)> _function = [](){};
    };

    class TextField
    {
        
    };
}
