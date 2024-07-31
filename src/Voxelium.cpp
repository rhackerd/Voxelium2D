#include "Voxelium.hpp"

void Voxelium::setTitle(std::string title) {
  this->title = title;
  // set raylib window title
  SetWindowTitle(title.c_str());
}

void Voxelium::setSize(int width, int height) {
  this->width = width;
  this->height = height;
  SetWindowSize(width, height);
}

std::string Voxelium::getTitle() {
  return title;
}

int Voxelium::getWidth() {
  return width;
}

int Voxelium::getHeight() {
  return height;
}

std::pair<int, int> Voxelium::getSize() {
  return std::pair<int, int>(width, height);
}

void Voxelium::Init(std::string title, int width, int height) {
  this->title = title;
  this->width = width;
  this->height = height;
  InitWindow(width, height, title.c_str());
}

void Voxelium::setBackgroundColor(int r, int g, int b) {
  this->backgroundColor = {r,g,b,255};
}
void Voxelium::Clear() {
  ClearBackground(backgroundColor);
}

void Voxelium::Draw() {
  startDrawing();
}

bool Voxelium::shouldClose() {
  return WindowShouldClose();
}

void Voxelium::updateScreen() {
  EndDrawing();
}

void Voxelium::startDrawing() {
  BeginDrawing();
}

void Voxelium::update() {
  ClearBackground(backgroundColor);
  //Update();
}


void Voxelium::drawMenu() {
  DrawText("Voxelium", 10, 10, 20, BLACK);
}

void Voxelium::drawScenes() {
  if (ScenesWarning == 0) {
  std::cout << "It is not recommended to call DrawScenes() directly, use drawMenu() and drawGame() instead or just create ur own scenes" << std::endl;
  ScenesWarning = 1;
  }
  if (scene == 0) {
    drawMenu();
  }else if (scene == 1) {
    // drawGame();
  }
}
