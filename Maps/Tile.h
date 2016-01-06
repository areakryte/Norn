/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Tile.h
 * Author: David
 *
 * Created on January 6, 2016, 10:13 AM
 */

#ifndef TILE_H
#define TILE_H

//WARNING: Scoped enums only available with -std=c++11 or -std=gnu++11
namespace TerrainType {
    enum class Terrain {
        Dirt,
        Rocky,
        Grass,
        Stone,
        Wood,
    };
}

using namespace TerrainType;

class Tile {
public:
    Tile();
    Tile(const Tile& orig);
    virtual ~Tile();
    virtual void Event(){};
    virtual void SetTerraianType(){};
    virtual void SetMovementType(){};
    
protected:
    bool movementType;
    Terrain tileType;
};

#endif /* TILE_H */

