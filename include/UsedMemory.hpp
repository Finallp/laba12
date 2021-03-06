// Copyright 2021 Your Name <your_email>

#ifndef INCLUDE_USEDMEMORY_HPP_
#define INCLUDE_USEDMEMORY_HPP_

#include <string>
#include <vector>
#include <iostream>

#include "Log.hpp"

class UsedMemory {
public:
    void OnDataLoad(const std::vector<Item>& old_items,
                    const std::vector<Item>& new_items);

    void OnRawDataLoad(const std::vector<std::string>& old_items,
                       const std::vector<std::string>& new_items);

    [[nodiscard]] size_t Used() const;

private:
    size_t used_ = 0;
};

#endif  // INCLUDE_USEDMEMORY_HPP_
