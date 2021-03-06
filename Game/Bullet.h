//
// Created by natalia on 3. 1. 2020.
//

#ifndef BULANCICLIENT_BULLET_H
#define BULANCICLIENT_BULLET_H


#include <SDL_surface.h>
#include "Player.h"

class Bullet {
private:
    SDL_Surface * image;
    double surX = 0;
    double surY = 0;
    Facing facing;
public:
    Bullet();

    virtual ~Bullet();

    double getSurX() const;
    void setSurX(double surX);
    double getSurY() const;
    void setSurY(double surY);
    void update(double x, double y, Facing facing);
    SDL_Surface *getImage() const;

    Facing getFacing() const;
};


#endif //BULANCICLIENT_BULLET_H
