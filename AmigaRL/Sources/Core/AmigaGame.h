#pragma once
#include <raylib.h>

#define WIDTH 1280
#define HEIGHT 720

#define DrawBegin BeginDrawing();
#define DrawEnd EndDrawing();

class AmigaGame
{
public:
	int Initialize()
	{
		InitWindow(WIDTH, HEIGHT, "AmigaRL : Game framework based on raylib");
		SetTargetFPS(frameRate);
		return true;
	}

	void AmigaRun()
	{
		while (mIsRunning)
		{
			ProcessInput();
			AmigaUpdate();
			GenerateOutput();
		}
	}

	void AmigaEnd() { CloseWindow(); }
private:
	void ProcessInput();
	void AmigaUpdate();
	void GenerateOutput();

	bool mIsRunning;
	const int frameRate = 60;
};

