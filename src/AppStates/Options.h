#ifndef OPTIONS_H
#define OPTIONS_H
#include "AppState.h"

using namespace r2d;

/**
 * class Options
 * 
 */
class Options : public AppState {
public:
    Options();
    virtual ~Options();

    AppState* processInput(list<InputEvent*> events);
    void update(double dt);
    void render(Display& display);
};

#endif // OPTIONS_H