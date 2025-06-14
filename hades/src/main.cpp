#include <thread>
#include "handlers.hpp"
#include "team/Leader.h"



int main() {
    lcm::LCM lcm;
    han.lc = &lcm;

    lcm.subscribe("GC", &handlers::handle_GC, &han);
    lcm.subscribe("vision", &handlers::handle_ia_vision, &han);
    lcm.subscribe("tartarus", &handlers::handle_tartarus, &han);

    han.lc->publish("IA", &han.new_ia);
    han.lc->publish("tartarus", &han.new_tartarus); //inicializa o tartarus

    std::thread lcm_thread([&lcm]() {
        while (true) {
            lcm.handle();

        }
    });


    Leader ia;
    ia.start();
    lcm_thread.join();

    std::cout << "Shutting down..." << std::endl;
    return 0;
}
