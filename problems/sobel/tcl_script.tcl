open_project sobel
set_top sobel
add_files sobel.cpp
add_files -tb data.txt -cflags "-I."
add_files -tb dst.txt -cflags "-I."
add_files -tb sobel_test.cpp -cflags "-I."
open_solution "solution1" -flow_target vivado
set_part {xcu50-fsvh2104-2-e}
create_clock -period 10 -name default
csim_design
csynth_design
cosim_design
