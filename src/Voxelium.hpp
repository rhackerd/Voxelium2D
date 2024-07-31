#ifndef VOXELIUM_H
#define VOXELIUM_H

#include <iostream>
#include <vector>
#include <string>
#include <raylib.h>
#include <utility>

class Voxelium
{
  public:
    Voxelium() {
      std::cout << "Hi voxelium :)" << std::endl;
    };
    ~Voxelium() {};
    void setTitle(std::string title);
    void drawScenes(); // can be either just called drawMenu() or call drawScenes() and it will automatically call drawMenu() and detect play and swtich scenes
    void drawMenu();
    void setSize(int width, int height);
    std::string getTitle();
    int getWidth();
    int getHeight();
    std::pair<int, int> getSize();
    void Init(std::string title, int width, int height);
    void setBackgroundColor(int r, int g, int b);
    void Clear();
    void Draw();
    bool shouldClose();
    void startDrawing();
    void updateScreen();
    void update();

      
  private:
    std::string title;
    int width;
    int height;
    Color backgroundColor;
    int scene = 0;
    int ScenesWarning = 0;
};



#endif
