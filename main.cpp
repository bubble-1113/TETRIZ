#include<iostream>
#include "terminal.h"
#include<chrono>
#include<thread>
#include "utils.h"
using namespace std::chrono_literals;



void init(){
    tc::hide_cursor();
}

void loop(){
    int i=1;
    while(true){

        tc::clean_screen();

        tc::move_to(1,2);
        std::cout<<"FPS="<<ut::fps();

        tc::move_to(i++,10);
        tc::set_back_color(15);
        std::cout<<"  ";
        tc::reset_color();
        std::cout<<std::flush;
        std::this_thread::sleep_for(500ms);
    }
}

void exit(){
    tc::clean_screen;
    tc::reset_color;
    tc::reset_cursor;
}

int  main(){

    init();
    loop();
    exit();
    return 0;
}
