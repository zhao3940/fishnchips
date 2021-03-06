/* gy_steam.c - Implemention file for steam object
 * By Gigi Young
 */

#include <stdlib.h>
#include "../../inc/gigiyoung/gy_object.h"

using namespace std;

void Steam::init() {

    countdown = rand() % 60;

    // create timer for move slot
    timer = new QTimer(this);
    connect( timer, SIGNAL(timeout()), this, SLOT(status()) );
    timer->start(UPDATE_MS);
}

// Default constructor 
Steam::Steam(QGraphicsItem *parent): 
    QObject(), QGraphicsPixmapItem(parent)
{
    // init size and position
    setPos( DEFAULT_POS_X, DEFAULT_POS_Y );
    //setRect( DEFAULT_POS_X, DEFAULT_POS_Y, DEFAULT_STEAM_WIDTH,
    //         DEFAULT_STEAM_HEIGHT );

    init();
}


// Constructor with position 
Steam::Steam(int pos_x, int pos_y,
    QGraphicsItem *parent): QObject(), QGraphicsPixmapItem(parent)
{
    // init size and position
    setPos( pos_x, pos_y );
//    setRect( pos_x, pos_y, DEFAULT_STEAM_WIDTH, DEFAULT_STEAM_HEIGHT );

    init();
} 

/*
// Constructor with position and velocity 
Steam::Steam(int width, int height, int pos_x, int pos_y,
    QGraphicsItem *parent): QObject(), QGraphicsPixmapItem(parent)
{
    // init size and position
    setRect( pos_x, pos_y, width, height );

    init();
}
*/

void Steam::status() {

}
