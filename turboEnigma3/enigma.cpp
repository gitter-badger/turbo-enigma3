#include "gameState.h"
#include "sdl_enigma.h"

// main entrance to game
int main(int argc, char* argv[])
{
  // setup SDL
  bool isRunning = true;
  gameData gameState{};
  sdlPlatformData platformData(gameState);
  gameState.heroEntity->spawn( gameState.map_system->loadedLevels[2]->getDownStairX()
                             , gameState.map_system->loadedLevels[2]->getDownStairY());


  // begin debug area
  // gameState.map_system->loadedLevels[2]->printDebugMap();
  // end debug area

  // main game loop
  // check that the game is still asked to run and we haven't thrown any errors
  // in platform layers
  while(isRunning && !platformData.error) {
    isRunning = platformData.handleMessages();


    gameState.update(platformData.recentEvents);
 
    platformData.render();
    
  }
    
  return 1;
}
