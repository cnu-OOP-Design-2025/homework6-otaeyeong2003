#include "bird.h"
#include <iostream>
using namespace std;

class Duck : public Bird {
public:
    Duck() : Bird("Duck") {
        cry();}

    void cry() override {
        cout <<"Quack!"<< endl;}
    ~Duck() override {
        cry();}
};

class Penguin : public Bird {
public:
    Penguin() : Bird("Penguin") {
        cry();}

    void cry() override {
        cout <<"Squawk!"<< endl;}

    void fly() override {
        cout << "This bird can't fly." << endl;}

    ~Penguin() override {
        cry();}
};

class Eagle : public Bird {
public:
    Eagle() : Bird("Eagle") {
        cry();}

    void cry() override {
        cout << "Screech!" << endl;}

    void swim() override {
        cout << "This bird can't swim." << endl;}

    ~Eagle() override {
        cry();}
};
