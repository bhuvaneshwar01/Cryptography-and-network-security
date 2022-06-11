#include <stdint.h>
#include <stddef.h>
#include <signal.h>

bool isPalindrome(const uint8_t *data, size_t s){
    for(int i = 0 ; i < s/2 ; i++){
        if(data[i] != data[s-i-1])
            return false;
    }
    
    return true;
}

extern "C" int LLVMFuzzerTestOneInput(const uint8_t *data, size_t s){
    isPalindrome(data,s);
    return 0;
}