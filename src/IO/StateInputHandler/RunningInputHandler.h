/* 
 * File:   RunningInputHandler.h
 * Author: jonathan
 *
 * Created on 31. Oktober 2011, 18:49
 */

#ifndef RUNNINGINPUTHANDLER_H
#define	RUNNINGINPUTHANDLER_H

#include "../InputHandler.h"
enum RunningKeys {
    KEY_POSITIVE, KEY_NEGATIVE, EXIT
};

class RunningInputHandler : virtual public InputHandler {
public:
    RunningInputHandler();
    RunningInputHandler(EventHandler* eventHandler);
    RunningInputHandler(const RunningInputHandler& orig);
    bool* getInput();
    virtual ~RunningInputHandler();
private:

};

#endif	/* RUNNINGINPUTHANDLER_H */
