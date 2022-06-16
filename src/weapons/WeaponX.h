#include <iostream>
#include "Weapon.h"

namespace BattleGame
{
    class WeaponX : public Weapon
    {
        using Weapon::Weapon;
        
        void fire() override;
    };
}