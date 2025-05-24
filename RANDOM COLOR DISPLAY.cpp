#include <SFML/Graphics.hpp>
#include <cstdlib>
#include <ctime>

using namespace std;

// Function to generate a random color
sf::Color generateRandomColor() {
    // Generate random RGB values between 0 and 255
    int r = rand() % 256;
    int g = rand() % 256;
    int b = rand() % 256;

    return sf::Color(r, g, b);
}

int main() {
    // Initialize random seed
    srand(time(0));

    // Create an SFML window
    sf::RenderWindow window(sf::VideoMode(800, 600), "Random Color Display");

    // Loop to keep the window open
    while (window.isOpen()) {
        sf::Event event;
        while (window.pollEvent(event)) {
            // Close the window when the user requests it
            if (event.type == sf::Event::Closed)
                window.close();
        }

        // Generate a random color
        sf::Color randomColor = generateRandomColor();

        // Set the background color of the window
        window.clear(randomColor);

        // Display the new color on the window
        window.display();
    }

    return 0;
}
