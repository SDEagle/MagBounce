#ifndef GAMESTATE_H
#define GAMESTATE_H

class EventHandler;
class Game;

/**
 * interface GameState
 * 
 */

class GameState {
private:
    GameState(const GameState&);
    const GameState& operator=(const GameState&);

protected:
    Game *game;

public:
    GameState(Game *game);
    virtual ~GameState();

    virtual void reactOnInput() = 0; //TODO bekommt boolean key array als parameter!
};

#endif // GAMESTATE_H
