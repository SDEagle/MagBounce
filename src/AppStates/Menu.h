#ifndef MENU_H
#define MENU_H
#include "AppState.h"

/**
 * class Menu
 * 
 */
class Menu : public AppState {
public:
    Menu();
    virtual ~Menu();

    AppState* processInput(list<InputEvent*> events);
    void update(double dt);
    void render(Display& display);
};

#endif // MENU_H