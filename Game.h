#ifndef GAME_H
#define GAME_H

#include <glad/glad.h>
#include <GLFW\glfw3.h>
#include "GameLevel.h"

//current state
enum GameState {
	GAME_ACTIVE,
	GAME_MENU,
	GAME_WIN
};

class Game
{
public:
	GameState State;
	std::vector<GameLevel> Levels;
	unsigned int Level;
	bool Keys[1024];
	unsigned int Width, Height;
	//constructor/destructor
	Game(unsigned int width, unsigned int height);
	~Game();

	void Init();
	//game loop
	void ProcessInput(float dt);
	void Update(float dt);
	void Render();
	bool CheckCollision(GameObject& one, GameObject& two);
	void DoCollisions();
};

#endif