#include <iostream>
#include "Weapon.h"

namespace BattleGame
{
    class WeaponZ : public Weapon
    {
        using Weapon::Weapon;

        void fire() override;
    };
}