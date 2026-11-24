#pragma once

#include <cstdint>

namespace swarm {

enum class EventType : std::uint8_t {
    TARGET_DETECTED,
    TARGET_DESTROYED,
    DRONE_LOST,
    TICK
};

struct Event {
    EventType type;
    std::uint64_t timestamp_ms;
    std::uint32_t target_id;
    float x;
    float y;
};

} // namespace swarm
