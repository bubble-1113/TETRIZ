#include<iostream>
#include "terminal.h"
#include<chrono>
#include<thread>
using namespace std::chrono_literals;

int  main(){
   // 设置光标位置到第 5 行第 10 列
    // tc::move_to(5,10);
    // tc::set_fore_color(214);
    // cout<<"hello world";
    int i=1;
    tc::hide_cursor();
    while(i<10){
        tc::clean_screen();
        tc::move_to(i++,10);
        tc::set_back_color(15);
        std::cout<<"  ";
        tc::reset_color();
        std::cout<<std::flush;
        std::this_thread::sleep_for(500ms);

    }
    return 0;
}
