/*
    Name: Stephanie Ellis
    Class: CS-3150
    Assignment: Assignment 3 Evolution Models
*/
#include <stdio.h>
#include <stdlib.h>
#include <iostream>

// Inherits World
class Food {
    public:
        int nutrition;
        float toxicity;
    private: 
        int getNutrition() {
            // getter for nutrition of Food
            return 0;
        }
        float getToxocity() {
            // getter for toxicity of Food
            return 0.0;
        }
};

// Interface class
class Actions {
    public:
        void move();
        void eat();
        void die();
        void reproduce();
};

// Inherits Actions (Interface) and World
class Creature: public Actions {
    private:
        float fertility;
        int hunger;
        Creature reproduce(float fertility) {
            // Can reproduce based on fertility
            Creature c;
            return c;
        }
        void die() {
            // Kill Creature
        }
        void move(int index) {
            // Move Creature
        }
        int eat(Food f) {
            // Take in Food value, and eat
            return 0;
        }
        int getHunger() {
            // Getter for hunger
            return 0;
        }
};

class World {
    private:
        float chance;
    public:
        Creature spawnCreature(float chance) {
            // return Creature based on chance of spawning
            Creature c;
            return c;
        }
        Food spawnFood(float chance) {
            // return Food based on chances of spawning
            Food f;
            return f;
        }
};

int main() {
    return 0;
}