#include <raylib.h>
#include "Voxelium.hpp"
//------------------------------------------------------------------------------------
int main(void)
{
    Voxelium voxelium;
    voxelium.Init("Voxelium", 800, 300);
  
    voxelium.setBackgroundColor(60,60,60); 

    while (!WindowShouldClose()) {
      SetExitKey(KEY_NULL);
      voxelium.startDrawing();
      voxelium.update();
      voxelium.drawScenes();
      voxelium.updateScreen();
    }
    return 0;
}
