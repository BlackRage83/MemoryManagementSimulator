#include "Process.h"

Process::Process(int ID, int size){
    this->ID = ID;
    this->size = size;
    this->pageFaults = 0;
    this->swapOut = 0;
    this->arrivalTime = clock();
    this->exitTime = clock();
}

int Process::getID(){
    return ID;
}

int Process::getSize(){
    return size;
}

int Process::getPageFaults(){
    return pageFaults;
}

int Process::getSwapOut(){
    return swapOut;
}


clock_t Process::getArrivalTime(){
    return arrivalTime;
}

clock_t Process::getExitTime(){
    return exitTime;
}

double Process::getReturnTime(){
    return double(exitTime - arrivalTime) / CLOCKS_PER_SEC;
}

std::vector<int> Process::getAssignedPages(){
    return assignedPages;
}

void Process::setArrivalTime(){
    arrivalTime = clock();
}

void Process::setSize(int size){
    this->size = size;
}

void Process::assignPage(int page){
    assignedPages.push_back(page);
}

void Process::end(){
    this->exitTime = clock();
}
