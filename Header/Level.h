#pragma once

#include <SFML/Graphics.hpp>
#include <SFML/System/Vector2.hpp>

#include "Racquet.h"
#include "Ball.h"
#include "Edge.h"

class Level
{
protected:
	float m_size; 
	int * m_scores;

	sf::Font m_font;
	
	sf::Vector2f m_centerPosition;

	sf::RectangleShape m_ground;
	sf::Texture m_groundTexture;

	std::vector<Ball *> m_balls;

	std::vector<Edge *> m_edges;

	std::vector<Racquet *> m_players;
	std::vector<sf::Texture *> m_playersTextures;

	std::vector<sf::Text *> m_textScores;

public:
	// Constructor
	Level(float size);
	
	// Methods
	void draw(sf::RenderWindow & window);
	void update();

protected:
	void buildLevel();
	void racquetMove();
	void restartLevel();
	void hud(sf::RenderWindow & window);
	void ballBound();
};
