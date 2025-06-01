#ifndef DESK_H
#define DESK_H

#include "VAO.h"
#include "VBO.h"
#include "EBO.h"
#include "shaderClass.h"
#include "Texture.h"  // Dodaj nag³ówek dla Texture

class Desk {
public:
    VAO vaoTop, vaoLegs;
    VBO vboTop, vboLegs;
    EBO eboTop, eboLegs;

    Desk();
    // Rysowanie z osobnymi teksturami dla blatu i nóg
    void Draw(Shader& shader, Texture& topTex, Texture& legTex);
    void Delete();
};

#endif
