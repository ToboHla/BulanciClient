//
// Created by natalia on 1. 1. 2020.
//

#ifndef BULANCICLIENT_PLAYER_H
#define BULANCICLIENT_PLAYER_H


#include <SDL_surface.h>
#include <SDL_image.h>

enum Facing {TOP, RIGHT, BOT, LEFT};

class Player {
private:
    int hp;
    SDL_Surface * image;
    double surX = 0;
    double surY = 0;
    int pocetNabojov;
    Facing facing;
public:
    Player(double surX, double surY);
    //Player();

    virtual ~Player();
    SDL_Surface *getImage() const;
    void setImage(SDL_Surface *image);
    double getSurX() const;
    void setSurX(double surX);
    double getSurY() const;
    void setSurY(double surY);
    void setFacing(Facing facing);
    void update(int x, int y,Facing facing);

    Facing getFacing() const;
};


#endif //BULANCICLIENT_PLAYER_H