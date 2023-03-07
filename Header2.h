#pragma once
#ifdef SET_H
#define SET_H

class Set {

private:
    int* elements;
    int numElements;
    int capacity;
    void resize();

public:
    Set();
    Set(Set const& other);
    Set& operator= (Set const& other);
    ~Set();

    bool addElement(int const element);
    bool deleteElement(int const element);
    void print();
    void setUnion(Set const& other);
    void setIntersection(Set const& other);
};

#endif
