#include "AmigaGame.h"

void AmigaGame::ProcessInput()
{
    if (IsKeyDown(KEY_ESCAPE))
        mIsRunning = false;
}

void AmigaGame::AmigaUpdate()
{
}

void AmigaGame::GenerateOutput()
{
    DrawBegin
        ClearBackground(RAYWHITE);
    DrawEnd
}
