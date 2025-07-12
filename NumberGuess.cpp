#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include <SFML/Graphics.hpp>
using namespace std;
using namespace sf;
void w3(Font& font, int& attempt) {
	RenderWindow window(VideoMode(650, 320), "Number Guess Game");
	Text scoreText;
	scoreText.setFont(font);
	scoreText.setCharacterSize(24);
	scoreText.setFillColor(Color::White);
	scoreText.setPosition(10, 90);
	Text m("Keep It Up!", font, 25);
	m.setFillColor(Color::Red);
	m.setPosition(Vector2f(250.f, 150.f));
	m.setOutlineThickness(5.f);
	m.setOutlineColor(Color::Black);
	while (window.isOpen()) {
		Event event;
		while (window.pollEvent(event)) {
			if (event.type == Event::Closed) {
				window.close();
			}
			if (event.type == Event::KeyPressed && event.key.code == Keyboard::Escape) {
				window.close();
			}
		}
		window.clear(Color::Magenta);
		scoreText.setString("Congratulations! You guessed the number in attempts: " + to_string(attempt));
		window.draw(scoreText);
		window.draw(m);
		window.display();
	}
}
void draw(RenderWindow& window, Font& font) {
	for (int i = 1;i <= 2;i++) {
		for (int j = 1;j <= 10;j++) {
			// For Shape
			RectangleShape r1(Vector2f(50, 40));
			r1.setFillColor(Color::White);
			r1.setOutlineColor(Color::Black);
			r1.setOutlineThickness(2.f);
			r1.setPosition(((20 * j) * 4), (150*i));
			window.draw(r1);
			// For Text
			Text t1("1", font, 45);
			t1.setFillColor(Color::Black);
			t1.setPosition(((20 * j) * 4), (146 * i));
			if (i == 1) {
				if (j == 1) t1.setString("1");
				else if (j == 2) t1.setString("2");
				else if (j == 3) t1.setString("3");
				else if (j == 4) t1.setString("4");
				else if (j == 5) t1.setString("5");
				else if (j == 6) t1.setString("6");
				else if (j == 7) t1.setString("7");
				else if (j == 8) t1.setString("8");
				else if (j == 9) t1.setString("9");
				else if (j == 10) t1.setString("10");
			}
			if (i == 2) {
				if (j == 1) t1.setString("11");
				else if (j == 2) t1.setString("12");
				else if (j == 3) t1.setString("13");
				else if (j == 4) t1.setString("14");
				else if (j == 5) t1.setString("15");
				else if (j == 6) t1.setString("16");
				else if (j == 7) t1.setString("17");
				else if (j == 8) t1.setString("18");
				else if (j == 9) t1.setString("19");
				else if (j == 10) t1.setString("20");
			}
			window.draw(t1);
		}
	}
}
void w2(Font& font) {
	int keyTime = 8, attempt = 0;
	srand(static_cast<unsigned int>(time(0)));
	int secretNumber = rand() % 20 + 1;
	RenderWindow window(VideoMode(900, 500), "Number Guess Game");
	window.setFramerateLimit(60);
	Text t("I have selected a number between 1 and 20. Can you guess it?", font, 30);
	t.setFillColor(Color::Magenta);
	t.setPosition(Vector2f(15.f, 50.f));
	t.setOutlineThickness(5.f);
	t.setOutlineColor(Color::Black);
	while (window.isOpen()) {
		Event event;
		while (window.pollEvent(event)) {
			if (event.type == Event::Closed) {
				window.close();
			}
			if (event.type == Event::KeyPressed && event.key.code == Keyboard::Escape) {
				window.close();
			}
			if (event.type == Event::MouseButtonPressed && event.mouseButton.button == Mouse::Left) {
				Vector2f mousePosition = window.mapPixelToCoords(Mouse::getPosition(window));
				for (int i = 1;i <= 2;i++) {
					for (int j = 1;j <= 10;j++) {
						RectangleShape r(Vector2f(50, 40));
						r.setPosition(((20 * j) * 4), (150 * i));
						if (r.getGlobalBounds().contains(mousePosition)) {
							++attempt;
							if (i == 1) {
								if (j == 1) {
									if (secretNumber == 1) {
										window.close();
										w3(font, attempt);
									}
								}
								else if (j == 2) {
									if (secretNumber == 2) {
										window.close();
										w3(font, attempt);
									}
								}
								else if (j == 3) {
									if (secretNumber == 3) {
										window.close();
										w3(font, attempt);
									}
								}
								else if (j == 4) {
									if (secretNumber == 4) {
										window.close();
										w3(font, attempt);
									}
								}
								else if (j == 5) {
									if (secretNumber == 5) {
										window.close();
										w3(font, attempt);
									}
								}
								else if (j == 6) {
									if (secretNumber == 6) {
										window.close();
										w3(font, attempt);
									}
								}
								else if (j == 7) {
									if (secretNumber == 7) {
										window.close();
										w3(font, attempt);
									}
								}
								else if (j == 8) {
									if (secretNumber == 8) {
										window.close();
										w3(font, attempt);
									}
								}
								else if (j == 9) {
									if (secretNumber == 9) {
										window.close();
										w3(font, attempt);
									}
								}
								else if (j == 10) {
									if (secretNumber == 10) {
										window.close();
										w3(font, attempt);
									}
								}
							}
							if (i == 2) {
								if (j == 1) {
									if (secretNumber == 11) {
										window.close();
										w3(font, attempt);
									}
								}
								else if (j == 2) {
									if (secretNumber == 12) {
										window.close();
										w3(font, attempt);
									}
								}
								else if (j == 3) {
									if (secretNumber == 13) {
										window.close();
										w3(font, attempt);
									}
								}
								else if (j == 4) {
									if (secretNumber == 14) {
										window.close();
										w3(font, attempt);
									}
								}
								else if (j == 5) {
									if (secretNumber == 15) {
										window.close();
										w3(font, attempt);
									}
								}
								else if (j == 6) {
									if (secretNumber == 16) {
										window.close();
										w3(font, attempt);
									}
								}
								else if (j == 7) {
									if (secretNumber == 17) {
										window.close();
										w3(font, attempt);
									}
								}
								else if (j == 8) {
									if (secretNumber == 18) {
										window.close();
										w3(font, attempt);
									}
								}
								else if (j == 9) {
									if (secretNumber == 19) {
										window.close();
										w3(font, attempt);
									}
								}
								else if (j == 10) {
									if (secretNumber == 20) {
										window.close();
										w3(font, attempt);
									}
								}
							}
						}
					}
				}
			}

		}
		window.clear(Color::Cyan);
		window.draw(t);
		draw(window,font);
		window.display();
	}
}
int main() {
	RenderWindow w1(VideoMode(600.f, 600.f), "Number Guess Game");
	Font font;
	if (!font.loadFromFile("arial.ttf"))
		cout << "Can't load font";
	Text t("Welcome To", font, 45);
	t.setFillColor(Color::White);
	t.setPosition(Vector2f(160.f, 150.f));
	t.setOutlineThickness(5.f);
	t.setOutlineColor(Color::Black);
	Text t1("Number Guess Game", font, 45);
	t1.setFillColor(Color::White);
	t1.setPosition(Vector2f(120.f, 250.f));
	t1.setOutlineThickness(5.f);
	t1.setOutlineColor(Color::Black);
	RectangleShape box(Vector2f(105.f, 50.f));
	box.setFillColor(Color::Yellow);
	box.setPosition(Vector2f(250.f, 350.f));
	box.setOutlineThickness(5.f);
	box.setOutlineColor(Color::Black);
	Text r("Start", font, 45);
	r.setFillColor(Color::Red);
	r.setPosition(Vector2f(255.f, 348.f));
	r.setOutlineThickness(5.f);
	r.setOutlineColor(Color::Black);
	while (w1.isOpen()) {
		Event event;
		while (w1.pollEvent(event)) {
			if (event.type == Event::Closed)
				w1.close();
			if (event.type == Event::KeyPressed && event.key.code == Keyboard::Escape)
				w1.close();
			if (event.type == Event::MouseButtonPressed && event.mouseButton.button == Mouse::Left) {
				Vector2f mousePosition = w1.mapPixelToCoords(Mouse::getPosition(w1));
				if (box.getGlobalBounds().contains(mousePosition)) {
					w2(font);
				}
			}
		}
		w1.clear(Color::Blue);
		w1.draw(t);
		w1.draw(t1);
		w1.draw(box);
		w1.draw(r);
		w1.display();
	}
	return 0;
}
