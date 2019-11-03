#include <iostream>


typedef union
{
    uint8_t byte[8];
    //Intel Format
    struct 
    {
        uint32_t PCMD : 16;
        
        uint32_t BCMD : 1;
        uint32_t  : 6;
        uint32_t Audio : 1;
        
        uint32_t EN : 1;
        uint32_t Clear : 1;
        uint32_t Ignore : 1;
        uint32_t  : 1;
        uint32_t Quiet : 1;
        uint32_t  : 3;
        
        int8_t  ACC : 8; //signed
        uint32_t  : 8;
        uint32_t  : 8;
        uint32_t Count : 8;
        
        double PCMD_phys;  
        double ACC_phys;    //Acce
    };
} TypeMsg_Brake_Command;

int main()
{
    TypeMsg_Brake_Command brk_cmd;

    brk_cmd.PCMD = 40000;

    std::cout << brk_cmd.PCMD << std::endl;
    std::cout << brk_cmd.PCMD_phys << std::endl;

    return 0;
}