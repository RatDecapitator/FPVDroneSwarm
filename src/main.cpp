#include <iostream>
#include "swarm/event.hpp"

int main(){
    swarm::Event ev{};
    ev.type = swarm::EventType::TICK;
    ev.timestamp_ms = 1234;

    std::cout << "Event type: "
                << static_cast<int>(ev.type)
                << ", timestamp: "<< ev.timestamp_ms << " ms\n";

    return 0;
}