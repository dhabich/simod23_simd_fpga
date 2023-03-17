ALL_CXXFLAGS=-Wall -std=c++20 $(CXXFLAGS) -msse -msse2 -mssse3 -msse4.1 -msse4.2 -mavx -mavx2 -mavx512f -mavx512dq -mavx512bw

BOARD= #SET_ME

# Directories
INC_DIRS := ../common/inc
LIB_DIRS :=

# Files
INCS := $(wildcard )
LIBS := pthread

emu: 
	icpx -fsycl $(ALL_CXXFLAGS) -Ilibs/include -fintelfpga -DFPGA_EMULATOR src/tvl_fpga_filter.cpp -fsycl-device-code-split=off -o build/tvl_fpga_filter.fpga_emu $(foreach D,$(LIB_DIRS),-L$D) $(foreach L,$(LIBS),-l$L)
	icpx -fsycl $(ALL_CXXFLAGS) -Ilibs/include -fintelfpga -DFPGA_EMULATOR src/tvl_fpga_agg.cpp -fsycl-device-code-split=off -o build/tvl_fpga_agg.fpga_emu $(foreach D,$(LIB_DIRS),-L$D) $(foreach L,$(LIBS),-l$L)
	icpx -fsycl $(ALL_CXXFLAGS) -Ilibs/include -fintelfpga -DFPGA_EMULATOR src/tvl_host_mt.cpp -fsycl-device-code-split=off -o build/tvl_host_mt.fpga_emu $(foreach D,$(LIB_DIRS),-L$D) $(foreach L,$(LIBS),-l$L)

hw_agg:
	icpx -fsycl $(ALL_CXXFLAGS) -v -Ilibs/include -fintelfpga -Xshardware -fsycl-device-code-split=off -Xsprofile -Xssave-temps -reuse-exe=build/tvl_fpga_agg.fpga -Xsoutput-report-folder=tvl_fpga_agg.prj -Xsboard=$(BOARD) -o build/tvl_fpga_agg.fpga src/tvl_fpga_agg.cpp $(foreach D,$(LIB_DIRS),-L$D) $(foreach L,$(LIBS),-l$L)

hw_filter:
	icpx -fsycl $(ALL_CXXFLAGS) -v -Ilibs/include -fintelfpga -Xshardware -fsycl-device-code-split=off -Xsprofile -Xssave-temps -reuse-exe=build/tvl_fpga_filter.fpga -Xsoutput-report-folder=tvl_fpga_filter.prj -Xsboard=$(BOARD) -o build/tvl_fpga_filter.fpga src/tvl_fpga_filter.cpp $(foreach D,$(LIB_DIRS),-L$D) $(foreach L,$(LIBS),-l$L)

hw_mt:
	icpx -fsycl $(ALL_CXXFLAGS) -v -Ilibs/include -fintelfpga -Xshardware -fsycl-device-code-split=off -Xsprofile -Xssave-temps -reuse-exe=build/tvl_host_mt.fpga -Xsoutput-report-folder=tvl_host_mt.prj -Xsboard=$(BOARD) -o build/tvl_host_mt.fpga src/tvl_host_mt.cpp $(foreach D,$(LIB_DIRS),-L$D) $(foreach L,$(LIBS),-l$L)

.PHONY: emu report hw_agg hw_filter hw_non hw_mt clean clean_hw
