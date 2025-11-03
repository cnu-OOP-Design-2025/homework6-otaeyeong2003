#include "bird.h"
#include <iostream>
using namespace std;

class Duck : public Bird {
public:
    Duck() : Bird("Duck") {
        cry();}
    ~Duck() override {
        cry();}
        
    void cry() override {
        cout <<"Quack!"<< endl;}
    
};

class Penguin : public Bird {
public:
    Penguin() : Bird("Penguin") {
        cry();}   
    ~Penguin() override {
        cry();}

    void cry() override {
        cout <<"Squawk!"<< endl;}

    void fly() override {
        cout << "This bird can't fly." << endl;}


};

class Eagle : public Bird {
public:
    Eagle() : Bird("Eagle") {
        cry();}
    ~Eagle() override {
        cry();
}
    void cry() override {
        cout << "Screech!" << endl;}

    void swim() override {
        cout << "This bird can't swim." << endl;}


};
