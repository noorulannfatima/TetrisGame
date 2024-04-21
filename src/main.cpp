#include<iostream>
#include <raylib.h>


int main(){
        Color darkBlue = { 44, 44, 127, 255};
    InitWindow(500, 620, "raylib Tetris");
    SetTargetFPS(60);
    while(WindowShouldClose() == false){
        BeginDrawing();
        ClearBackground(darkBlue);

        EndDrawing();
    }
    CloseWindow();


}
