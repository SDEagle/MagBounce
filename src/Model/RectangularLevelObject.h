/* 
 * File:   RectangularLevelObject.h
 * Author: eagle
 *
 * Created on 29. Oktober 2011, 17:57
 */

#ifndef RECTANGULARLEVELOBJECT_H
#define	RECTANGULARLEVELOBJECT_H

#include "LevelObject.h"
#include "../Physics/Vector2D.h"
#include "../Graphics/RectangularLevelObjectRenderer.h"

class RectangularLevelObject : public LevelObject {
private:
    
    Vector2D upperLeftCorner;
    
public:
    
    RectangularLevelObject();
    RectangularLevelObject(float x1, float y1, float x2, float y2);
    RectangularLevelObject(const RectangularLevelObject& orig);
    virtual ~RectangularLevelObject();
    
    /**
     * Return the upperLeftCorner as a Vector2D
     * @return the upperLeftCorner 
     */
    Vector2D getUpperLeftCorner() const;
    
    /**
     * Return the lowerRightCorner as a Vector2D
     * @return the lowerRightCorner 
     */
    Vector2D getLowerRightCorner() const;
    
private:

};

#endif	/* RECTANGULARLEVELOBJECT_H */
