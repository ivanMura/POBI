//
// Created by Ivan Muratov on 8/6/26.
//

#ifndef UNTITLED5_PART_H
#define UNTITLED5_PART_H
#include <string>

class Part {
private:
    std::string name;
    double cost;
public:
    Part(std::string name, double cost): name(name), cost(cost){}
    std::string getName() const { return name; };
    double getCost() const { return cost; }


};
#endif //UNTITLED5_PART_H
