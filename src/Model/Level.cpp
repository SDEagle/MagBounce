#include "Level.h"

// Constructors/Destructors
//  

Level::Level () {
    physics = new StandardPhysics();
}

Level::~Level () {
    delete physics;
    physics = NULL;
}

PhysicalProperties* Level::getLevelPhysics() {
    return physics;
}

void Level::getPhysicsApplyableObjects(std::vector<PhysicsApplyableObject>*) {
    
}