open_project fft
set_top fft
add_files fft.cpp
add_files -tb out.gold.dat -cflags "-Wno-unknown-pragmas" -csimflags "-Wno-unknown-pragmas"
add_files -tb fft_test.cpp -cflags "-Wno-unknown-pragmas" -csimflags "-Wno-unknown-pragmas"
open_solution "solution1" -flow_target vitis
set_part {xcu50-fsvh2104-2-e}
create_clock -period 10 -name default
csim_design
csynth_design
cosim_design