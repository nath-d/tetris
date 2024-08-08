#include "raylib.h"
#include "grid.h"

int main()
{

    Color darkBlue = {44, 44, 127, 255};
    InitWindow(300, 600, "raylib tetris"); // Initializes Window (width, height, title)
    SetTargetFPS(60);

    Grid grid = Grid(); // creating grid object

    // grid.Print();

    while (WindowShouldClose() == false) // Game Loop
    {

        BeginDrawing();
        ClearBackground(darkBlue); // Window Bg is cleared with this colour
        grid.Draw();

        EndDrawing();
    }

    CloseWindow();

    return 0;
}