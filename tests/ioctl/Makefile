include ../../Makefile.globals.inc

CPPFLAGS += -I../../include
CFLAGS += -Wall -O2
LDFLAGS +=
LIB = ../../lib

PROGRAM_LIST = \
	ioctl_flag_group \
	ioctl_4_period \
	ioctl_5_set_output \
	ioctl_6_set_filter \
	ioctl_7_id \
	ioctl_8_set_bpf



all: $(PROGRAM_LIST)

ioctl_flag_group: ioctl_flag_group.o $(LIB)/libhelper.a

ioctl_4_period: ioctl_4_period.o $(LIB)/libhelper.a

ioctl_5_set_output: ioctl_5_set_output.o $(LIB)/libhelper.a

ioctl_6_set_filter: ioctl_6_set_filter.o $(LIB)/libhelper.a

ioctl_7_id: ioctl_7_id.o $(LIB)/libhelper.a

ioctl_8_set_bpf: ioctl_8_set_bpf.o $(LIB)/libhelper.a


install: all
	$(INSTALL) -d $(prefix)/tests/ioctl
	$(INSTALL) -m755 $(PROGRAM_LIST) $(prefix)/tests/ioctl

clean: clean-local
	@- $(RM) $(PROGRAM_LIST)
	@- $(RM) *.o

clean-local:
	@- $(RM) *~
