#include <raylib.h>

int main(int argc, char *argv[])
{
    const int nScreenWidth(800);
    const int nScreenHeight(600);

    InitWindow(nScreenWidth, nScreenHeight, "Title");
    SetTargetFPS(60);

    int nX(50), nY(50);

    while(!WindowShouldClose())
    {
        if(IsKeyDown(KEY_W))    nY--;
        if(IsKeyDown(KEY_S))    nY++;
        if(IsKeyDown(KEY_A))    nX--;
        if(IsKeyDown(KEY_D))    nX++;

        BeginDrawing();
            ClearBackground(RAYWHITE);
            DrawText("Writing some text to the screen", nX, nY, 20, BLUE);
            DrawFPS(nScreenWidth - 100, 20);
        EndDrawing();
    }

    CloseWindow();

    return 0;
}
