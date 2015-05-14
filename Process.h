#include <stdio.h>
#include <iostream>
#include <list>
#include <time.h>

class Process{
    private:
        int size; //In bytes
        int ID;
        int pageFaults;
        int swapOut;
        clock_t arrivalTime, exitTime;
        std::list<int> assignedPages;
        
    public:
        Process(int ID, int size);   
        
        int getID();
        int getSize();
        int getPageFaults();
        int getSwapOut();
        clock_t getArrivalTime();
        clock_t getExitTime();
        double getReturnTime();
        std::list<int> getAssignedPages();
        
        void setSize(int size);
        void setArrivalTime();
        void assignPage(int page);
        void end();
};
