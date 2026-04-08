#include "eliuds_eggs.h"

namespace chicken_coop {

    int positions_to_quantity(int n)
    {
        int count {}; 
        while(n)
        {
           if(n % 2 != 0)
           {
              count++;  
           }
            n/= 2; 
        }
        return count; 
    }
}  // namespace chicken_coop
