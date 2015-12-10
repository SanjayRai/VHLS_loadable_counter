#ifndef LOADABLE_COUNTER_WRAPPER_H_
#define LOADABLE_COUNTER_WRAPPER_H_

#include "ap_fixed.h"
//typedef ap_fixed<64,32>  loadable_counter_data_t;
typedef ap_uint<64>  loadable_counter_data_t;
//typedef int loadable_counter_data_t;
void loadable_counter_wrapper ( loadable_counter_data_t incr_val_in_1, loadable_counter_data_t incr_val_in_2, loadable_counter_data_t &count_val_out, bool load_in, bool reset_in);

#endif // LOADABLE_COUNTER_WRAPPER_H_
