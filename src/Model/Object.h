#ifndef OBJECT_H
#define OBJECT_H

#include <string>
#include "Math/Vector.h"
#include "Graphics/RenderableObject.h"
#include "Graphics/Renderer.h"

using namespace r2d;

/**
 * class LevelObject
 *
 */

class Object : public virtual RenderableObject {
public:
    /**
     * Empty Constructor
     */
    Object();

    /**
     * Empty Destructor
     */
    virtual ~Object();

    /**
     * Set the current position of this object
     * @param x the x coordinate
     * @param y the y coordinate
     */
    void setPosition(float x, float y);

    /**
     * Set the current position of this object
     * @param position an Vector2D containing the position
     */
    void setPosition(const Vector2D &position);

    void setRenderer(Renderer* renderer);

    /**
     * Returns this LevelObjects Renderer
     * @return a Renderer
     */
    Renderer* getRenderer() {
        return renderer;
    }

    /**
     * Return the position of this Object
     * @return an Vector2D containing the position
     */
    Vector2D getPosition() const {
        return position;
    }

    void setMagneticState(int magneticState);

    int getMagneticState() const;
    
    virtual Vector2D getRenderingPosition() const = 0;
    
    ALLEGRO_BITMAP* getBitmap() {
        return renderer->getBitmap();
    }

protected:
    Renderer* renderer;
    Vector2D position;
    int magneticState;

private:
    Object(const Object&);
    const Object& operator=(const Object&);
};

#endif // OBJECT_H
