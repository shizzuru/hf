#include "hf.h"

namespace hf
{
    Button::Button(std::string text, sf::Vector2f size)
    {
        setText(text);
        setSize(size);
    }
    void Button::setText(std::string value)
    {
        _text.setString(value);
    }
    void Button::setSize(sf::Vector2f size)
    {
        _buttonShape.setSize(size);
    }
    void Button::setPosition(sf::Vector2f position)
    {
        _buttonShape.setPosition(position);
    }
    void Button::setFunction(std::function<void(void)> func)
    {
        _function = func;
    }
}
