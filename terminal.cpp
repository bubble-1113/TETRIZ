#include "terminal.h"
#include<iostream>
#define CSI "\033["

void tc::move_to(int rol, int col)
{
    std::cout<<CSI<<rol<<";"<<col<<"H";
}

void tc::set_fore_color(int id)
{
    std::cout<<CSI<<"38;5;"<<id<<"m";
}

void tc::set_back_color(int id)
{
    std::cout<<CSI<<"48;5;"<<id<<"m";
}

void tc::clean_screen()
{
    std::cout<<CSI<<"2J";
}

void tc::reset_color()
{
    std::cout<<CSI<<"0m";
}

void tc::hide_cursor()
{
    std::cout<<CSI<<"?25l";
}

void tc::reset_cursor()
{
    std::cout<<CSI<<"?25h";
}
