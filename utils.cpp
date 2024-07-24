#include "utils.h"
#include<chrono>
#include<iostream>
using namespace std::chrono_literals;

static auto start=std::chrono::steady_clock::now();
auto end=start;
int framecount=0;
static int FPS=0;


int ut::fps()
{
    framecount++;
    end=std::chrono::steady_clock::now();
    if(end-start>1s){
        FPS=framecount;

        framecount=0;
        start=end;
        }

return FPS;
}