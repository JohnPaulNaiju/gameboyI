// Created by John Paul Naiju on 28/04/26.

#pragma once

#include <cstdint>

class CPU {

public:
    CPU() = default;

private:

    union Register {
        struct {
            uint8_t lo;
            uint8_t hi;
        };
        uint16_t value;
    };

    Register af{};
    Register bc{};
    Register de{};
    Register hl{};

    uint16_t pc = 0x0000;
    uint16_t sp = 0xFFFE;
};