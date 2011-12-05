/* 
 * File:   RunningInputHandler.cpp
 * Author: jonathan
 * 
 * Created on 31. Oktober 2011, 18:49
 */

#include "RunningInputHandler.h"
#include <allegro5/allegro.h>
#include <allegro5/events.h>
#include "Input/EventHandler.h"

RunningInputHandler::RunningInputHandler(EventHandler* eventHandler)
        : InputHandler(eventHandler) {
    this->keys = new bool[3];
}

bool* RunningInputHandler::getInput() {
    if (this->eventHandler->getEvent()->type == ALLEGRO_EVENT_DISPLAY_CLOSE) {
        // TODO: …
        exit(0);
    }

    return this->keys;
}

RunningInputHandler::~RunningInputHandler() {
}

