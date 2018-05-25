//
//  business.cpp
//  
//
//  Created by mark on 2018-05-24.
//
#include "business.h"

void Business::Help(void){
    std::system("clear");
    std::cout << "Help is valid\n";
    this->mode = 3;
}
void Business::New(void){
    this->mode = 1;
    std::cout << "New is valid\n";
}
void Business::Report(void){
    this->mode = 4;
    std::cout << "Report is valid\n";
}
void Business::Edit(void){
    this->mode = 2;
    std::cout << "Edit is valid\n";
}
void Business::Quit(void){
    this->mode = 0;
    std::cout << "Good bye.\n";
}
int Business::GetMode(void){
    return this->mode;
}
void Business::SetMode(int newmode){
    this->mode = newmode;
}
