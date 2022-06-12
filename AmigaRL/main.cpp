#include <raylib.h>

int main(void)
{
    const int screenWidth = 800, screenHeight = 450;
    InitWindow(screenWidth, screenHeight, "AmigaRL : Game framework based on raylib");

    SetTargetFPS(60);

    while (!WindowShouldClose())
     {
        BeginDrawing();

        ClearBackground(RAYWHITE);

        DrawText("AmigaRL. Game framework based on raylib.", 190, 200, 20, BLACK);
        DrawText("based raylib, made in Skago.", 190, 220, 20, LIGHTGRAY);

        EndDrawing();
    }

    CloseWindow();

    return 0;
}