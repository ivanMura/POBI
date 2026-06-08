//
// Created by Ivan Muratov on 8/6/26.
//

#ifndef UNTITLED5_REPAIRORDERREPOSITORY_H
#define UNTITLED5_REPAIRORDERREPOSITORY_H
#include <vector>
#include <memory>
#include <RepairOrder.h>

class RepairOrderRepository {
private:
    std::vector<std::shared_ptr<RepairOrder>> orders;
public:
    RepairOrderRepository();
    ~RepairOrderRepository();

    void add(std::shared_ptr<RepairOrder> order);
    std::shared_ptr<RepairOrder> getById(int id);

    std::vector<std::shared_ptr<RepairOrder>> getAll() const;
};


#endif //UNTITLED5_REPAIRORDERREPOSITORY_H
