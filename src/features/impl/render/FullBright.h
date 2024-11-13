//
// Created by .1qxz on 11/13/2024.
//

#ifndef MINECRAFTANOTHERJNICHEAT_FULLBRIGHT_H
#define MINECRAFTANOTHERJNICHEAT_FULLBRIGHT_H


#include "../../Feature.h"

class FullBright : public Feature {
public:
    FullBright() : Feature("FullBright", "Makes world so more brightness", Category::RENDER) {
#ifdef DEBUG
        this->setToggled(true);
#endif
    }
};


#endif //MINECRAFTANOTHERJNICHEAT_FULLBRIGHT_H
