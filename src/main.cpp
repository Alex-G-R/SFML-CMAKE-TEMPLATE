#include <SFML/Graphics.hpp>

int main()
{
    // Create the main window
    sf::RenderWindow window(sf::VideoMode(800, 600), "SFML Blue Circle");

    // Create a circle shape
    sf::CircleShape circle(50); // Radius of the circle is 50 pixels
    circle.setFillColor(sf::Color::Blue); // Set the color to blue
    circle.setPosition(375, 275); // Position the circle (centered in the window)

    // Start the game loop
    while (window.isOpen())
    {
        // Process events
        sf::Event event;
        while (window.pollEvent(event))
        {
            // Close window: exit
            if (event.type == sf::Event::Closed)
                window.close();
        }

        // Clear screen
        window.clear();

        // Draw the circle
        window.draw(circle);

        // Update the window
        window.display();
    }

    return 0;
}
