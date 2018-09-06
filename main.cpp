#include <SFML/Graphics.hpp>

class Hex : public sf::Drawable {
private:
    sf::CircleShape outerShape;
    sf::CircleShape innerShape;

    void draw(sf::RenderTarget &target, sf::RenderStates states) const override {
        target.draw(outerShape, states);
        target.draw(innerShape, states);
    }

public:
    Hex(float x, float y) : outerShape(28, 6), innerShape(22, 6) {
        outerShape.setOrigin(outerShape.getRadius(),outerShape.getRadius());
        innerShape.setOrigin(innerShape.getRadius(),innerShape.getRadius());

        outerShape.setPosition(x, y);
        innerShape.setPosition(x, y);

        outerShape.setRotation(30);
        innerShape.setRotation(30);

        outerShape.setFillColor(sf::Color(255, 159, 0));
        innerShape.setFillColor(sf::Color(255, 175, 41));

        outerShape.setOutlineColor(sf::Color(255, 255, 255));
        outerShape.setOutlineThickness(2);
    };
};

int main() {
    sf::RenderWindow window(sf::VideoMode(1920, 1080), "SuperCells");
    Hex hex = Hex(window.getSize().x / 2.0f, window.getSize().y / 2.0f);

    while (window.isOpen()) {

        sf::Event event{};
        while (window.pollEvent(event)) {
            switch (event.type) {
                case sf::Event::Closed:
                    window.close();
                    break;
                case sf::Event::Resized:
                    break;
                case sf::Event::LostFocus:
                    break;
                case sf::Event::GainedFocus:
                    break;
                case sf::Event::TextEntered:
                    break;
                case sf::Event::KeyPressed:
                    break;
                case sf::Event::KeyReleased:
                    break;
                case sf::Event::MouseWheelMoved:
                    break;
                case sf::Event::MouseWheelScrolled:
                    break;
                case sf::Event::MouseButtonPressed:
                    break;
                case sf::Event::MouseButtonReleased:
                    break;
                case sf::Event::MouseMoved:
                    break;
                case sf::Event::MouseEntered:
                    break;
                case sf::Event::MouseLeft:
                    break;
                case sf::Event::JoystickButtonPressed:
                    break;
                case sf::Event::JoystickButtonReleased:
                    break;
                case sf::Event::JoystickMoved:
                    break;
                case sf::Event::JoystickConnected:
                    break;
                case sf::Event::JoystickDisconnected:
                    break;
                case sf::Event::TouchBegan:
                    break;
                case sf::Event::TouchMoved:
                    break;
                case sf::Event::TouchEnded:
                    break;
                case sf::Event::SensorChanged:
                    break;
                case sf::Event::Count:
                    break;
            }
        }

        window.clear(sf::Color(239, 239, 239));

        window.draw(hex);

        window.display();
    }
    return 0;
}