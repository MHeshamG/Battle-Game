#include "WeaponX.h"

using BattleGame::WeaponX;

void WeaponX::fire()
{
    Weapon::fire();
    std::cout<<"WeaponX causes a high damage ...."<<std::endl;
}