#include <lcm/lcm-cpp.hpp>
#include <thread>
#include "handlers.hpp"

handlers han;

void handlers::handle_GC(const lcm::ReceiveBuffer* rbuf,
    const std::string& chan,
    const data::game_controller* msg_GC) {

    //std::cout << "Received message on channel \"" << chan << "\"" << std::endl;

    this->new_GC = *msg_GC;
}



void handlers::handle_ia_vision(const lcm::ReceiveBuffer* rbuf,
        const std::string& chan,
        const data::vision* msg_vision) {
         
    //std::cout << "Received message on channel \"" << chan << "\"" << std::endl;
    this->new_ia.timestamp = msg_vision->timestamp;

    const std::vector<data::detection_robots>& robots_source = this->new_GC.team_blue
    ? msg_vision->robots_blue
    : msg_vision->robots_yellow;

    this->new_ia.robots_size = this->new_GC.team_blue
    ? msg_vision->robots_blue_size
    : msg_vision->robots_yellow_size;

    this->new_ia.robots.clear();

    for (int i = 0; i < this->new_ia.robots_size; ++i) {
        data::robot robots_ia;
        const data::detection_robots& robots_sour = robots_source[i];

        robots_ia.id = robots_sour.robot_id;
        robots_ia.spinner = false;
        robots_ia.kick = false;

        robots_ia.vel_tang = 0;
        robots_ia.vel_normal = 0;
        robots_ia.vel_ang = 0;

        robots_ia.kick_speed_x = 0;
        robots_ia.kick_speed_z = 0;

        robots_ia.wheel_speed = false;
        robots_ia.wheel_fr = 0;
        robots_ia.wheel_fl = 0;
        robots_ia.wheel_bl = 0;
        robots_ia.wheel_br = 0;

        this->new_ia.robots.push_back(robots_ia);
    }

    this->new_vision = *msg_vision;

    //lc->publish("IA", &this->new_ia);
}


void handlers::handle_tartarus(const lcm::ReceiveBuffer* rbuf,
          const std::string& chan,
          const data::tartarus* msg_tartarus) {
    //std::cout << "Received message on channel \"" << chan << "\"" << std::endl;

    this->new_tartarus = *msg_tartarus;

    //lc->publish("tartarus", &this->new_tartarus);
}

void handlers::handle_autoref(const lcm::ReceiveBuffer* rbuf,
          const std::string& chan,
          const data::autoref* msg_autoref) {
    //std::cout << "Received message on channel \"" << chan << "\"" << std::endl;

    this->new_autoref = *msg_autoref;

    //lc->publish("autoref", &this->new_autoref);
}