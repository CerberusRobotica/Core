#ifndef HANDLERS_HPP
#define HANDLERS_HPP

#include <iostream>
#include <lcm/lcm-cpp.hpp>
#include "../../data_lcm/data/game_controller.hpp"
#include "../../data_lcm/data/vision.hpp"
#include "../../data_lcm/data/ia.hpp"
#include "../../data_lcm/data/tartarus.hpp"

class handlers {
    public:
        void handle_GC(const lcm::ReceiveBuffer* rbuf,
                       const std::string& chan,
                       const data::game_controller* msg_GC);
    
        void handle_ia_vision(const lcm::ReceiveBuffer* rbuf,
                           const std::string& chan,
                           const data::vision* msg_vision);
    
        void handle_tartarus(const lcm::ReceiveBuffer* rbuf,
                             const std::string& chan,
                             const data::tartarus* msg_tartarus);

        lcm::LCM* lc;
        data::ia new_ia;
        data::tartarus new_tartarus;
        data::game_controller new_GC;
        data::vision new_vision;
    };

extern handlers han;

#endif