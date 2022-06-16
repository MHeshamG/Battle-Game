#ifndef WEAPON_H
#define WEAPON_H

#include <iostream>

namespace BattleGame
{
    class Weapon
    {
    public:
        //Constructor
        Weapon(std::string name, int power, int rate, int maxShots);

        //Destructor
        ~Weapon() = default;

        //Getters
        std::string getName();
        int getPower();
        int getRate();
        int getShots();
        int getMaxShots();

        //Setters
        void setName(std::string name);
        void setPower(int power);
        void setRate(int rate);
        void setShots(int shots);
        void setMaxShots(int maxShots);

        //Actions
        virtual void fire();
        void reload();

        //helpers
        void print();

    private:
        std::string m_name;
        int m_power;
        int m_rate;
        int m_maxShots;
        int m_shots;
    };
}

#endif