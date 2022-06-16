#ifndef ATTACK_H
#define ATTACK_H

namespace BattleGame
{
    class AttackingBehavior
    {
    public:
        virtual void attack() = 0;
    };
}

#endif