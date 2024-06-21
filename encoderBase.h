#pragma once

class Encoder {
   public:
    Encoder(){};
    virtual void init(){};
    virtual void set(int){};
    virtual int get() = 0;
};