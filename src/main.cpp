#include <bn_backdrop.h>
#include <bn_color.h>
#include <bn_core.h>
#include <bn_keypad.h>


int main(){
    bn::core::init();
    bn::backdrop::set_color(bn::color(20, 20, 0));
    

    while(true) {
        if(bn::keypad::a_held()){
        bn::backdrop::set_color(bn::color(31,21, 22));
    } 
        if (bn::keypad::a_released()){
        bn::backdrop::set_color(bn::color(20, 20, 0));
    }
    if(bn::keypad::b_pressed()){
        bn::backdrop::set_color(bn::color(24,31, 22));
    } 
    {
        /* code */
    }
    


    bn::core::update();
}

}