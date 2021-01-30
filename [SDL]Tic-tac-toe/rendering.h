//
//  rendering.h
//  [SDL]Tic-tac-toe
//
//  Created by Lê Minh An on 27/12/2020.
//


#ifndef rendering_h_
#define rendering_h_

#include <stdio.h>
#include <SDL.h>
#include <SDL2_gfxPrimitives.h>
#include "game.h"
void render_game(SDL_Renderer *renderer, const game_t *game);

#endif /* rendering_h */
