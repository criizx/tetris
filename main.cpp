#include <raylib.h>

#include <iostream>

int main() {
	Color darkBlue = {44, 44, 127, 255};
	std::cout << "starting" << std::endl;
	const int screenHeight = 1030, screenWidth = 1920;
	InitWindow(screenWidth, screenHeight, "tetris");
	SetTargetFPS(60);
	while (!WindowShouldClose()) {
		BeginDrawing();
		ClearBackground(darkBlue);
		EndDrawing();
	}
	CloseWindow();
}
