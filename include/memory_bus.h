// Created by John Paul Naiju on 08/05/26.

#pragma once

#include <cstdint>

class MemoryBus {

public:
    MemoryBus() = default;
        
    uint8_t read(uint16_t address);
    void write(uint16_t address, uint8_t data);

private:

    uint8_t boot_rom[0x0100];
    bool boot_rom_enabled = true;

    uint8_t rom_zero[0x4000];
    uint8_t rom_n[0x4000];
    uint8_t vram[0x2000];
    uint8_t ext_ram[0x2000];
    uint8_t work_ram[0x2000];
    uint8_t oam[0xA0];
    uint8_t io[0x80];
    uint8_t hram[0x7F];
    uint8_t interrupt_enable;
};