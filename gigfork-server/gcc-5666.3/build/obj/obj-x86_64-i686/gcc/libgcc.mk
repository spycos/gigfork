srcdir = /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc
VPATH = /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc
EQ = =
objects = $(filter %.o,$^)

# Dependencies are accumulated as we go.
all: stmp-dirs
dirs = libgcc

vis_hide := $(strip $(subst @,-,\
    $(shell if echo 'void foo(void); void foo(void) {}' | \
          $(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -fvisibility=hidden -Werror \
          -c -xc - -o vis_temp_file$$$$.o 2> /dev/null; \
          then echo @fvisibility=hidden @DHIDE_EXPORTS; \
          rm vis_temp_file$$$$.o 2> /dev/null; \
          fi)))

ifneq (,$(vis_hide))
define gen-hide-list
$(NM_FOR_TARGET) -pg $< | \
  $(AWK) 'NF == 3 && $$2 !~ /^[UN]$$/ { print "	.private_extern", $$3 }' > $@T
mv -f $@T $@
endef
else
gen-hide-list = echo > $@
endif


#
# ml: .;
# dir: .
# flags:
# libgcc_a: ./libgcc.a
# libgcov_a: ./libgcov.a
# libgcc_eh_a: ./libgcc_eh.a
# libunwind_a:
#
# shlib_slibdir_qual:
# libgcc_s_so: ./libgcc_s.dylib
# libunwind_so:
#

libgcc/./_get_pc_thunk_ax_s.o: stmp-dirs $(srcdir)/config/$(LIB1ASMSRC)
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -DL_get_pc_thunk_ax -xassembler-with-cpp -c $(srcdir)/config/$(LIB1ASMSRC) -o libgcc/./_get_pc_thunk_ax_s.o
libgcc/./_get_pc_thunk_ax.o: stmp-dirs $(srcdir)/config/$(LIB1ASMSRC) libgcc/./_get_pc_thunk_ax.vis
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -DL_get_pc_thunk_ax -xassembler-with-cpp -c $(srcdir)/config/$(LIB1ASMSRC) -include libgcc/./_get_pc_thunk_ax.vis -o libgcc/./_get_pc_thunk_ax.o
libgcc/./_get_pc_thunk_ax.vis: libgcc/./_get_pc_thunk_ax_s.o; $(gen-hide-list)
./libgcc.a: libgcc/./_get_pc_thunk_ax.o
./libgcc_s.dylib: libgcc/./_get_pc_thunk_ax_s.o
libgcc/./libgcc.map: libgcc/./_get_pc_thunk_ax_s.o
libgcc/./_get_pc_thunk_dx_s.o: stmp-dirs $(srcdir)/config/$(LIB1ASMSRC)
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -DL_get_pc_thunk_dx -xassembler-with-cpp -c $(srcdir)/config/$(LIB1ASMSRC) -o libgcc/./_get_pc_thunk_dx_s.o
libgcc/./_get_pc_thunk_dx.o: stmp-dirs $(srcdir)/config/$(LIB1ASMSRC) libgcc/./_get_pc_thunk_dx.vis
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -DL_get_pc_thunk_dx -xassembler-with-cpp -c $(srcdir)/config/$(LIB1ASMSRC) -include libgcc/./_get_pc_thunk_dx.vis -o libgcc/./_get_pc_thunk_dx.o
libgcc/./_get_pc_thunk_dx.vis: libgcc/./_get_pc_thunk_dx_s.o; $(gen-hide-list)
./libgcc.a: libgcc/./_get_pc_thunk_dx.o
./libgcc_s.dylib: libgcc/./_get_pc_thunk_dx_s.o
libgcc/./libgcc.map: libgcc/./_get_pc_thunk_dx_s.o
libgcc/./_get_pc_thunk_cx_s.o: stmp-dirs $(srcdir)/config/$(LIB1ASMSRC)
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -DL_get_pc_thunk_cx -xassembler-with-cpp -c $(srcdir)/config/$(LIB1ASMSRC) -o libgcc/./_get_pc_thunk_cx_s.o
libgcc/./_get_pc_thunk_cx.o: stmp-dirs $(srcdir)/config/$(LIB1ASMSRC) libgcc/./_get_pc_thunk_cx.vis
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -DL_get_pc_thunk_cx -xassembler-with-cpp -c $(srcdir)/config/$(LIB1ASMSRC) -include libgcc/./_get_pc_thunk_cx.vis -o libgcc/./_get_pc_thunk_cx.o
libgcc/./_get_pc_thunk_cx.vis: libgcc/./_get_pc_thunk_cx_s.o; $(gen-hide-list)
./libgcc.a: libgcc/./_get_pc_thunk_cx.o
./libgcc_s.dylib: libgcc/./_get_pc_thunk_cx_s.o
libgcc/./libgcc.map: libgcc/./_get_pc_thunk_cx_s.o
libgcc/./_get_pc_thunk_bx_s.o: stmp-dirs $(srcdir)/config/$(LIB1ASMSRC)
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -DL_get_pc_thunk_bx -xassembler-with-cpp -c $(srcdir)/config/$(LIB1ASMSRC) -o libgcc/./_get_pc_thunk_bx_s.o
libgcc/./_get_pc_thunk_bx.o: stmp-dirs $(srcdir)/config/$(LIB1ASMSRC) libgcc/./_get_pc_thunk_bx.vis
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -DL_get_pc_thunk_bx -xassembler-with-cpp -c $(srcdir)/config/$(LIB1ASMSRC) -include libgcc/./_get_pc_thunk_bx.vis -o libgcc/./_get_pc_thunk_bx.o
libgcc/./_get_pc_thunk_bx.vis: libgcc/./_get_pc_thunk_bx_s.o; $(gen-hide-list)
./libgcc.a: libgcc/./_get_pc_thunk_bx.o
./libgcc_s.dylib: libgcc/./_get_pc_thunk_bx_s.o
libgcc/./libgcc.map: libgcc/./_get_pc_thunk_bx_s.o
libgcc/./_get_pc_thunk_si_s.o: stmp-dirs $(srcdir)/config/$(LIB1ASMSRC)
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -DL_get_pc_thunk_si -xassembler-with-cpp -c $(srcdir)/config/$(LIB1ASMSRC) -o libgcc/./_get_pc_thunk_si_s.o
libgcc/./_get_pc_thunk_si.o: stmp-dirs $(srcdir)/config/$(LIB1ASMSRC) libgcc/./_get_pc_thunk_si.vis
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -DL_get_pc_thunk_si -xassembler-with-cpp -c $(srcdir)/config/$(LIB1ASMSRC) -include libgcc/./_get_pc_thunk_si.vis -o libgcc/./_get_pc_thunk_si.o
libgcc/./_get_pc_thunk_si.vis: libgcc/./_get_pc_thunk_si_s.o; $(gen-hide-list)
./libgcc.a: libgcc/./_get_pc_thunk_si.o
./libgcc_s.dylib: libgcc/./_get_pc_thunk_si_s.o
libgcc/./libgcc.map: libgcc/./_get_pc_thunk_si_s.o
libgcc/./_get_pc_thunk_di_s.o: stmp-dirs $(srcdir)/config/$(LIB1ASMSRC)
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -DL_get_pc_thunk_di -xassembler-with-cpp -c $(srcdir)/config/$(LIB1ASMSRC) -o libgcc/./_get_pc_thunk_di_s.o
libgcc/./_get_pc_thunk_di.o: stmp-dirs $(srcdir)/config/$(LIB1ASMSRC) libgcc/./_get_pc_thunk_di.vis
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -DL_get_pc_thunk_di -xassembler-with-cpp -c $(srcdir)/config/$(LIB1ASMSRC) -include libgcc/./_get_pc_thunk_di.vis -o libgcc/./_get_pc_thunk_di.o
libgcc/./_get_pc_thunk_di.vis: libgcc/./_get_pc_thunk_di_s.o; $(gen-hide-list)
./libgcc.a: libgcc/./_get_pc_thunk_di.o
./libgcc_s.dylib: libgcc/./_get_pc_thunk_di_s.o
libgcc/./libgcc.map: libgcc/./_get_pc_thunk_di_s.o
libgcc/./_get_pc_thunk_bp_s.o: stmp-dirs $(srcdir)/config/$(LIB1ASMSRC)
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -DL_get_pc_thunk_bp -xassembler-with-cpp -c $(srcdir)/config/$(LIB1ASMSRC) -o libgcc/./_get_pc_thunk_bp_s.o
libgcc/./_get_pc_thunk_bp.o: stmp-dirs $(srcdir)/config/$(LIB1ASMSRC) libgcc/./_get_pc_thunk_bp.vis
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -DL_get_pc_thunk_bp -xassembler-with-cpp -c $(srcdir)/config/$(LIB1ASMSRC) -include libgcc/./_get_pc_thunk_bp.vis -o libgcc/./_get_pc_thunk_bp.o
libgcc/./_get_pc_thunk_bp.vis: libgcc/./_get_pc_thunk_bp_s.o; $(gen-hide-list)
./libgcc.a: libgcc/./_get_pc_thunk_bp.o
./libgcc_s.dylib: libgcc/./_get_pc_thunk_bp_s.o
libgcc/./libgcc.map: libgcc/./_get_pc_thunk_bp_s.o
libgcc/./_muldi3_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -DL_muldi3 -c $(srcdir)/libgcc2.c -o libgcc/./_muldi3_s.o
libgcc/./_muldi3.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -DL_muldi3 $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/./_muldi3.o
./libgcc.a: libgcc/./_muldi3.o
./libgcc_s.dylib: libgcc/./_muldi3_s.o
libgcc/./libgcc.map: libgcc/./_muldi3_s.o
libgcc/./_negdi2_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -DL_negdi2 -c $(srcdir)/libgcc2.c -o libgcc/./_negdi2_s.o
libgcc/./_negdi2.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -DL_negdi2 $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/./_negdi2.o
./libgcc.a: libgcc/./_negdi2.o
./libgcc_s.dylib: libgcc/./_negdi2_s.o
libgcc/./libgcc.map: libgcc/./_negdi2_s.o
libgcc/./_lshrdi3_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -DL_lshrdi3 -c $(srcdir)/libgcc2.c -o libgcc/./_lshrdi3_s.o
libgcc/./_lshrdi3.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -DL_lshrdi3 $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/./_lshrdi3.o
./libgcc.a: libgcc/./_lshrdi3.o
./libgcc_s.dylib: libgcc/./_lshrdi3_s.o
libgcc/./libgcc.map: libgcc/./_lshrdi3_s.o
libgcc/./_ashldi3_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -DL_ashldi3 -c $(srcdir)/libgcc2.c -o libgcc/./_ashldi3_s.o
libgcc/./_ashldi3.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -DL_ashldi3 $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/./_ashldi3.o
./libgcc.a: libgcc/./_ashldi3.o
./libgcc_s.dylib: libgcc/./_ashldi3_s.o
libgcc/./libgcc.map: libgcc/./_ashldi3_s.o
libgcc/./_ashrdi3_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -DL_ashrdi3 -c $(srcdir)/libgcc2.c -o libgcc/./_ashrdi3_s.o
libgcc/./_ashrdi3.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -DL_ashrdi3 $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/./_ashrdi3.o
./libgcc.a: libgcc/./_ashrdi3.o
./libgcc_s.dylib: libgcc/./_ashrdi3_s.o
libgcc/./libgcc.map: libgcc/./_ashrdi3_s.o
libgcc/./_cmpdi2_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -DL_cmpdi2 -c $(srcdir)/libgcc2.c -o libgcc/./_cmpdi2_s.o
libgcc/./_cmpdi2.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -DL_cmpdi2 $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/./_cmpdi2.o
./libgcc.a: libgcc/./_cmpdi2.o
./libgcc_s.dylib: libgcc/./_cmpdi2_s.o
libgcc/./libgcc.map: libgcc/./_cmpdi2_s.o
libgcc/./_ucmpdi2_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -DL_ucmpdi2 -c $(srcdir)/libgcc2.c -o libgcc/./_ucmpdi2_s.o
libgcc/./_ucmpdi2.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -DL_ucmpdi2 $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/./_ucmpdi2.o
./libgcc.a: libgcc/./_ucmpdi2.o
./libgcc_s.dylib: libgcc/./_ucmpdi2_s.o
libgcc/./libgcc.map: libgcc/./_ucmpdi2_s.o
libgcc/./_clear_cache_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -DL_clear_cache -c $(srcdir)/libgcc2.c -o libgcc/./_clear_cache_s.o
libgcc/./_clear_cache.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -DL_clear_cache $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/./_clear_cache.o
./libgcc.a: libgcc/./_clear_cache.o
./libgcc_s.dylib: libgcc/./_clear_cache_s.o
libgcc/./libgcc.map: libgcc/./_clear_cache_s.o
libgcc/./_enable_execute_stack_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -DL_enable_execute_stack -c $(srcdir)/libgcc2.c -o libgcc/./_enable_execute_stack_s.o
libgcc/./_enable_execute_stack.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -DL_enable_execute_stack $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/./_enable_execute_stack.o
./libgcc.a: libgcc/./_enable_execute_stack.o
./libgcc_s.dylib: libgcc/./_enable_execute_stack_s.o
libgcc/./libgcc.map: libgcc/./_enable_execute_stack_s.o
libgcc/./_trampoline_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -DL_trampoline -c $(srcdir)/libgcc2.c -o libgcc/./_trampoline_s.o
libgcc/./_trampoline.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -DL_trampoline $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/./_trampoline.o
./libgcc.a: libgcc/./_trampoline.o
./libgcc_s.dylib: libgcc/./_trampoline_s.o
libgcc/./libgcc.map: libgcc/./_trampoline_s.o
libgcc/./__main_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -DL__main -c $(srcdir)/libgcc2.c -o libgcc/./__main_s.o
libgcc/./__main.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -DL__main $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/./__main.o
./libgcc.a: libgcc/./__main.o
./libgcc_s.dylib: libgcc/./__main_s.o
libgcc/./libgcc.map: libgcc/./__main_s.o
libgcc/./_absvsi2_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -DL_absvsi2 -c $(srcdir)/libgcc2.c -o libgcc/./_absvsi2_s.o
libgcc/./_absvsi2.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -DL_absvsi2 $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/./_absvsi2.o
./libgcc.a: libgcc/./_absvsi2.o
./libgcc_s.dylib: libgcc/./_absvsi2_s.o
libgcc/./libgcc.map: libgcc/./_absvsi2_s.o
libgcc/./_absvdi2_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -DL_absvdi2 -c $(srcdir)/libgcc2.c -o libgcc/./_absvdi2_s.o
libgcc/./_absvdi2.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -DL_absvdi2 $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/./_absvdi2.o
./libgcc.a: libgcc/./_absvdi2.o
./libgcc_s.dylib: libgcc/./_absvdi2_s.o
libgcc/./libgcc.map: libgcc/./_absvdi2_s.o
libgcc/./_addvsi3_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -DL_addvsi3 -c $(srcdir)/libgcc2.c -o libgcc/./_addvsi3_s.o
libgcc/./_addvsi3.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -DL_addvsi3 $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/./_addvsi3.o
./libgcc.a: libgcc/./_addvsi3.o
./libgcc_s.dylib: libgcc/./_addvsi3_s.o
libgcc/./libgcc.map: libgcc/./_addvsi3_s.o
libgcc/./_addvdi3_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -DL_addvdi3 -c $(srcdir)/libgcc2.c -o libgcc/./_addvdi3_s.o
libgcc/./_addvdi3.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -DL_addvdi3 $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/./_addvdi3.o
./libgcc.a: libgcc/./_addvdi3.o
./libgcc_s.dylib: libgcc/./_addvdi3_s.o
libgcc/./libgcc.map: libgcc/./_addvdi3_s.o
libgcc/./_subvsi3_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -DL_subvsi3 -c $(srcdir)/libgcc2.c -o libgcc/./_subvsi3_s.o
libgcc/./_subvsi3.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -DL_subvsi3 $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/./_subvsi3.o
./libgcc.a: libgcc/./_subvsi3.o
./libgcc_s.dylib: libgcc/./_subvsi3_s.o
libgcc/./libgcc.map: libgcc/./_subvsi3_s.o
libgcc/./_subvdi3_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -DL_subvdi3 -c $(srcdir)/libgcc2.c -o libgcc/./_subvdi3_s.o
libgcc/./_subvdi3.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -DL_subvdi3 $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/./_subvdi3.o
./libgcc.a: libgcc/./_subvdi3.o
./libgcc_s.dylib: libgcc/./_subvdi3_s.o
libgcc/./libgcc.map: libgcc/./_subvdi3_s.o
libgcc/./_mulvsi3_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -DL_mulvsi3 -c $(srcdir)/libgcc2.c -o libgcc/./_mulvsi3_s.o
libgcc/./_mulvsi3.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -DL_mulvsi3 $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/./_mulvsi3.o
./libgcc.a: libgcc/./_mulvsi3.o
./libgcc_s.dylib: libgcc/./_mulvsi3_s.o
libgcc/./libgcc.map: libgcc/./_mulvsi3_s.o
libgcc/./_mulvdi3_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -DL_mulvdi3 -c $(srcdir)/libgcc2.c -o libgcc/./_mulvdi3_s.o
libgcc/./_mulvdi3.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -DL_mulvdi3 $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/./_mulvdi3.o
./libgcc.a: libgcc/./_mulvdi3.o
./libgcc_s.dylib: libgcc/./_mulvdi3_s.o
libgcc/./libgcc.map: libgcc/./_mulvdi3_s.o
libgcc/./_negvsi2_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -DL_negvsi2 -c $(srcdir)/libgcc2.c -o libgcc/./_negvsi2_s.o
libgcc/./_negvsi2.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -DL_negvsi2 $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/./_negvsi2.o
./libgcc.a: libgcc/./_negvsi2.o
./libgcc_s.dylib: libgcc/./_negvsi2_s.o
libgcc/./libgcc.map: libgcc/./_negvsi2_s.o
libgcc/./_negvdi2_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -DL_negvdi2 -c $(srcdir)/libgcc2.c -o libgcc/./_negvdi2_s.o
libgcc/./_negvdi2.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -DL_negvdi2 $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/./_negvdi2.o
./libgcc.a: libgcc/./_negvdi2.o
./libgcc_s.dylib: libgcc/./_negvdi2_s.o
libgcc/./libgcc.map: libgcc/./_negvdi2_s.o
libgcc/./_ctors_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -DL_ctors -c $(srcdir)/libgcc2.c -o libgcc/./_ctors_s.o
libgcc/./_ctors.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -DL_ctors $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/./_ctors.o
./libgcc.a: libgcc/./_ctors.o
./libgcc_s.dylib: libgcc/./_ctors_s.o
libgcc/./libgcc.map: libgcc/./_ctors_s.o
libgcc/./_ffssi2_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -DL_ffssi2 -c $(srcdir)/libgcc2.c -o libgcc/./_ffssi2_s.o
libgcc/./_ffssi2.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -DL_ffssi2 $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/./_ffssi2.o
./libgcc.a: libgcc/./_ffssi2.o
./libgcc_s.dylib: libgcc/./_ffssi2_s.o
libgcc/./libgcc.map: libgcc/./_ffssi2_s.o
libgcc/./_ffsdi2_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -DL_ffsdi2 -c $(srcdir)/libgcc2.c -o libgcc/./_ffsdi2_s.o
libgcc/./_ffsdi2.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -DL_ffsdi2 $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/./_ffsdi2.o
./libgcc.a: libgcc/./_ffsdi2.o
./libgcc_s.dylib: libgcc/./_ffsdi2_s.o
libgcc/./libgcc.map: libgcc/./_ffsdi2_s.o
libgcc/./_clz_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -DL_clz -c $(srcdir)/libgcc2.c -o libgcc/./_clz_s.o
libgcc/./_clz.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -DL_clz $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/./_clz.o
./libgcc.a: libgcc/./_clz.o
./libgcc_s.dylib: libgcc/./_clz_s.o
libgcc/./libgcc.map: libgcc/./_clz_s.o
libgcc/./_clzsi2_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -DL_clzsi2 -c $(srcdir)/libgcc2.c -o libgcc/./_clzsi2_s.o
libgcc/./_clzsi2.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -DL_clzsi2 $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/./_clzsi2.o
./libgcc.a: libgcc/./_clzsi2.o
./libgcc_s.dylib: libgcc/./_clzsi2_s.o
libgcc/./libgcc.map: libgcc/./_clzsi2_s.o
libgcc/./_clzdi2_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -DL_clzdi2 -c $(srcdir)/libgcc2.c -o libgcc/./_clzdi2_s.o
libgcc/./_clzdi2.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -DL_clzdi2 $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/./_clzdi2.o
./libgcc.a: libgcc/./_clzdi2.o
./libgcc_s.dylib: libgcc/./_clzdi2_s.o
libgcc/./libgcc.map: libgcc/./_clzdi2_s.o
libgcc/./_ctzsi2_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -DL_ctzsi2 -c $(srcdir)/libgcc2.c -o libgcc/./_ctzsi2_s.o
libgcc/./_ctzsi2.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -DL_ctzsi2 $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/./_ctzsi2.o
./libgcc.a: libgcc/./_ctzsi2.o
./libgcc_s.dylib: libgcc/./_ctzsi2_s.o
libgcc/./libgcc.map: libgcc/./_ctzsi2_s.o
libgcc/./_ctzdi2_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -DL_ctzdi2 -c $(srcdir)/libgcc2.c -o libgcc/./_ctzdi2_s.o
libgcc/./_ctzdi2.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -DL_ctzdi2 $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/./_ctzdi2.o
./libgcc.a: libgcc/./_ctzdi2.o
./libgcc_s.dylib: libgcc/./_ctzdi2_s.o
libgcc/./libgcc.map: libgcc/./_ctzdi2_s.o
libgcc/./_popcount_tab_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -DL_popcount_tab -c $(srcdir)/libgcc2.c -o libgcc/./_popcount_tab_s.o
libgcc/./_popcount_tab.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -DL_popcount_tab $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/./_popcount_tab.o
./libgcc.a: libgcc/./_popcount_tab.o
./libgcc_s.dylib: libgcc/./_popcount_tab_s.o
libgcc/./libgcc.map: libgcc/./_popcount_tab_s.o
libgcc/./_popcountsi2_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -DL_popcountsi2 -c $(srcdir)/libgcc2.c -o libgcc/./_popcountsi2_s.o
libgcc/./_popcountsi2.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -DL_popcountsi2 $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/./_popcountsi2.o
./libgcc.a: libgcc/./_popcountsi2.o
./libgcc_s.dylib: libgcc/./_popcountsi2_s.o
libgcc/./libgcc.map: libgcc/./_popcountsi2_s.o
libgcc/./_popcountdi2_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -DL_popcountdi2 -c $(srcdir)/libgcc2.c -o libgcc/./_popcountdi2_s.o
libgcc/./_popcountdi2.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -DL_popcountdi2 $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/./_popcountdi2.o
./libgcc.a: libgcc/./_popcountdi2.o
./libgcc_s.dylib: libgcc/./_popcountdi2_s.o
libgcc/./libgcc.map: libgcc/./_popcountdi2_s.o
libgcc/./_paritysi2_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -DL_paritysi2 -c $(srcdir)/libgcc2.c -o libgcc/./_paritysi2_s.o
libgcc/./_paritysi2.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -DL_paritysi2 $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/./_paritysi2.o
./libgcc.a: libgcc/./_paritysi2.o
./libgcc_s.dylib: libgcc/./_paritysi2_s.o
libgcc/./libgcc.map: libgcc/./_paritysi2_s.o
libgcc/./_paritydi2_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -DL_paritydi2 -c $(srcdir)/libgcc2.c -o libgcc/./_paritydi2_s.o
libgcc/./_paritydi2.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -DL_paritydi2 $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/./_paritydi2.o
./libgcc.a: libgcc/./_paritydi2.o
./libgcc_s.dylib: libgcc/./_paritydi2_s.o
libgcc/./libgcc.map: libgcc/./_paritydi2_s.o
libgcc/./_powisf2_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -DL_powisf2 -c $(srcdir)/libgcc2.c -o libgcc/./_powisf2_s.o
libgcc/./_powisf2.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -DL_powisf2 $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/./_powisf2.o
./libgcc.a: libgcc/./_powisf2.o
./libgcc_s.dylib: libgcc/./_powisf2_s.o
libgcc/./libgcc.map: libgcc/./_powisf2_s.o
libgcc/./_powidf2_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -DL_powidf2 -c $(srcdir)/libgcc2.c -o libgcc/./_powidf2_s.o
libgcc/./_powidf2.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -DL_powidf2 $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/./_powidf2.o
./libgcc.a: libgcc/./_powidf2.o
./libgcc_s.dylib: libgcc/./_powidf2_s.o
libgcc/./libgcc.map: libgcc/./_powidf2_s.o
libgcc/./_powixf2_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -DL_powixf2 -c $(srcdir)/libgcc2.c -o libgcc/./_powixf2_s.o
libgcc/./_powixf2.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -DL_powixf2 $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/./_powixf2.o
./libgcc.a: libgcc/./_powixf2.o
./libgcc_s.dylib: libgcc/./_powixf2_s.o
libgcc/./libgcc.map: libgcc/./_powixf2_s.o
libgcc/./_powitf2_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -DL_powitf2 -c $(srcdir)/libgcc2.c -o libgcc/./_powitf2_s.o
libgcc/./_powitf2.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -DL_powitf2 $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/./_powitf2.o
./libgcc.a: libgcc/./_powitf2.o
./libgcc_s.dylib: libgcc/./_powitf2_s.o
libgcc/./libgcc.map: libgcc/./_powitf2_s.o
libgcc/./_mulsc3_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -DL_mulsc3 -c $(srcdir)/libgcc2.c -o libgcc/./_mulsc3_s.o
libgcc/./_mulsc3.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -DL_mulsc3 $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/./_mulsc3.o
./libgcc.a: libgcc/./_mulsc3.o
./libgcc_s.dylib: libgcc/./_mulsc3_s.o
libgcc/./libgcc.map: libgcc/./_mulsc3_s.o
libgcc/./_muldc3_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -DL_muldc3 -c $(srcdir)/libgcc2.c -o libgcc/./_muldc3_s.o
libgcc/./_muldc3.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -DL_muldc3 $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/./_muldc3.o
./libgcc.a: libgcc/./_muldc3.o
./libgcc_s.dylib: libgcc/./_muldc3_s.o
libgcc/./libgcc.map: libgcc/./_muldc3_s.o
libgcc/./_mulxc3_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -DL_mulxc3 -c $(srcdir)/libgcc2.c -o libgcc/./_mulxc3_s.o
libgcc/./_mulxc3.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -DL_mulxc3 $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/./_mulxc3.o
./libgcc.a: libgcc/./_mulxc3.o
./libgcc_s.dylib: libgcc/./_mulxc3_s.o
libgcc/./libgcc.map: libgcc/./_mulxc3_s.o
libgcc/./_multc3_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -DL_multc3 -c $(srcdir)/libgcc2.c -o libgcc/./_multc3_s.o
libgcc/./_multc3.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -DL_multc3 $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/./_multc3.o
./libgcc.a: libgcc/./_multc3.o
./libgcc_s.dylib: libgcc/./_multc3_s.o
libgcc/./libgcc.map: libgcc/./_multc3_s.o
libgcc/./_divsc3_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -DL_divsc3 -c $(srcdir)/libgcc2.c -o libgcc/./_divsc3_s.o
libgcc/./_divsc3.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -DL_divsc3 $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/./_divsc3.o
./libgcc.a: libgcc/./_divsc3.o
./libgcc_s.dylib: libgcc/./_divsc3_s.o
libgcc/./libgcc.map: libgcc/./_divsc3_s.o
libgcc/./_divdc3_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -DL_divdc3 -c $(srcdir)/libgcc2.c -o libgcc/./_divdc3_s.o
libgcc/./_divdc3.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -DL_divdc3 $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/./_divdc3.o
./libgcc.a: libgcc/./_divdc3.o
./libgcc_s.dylib: libgcc/./_divdc3_s.o
libgcc/./libgcc.map: libgcc/./_divdc3_s.o
libgcc/./_divxc3_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -DL_divxc3 -c $(srcdir)/libgcc2.c -o libgcc/./_divxc3_s.o
libgcc/./_divxc3.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -DL_divxc3 $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/./_divxc3.o
./libgcc.a: libgcc/./_divxc3.o
./libgcc_s.dylib: libgcc/./_divxc3_s.o
libgcc/./libgcc.map: libgcc/./_divxc3_s.o
libgcc/./_divtc3_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -DL_divtc3 -c $(srcdir)/libgcc2.c -o libgcc/./_divtc3_s.o
libgcc/./_divtc3.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -DL_divtc3 $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/./_divtc3.o
./libgcc.a: libgcc/./_divtc3.o
./libgcc_s.dylib: libgcc/./_divtc3_s.o
libgcc/./libgcc.map: libgcc/./_divtc3_s.o
libgcc/./_bswapsi2_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -DL_bswapsi2 -c $(srcdir)/libgcc2.c -o libgcc/./_bswapsi2_s.o
libgcc/./_bswapsi2.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -DL_bswapsi2 $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/./_bswapsi2.o
./libgcc.a: libgcc/./_bswapsi2.o
./libgcc_s.dylib: libgcc/./_bswapsi2_s.o
libgcc/./libgcc.map: libgcc/./_bswapsi2_s.o
libgcc/./_bswapdi2_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -DL_bswapdi2 -c $(srcdir)/libgcc2.c -o libgcc/./_bswapdi2_s.o
libgcc/./_bswapdi2.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -DL_bswapdi2 $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/./_bswapdi2.o
./libgcc.a: libgcc/./_bswapdi2.o
./libgcc_s.dylib: libgcc/./_bswapdi2_s.o
libgcc/./libgcc.map: libgcc/./_bswapdi2_s.o
libgcc/./_fixunssfsi_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -DL_fixunssfsi -DLIBGCC2_UNITS_PER_WORD=4 -c $(srcdir)/libgcc2.c -o libgcc/./_fixunssfsi_s.o
libgcc/./_fixunssfsi.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -DL_fixunssfsi -DLIBGCC2_UNITS_PER_WORD=4 $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/./_fixunssfsi.o
./libgcc.a: libgcc/./_fixunssfsi.o
./libgcc_s.dylib: libgcc/./_fixunssfsi_s.o
libgcc/./libgcc.map: libgcc/./_fixunssfsi_s.o
libgcc/./_fixunsdfsi_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -DL_fixunsdfsi -DLIBGCC2_UNITS_PER_WORD=4 -c $(srcdir)/libgcc2.c -o libgcc/./_fixunsdfsi_s.o
libgcc/./_fixunsdfsi.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -DL_fixunsdfsi -DLIBGCC2_UNITS_PER_WORD=4 $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/./_fixunsdfsi.o
./libgcc.a: libgcc/./_fixunsdfsi.o
./libgcc_s.dylib: libgcc/./_fixunsdfsi_s.o
libgcc/./libgcc.map: libgcc/./_fixunsdfsi_s.o
libgcc/./_fixunsxfsi_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -DL_fixunsxfsi -DLIBGCC2_UNITS_PER_WORD=4 -c $(srcdir)/libgcc2.c -o libgcc/./_fixunsxfsi_s.o
libgcc/./_fixunsxfsi.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -DL_fixunsxfsi -DLIBGCC2_UNITS_PER_WORD=4 $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/./_fixunsxfsi.o
./libgcc.a: libgcc/./_fixunsxfsi.o
./libgcc_s.dylib: libgcc/./_fixunsxfsi_s.o
libgcc/./libgcc.map: libgcc/./_fixunsxfsi_s.o
libgcc/./_fixsfdi_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -DL_fixsfdi -DLIBGCC2_UNITS_PER_WORD=4 -c $(srcdir)/libgcc2.c -o libgcc/./_fixsfdi_s.o
libgcc/./_fixsfdi.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -DL_fixsfdi -DLIBGCC2_UNITS_PER_WORD=4 $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/./_fixsfdi.o
./libgcc.a: libgcc/./_fixsfdi.o
./libgcc_s.dylib: libgcc/./_fixsfdi_s.o
libgcc/./libgcc.map: libgcc/./_fixsfdi_s.o
libgcc/./_fixsfti_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -DL_fixsfdi -DLIBGCC2_UNITS_PER_WORD=8 -c $(srcdir)/libgcc2.c -o libgcc/./_fixsfti_s.o
libgcc/./_fixsfti.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -DL_fixsfdi -DLIBGCC2_UNITS_PER_WORD=8 $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/./_fixsfti.o
./libgcc.a: libgcc/./_fixsfti.o
./libgcc_s.dylib: libgcc/./_fixsfti_s.o
libgcc/./libgcc.map: libgcc/./_fixsfti_s.o
libgcc/./_fixunssfdi_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -DL_fixunssfdi -DLIBGCC2_UNITS_PER_WORD=4 -c $(srcdir)/libgcc2.c -o libgcc/./_fixunssfdi_s.o
libgcc/./_fixunssfdi.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -DL_fixunssfdi -DLIBGCC2_UNITS_PER_WORD=4 $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/./_fixunssfdi.o
./libgcc.a: libgcc/./_fixunssfdi.o
./libgcc_s.dylib: libgcc/./_fixunssfdi_s.o
libgcc/./libgcc.map: libgcc/./_fixunssfdi_s.o
libgcc/./_fixunssfti_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -DL_fixunssfdi -DLIBGCC2_UNITS_PER_WORD=8 -c $(srcdir)/libgcc2.c -o libgcc/./_fixunssfti_s.o
libgcc/./_fixunssfti.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -DL_fixunssfdi -DLIBGCC2_UNITS_PER_WORD=8 $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/./_fixunssfti.o
./libgcc.a: libgcc/./_fixunssfti.o
./libgcc_s.dylib: libgcc/./_fixunssfti_s.o
libgcc/./libgcc.map: libgcc/./_fixunssfti_s.o
libgcc/./_floatdisf_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -DL_floatdisf -DLIBGCC2_UNITS_PER_WORD=4 -c $(srcdir)/libgcc2.c -o libgcc/./_floatdisf_s.o
libgcc/./_floatdisf.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -DL_floatdisf -DLIBGCC2_UNITS_PER_WORD=4 $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/./_floatdisf.o
./libgcc.a: libgcc/./_floatdisf.o
./libgcc_s.dylib: libgcc/./_floatdisf_s.o
libgcc/./libgcc.map: libgcc/./_floatdisf_s.o
libgcc/./_floattisf_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -DL_floatdisf -DLIBGCC2_UNITS_PER_WORD=8 -c $(srcdir)/libgcc2.c -o libgcc/./_floattisf_s.o
libgcc/./_floattisf.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -DL_floatdisf -DLIBGCC2_UNITS_PER_WORD=8 $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/./_floattisf.o
./libgcc.a: libgcc/./_floattisf.o
./libgcc_s.dylib: libgcc/./_floattisf_s.o
libgcc/./libgcc.map: libgcc/./_floattisf_s.o
libgcc/./_floatundisf_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -DL_floatundisf -DLIBGCC2_UNITS_PER_WORD=4 -c $(srcdir)/libgcc2.c -o libgcc/./_floatundisf_s.o
libgcc/./_floatundisf.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -DL_floatundisf -DLIBGCC2_UNITS_PER_WORD=4 $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/./_floatundisf.o
./libgcc.a: libgcc/./_floatundisf.o
./libgcc_s.dylib: libgcc/./_floatundisf_s.o
libgcc/./libgcc.map: libgcc/./_floatundisf_s.o
libgcc/./_floatuntisf_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -DL_floatundisf -DLIBGCC2_UNITS_PER_WORD=8 -c $(srcdir)/libgcc2.c -o libgcc/./_floatuntisf_s.o
libgcc/./_floatuntisf.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -DL_floatundisf -DLIBGCC2_UNITS_PER_WORD=8 $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/./_floatuntisf.o
./libgcc.a: libgcc/./_floatuntisf.o
./libgcc_s.dylib: libgcc/./_floatuntisf_s.o
libgcc/./libgcc.map: libgcc/./_floatuntisf_s.o
libgcc/./_fixdfdi_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -DL_fixdfdi -DLIBGCC2_UNITS_PER_WORD=4 -c $(srcdir)/libgcc2.c -o libgcc/./_fixdfdi_s.o
libgcc/./_fixdfdi.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -DL_fixdfdi -DLIBGCC2_UNITS_PER_WORD=4 $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/./_fixdfdi.o
./libgcc.a: libgcc/./_fixdfdi.o
./libgcc_s.dylib: libgcc/./_fixdfdi_s.o
libgcc/./libgcc.map: libgcc/./_fixdfdi_s.o
libgcc/./_fixdfti_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -DL_fixdfdi -DLIBGCC2_UNITS_PER_WORD=8 -c $(srcdir)/libgcc2.c -o libgcc/./_fixdfti_s.o
libgcc/./_fixdfti.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -DL_fixdfdi -DLIBGCC2_UNITS_PER_WORD=8 $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/./_fixdfti.o
./libgcc.a: libgcc/./_fixdfti.o
./libgcc_s.dylib: libgcc/./_fixdfti_s.o
libgcc/./libgcc.map: libgcc/./_fixdfti_s.o
libgcc/./_fixunsdfdi_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -DL_fixunsdfdi -DLIBGCC2_UNITS_PER_WORD=4 -c $(srcdir)/libgcc2.c -o libgcc/./_fixunsdfdi_s.o
libgcc/./_fixunsdfdi.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -DL_fixunsdfdi -DLIBGCC2_UNITS_PER_WORD=4 $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/./_fixunsdfdi.o
./libgcc.a: libgcc/./_fixunsdfdi.o
./libgcc_s.dylib: libgcc/./_fixunsdfdi_s.o
libgcc/./libgcc.map: libgcc/./_fixunsdfdi_s.o
libgcc/./_fixunsdfti_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -DL_fixunsdfdi -DLIBGCC2_UNITS_PER_WORD=8 -c $(srcdir)/libgcc2.c -o libgcc/./_fixunsdfti_s.o
libgcc/./_fixunsdfti.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -DL_fixunsdfdi -DLIBGCC2_UNITS_PER_WORD=8 $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/./_fixunsdfti.o
./libgcc.a: libgcc/./_fixunsdfti.o
./libgcc_s.dylib: libgcc/./_fixunsdfti_s.o
libgcc/./libgcc.map: libgcc/./_fixunsdfti_s.o
libgcc/./_floatdidf_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -DL_floatdidf -DLIBGCC2_UNITS_PER_WORD=4 -c $(srcdir)/libgcc2.c -o libgcc/./_floatdidf_s.o
libgcc/./_floatdidf.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -DL_floatdidf -DLIBGCC2_UNITS_PER_WORD=4 $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/./_floatdidf.o
./libgcc.a: libgcc/./_floatdidf.o
./libgcc_s.dylib: libgcc/./_floatdidf_s.o
libgcc/./libgcc.map: libgcc/./_floatdidf_s.o
libgcc/./_floattidf_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -DL_floatdidf -DLIBGCC2_UNITS_PER_WORD=8 -c $(srcdir)/libgcc2.c -o libgcc/./_floattidf_s.o
libgcc/./_floattidf.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -DL_floatdidf -DLIBGCC2_UNITS_PER_WORD=8 $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/./_floattidf.o
./libgcc.a: libgcc/./_floattidf.o
./libgcc_s.dylib: libgcc/./_floattidf_s.o
libgcc/./libgcc.map: libgcc/./_floattidf_s.o
libgcc/./_floatundidf_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -DL_floatundidf -DLIBGCC2_UNITS_PER_WORD=4 -c $(srcdir)/libgcc2.c -o libgcc/./_floatundidf_s.o
libgcc/./_floatundidf.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -DL_floatundidf -DLIBGCC2_UNITS_PER_WORD=4 $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/./_floatundidf.o
./libgcc.a: libgcc/./_floatundidf.o
./libgcc_s.dylib: libgcc/./_floatundidf_s.o
libgcc/./libgcc.map: libgcc/./_floatundidf_s.o
libgcc/./_floatuntidf_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -DL_floatundidf -DLIBGCC2_UNITS_PER_WORD=8 -c $(srcdir)/libgcc2.c -o libgcc/./_floatuntidf_s.o
libgcc/./_floatuntidf.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -DL_floatundidf -DLIBGCC2_UNITS_PER_WORD=8 $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/./_floatuntidf.o
./libgcc.a: libgcc/./_floatuntidf.o
./libgcc_s.dylib: libgcc/./_floatuntidf_s.o
libgcc/./libgcc.map: libgcc/./_floatuntidf_s.o
libgcc/./_fixxfdi_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -DL_fixxfdi -DLIBGCC2_UNITS_PER_WORD=4 -c $(srcdir)/libgcc2.c -o libgcc/./_fixxfdi_s.o
libgcc/./_fixxfdi.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -DL_fixxfdi -DLIBGCC2_UNITS_PER_WORD=4 $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/./_fixxfdi.o
./libgcc.a: libgcc/./_fixxfdi.o
./libgcc_s.dylib: libgcc/./_fixxfdi_s.o
libgcc/./libgcc.map: libgcc/./_fixxfdi_s.o
libgcc/./_fixxfti_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -DL_fixxfdi -DLIBGCC2_UNITS_PER_WORD=8 -c $(srcdir)/libgcc2.c -o libgcc/./_fixxfti_s.o
libgcc/./_fixxfti.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -DL_fixxfdi -DLIBGCC2_UNITS_PER_WORD=8 $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/./_fixxfti.o
./libgcc.a: libgcc/./_fixxfti.o
./libgcc_s.dylib: libgcc/./_fixxfti_s.o
libgcc/./libgcc.map: libgcc/./_fixxfti_s.o
libgcc/./_fixunsxfdi_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -DL_fixunsxfdi -DLIBGCC2_UNITS_PER_WORD=4 -c $(srcdir)/libgcc2.c -o libgcc/./_fixunsxfdi_s.o
libgcc/./_fixunsxfdi.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -DL_fixunsxfdi -DLIBGCC2_UNITS_PER_WORD=4 $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/./_fixunsxfdi.o
./libgcc.a: libgcc/./_fixunsxfdi.o
./libgcc_s.dylib: libgcc/./_fixunsxfdi_s.o
libgcc/./libgcc.map: libgcc/./_fixunsxfdi_s.o
libgcc/./_fixunsxfti_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -DL_fixunsxfdi -DLIBGCC2_UNITS_PER_WORD=8 -c $(srcdir)/libgcc2.c -o libgcc/./_fixunsxfti_s.o
libgcc/./_fixunsxfti.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -DL_fixunsxfdi -DLIBGCC2_UNITS_PER_WORD=8 $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/./_fixunsxfti.o
./libgcc.a: libgcc/./_fixunsxfti.o
./libgcc_s.dylib: libgcc/./_fixunsxfti_s.o
libgcc/./libgcc.map: libgcc/./_fixunsxfti_s.o
libgcc/./_floatdixf_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -DL_floatdixf -DLIBGCC2_UNITS_PER_WORD=4 -c $(srcdir)/libgcc2.c -o libgcc/./_floatdixf_s.o
libgcc/./_floatdixf.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -DL_floatdixf -DLIBGCC2_UNITS_PER_WORD=4 $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/./_floatdixf.o
./libgcc.a: libgcc/./_floatdixf.o
./libgcc_s.dylib: libgcc/./_floatdixf_s.o
libgcc/./libgcc.map: libgcc/./_floatdixf_s.o
libgcc/./_floattixf_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -DL_floatdixf -DLIBGCC2_UNITS_PER_WORD=8 -c $(srcdir)/libgcc2.c -o libgcc/./_floattixf_s.o
libgcc/./_floattixf.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -DL_floatdixf -DLIBGCC2_UNITS_PER_WORD=8 $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/./_floattixf.o
./libgcc.a: libgcc/./_floattixf.o
./libgcc_s.dylib: libgcc/./_floattixf_s.o
libgcc/./libgcc.map: libgcc/./_floattixf_s.o
libgcc/./_floatundixf_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -DL_floatundixf -DLIBGCC2_UNITS_PER_WORD=4 -c $(srcdir)/libgcc2.c -o libgcc/./_floatundixf_s.o
libgcc/./_floatundixf.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -DL_floatundixf -DLIBGCC2_UNITS_PER_WORD=4 $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/./_floatundixf.o
./libgcc.a: libgcc/./_floatundixf.o
./libgcc_s.dylib: libgcc/./_floatundixf_s.o
libgcc/./libgcc.map: libgcc/./_floatundixf_s.o
libgcc/./_floatuntixf_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -DL_floatundixf -DLIBGCC2_UNITS_PER_WORD=8 -c $(srcdir)/libgcc2.c -o libgcc/./_floatuntixf_s.o
libgcc/./_floatuntixf.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -DL_floatundixf -DLIBGCC2_UNITS_PER_WORD=8 $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/./_floatuntixf.o
./libgcc.a: libgcc/./_floatuntixf.o
./libgcc_s.dylib: libgcc/./_floatuntixf_s.o
libgcc/./libgcc.map: libgcc/./_floatuntixf_s.o
libgcc/./_fixtfdi_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -DL_fixtfdi -DLIBGCC2_UNITS_PER_WORD=4 -c $(srcdir)/libgcc2.c -o libgcc/./_fixtfdi_s.o
libgcc/./_fixtfdi.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -DL_fixtfdi -DLIBGCC2_UNITS_PER_WORD=4 $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/./_fixtfdi.o
./libgcc.a: libgcc/./_fixtfdi.o
./libgcc_s.dylib: libgcc/./_fixtfdi_s.o
libgcc/./libgcc.map: libgcc/./_fixtfdi_s.o
libgcc/./_fixtfti_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -DL_fixtfdi -DLIBGCC2_UNITS_PER_WORD=8 -c $(srcdir)/libgcc2.c -o libgcc/./_fixtfti_s.o
libgcc/./_fixtfti.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -DL_fixtfdi -DLIBGCC2_UNITS_PER_WORD=8 $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/./_fixtfti.o
./libgcc.a: libgcc/./_fixtfti.o
./libgcc_s.dylib: libgcc/./_fixtfti_s.o
libgcc/./libgcc.map: libgcc/./_fixtfti_s.o
libgcc/./_fixunstfdi_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -DL_fixunstfdi -DLIBGCC2_UNITS_PER_WORD=4 -c $(srcdir)/libgcc2.c -o libgcc/./_fixunstfdi_s.o
libgcc/./_fixunstfdi.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -DL_fixunstfdi -DLIBGCC2_UNITS_PER_WORD=4 $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/./_fixunstfdi.o
./libgcc.a: libgcc/./_fixunstfdi.o
./libgcc_s.dylib: libgcc/./_fixunstfdi_s.o
libgcc/./libgcc.map: libgcc/./_fixunstfdi_s.o
libgcc/./_fixunstfti_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -DL_fixunstfdi -DLIBGCC2_UNITS_PER_WORD=8 -c $(srcdir)/libgcc2.c -o libgcc/./_fixunstfti_s.o
libgcc/./_fixunstfti.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -DL_fixunstfdi -DLIBGCC2_UNITS_PER_WORD=8 $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/./_fixunstfti.o
./libgcc.a: libgcc/./_fixunstfti.o
./libgcc_s.dylib: libgcc/./_fixunstfti_s.o
libgcc/./libgcc.map: libgcc/./_fixunstfti_s.o
libgcc/./_floatditf_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -DL_floatditf -DLIBGCC2_UNITS_PER_WORD=4 -c $(srcdir)/libgcc2.c -o libgcc/./_floatditf_s.o
libgcc/./_floatditf.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -DL_floatditf -DLIBGCC2_UNITS_PER_WORD=4 $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/./_floatditf.o
./libgcc.a: libgcc/./_floatditf.o
./libgcc_s.dylib: libgcc/./_floatditf_s.o
libgcc/./libgcc.map: libgcc/./_floatditf_s.o
libgcc/./_floattitf_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -DL_floatditf -DLIBGCC2_UNITS_PER_WORD=8 -c $(srcdir)/libgcc2.c -o libgcc/./_floattitf_s.o
libgcc/./_floattitf.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -DL_floatditf -DLIBGCC2_UNITS_PER_WORD=8 $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/./_floattitf.o
./libgcc.a: libgcc/./_floattitf.o
./libgcc_s.dylib: libgcc/./_floattitf_s.o
libgcc/./libgcc.map: libgcc/./_floattitf_s.o
libgcc/./_floatunditf_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -DL_floatunditf -DLIBGCC2_UNITS_PER_WORD=4 -c $(srcdir)/libgcc2.c -o libgcc/./_floatunditf_s.o
libgcc/./_floatunditf.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -DL_floatunditf -DLIBGCC2_UNITS_PER_WORD=4 $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/./_floatunditf.o
./libgcc.a: libgcc/./_floatunditf.o
./libgcc_s.dylib: libgcc/./_floatunditf_s.o
libgcc/./libgcc.map: libgcc/./_floatunditf_s.o
libgcc/./_floatuntitf_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -DL_floatunditf -DLIBGCC2_UNITS_PER_WORD=8 -c $(srcdir)/libgcc2.c -o libgcc/./_floatuntitf_s.o
libgcc/./_floatuntitf.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -DL_floatunditf -DLIBGCC2_UNITS_PER_WORD=8 $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/./_floatuntitf.o
./libgcc.a: libgcc/./_floatuntitf.o
./libgcc_s.dylib: libgcc/./_floatuntitf_s.o
libgcc/./libgcc.map: libgcc/./_floatuntitf_s.o
libgcc/./_eprintf.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -DL_eprintf $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/./_eprintf.o
./libgcc.a: libgcc/./_eprintf.o
libgcc/./__gcc_bcmp.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -DL__gcc_bcmp $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/./__gcc_bcmp.o
./libgcc.a: libgcc/./__gcc_bcmp.o
libgcc/./_divdi3_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -fexceptions -fnon-call-exceptions -DL_divdi3 -c $(srcdir)/libgcc2.c -o libgcc/./_divdi3_s.o
libgcc/./_divdi3.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -fexceptions -fnon-call-exceptions -DL_divdi3 $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/./_divdi3.o
./libgcc.a: libgcc/./_divdi3.o
./libgcc_s.dylib: libgcc/./_divdi3_s.o
libgcc/./libgcc.map: libgcc/./_divdi3_s.o
libgcc/./_moddi3_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -fexceptions -fnon-call-exceptions -DL_moddi3 -c $(srcdir)/libgcc2.c -o libgcc/./_moddi3_s.o
libgcc/./_moddi3.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -fexceptions -fnon-call-exceptions -DL_moddi3 $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/./_moddi3.o
./libgcc.a: libgcc/./_moddi3.o
./libgcc_s.dylib: libgcc/./_moddi3_s.o
libgcc/./libgcc.map: libgcc/./_moddi3_s.o
libgcc/./_udivdi3_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -fexceptions -fnon-call-exceptions -DL_udivdi3 -c $(srcdir)/libgcc2.c -o libgcc/./_udivdi3_s.o
libgcc/./_udivdi3.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -fexceptions -fnon-call-exceptions -DL_udivdi3 $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/./_udivdi3.o
./libgcc.a: libgcc/./_udivdi3.o
./libgcc_s.dylib: libgcc/./_udivdi3_s.o
libgcc/./libgcc.map: libgcc/./_udivdi3_s.o
libgcc/./_umoddi3_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -fexceptions -fnon-call-exceptions -DL_umoddi3 -c $(srcdir)/libgcc2.c -o libgcc/./_umoddi3_s.o
libgcc/./_umoddi3.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -fexceptions -fnon-call-exceptions -DL_umoddi3 $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/./_umoddi3.o
./libgcc.a: libgcc/./_umoddi3.o
./libgcc_s.dylib: libgcc/./_umoddi3_s.o
libgcc/./libgcc.map: libgcc/./_umoddi3_s.o
libgcc/./_udiv_w_sdiv_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -fexceptions -fnon-call-exceptions -DL_udiv_w_sdiv -c $(srcdir)/libgcc2.c -o libgcc/./_udiv_w_sdiv_s.o
libgcc/./_udiv_w_sdiv.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -fexceptions -fnon-call-exceptions -DL_udiv_w_sdiv $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/./_udiv_w_sdiv.o
./libgcc.a: libgcc/./_udiv_w_sdiv.o
./libgcc_s.dylib: libgcc/./_udiv_w_sdiv_s.o
libgcc/./libgcc.map: libgcc/./_udiv_w_sdiv_s.o
libgcc/./_udivmoddi4_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -fexceptions -fnon-call-exceptions -DL_udivmoddi4 -c $(srcdir)/libgcc2.c -o libgcc/./_udivmoddi4_s.o
libgcc/./_udivmoddi4.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -fexceptions -fnon-call-exceptions -DL_udivmoddi4 $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/./_udivmoddi4.o
./libgcc.a: libgcc/./_udivmoddi4.o
./libgcc_s.dylib: libgcc/./_udivmoddi4_s.o
libgcc/./libgcc.map: libgcc/./_udivmoddi4_s.o
libgcc/./darwin-64_s.o: stmp-dirs /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/darwin-64.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -c /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/darwin-64.c -o libgcc/./darwin-64_s.o
libgcc/./darwin-64.o: stmp-dirs /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/darwin-64.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) $(vis_hide) -c /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/darwin-64.c -o libgcc/./darwin-64.o
./libgcc.a: libgcc/./darwin-64.o
./libgcc_s.dylib: libgcc/./darwin-64_s.o
libgcc/./libgcc.map: libgcc/./darwin-64_s.o
libgcc/./unwind-dw2.o: stmp-dirs /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/unwind-dw2.c unwind.inc unwind-dw2-fde.h unwind-dw2-fde.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -fexceptions $(vis_hide) -c /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/unwind-dw2.c -o libgcc/./unwind-dw2.o
./libgcc_eh.a: libgcc/./unwind-dw2.o
libgcc/./unwind-dw2-fde-darwin.o: stmp-dirs /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/unwind-dw2-fde-darwin.c unwind.inc unwind-dw2-fde.h unwind-dw2-fde.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -fexceptions $(vis_hide) -c /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/unwind-dw2-fde-darwin.c -o libgcc/./unwind-dw2-fde-darwin.o
./libgcc_eh.a: libgcc/./unwind-dw2-fde-darwin.o
libgcc/./unwind-sjlj.o: stmp-dirs /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/unwind-sjlj.c unwind.inc unwind-dw2-fde.h unwind-dw2-fde.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -fexceptions $(vis_hide) -c /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/unwind-sjlj.c -o libgcc/./unwind-sjlj.o
./libgcc_eh.a: libgcc/./unwind-sjlj.o
libgcc/./unwind-c.o: stmp-dirs /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/unwind-c.c unwind.inc unwind-dw2-fde.h unwind-dw2-fde.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -fexceptions $(vis_hide) -c /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/unwind-c.c -o libgcc/./unwind-c.o
./libgcc_eh.a: libgcc/./unwind-c.o
libgcc/./unwind-dw2_s.o: stmp-dirs /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/unwind-dw2.c unwind.inc unwind-dw2-fde.h unwind-dw2-fde.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -fexceptions -c /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/unwind-dw2.c -o libgcc/./unwind-dw2_s.o
./libgcc_s.dylib: libgcc/./unwind-dw2_s.o
libgcc/./libgcc.map: libgcc/./unwind-dw2_s.o
libgcc/./unwind-dw2-fde-darwin_s.o: stmp-dirs /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/unwind-dw2-fde-darwin.c unwind.inc unwind-dw2-fde.h unwind-dw2-fde.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -fexceptions -c /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/unwind-dw2-fde-darwin.c -o libgcc/./unwind-dw2-fde-darwin_s.o
./libgcc_s.dylib: libgcc/./unwind-dw2-fde-darwin_s.o
libgcc/./libgcc.map: libgcc/./unwind-dw2-fde-darwin_s.o
libgcc/./unwind-sjlj_s.o: stmp-dirs /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/unwind-sjlj.c unwind.inc unwind-dw2-fde.h unwind-dw2-fde.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -fexceptions -c /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/unwind-sjlj.c -o libgcc/./unwind-sjlj_s.o
./libgcc_s.dylib: libgcc/./unwind-sjlj_s.o
libgcc/./libgcc.map: libgcc/./unwind-sjlj_s.o
libgcc/./unwind-c_s.o: stmp-dirs /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/unwind-c.c unwind.inc unwind-dw2-fde.h unwind-dw2-fde.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -fexceptions -c /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/unwind-c.c -o libgcc/./unwind-c_s.o
./libgcc_s.dylib: libgcc/./unwind-c_s.o
libgcc/./libgcc.map: libgcc/./unwind-c_s.o
libgcc/./_gcov.o: stmp-dirs $(srcdir)/libgcov.c $(srcdir)/gcov-io.h $(srcdir)/gcov-io.c gcov-iov.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES)  -DL_gcov -c $(srcdir)/libgcov.c -o libgcc/./_gcov.o
./libgcov.a: libgcc/./_gcov.o
libgcc/./_gcov_merge_add.o: stmp-dirs $(srcdir)/libgcov.c $(srcdir)/gcov-io.h $(srcdir)/gcov-io.c gcov-iov.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES)  -DL_gcov_merge_add -c $(srcdir)/libgcov.c -o libgcc/./_gcov_merge_add.o
./libgcov.a: libgcc/./_gcov_merge_add.o
libgcc/./_gcov_merge_single.o: stmp-dirs $(srcdir)/libgcov.c $(srcdir)/gcov-io.h $(srcdir)/gcov-io.c gcov-iov.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES)  -DL_gcov_merge_single -c $(srcdir)/libgcov.c -o libgcc/./_gcov_merge_single.o
./libgcov.a: libgcc/./_gcov_merge_single.o
libgcc/./_gcov_merge_delta.o: stmp-dirs $(srcdir)/libgcov.c $(srcdir)/gcov-io.h $(srcdir)/gcov-io.c gcov-iov.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES)  -DL_gcov_merge_delta -c $(srcdir)/libgcov.c -o libgcc/./_gcov_merge_delta.o
./libgcov.a: libgcc/./_gcov_merge_delta.o
libgcc/./_gcov_fork.o: stmp-dirs $(srcdir)/libgcov.c $(srcdir)/gcov-io.h $(srcdir)/gcov-io.c gcov-iov.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES)  -DL_gcov_fork -c $(srcdir)/libgcov.c -o libgcc/./_gcov_fork.o
./libgcov.a: libgcc/./_gcov_fork.o
libgcc/./_gcov_execl.o: stmp-dirs $(srcdir)/libgcov.c $(srcdir)/gcov-io.h $(srcdir)/gcov-io.c gcov-iov.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES)  -DL_gcov_execl -c $(srcdir)/libgcov.c -o libgcc/./_gcov_execl.o
./libgcov.a: libgcc/./_gcov_execl.o
libgcc/./_gcov_execlp.o: stmp-dirs $(srcdir)/libgcov.c $(srcdir)/gcov-io.h $(srcdir)/gcov-io.c gcov-iov.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES)  -DL_gcov_execlp -c $(srcdir)/libgcov.c -o libgcc/./_gcov_execlp.o
./libgcov.a: libgcc/./_gcov_execlp.o
libgcc/./_gcov_execle.o: stmp-dirs $(srcdir)/libgcov.c $(srcdir)/gcov-io.h $(srcdir)/gcov-io.c gcov-iov.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES)  -DL_gcov_execle -c $(srcdir)/libgcov.c -o libgcc/./_gcov_execle.o
./libgcov.a: libgcc/./_gcov_execle.o
libgcc/./_gcov_execv.o: stmp-dirs $(srcdir)/libgcov.c $(srcdir)/gcov-io.h $(srcdir)/gcov-io.c gcov-iov.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES)  -DL_gcov_execv -c $(srcdir)/libgcov.c -o libgcc/./_gcov_execv.o
./libgcov.a: libgcc/./_gcov_execv.o
libgcc/./_gcov_execvp.o: stmp-dirs $(srcdir)/libgcov.c $(srcdir)/gcov-io.h $(srcdir)/gcov-io.c gcov-iov.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES)  -DL_gcov_execvp -c $(srcdir)/libgcov.c -o libgcc/./_gcov_execvp.o
./libgcov.a: libgcc/./_gcov_execvp.o
libgcc/./_gcov_execve.o: stmp-dirs $(srcdir)/libgcov.c $(srcdir)/gcov-io.h $(srcdir)/gcov-io.c gcov-iov.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES)  -DL_gcov_execve -c $(srcdir)/libgcov.c -o libgcc/./_gcov_execve.o
./libgcov.a: libgcc/./_gcov_execve.o
libgcc/./_gcov_interval_profiler.o: stmp-dirs $(srcdir)/libgcov.c $(srcdir)/gcov-io.h $(srcdir)/gcov-io.c gcov-iov.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES)  -DL_gcov_interval_profiler -c $(srcdir)/libgcov.c -o libgcc/./_gcov_interval_profiler.o
./libgcov.a: libgcc/./_gcov_interval_profiler.o
libgcc/./_gcov_pow2_profiler.o: stmp-dirs $(srcdir)/libgcov.c $(srcdir)/gcov-io.h $(srcdir)/gcov-io.c gcov-iov.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES)  -DL_gcov_pow2_profiler -c $(srcdir)/libgcov.c -o libgcc/./_gcov_pow2_profiler.o
./libgcov.a: libgcc/./_gcov_pow2_profiler.o
libgcc/./_gcov_one_value_profiler.o: stmp-dirs $(srcdir)/libgcov.c $(srcdir)/gcov-io.h $(srcdir)/gcov-io.c gcov-iov.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES)  -DL_gcov_one_value_profiler -c $(srcdir)/libgcov.c -o libgcc/./_gcov_one_value_profiler.o
./libgcov.a: libgcc/./_gcov_one_value_profiler.o

extra: stmp-dirs
	$(MAKE) GCC_FOR_TARGET="$(GCC_FOR_TARGET)" \
	  AR_FOR_TARGET="$(AR_FOR_TARGET)" \
	  AR_CREATE_FOR_TARGET="$(AR_CREATE_FOR_TARGET)" \
	  AR_EXTRACT_FOR_TARGET="$(AR_EXTRACT_FOR_TARGET)" \
	  AR_FLAGS_FOR_TARGET="$(AR_FLAGS_FOR_TARGET)" \
	  CC="$(CC)" CFLAGS="$(CFLAGS)" \
	  BUILD_PREFIX="$(BUILD_PREFIX)" \
	  BUILD_PREFIX_1="$(BUILD_PREFIX_1)" \
	  LANGUAGES="$(LANGUAGES)" \
	  LIBGCC2_CFLAGS="$(LIBGCC2_CFLAGS) "  \
	  LIBGCC2_STATIC_CFLAGS="$(LIBGCC2_STATIC_CFLAGS)"  \
	  MULTILIB_CFLAGS="" T= crt3.o
all: extra
./libgcc_s.dylib: extra

libgcc/./libgcc.map: /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/mkmap-flat.awk /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/libgcc-std.ver
	{ $(NM_FOR_TARGET) -pg $(objects); echo %%; \
	  cat /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/libgcc-std.ver \
	    | sed -e '/^[   ]*#/d' \
	          -e 's/^%\(if\|else\|elif\|endif\|define\)/#\1/' \
	    | $(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES)  -E -xassembler-with-cpp -; \
	} | $(AWK) -f /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/mkmap-flat.awk -v leading_underscore=1 > libgcc/./tmp-libgcc.map
	mv 'libgcc/./tmp-libgcc.map' $@
./libgcc_s.dylib: libgcc/./libgcc.map

./libgcc.a: stmp-dirs
	-rm -f ./libgcc.a
	$(AR_CREATE_FOR_TARGET) ./libgcc.a $(objects)
	$(RANLIB_FOR_TARGET) ./libgcc.a
all: ./libgcc.a

./libgcov.a: stmp-dirs
	-rm -f ./libgcov.a
	$(AR_CREATE_FOR_TARGET) ./libgcov.a $(objects)
	$(RANLIB_FOR_TARGET) ./libgcov.a
all: ./libgcov.a

./libgcc_eh.a: stmp-dirs
	-rm -f ./libgcc_eh.a
	$(AR_CREATE_FOR_TARGET) ./libgcc_eh.a $(objects)
	$(RANLIB_FOR_TARGET) ./libgcc_eh.a
all: ./libgcc_eh.a

./libgcc_s.dylib: stmp-dirs 
	i686-apple-darwin11-gcc  -O2  -O2 -g -O2   -DIN_GCC    -W -Wall -Wwrite-strings -Wstrict-prototypes -Wmissing-prototypes -Wold-style-definition  -isystem ./include  -fPIC -pipe -g -DHAVE_GTHR_DEFAULT -DIN_LIBGCC2 -D__GCC_FLOAT_NOT_NEEDED  -dynamiclib -nodefaultlibs -install_name /usr/lib/libgcc_s`if test . = ppc64 ; then echo _. ; fi`.1.dylib -single_module -o ./libgcc_s.1.dylib.tmp -Wl,-exported_symbols_list,libgcc/./libgcc.map -compatibility_version 1 -current_version 1.0  $(objects) -lc
all: ./libgcc_s.dylib

#
# ml: x86_64;@m64
# dir: x86_64
# flags: -m64
# libgcc_a: x86_64/libgcc.a
# libgcov_a: x86_64/libgcov.a
# libgcc_eh_a: x86_64/libgcc_eh.a
# libunwind_a:
#
# shlib_slibdir_qual: /x86_64
# libgcc_s_so: x86_64/libgcc_s.dylib
# libunwind_so:
#

dirs += x86_64 libgcc/x86_64

libgcc/x86_64/_get_pc_thunk_ax_s.o: stmp-dirs $(srcdir)/config/$(LIB1ASMSRC)
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -m64 -DL_get_pc_thunk_ax -xassembler-with-cpp -c $(srcdir)/config/$(LIB1ASMSRC) -o libgcc/x86_64/_get_pc_thunk_ax_s.o
libgcc/x86_64/_get_pc_thunk_ax.o: stmp-dirs $(srcdir)/config/$(LIB1ASMSRC) libgcc/x86_64/_get_pc_thunk_ax.vis
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -m64 -DL_get_pc_thunk_ax -xassembler-with-cpp -c $(srcdir)/config/$(LIB1ASMSRC) -include libgcc/x86_64/_get_pc_thunk_ax.vis -o libgcc/x86_64/_get_pc_thunk_ax.o
libgcc/x86_64/_get_pc_thunk_ax.vis: libgcc/x86_64/_get_pc_thunk_ax_s.o; $(gen-hide-list)
x86_64/libgcc.a: libgcc/x86_64/_get_pc_thunk_ax.o
x86_64/libgcc_s.dylib: libgcc/x86_64/_get_pc_thunk_ax_s.o
libgcc/x86_64/libgcc.map: libgcc/x86_64/_get_pc_thunk_ax_s.o
libgcc/x86_64/_get_pc_thunk_dx_s.o: stmp-dirs $(srcdir)/config/$(LIB1ASMSRC)
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -m64 -DL_get_pc_thunk_dx -xassembler-with-cpp -c $(srcdir)/config/$(LIB1ASMSRC) -o libgcc/x86_64/_get_pc_thunk_dx_s.o
libgcc/x86_64/_get_pc_thunk_dx.o: stmp-dirs $(srcdir)/config/$(LIB1ASMSRC) libgcc/x86_64/_get_pc_thunk_dx.vis
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -m64 -DL_get_pc_thunk_dx -xassembler-with-cpp -c $(srcdir)/config/$(LIB1ASMSRC) -include libgcc/x86_64/_get_pc_thunk_dx.vis -o libgcc/x86_64/_get_pc_thunk_dx.o
libgcc/x86_64/_get_pc_thunk_dx.vis: libgcc/x86_64/_get_pc_thunk_dx_s.o; $(gen-hide-list)
x86_64/libgcc.a: libgcc/x86_64/_get_pc_thunk_dx.o
x86_64/libgcc_s.dylib: libgcc/x86_64/_get_pc_thunk_dx_s.o
libgcc/x86_64/libgcc.map: libgcc/x86_64/_get_pc_thunk_dx_s.o
libgcc/x86_64/_get_pc_thunk_cx_s.o: stmp-dirs $(srcdir)/config/$(LIB1ASMSRC)
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -m64 -DL_get_pc_thunk_cx -xassembler-with-cpp -c $(srcdir)/config/$(LIB1ASMSRC) -o libgcc/x86_64/_get_pc_thunk_cx_s.o
libgcc/x86_64/_get_pc_thunk_cx.o: stmp-dirs $(srcdir)/config/$(LIB1ASMSRC) libgcc/x86_64/_get_pc_thunk_cx.vis
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -m64 -DL_get_pc_thunk_cx -xassembler-with-cpp -c $(srcdir)/config/$(LIB1ASMSRC) -include libgcc/x86_64/_get_pc_thunk_cx.vis -o libgcc/x86_64/_get_pc_thunk_cx.o
libgcc/x86_64/_get_pc_thunk_cx.vis: libgcc/x86_64/_get_pc_thunk_cx_s.o; $(gen-hide-list)
x86_64/libgcc.a: libgcc/x86_64/_get_pc_thunk_cx.o
x86_64/libgcc_s.dylib: libgcc/x86_64/_get_pc_thunk_cx_s.o
libgcc/x86_64/libgcc.map: libgcc/x86_64/_get_pc_thunk_cx_s.o
libgcc/x86_64/_get_pc_thunk_bx_s.o: stmp-dirs $(srcdir)/config/$(LIB1ASMSRC)
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -m64 -DL_get_pc_thunk_bx -xassembler-with-cpp -c $(srcdir)/config/$(LIB1ASMSRC) -o libgcc/x86_64/_get_pc_thunk_bx_s.o
libgcc/x86_64/_get_pc_thunk_bx.o: stmp-dirs $(srcdir)/config/$(LIB1ASMSRC) libgcc/x86_64/_get_pc_thunk_bx.vis
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -m64 -DL_get_pc_thunk_bx -xassembler-with-cpp -c $(srcdir)/config/$(LIB1ASMSRC) -include libgcc/x86_64/_get_pc_thunk_bx.vis -o libgcc/x86_64/_get_pc_thunk_bx.o
libgcc/x86_64/_get_pc_thunk_bx.vis: libgcc/x86_64/_get_pc_thunk_bx_s.o; $(gen-hide-list)
x86_64/libgcc.a: libgcc/x86_64/_get_pc_thunk_bx.o
x86_64/libgcc_s.dylib: libgcc/x86_64/_get_pc_thunk_bx_s.o
libgcc/x86_64/libgcc.map: libgcc/x86_64/_get_pc_thunk_bx_s.o
libgcc/x86_64/_get_pc_thunk_si_s.o: stmp-dirs $(srcdir)/config/$(LIB1ASMSRC)
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -m64 -DL_get_pc_thunk_si -xassembler-with-cpp -c $(srcdir)/config/$(LIB1ASMSRC) -o libgcc/x86_64/_get_pc_thunk_si_s.o
libgcc/x86_64/_get_pc_thunk_si.o: stmp-dirs $(srcdir)/config/$(LIB1ASMSRC) libgcc/x86_64/_get_pc_thunk_si.vis
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -m64 -DL_get_pc_thunk_si -xassembler-with-cpp -c $(srcdir)/config/$(LIB1ASMSRC) -include libgcc/x86_64/_get_pc_thunk_si.vis -o libgcc/x86_64/_get_pc_thunk_si.o
libgcc/x86_64/_get_pc_thunk_si.vis: libgcc/x86_64/_get_pc_thunk_si_s.o; $(gen-hide-list)
x86_64/libgcc.a: libgcc/x86_64/_get_pc_thunk_si.o
x86_64/libgcc_s.dylib: libgcc/x86_64/_get_pc_thunk_si_s.o
libgcc/x86_64/libgcc.map: libgcc/x86_64/_get_pc_thunk_si_s.o
libgcc/x86_64/_get_pc_thunk_di_s.o: stmp-dirs $(srcdir)/config/$(LIB1ASMSRC)
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -m64 -DL_get_pc_thunk_di -xassembler-with-cpp -c $(srcdir)/config/$(LIB1ASMSRC) -o libgcc/x86_64/_get_pc_thunk_di_s.o
libgcc/x86_64/_get_pc_thunk_di.o: stmp-dirs $(srcdir)/config/$(LIB1ASMSRC) libgcc/x86_64/_get_pc_thunk_di.vis
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -m64 -DL_get_pc_thunk_di -xassembler-with-cpp -c $(srcdir)/config/$(LIB1ASMSRC) -include libgcc/x86_64/_get_pc_thunk_di.vis -o libgcc/x86_64/_get_pc_thunk_di.o
libgcc/x86_64/_get_pc_thunk_di.vis: libgcc/x86_64/_get_pc_thunk_di_s.o; $(gen-hide-list)
x86_64/libgcc.a: libgcc/x86_64/_get_pc_thunk_di.o
x86_64/libgcc_s.dylib: libgcc/x86_64/_get_pc_thunk_di_s.o
libgcc/x86_64/libgcc.map: libgcc/x86_64/_get_pc_thunk_di_s.o
libgcc/x86_64/_get_pc_thunk_bp_s.o: stmp-dirs $(srcdir)/config/$(LIB1ASMSRC)
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -m64 -DL_get_pc_thunk_bp -xassembler-with-cpp -c $(srcdir)/config/$(LIB1ASMSRC) -o libgcc/x86_64/_get_pc_thunk_bp_s.o
libgcc/x86_64/_get_pc_thunk_bp.o: stmp-dirs $(srcdir)/config/$(LIB1ASMSRC) libgcc/x86_64/_get_pc_thunk_bp.vis
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -m64 -DL_get_pc_thunk_bp -xassembler-with-cpp -c $(srcdir)/config/$(LIB1ASMSRC) -include libgcc/x86_64/_get_pc_thunk_bp.vis -o libgcc/x86_64/_get_pc_thunk_bp.o
libgcc/x86_64/_get_pc_thunk_bp.vis: libgcc/x86_64/_get_pc_thunk_bp_s.o; $(gen-hide-list)
x86_64/libgcc.a: libgcc/x86_64/_get_pc_thunk_bp.o
x86_64/libgcc_s.dylib: libgcc/x86_64/_get_pc_thunk_bp_s.o
libgcc/x86_64/libgcc.map: libgcc/x86_64/_get_pc_thunk_bp_s.o
libgcc/x86_64/_muldi3_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -m64 -DL_muldi3 -c $(srcdir)/libgcc2.c -o libgcc/x86_64/_muldi3_s.o
libgcc/x86_64/_muldi3.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -m64 -DL_muldi3 $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/x86_64/_muldi3.o
x86_64/libgcc.a: libgcc/x86_64/_muldi3.o
x86_64/libgcc_s.dylib: libgcc/x86_64/_muldi3_s.o
libgcc/x86_64/libgcc.map: libgcc/x86_64/_muldi3_s.o
libgcc/x86_64/_negdi2_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -m64 -DL_negdi2 -c $(srcdir)/libgcc2.c -o libgcc/x86_64/_negdi2_s.o
libgcc/x86_64/_negdi2.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -m64 -DL_negdi2 $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/x86_64/_negdi2.o
x86_64/libgcc.a: libgcc/x86_64/_negdi2.o
x86_64/libgcc_s.dylib: libgcc/x86_64/_negdi2_s.o
libgcc/x86_64/libgcc.map: libgcc/x86_64/_negdi2_s.o
libgcc/x86_64/_lshrdi3_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -m64 -DL_lshrdi3 -c $(srcdir)/libgcc2.c -o libgcc/x86_64/_lshrdi3_s.o
libgcc/x86_64/_lshrdi3.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -m64 -DL_lshrdi3 $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/x86_64/_lshrdi3.o
x86_64/libgcc.a: libgcc/x86_64/_lshrdi3.o
x86_64/libgcc_s.dylib: libgcc/x86_64/_lshrdi3_s.o
libgcc/x86_64/libgcc.map: libgcc/x86_64/_lshrdi3_s.o
libgcc/x86_64/_ashldi3_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -m64 -DL_ashldi3 -c $(srcdir)/libgcc2.c -o libgcc/x86_64/_ashldi3_s.o
libgcc/x86_64/_ashldi3.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -m64 -DL_ashldi3 $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/x86_64/_ashldi3.o
x86_64/libgcc.a: libgcc/x86_64/_ashldi3.o
x86_64/libgcc_s.dylib: libgcc/x86_64/_ashldi3_s.o
libgcc/x86_64/libgcc.map: libgcc/x86_64/_ashldi3_s.o
libgcc/x86_64/_ashrdi3_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -m64 -DL_ashrdi3 -c $(srcdir)/libgcc2.c -o libgcc/x86_64/_ashrdi3_s.o
libgcc/x86_64/_ashrdi3.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -m64 -DL_ashrdi3 $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/x86_64/_ashrdi3.o
x86_64/libgcc.a: libgcc/x86_64/_ashrdi3.o
x86_64/libgcc_s.dylib: libgcc/x86_64/_ashrdi3_s.o
libgcc/x86_64/libgcc.map: libgcc/x86_64/_ashrdi3_s.o
libgcc/x86_64/_cmpdi2_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -m64 -DL_cmpdi2 -c $(srcdir)/libgcc2.c -o libgcc/x86_64/_cmpdi2_s.o
libgcc/x86_64/_cmpdi2.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -m64 -DL_cmpdi2 $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/x86_64/_cmpdi2.o
x86_64/libgcc.a: libgcc/x86_64/_cmpdi2.o
x86_64/libgcc_s.dylib: libgcc/x86_64/_cmpdi2_s.o
libgcc/x86_64/libgcc.map: libgcc/x86_64/_cmpdi2_s.o
libgcc/x86_64/_ucmpdi2_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -m64 -DL_ucmpdi2 -c $(srcdir)/libgcc2.c -o libgcc/x86_64/_ucmpdi2_s.o
libgcc/x86_64/_ucmpdi2.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -m64 -DL_ucmpdi2 $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/x86_64/_ucmpdi2.o
x86_64/libgcc.a: libgcc/x86_64/_ucmpdi2.o
x86_64/libgcc_s.dylib: libgcc/x86_64/_ucmpdi2_s.o
libgcc/x86_64/libgcc.map: libgcc/x86_64/_ucmpdi2_s.o
libgcc/x86_64/_clear_cache_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -m64 -DL_clear_cache -c $(srcdir)/libgcc2.c -o libgcc/x86_64/_clear_cache_s.o
libgcc/x86_64/_clear_cache.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -m64 -DL_clear_cache $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/x86_64/_clear_cache.o
x86_64/libgcc.a: libgcc/x86_64/_clear_cache.o
x86_64/libgcc_s.dylib: libgcc/x86_64/_clear_cache_s.o
libgcc/x86_64/libgcc.map: libgcc/x86_64/_clear_cache_s.o
libgcc/x86_64/_enable_execute_stack_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -m64 -DL_enable_execute_stack -c $(srcdir)/libgcc2.c -o libgcc/x86_64/_enable_execute_stack_s.o
libgcc/x86_64/_enable_execute_stack.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -m64 -DL_enable_execute_stack $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/x86_64/_enable_execute_stack.o
x86_64/libgcc.a: libgcc/x86_64/_enable_execute_stack.o
x86_64/libgcc_s.dylib: libgcc/x86_64/_enable_execute_stack_s.o
libgcc/x86_64/libgcc.map: libgcc/x86_64/_enable_execute_stack_s.o
libgcc/x86_64/_trampoline_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -m64 -DL_trampoline -c $(srcdir)/libgcc2.c -o libgcc/x86_64/_trampoline_s.o
libgcc/x86_64/_trampoline.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -m64 -DL_trampoline $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/x86_64/_trampoline.o
x86_64/libgcc.a: libgcc/x86_64/_trampoline.o
x86_64/libgcc_s.dylib: libgcc/x86_64/_trampoline_s.o
libgcc/x86_64/libgcc.map: libgcc/x86_64/_trampoline_s.o
libgcc/x86_64/__main_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -m64 -DL__main -c $(srcdir)/libgcc2.c -o libgcc/x86_64/__main_s.o
libgcc/x86_64/__main.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -m64 -DL__main $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/x86_64/__main.o
x86_64/libgcc.a: libgcc/x86_64/__main.o
x86_64/libgcc_s.dylib: libgcc/x86_64/__main_s.o
libgcc/x86_64/libgcc.map: libgcc/x86_64/__main_s.o
libgcc/x86_64/_absvsi2_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -m64 -DL_absvsi2 -c $(srcdir)/libgcc2.c -o libgcc/x86_64/_absvsi2_s.o
libgcc/x86_64/_absvsi2.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -m64 -DL_absvsi2 $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/x86_64/_absvsi2.o
x86_64/libgcc.a: libgcc/x86_64/_absvsi2.o
x86_64/libgcc_s.dylib: libgcc/x86_64/_absvsi2_s.o
libgcc/x86_64/libgcc.map: libgcc/x86_64/_absvsi2_s.o
libgcc/x86_64/_absvdi2_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -m64 -DL_absvdi2 -c $(srcdir)/libgcc2.c -o libgcc/x86_64/_absvdi2_s.o
libgcc/x86_64/_absvdi2.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -m64 -DL_absvdi2 $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/x86_64/_absvdi2.o
x86_64/libgcc.a: libgcc/x86_64/_absvdi2.o
x86_64/libgcc_s.dylib: libgcc/x86_64/_absvdi2_s.o
libgcc/x86_64/libgcc.map: libgcc/x86_64/_absvdi2_s.o
libgcc/x86_64/_addvsi3_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -m64 -DL_addvsi3 -c $(srcdir)/libgcc2.c -o libgcc/x86_64/_addvsi3_s.o
libgcc/x86_64/_addvsi3.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -m64 -DL_addvsi3 $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/x86_64/_addvsi3.o
x86_64/libgcc.a: libgcc/x86_64/_addvsi3.o
x86_64/libgcc_s.dylib: libgcc/x86_64/_addvsi3_s.o
libgcc/x86_64/libgcc.map: libgcc/x86_64/_addvsi3_s.o
libgcc/x86_64/_addvdi3_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -m64 -DL_addvdi3 -c $(srcdir)/libgcc2.c -o libgcc/x86_64/_addvdi3_s.o
libgcc/x86_64/_addvdi3.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -m64 -DL_addvdi3 $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/x86_64/_addvdi3.o
x86_64/libgcc.a: libgcc/x86_64/_addvdi3.o
x86_64/libgcc_s.dylib: libgcc/x86_64/_addvdi3_s.o
libgcc/x86_64/libgcc.map: libgcc/x86_64/_addvdi3_s.o
libgcc/x86_64/_subvsi3_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -m64 -DL_subvsi3 -c $(srcdir)/libgcc2.c -o libgcc/x86_64/_subvsi3_s.o
libgcc/x86_64/_subvsi3.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -m64 -DL_subvsi3 $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/x86_64/_subvsi3.o
x86_64/libgcc.a: libgcc/x86_64/_subvsi3.o
x86_64/libgcc_s.dylib: libgcc/x86_64/_subvsi3_s.o
libgcc/x86_64/libgcc.map: libgcc/x86_64/_subvsi3_s.o
libgcc/x86_64/_subvdi3_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -m64 -DL_subvdi3 -c $(srcdir)/libgcc2.c -o libgcc/x86_64/_subvdi3_s.o
libgcc/x86_64/_subvdi3.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -m64 -DL_subvdi3 $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/x86_64/_subvdi3.o
x86_64/libgcc.a: libgcc/x86_64/_subvdi3.o
x86_64/libgcc_s.dylib: libgcc/x86_64/_subvdi3_s.o
libgcc/x86_64/libgcc.map: libgcc/x86_64/_subvdi3_s.o
libgcc/x86_64/_mulvsi3_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -m64 -DL_mulvsi3 -c $(srcdir)/libgcc2.c -o libgcc/x86_64/_mulvsi3_s.o
libgcc/x86_64/_mulvsi3.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -m64 -DL_mulvsi3 $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/x86_64/_mulvsi3.o
x86_64/libgcc.a: libgcc/x86_64/_mulvsi3.o
x86_64/libgcc_s.dylib: libgcc/x86_64/_mulvsi3_s.o
libgcc/x86_64/libgcc.map: libgcc/x86_64/_mulvsi3_s.o
libgcc/x86_64/_mulvdi3_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -m64 -DL_mulvdi3 -c $(srcdir)/libgcc2.c -o libgcc/x86_64/_mulvdi3_s.o
libgcc/x86_64/_mulvdi3.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -m64 -DL_mulvdi3 $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/x86_64/_mulvdi3.o
x86_64/libgcc.a: libgcc/x86_64/_mulvdi3.o
x86_64/libgcc_s.dylib: libgcc/x86_64/_mulvdi3_s.o
libgcc/x86_64/libgcc.map: libgcc/x86_64/_mulvdi3_s.o
libgcc/x86_64/_negvsi2_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -m64 -DL_negvsi2 -c $(srcdir)/libgcc2.c -o libgcc/x86_64/_negvsi2_s.o
libgcc/x86_64/_negvsi2.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -m64 -DL_negvsi2 $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/x86_64/_negvsi2.o
x86_64/libgcc.a: libgcc/x86_64/_negvsi2.o
x86_64/libgcc_s.dylib: libgcc/x86_64/_negvsi2_s.o
libgcc/x86_64/libgcc.map: libgcc/x86_64/_negvsi2_s.o
libgcc/x86_64/_negvdi2_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -m64 -DL_negvdi2 -c $(srcdir)/libgcc2.c -o libgcc/x86_64/_negvdi2_s.o
libgcc/x86_64/_negvdi2.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -m64 -DL_negvdi2 $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/x86_64/_negvdi2.o
x86_64/libgcc.a: libgcc/x86_64/_negvdi2.o
x86_64/libgcc_s.dylib: libgcc/x86_64/_negvdi2_s.o
libgcc/x86_64/libgcc.map: libgcc/x86_64/_negvdi2_s.o
libgcc/x86_64/_ctors_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -m64 -DL_ctors -c $(srcdir)/libgcc2.c -o libgcc/x86_64/_ctors_s.o
libgcc/x86_64/_ctors.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -m64 -DL_ctors $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/x86_64/_ctors.o
x86_64/libgcc.a: libgcc/x86_64/_ctors.o
x86_64/libgcc_s.dylib: libgcc/x86_64/_ctors_s.o
libgcc/x86_64/libgcc.map: libgcc/x86_64/_ctors_s.o
libgcc/x86_64/_ffssi2_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -m64 -DL_ffssi2 -c $(srcdir)/libgcc2.c -o libgcc/x86_64/_ffssi2_s.o
libgcc/x86_64/_ffssi2.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -m64 -DL_ffssi2 $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/x86_64/_ffssi2.o
x86_64/libgcc.a: libgcc/x86_64/_ffssi2.o
x86_64/libgcc_s.dylib: libgcc/x86_64/_ffssi2_s.o
libgcc/x86_64/libgcc.map: libgcc/x86_64/_ffssi2_s.o
libgcc/x86_64/_ffsdi2_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -m64 -DL_ffsdi2 -c $(srcdir)/libgcc2.c -o libgcc/x86_64/_ffsdi2_s.o
libgcc/x86_64/_ffsdi2.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -m64 -DL_ffsdi2 $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/x86_64/_ffsdi2.o
x86_64/libgcc.a: libgcc/x86_64/_ffsdi2.o
x86_64/libgcc_s.dylib: libgcc/x86_64/_ffsdi2_s.o
libgcc/x86_64/libgcc.map: libgcc/x86_64/_ffsdi2_s.o
libgcc/x86_64/_clz_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -m64 -DL_clz -c $(srcdir)/libgcc2.c -o libgcc/x86_64/_clz_s.o
libgcc/x86_64/_clz.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -m64 -DL_clz $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/x86_64/_clz.o
x86_64/libgcc.a: libgcc/x86_64/_clz.o
x86_64/libgcc_s.dylib: libgcc/x86_64/_clz_s.o
libgcc/x86_64/libgcc.map: libgcc/x86_64/_clz_s.o
libgcc/x86_64/_clzsi2_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -m64 -DL_clzsi2 -c $(srcdir)/libgcc2.c -o libgcc/x86_64/_clzsi2_s.o
libgcc/x86_64/_clzsi2.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -m64 -DL_clzsi2 $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/x86_64/_clzsi2.o
x86_64/libgcc.a: libgcc/x86_64/_clzsi2.o
x86_64/libgcc_s.dylib: libgcc/x86_64/_clzsi2_s.o
libgcc/x86_64/libgcc.map: libgcc/x86_64/_clzsi2_s.o
libgcc/x86_64/_clzdi2_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -m64 -DL_clzdi2 -c $(srcdir)/libgcc2.c -o libgcc/x86_64/_clzdi2_s.o
libgcc/x86_64/_clzdi2.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -m64 -DL_clzdi2 $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/x86_64/_clzdi2.o
x86_64/libgcc.a: libgcc/x86_64/_clzdi2.o
x86_64/libgcc_s.dylib: libgcc/x86_64/_clzdi2_s.o
libgcc/x86_64/libgcc.map: libgcc/x86_64/_clzdi2_s.o
libgcc/x86_64/_ctzsi2_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -m64 -DL_ctzsi2 -c $(srcdir)/libgcc2.c -o libgcc/x86_64/_ctzsi2_s.o
libgcc/x86_64/_ctzsi2.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -m64 -DL_ctzsi2 $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/x86_64/_ctzsi2.o
x86_64/libgcc.a: libgcc/x86_64/_ctzsi2.o
x86_64/libgcc_s.dylib: libgcc/x86_64/_ctzsi2_s.o
libgcc/x86_64/libgcc.map: libgcc/x86_64/_ctzsi2_s.o
libgcc/x86_64/_ctzdi2_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -m64 -DL_ctzdi2 -c $(srcdir)/libgcc2.c -o libgcc/x86_64/_ctzdi2_s.o
libgcc/x86_64/_ctzdi2.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -m64 -DL_ctzdi2 $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/x86_64/_ctzdi2.o
x86_64/libgcc.a: libgcc/x86_64/_ctzdi2.o
x86_64/libgcc_s.dylib: libgcc/x86_64/_ctzdi2_s.o
libgcc/x86_64/libgcc.map: libgcc/x86_64/_ctzdi2_s.o
libgcc/x86_64/_popcount_tab_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -m64 -DL_popcount_tab -c $(srcdir)/libgcc2.c -o libgcc/x86_64/_popcount_tab_s.o
libgcc/x86_64/_popcount_tab.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -m64 -DL_popcount_tab $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/x86_64/_popcount_tab.o
x86_64/libgcc.a: libgcc/x86_64/_popcount_tab.o
x86_64/libgcc_s.dylib: libgcc/x86_64/_popcount_tab_s.o
libgcc/x86_64/libgcc.map: libgcc/x86_64/_popcount_tab_s.o
libgcc/x86_64/_popcountsi2_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -m64 -DL_popcountsi2 -c $(srcdir)/libgcc2.c -o libgcc/x86_64/_popcountsi2_s.o
libgcc/x86_64/_popcountsi2.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -m64 -DL_popcountsi2 $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/x86_64/_popcountsi2.o
x86_64/libgcc.a: libgcc/x86_64/_popcountsi2.o
x86_64/libgcc_s.dylib: libgcc/x86_64/_popcountsi2_s.o
libgcc/x86_64/libgcc.map: libgcc/x86_64/_popcountsi2_s.o
libgcc/x86_64/_popcountdi2_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -m64 -DL_popcountdi2 -c $(srcdir)/libgcc2.c -o libgcc/x86_64/_popcountdi2_s.o
libgcc/x86_64/_popcountdi2.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -m64 -DL_popcountdi2 $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/x86_64/_popcountdi2.o
x86_64/libgcc.a: libgcc/x86_64/_popcountdi2.o
x86_64/libgcc_s.dylib: libgcc/x86_64/_popcountdi2_s.o
libgcc/x86_64/libgcc.map: libgcc/x86_64/_popcountdi2_s.o
libgcc/x86_64/_paritysi2_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -m64 -DL_paritysi2 -c $(srcdir)/libgcc2.c -o libgcc/x86_64/_paritysi2_s.o
libgcc/x86_64/_paritysi2.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -m64 -DL_paritysi2 $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/x86_64/_paritysi2.o
x86_64/libgcc.a: libgcc/x86_64/_paritysi2.o
x86_64/libgcc_s.dylib: libgcc/x86_64/_paritysi2_s.o
libgcc/x86_64/libgcc.map: libgcc/x86_64/_paritysi2_s.o
libgcc/x86_64/_paritydi2_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -m64 -DL_paritydi2 -c $(srcdir)/libgcc2.c -o libgcc/x86_64/_paritydi2_s.o
libgcc/x86_64/_paritydi2.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -m64 -DL_paritydi2 $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/x86_64/_paritydi2.o
x86_64/libgcc.a: libgcc/x86_64/_paritydi2.o
x86_64/libgcc_s.dylib: libgcc/x86_64/_paritydi2_s.o
libgcc/x86_64/libgcc.map: libgcc/x86_64/_paritydi2_s.o
libgcc/x86_64/_powisf2_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -m64 -DL_powisf2 -c $(srcdir)/libgcc2.c -o libgcc/x86_64/_powisf2_s.o
libgcc/x86_64/_powisf2.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -m64 -DL_powisf2 $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/x86_64/_powisf2.o
x86_64/libgcc.a: libgcc/x86_64/_powisf2.o
x86_64/libgcc_s.dylib: libgcc/x86_64/_powisf2_s.o
libgcc/x86_64/libgcc.map: libgcc/x86_64/_powisf2_s.o
libgcc/x86_64/_powidf2_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -m64 -DL_powidf2 -c $(srcdir)/libgcc2.c -o libgcc/x86_64/_powidf2_s.o
libgcc/x86_64/_powidf2.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -m64 -DL_powidf2 $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/x86_64/_powidf2.o
x86_64/libgcc.a: libgcc/x86_64/_powidf2.o
x86_64/libgcc_s.dylib: libgcc/x86_64/_powidf2_s.o
libgcc/x86_64/libgcc.map: libgcc/x86_64/_powidf2_s.o
libgcc/x86_64/_powixf2_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -m64 -DL_powixf2 -c $(srcdir)/libgcc2.c -o libgcc/x86_64/_powixf2_s.o
libgcc/x86_64/_powixf2.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -m64 -DL_powixf2 $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/x86_64/_powixf2.o
x86_64/libgcc.a: libgcc/x86_64/_powixf2.o
x86_64/libgcc_s.dylib: libgcc/x86_64/_powixf2_s.o
libgcc/x86_64/libgcc.map: libgcc/x86_64/_powixf2_s.o
libgcc/x86_64/_powitf2_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -m64 -DL_powitf2 -c $(srcdir)/libgcc2.c -o libgcc/x86_64/_powitf2_s.o
libgcc/x86_64/_powitf2.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -m64 -DL_powitf2 $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/x86_64/_powitf2.o
x86_64/libgcc.a: libgcc/x86_64/_powitf2.o
x86_64/libgcc_s.dylib: libgcc/x86_64/_powitf2_s.o
libgcc/x86_64/libgcc.map: libgcc/x86_64/_powitf2_s.o
libgcc/x86_64/_mulsc3_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -m64 -DL_mulsc3 -c $(srcdir)/libgcc2.c -o libgcc/x86_64/_mulsc3_s.o
libgcc/x86_64/_mulsc3.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -m64 -DL_mulsc3 $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/x86_64/_mulsc3.o
x86_64/libgcc.a: libgcc/x86_64/_mulsc3.o
x86_64/libgcc_s.dylib: libgcc/x86_64/_mulsc3_s.o
libgcc/x86_64/libgcc.map: libgcc/x86_64/_mulsc3_s.o
libgcc/x86_64/_muldc3_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -m64 -DL_muldc3 -c $(srcdir)/libgcc2.c -o libgcc/x86_64/_muldc3_s.o
libgcc/x86_64/_muldc3.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -m64 -DL_muldc3 $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/x86_64/_muldc3.o
x86_64/libgcc.a: libgcc/x86_64/_muldc3.o
x86_64/libgcc_s.dylib: libgcc/x86_64/_muldc3_s.o
libgcc/x86_64/libgcc.map: libgcc/x86_64/_muldc3_s.o
libgcc/x86_64/_mulxc3_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -m64 -DL_mulxc3 -c $(srcdir)/libgcc2.c -o libgcc/x86_64/_mulxc3_s.o
libgcc/x86_64/_mulxc3.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -m64 -DL_mulxc3 $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/x86_64/_mulxc3.o
x86_64/libgcc.a: libgcc/x86_64/_mulxc3.o
x86_64/libgcc_s.dylib: libgcc/x86_64/_mulxc3_s.o
libgcc/x86_64/libgcc.map: libgcc/x86_64/_mulxc3_s.o
libgcc/x86_64/_multc3_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -m64 -DL_multc3 -c $(srcdir)/libgcc2.c -o libgcc/x86_64/_multc3_s.o
libgcc/x86_64/_multc3.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -m64 -DL_multc3 $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/x86_64/_multc3.o
x86_64/libgcc.a: libgcc/x86_64/_multc3.o
x86_64/libgcc_s.dylib: libgcc/x86_64/_multc3_s.o
libgcc/x86_64/libgcc.map: libgcc/x86_64/_multc3_s.o
libgcc/x86_64/_divsc3_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -m64 -DL_divsc3 -c $(srcdir)/libgcc2.c -o libgcc/x86_64/_divsc3_s.o
libgcc/x86_64/_divsc3.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -m64 -DL_divsc3 $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/x86_64/_divsc3.o
x86_64/libgcc.a: libgcc/x86_64/_divsc3.o
x86_64/libgcc_s.dylib: libgcc/x86_64/_divsc3_s.o
libgcc/x86_64/libgcc.map: libgcc/x86_64/_divsc3_s.o
libgcc/x86_64/_divdc3_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -m64 -DL_divdc3 -c $(srcdir)/libgcc2.c -o libgcc/x86_64/_divdc3_s.o
libgcc/x86_64/_divdc3.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -m64 -DL_divdc3 $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/x86_64/_divdc3.o
x86_64/libgcc.a: libgcc/x86_64/_divdc3.o
x86_64/libgcc_s.dylib: libgcc/x86_64/_divdc3_s.o
libgcc/x86_64/libgcc.map: libgcc/x86_64/_divdc3_s.o
libgcc/x86_64/_divxc3_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -m64 -DL_divxc3 -c $(srcdir)/libgcc2.c -o libgcc/x86_64/_divxc3_s.o
libgcc/x86_64/_divxc3.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -m64 -DL_divxc3 $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/x86_64/_divxc3.o
x86_64/libgcc.a: libgcc/x86_64/_divxc3.o
x86_64/libgcc_s.dylib: libgcc/x86_64/_divxc3_s.o
libgcc/x86_64/libgcc.map: libgcc/x86_64/_divxc3_s.o
libgcc/x86_64/_divtc3_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -m64 -DL_divtc3 -c $(srcdir)/libgcc2.c -o libgcc/x86_64/_divtc3_s.o
libgcc/x86_64/_divtc3.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -m64 -DL_divtc3 $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/x86_64/_divtc3.o
x86_64/libgcc.a: libgcc/x86_64/_divtc3.o
x86_64/libgcc_s.dylib: libgcc/x86_64/_divtc3_s.o
libgcc/x86_64/libgcc.map: libgcc/x86_64/_divtc3_s.o
libgcc/x86_64/_bswapsi2_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -m64 -DL_bswapsi2 -c $(srcdir)/libgcc2.c -o libgcc/x86_64/_bswapsi2_s.o
libgcc/x86_64/_bswapsi2.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -m64 -DL_bswapsi2 $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/x86_64/_bswapsi2.o
x86_64/libgcc.a: libgcc/x86_64/_bswapsi2.o
x86_64/libgcc_s.dylib: libgcc/x86_64/_bswapsi2_s.o
libgcc/x86_64/libgcc.map: libgcc/x86_64/_bswapsi2_s.o
libgcc/x86_64/_bswapdi2_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -m64 -DL_bswapdi2 -c $(srcdir)/libgcc2.c -o libgcc/x86_64/_bswapdi2_s.o
libgcc/x86_64/_bswapdi2.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -m64 -DL_bswapdi2 $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/x86_64/_bswapdi2.o
x86_64/libgcc.a: libgcc/x86_64/_bswapdi2.o
x86_64/libgcc_s.dylib: libgcc/x86_64/_bswapdi2_s.o
libgcc/x86_64/libgcc.map: libgcc/x86_64/_bswapdi2_s.o
libgcc/x86_64/_fixunssfsi_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -m64 -DL_fixunssfsi -DLIBGCC2_UNITS_PER_WORD=4 -c $(srcdir)/libgcc2.c -o libgcc/x86_64/_fixunssfsi_s.o
libgcc/x86_64/_fixunssfsi.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -m64 -DL_fixunssfsi -DLIBGCC2_UNITS_PER_WORD=4 $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/x86_64/_fixunssfsi.o
x86_64/libgcc.a: libgcc/x86_64/_fixunssfsi.o
x86_64/libgcc_s.dylib: libgcc/x86_64/_fixunssfsi_s.o
libgcc/x86_64/libgcc.map: libgcc/x86_64/_fixunssfsi_s.o
libgcc/x86_64/_fixunsdfsi_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -m64 -DL_fixunsdfsi -DLIBGCC2_UNITS_PER_WORD=4 -c $(srcdir)/libgcc2.c -o libgcc/x86_64/_fixunsdfsi_s.o
libgcc/x86_64/_fixunsdfsi.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -m64 -DL_fixunsdfsi -DLIBGCC2_UNITS_PER_WORD=4 $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/x86_64/_fixunsdfsi.o
x86_64/libgcc.a: libgcc/x86_64/_fixunsdfsi.o
x86_64/libgcc_s.dylib: libgcc/x86_64/_fixunsdfsi_s.o
libgcc/x86_64/libgcc.map: libgcc/x86_64/_fixunsdfsi_s.o
libgcc/x86_64/_fixunsxfsi_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -m64 -DL_fixunsxfsi -DLIBGCC2_UNITS_PER_WORD=4 -c $(srcdir)/libgcc2.c -o libgcc/x86_64/_fixunsxfsi_s.o
libgcc/x86_64/_fixunsxfsi.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -m64 -DL_fixunsxfsi -DLIBGCC2_UNITS_PER_WORD=4 $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/x86_64/_fixunsxfsi.o
x86_64/libgcc.a: libgcc/x86_64/_fixunsxfsi.o
x86_64/libgcc_s.dylib: libgcc/x86_64/_fixunsxfsi_s.o
libgcc/x86_64/libgcc.map: libgcc/x86_64/_fixunsxfsi_s.o
libgcc/x86_64/_fixsfdi_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -m64 -DL_fixsfdi -DLIBGCC2_UNITS_PER_WORD=4 -c $(srcdir)/libgcc2.c -o libgcc/x86_64/_fixsfdi_s.o
libgcc/x86_64/_fixsfdi.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -m64 -DL_fixsfdi -DLIBGCC2_UNITS_PER_WORD=4 $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/x86_64/_fixsfdi.o
x86_64/libgcc.a: libgcc/x86_64/_fixsfdi.o
x86_64/libgcc_s.dylib: libgcc/x86_64/_fixsfdi_s.o
libgcc/x86_64/libgcc.map: libgcc/x86_64/_fixsfdi_s.o
libgcc/x86_64/_fixsfti_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -m64 -DL_fixsfdi -DLIBGCC2_UNITS_PER_WORD=8 -c $(srcdir)/libgcc2.c -o libgcc/x86_64/_fixsfti_s.o
libgcc/x86_64/_fixsfti.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -m64 -DL_fixsfdi -DLIBGCC2_UNITS_PER_WORD=8 $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/x86_64/_fixsfti.o
x86_64/libgcc.a: libgcc/x86_64/_fixsfti.o
x86_64/libgcc_s.dylib: libgcc/x86_64/_fixsfti_s.o
libgcc/x86_64/libgcc.map: libgcc/x86_64/_fixsfti_s.o
libgcc/x86_64/_fixunssfdi_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -m64 -DL_fixunssfdi -DLIBGCC2_UNITS_PER_WORD=4 -c $(srcdir)/libgcc2.c -o libgcc/x86_64/_fixunssfdi_s.o
libgcc/x86_64/_fixunssfdi.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -m64 -DL_fixunssfdi -DLIBGCC2_UNITS_PER_WORD=4 $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/x86_64/_fixunssfdi.o
x86_64/libgcc.a: libgcc/x86_64/_fixunssfdi.o
x86_64/libgcc_s.dylib: libgcc/x86_64/_fixunssfdi_s.o
libgcc/x86_64/libgcc.map: libgcc/x86_64/_fixunssfdi_s.o
libgcc/x86_64/_fixunssfti_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -m64 -DL_fixunssfdi -DLIBGCC2_UNITS_PER_WORD=8 -c $(srcdir)/libgcc2.c -o libgcc/x86_64/_fixunssfti_s.o
libgcc/x86_64/_fixunssfti.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -m64 -DL_fixunssfdi -DLIBGCC2_UNITS_PER_WORD=8 $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/x86_64/_fixunssfti.o
x86_64/libgcc.a: libgcc/x86_64/_fixunssfti.o
x86_64/libgcc_s.dylib: libgcc/x86_64/_fixunssfti_s.o
libgcc/x86_64/libgcc.map: libgcc/x86_64/_fixunssfti_s.o
libgcc/x86_64/_floatdisf_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -m64 -DL_floatdisf -DLIBGCC2_UNITS_PER_WORD=4 -c $(srcdir)/libgcc2.c -o libgcc/x86_64/_floatdisf_s.o
libgcc/x86_64/_floatdisf.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -m64 -DL_floatdisf -DLIBGCC2_UNITS_PER_WORD=4 $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/x86_64/_floatdisf.o
x86_64/libgcc.a: libgcc/x86_64/_floatdisf.o
x86_64/libgcc_s.dylib: libgcc/x86_64/_floatdisf_s.o
libgcc/x86_64/libgcc.map: libgcc/x86_64/_floatdisf_s.o
libgcc/x86_64/_floattisf_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -m64 -DL_floatdisf -DLIBGCC2_UNITS_PER_WORD=8 -c $(srcdir)/libgcc2.c -o libgcc/x86_64/_floattisf_s.o
libgcc/x86_64/_floattisf.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -m64 -DL_floatdisf -DLIBGCC2_UNITS_PER_WORD=8 $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/x86_64/_floattisf.o
x86_64/libgcc.a: libgcc/x86_64/_floattisf.o
x86_64/libgcc_s.dylib: libgcc/x86_64/_floattisf_s.o
libgcc/x86_64/libgcc.map: libgcc/x86_64/_floattisf_s.o
libgcc/x86_64/_floatundisf_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -m64 -DL_floatundisf -DLIBGCC2_UNITS_PER_WORD=4 -c $(srcdir)/libgcc2.c -o libgcc/x86_64/_floatundisf_s.o
libgcc/x86_64/_floatundisf.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -m64 -DL_floatundisf -DLIBGCC2_UNITS_PER_WORD=4 $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/x86_64/_floatundisf.o
x86_64/libgcc.a: libgcc/x86_64/_floatundisf.o
x86_64/libgcc_s.dylib: libgcc/x86_64/_floatundisf_s.o
libgcc/x86_64/libgcc.map: libgcc/x86_64/_floatundisf_s.o
libgcc/x86_64/_floatuntisf_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -m64 -DL_floatundisf -DLIBGCC2_UNITS_PER_WORD=8 -c $(srcdir)/libgcc2.c -o libgcc/x86_64/_floatuntisf_s.o
libgcc/x86_64/_floatuntisf.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -m64 -DL_floatundisf -DLIBGCC2_UNITS_PER_WORD=8 $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/x86_64/_floatuntisf.o
x86_64/libgcc.a: libgcc/x86_64/_floatuntisf.o
x86_64/libgcc_s.dylib: libgcc/x86_64/_floatuntisf_s.o
libgcc/x86_64/libgcc.map: libgcc/x86_64/_floatuntisf_s.o
libgcc/x86_64/_fixdfdi_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -m64 -DL_fixdfdi -DLIBGCC2_UNITS_PER_WORD=4 -c $(srcdir)/libgcc2.c -o libgcc/x86_64/_fixdfdi_s.o
libgcc/x86_64/_fixdfdi.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -m64 -DL_fixdfdi -DLIBGCC2_UNITS_PER_WORD=4 $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/x86_64/_fixdfdi.o
x86_64/libgcc.a: libgcc/x86_64/_fixdfdi.o
x86_64/libgcc_s.dylib: libgcc/x86_64/_fixdfdi_s.o
libgcc/x86_64/libgcc.map: libgcc/x86_64/_fixdfdi_s.o
libgcc/x86_64/_fixdfti_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -m64 -DL_fixdfdi -DLIBGCC2_UNITS_PER_WORD=8 -c $(srcdir)/libgcc2.c -o libgcc/x86_64/_fixdfti_s.o
libgcc/x86_64/_fixdfti.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -m64 -DL_fixdfdi -DLIBGCC2_UNITS_PER_WORD=8 $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/x86_64/_fixdfti.o
x86_64/libgcc.a: libgcc/x86_64/_fixdfti.o
x86_64/libgcc_s.dylib: libgcc/x86_64/_fixdfti_s.o
libgcc/x86_64/libgcc.map: libgcc/x86_64/_fixdfti_s.o
libgcc/x86_64/_fixunsdfdi_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -m64 -DL_fixunsdfdi -DLIBGCC2_UNITS_PER_WORD=4 -c $(srcdir)/libgcc2.c -o libgcc/x86_64/_fixunsdfdi_s.o
libgcc/x86_64/_fixunsdfdi.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -m64 -DL_fixunsdfdi -DLIBGCC2_UNITS_PER_WORD=4 $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/x86_64/_fixunsdfdi.o
x86_64/libgcc.a: libgcc/x86_64/_fixunsdfdi.o
x86_64/libgcc_s.dylib: libgcc/x86_64/_fixunsdfdi_s.o
libgcc/x86_64/libgcc.map: libgcc/x86_64/_fixunsdfdi_s.o
libgcc/x86_64/_fixunsdfti_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -m64 -DL_fixunsdfdi -DLIBGCC2_UNITS_PER_WORD=8 -c $(srcdir)/libgcc2.c -o libgcc/x86_64/_fixunsdfti_s.o
libgcc/x86_64/_fixunsdfti.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -m64 -DL_fixunsdfdi -DLIBGCC2_UNITS_PER_WORD=8 $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/x86_64/_fixunsdfti.o
x86_64/libgcc.a: libgcc/x86_64/_fixunsdfti.o
x86_64/libgcc_s.dylib: libgcc/x86_64/_fixunsdfti_s.o
libgcc/x86_64/libgcc.map: libgcc/x86_64/_fixunsdfti_s.o
libgcc/x86_64/_floatdidf_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -m64 -DL_floatdidf -DLIBGCC2_UNITS_PER_WORD=4 -c $(srcdir)/libgcc2.c -o libgcc/x86_64/_floatdidf_s.o
libgcc/x86_64/_floatdidf.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -m64 -DL_floatdidf -DLIBGCC2_UNITS_PER_WORD=4 $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/x86_64/_floatdidf.o
x86_64/libgcc.a: libgcc/x86_64/_floatdidf.o
x86_64/libgcc_s.dylib: libgcc/x86_64/_floatdidf_s.o
libgcc/x86_64/libgcc.map: libgcc/x86_64/_floatdidf_s.o
libgcc/x86_64/_floattidf_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -m64 -DL_floatdidf -DLIBGCC2_UNITS_PER_WORD=8 -c $(srcdir)/libgcc2.c -o libgcc/x86_64/_floattidf_s.o
libgcc/x86_64/_floattidf.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -m64 -DL_floatdidf -DLIBGCC2_UNITS_PER_WORD=8 $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/x86_64/_floattidf.o
x86_64/libgcc.a: libgcc/x86_64/_floattidf.o
x86_64/libgcc_s.dylib: libgcc/x86_64/_floattidf_s.o
libgcc/x86_64/libgcc.map: libgcc/x86_64/_floattidf_s.o
libgcc/x86_64/_floatundidf_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -m64 -DL_floatundidf -DLIBGCC2_UNITS_PER_WORD=4 -c $(srcdir)/libgcc2.c -o libgcc/x86_64/_floatundidf_s.o
libgcc/x86_64/_floatundidf.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -m64 -DL_floatundidf -DLIBGCC2_UNITS_PER_WORD=4 $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/x86_64/_floatundidf.o
x86_64/libgcc.a: libgcc/x86_64/_floatundidf.o
x86_64/libgcc_s.dylib: libgcc/x86_64/_floatundidf_s.o
libgcc/x86_64/libgcc.map: libgcc/x86_64/_floatundidf_s.o
libgcc/x86_64/_floatuntidf_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -m64 -DL_floatundidf -DLIBGCC2_UNITS_PER_WORD=8 -c $(srcdir)/libgcc2.c -o libgcc/x86_64/_floatuntidf_s.o
libgcc/x86_64/_floatuntidf.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -m64 -DL_floatundidf -DLIBGCC2_UNITS_PER_WORD=8 $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/x86_64/_floatuntidf.o
x86_64/libgcc.a: libgcc/x86_64/_floatuntidf.o
x86_64/libgcc_s.dylib: libgcc/x86_64/_floatuntidf_s.o
libgcc/x86_64/libgcc.map: libgcc/x86_64/_floatuntidf_s.o
libgcc/x86_64/_fixxfdi_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -m64 -DL_fixxfdi -DLIBGCC2_UNITS_PER_WORD=4 -c $(srcdir)/libgcc2.c -o libgcc/x86_64/_fixxfdi_s.o
libgcc/x86_64/_fixxfdi.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -m64 -DL_fixxfdi -DLIBGCC2_UNITS_PER_WORD=4 $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/x86_64/_fixxfdi.o
x86_64/libgcc.a: libgcc/x86_64/_fixxfdi.o
x86_64/libgcc_s.dylib: libgcc/x86_64/_fixxfdi_s.o
libgcc/x86_64/libgcc.map: libgcc/x86_64/_fixxfdi_s.o
libgcc/x86_64/_fixxfti_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -m64 -DL_fixxfdi -DLIBGCC2_UNITS_PER_WORD=8 -c $(srcdir)/libgcc2.c -o libgcc/x86_64/_fixxfti_s.o
libgcc/x86_64/_fixxfti.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -m64 -DL_fixxfdi -DLIBGCC2_UNITS_PER_WORD=8 $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/x86_64/_fixxfti.o
x86_64/libgcc.a: libgcc/x86_64/_fixxfti.o
x86_64/libgcc_s.dylib: libgcc/x86_64/_fixxfti_s.o
libgcc/x86_64/libgcc.map: libgcc/x86_64/_fixxfti_s.o
libgcc/x86_64/_fixunsxfdi_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -m64 -DL_fixunsxfdi -DLIBGCC2_UNITS_PER_WORD=4 -c $(srcdir)/libgcc2.c -o libgcc/x86_64/_fixunsxfdi_s.o
libgcc/x86_64/_fixunsxfdi.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -m64 -DL_fixunsxfdi -DLIBGCC2_UNITS_PER_WORD=4 $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/x86_64/_fixunsxfdi.o
x86_64/libgcc.a: libgcc/x86_64/_fixunsxfdi.o
x86_64/libgcc_s.dylib: libgcc/x86_64/_fixunsxfdi_s.o
libgcc/x86_64/libgcc.map: libgcc/x86_64/_fixunsxfdi_s.o
libgcc/x86_64/_fixunsxfti_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -m64 -DL_fixunsxfdi -DLIBGCC2_UNITS_PER_WORD=8 -c $(srcdir)/libgcc2.c -o libgcc/x86_64/_fixunsxfti_s.o
libgcc/x86_64/_fixunsxfti.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -m64 -DL_fixunsxfdi -DLIBGCC2_UNITS_PER_WORD=8 $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/x86_64/_fixunsxfti.o
x86_64/libgcc.a: libgcc/x86_64/_fixunsxfti.o
x86_64/libgcc_s.dylib: libgcc/x86_64/_fixunsxfti_s.o
libgcc/x86_64/libgcc.map: libgcc/x86_64/_fixunsxfti_s.o
libgcc/x86_64/_floatdixf_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -m64 -DL_floatdixf -DLIBGCC2_UNITS_PER_WORD=4 -c $(srcdir)/libgcc2.c -o libgcc/x86_64/_floatdixf_s.o
libgcc/x86_64/_floatdixf.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -m64 -DL_floatdixf -DLIBGCC2_UNITS_PER_WORD=4 $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/x86_64/_floatdixf.o
x86_64/libgcc.a: libgcc/x86_64/_floatdixf.o
x86_64/libgcc_s.dylib: libgcc/x86_64/_floatdixf_s.o
libgcc/x86_64/libgcc.map: libgcc/x86_64/_floatdixf_s.o
libgcc/x86_64/_floattixf_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -m64 -DL_floatdixf -DLIBGCC2_UNITS_PER_WORD=8 -c $(srcdir)/libgcc2.c -o libgcc/x86_64/_floattixf_s.o
libgcc/x86_64/_floattixf.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -m64 -DL_floatdixf -DLIBGCC2_UNITS_PER_WORD=8 $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/x86_64/_floattixf.o
x86_64/libgcc.a: libgcc/x86_64/_floattixf.o
x86_64/libgcc_s.dylib: libgcc/x86_64/_floattixf_s.o
libgcc/x86_64/libgcc.map: libgcc/x86_64/_floattixf_s.o
libgcc/x86_64/_floatundixf_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -m64 -DL_floatundixf -DLIBGCC2_UNITS_PER_WORD=4 -c $(srcdir)/libgcc2.c -o libgcc/x86_64/_floatundixf_s.o
libgcc/x86_64/_floatundixf.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -m64 -DL_floatundixf -DLIBGCC2_UNITS_PER_WORD=4 $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/x86_64/_floatundixf.o
x86_64/libgcc.a: libgcc/x86_64/_floatundixf.o
x86_64/libgcc_s.dylib: libgcc/x86_64/_floatundixf_s.o
libgcc/x86_64/libgcc.map: libgcc/x86_64/_floatundixf_s.o
libgcc/x86_64/_floatuntixf_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -m64 -DL_floatundixf -DLIBGCC2_UNITS_PER_WORD=8 -c $(srcdir)/libgcc2.c -o libgcc/x86_64/_floatuntixf_s.o
libgcc/x86_64/_floatuntixf.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -m64 -DL_floatundixf -DLIBGCC2_UNITS_PER_WORD=8 $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/x86_64/_floatuntixf.o
x86_64/libgcc.a: libgcc/x86_64/_floatuntixf.o
x86_64/libgcc_s.dylib: libgcc/x86_64/_floatuntixf_s.o
libgcc/x86_64/libgcc.map: libgcc/x86_64/_floatuntixf_s.o
libgcc/x86_64/_fixtfdi_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -m64 -DL_fixtfdi -DLIBGCC2_UNITS_PER_WORD=4 -c $(srcdir)/libgcc2.c -o libgcc/x86_64/_fixtfdi_s.o
libgcc/x86_64/_fixtfdi.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -m64 -DL_fixtfdi -DLIBGCC2_UNITS_PER_WORD=4 $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/x86_64/_fixtfdi.o
x86_64/libgcc.a: libgcc/x86_64/_fixtfdi.o
x86_64/libgcc_s.dylib: libgcc/x86_64/_fixtfdi_s.o
libgcc/x86_64/libgcc.map: libgcc/x86_64/_fixtfdi_s.o
libgcc/x86_64/_fixtfti_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -m64 -DL_fixtfdi -DLIBGCC2_UNITS_PER_WORD=8 -c $(srcdir)/libgcc2.c -o libgcc/x86_64/_fixtfti_s.o
libgcc/x86_64/_fixtfti.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -m64 -DL_fixtfdi -DLIBGCC2_UNITS_PER_WORD=8 $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/x86_64/_fixtfti.o
x86_64/libgcc.a: libgcc/x86_64/_fixtfti.o
x86_64/libgcc_s.dylib: libgcc/x86_64/_fixtfti_s.o
libgcc/x86_64/libgcc.map: libgcc/x86_64/_fixtfti_s.o
libgcc/x86_64/_fixunstfdi_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -m64 -DL_fixunstfdi -DLIBGCC2_UNITS_PER_WORD=4 -c $(srcdir)/libgcc2.c -o libgcc/x86_64/_fixunstfdi_s.o
libgcc/x86_64/_fixunstfdi.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -m64 -DL_fixunstfdi -DLIBGCC2_UNITS_PER_WORD=4 $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/x86_64/_fixunstfdi.o
x86_64/libgcc.a: libgcc/x86_64/_fixunstfdi.o
x86_64/libgcc_s.dylib: libgcc/x86_64/_fixunstfdi_s.o
libgcc/x86_64/libgcc.map: libgcc/x86_64/_fixunstfdi_s.o
libgcc/x86_64/_fixunstfti_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -m64 -DL_fixunstfdi -DLIBGCC2_UNITS_PER_WORD=8 -c $(srcdir)/libgcc2.c -o libgcc/x86_64/_fixunstfti_s.o
libgcc/x86_64/_fixunstfti.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -m64 -DL_fixunstfdi -DLIBGCC2_UNITS_PER_WORD=8 $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/x86_64/_fixunstfti.o
x86_64/libgcc.a: libgcc/x86_64/_fixunstfti.o
x86_64/libgcc_s.dylib: libgcc/x86_64/_fixunstfti_s.o
libgcc/x86_64/libgcc.map: libgcc/x86_64/_fixunstfti_s.o
libgcc/x86_64/_floatditf_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -m64 -DL_floatditf -DLIBGCC2_UNITS_PER_WORD=4 -c $(srcdir)/libgcc2.c -o libgcc/x86_64/_floatditf_s.o
libgcc/x86_64/_floatditf.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -m64 -DL_floatditf -DLIBGCC2_UNITS_PER_WORD=4 $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/x86_64/_floatditf.o
x86_64/libgcc.a: libgcc/x86_64/_floatditf.o
x86_64/libgcc_s.dylib: libgcc/x86_64/_floatditf_s.o
libgcc/x86_64/libgcc.map: libgcc/x86_64/_floatditf_s.o
libgcc/x86_64/_floattitf_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -m64 -DL_floatditf -DLIBGCC2_UNITS_PER_WORD=8 -c $(srcdir)/libgcc2.c -o libgcc/x86_64/_floattitf_s.o
libgcc/x86_64/_floattitf.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -m64 -DL_floatditf -DLIBGCC2_UNITS_PER_WORD=8 $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/x86_64/_floattitf.o
x86_64/libgcc.a: libgcc/x86_64/_floattitf.o
x86_64/libgcc_s.dylib: libgcc/x86_64/_floattitf_s.o
libgcc/x86_64/libgcc.map: libgcc/x86_64/_floattitf_s.o
libgcc/x86_64/_floatunditf_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -m64 -DL_floatunditf -DLIBGCC2_UNITS_PER_WORD=4 -c $(srcdir)/libgcc2.c -o libgcc/x86_64/_floatunditf_s.o
libgcc/x86_64/_floatunditf.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -m64 -DL_floatunditf -DLIBGCC2_UNITS_PER_WORD=4 $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/x86_64/_floatunditf.o
x86_64/libgcc.a: libgcc/x86_64/_floatunditf.o
x86_64/libgcc_s.dylib: libgcc/x86_64/_floatunditf_s.o
libgcc/x86_64/libgcc.map: libgcc/x86_64/_floatunditf_s.o
libgcc/x86_64/_floatuntitf_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -m64 -DL_floatunditf -DLIBGCC2_UNITS_PER_WORD=8 -c $(srcdir)/libgcc2.c -o libgcc/x86_64/_floatuntitf_s.o
libgcc/x86_64/_floatuntitf.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -m64 -DL_floatunditf -DLIBGCC2_UNITS_PER_WORD=8 $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/x86_64/_floatuntitf.o
x86_64/libgcc.a: libgcc/x86_64/_floatuntitf.o
x86_64/libgcc_s.dylib: libgcc/x86_64/_floatuntitf_s.o
libgcc/x86_64/libgcc.map: libgcc/x86_64/_floatuntitf_s.o
libgcc/x86_64/_eprintf.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -m64 -DL_eprintf $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/x86_64/_eprintf.o
x86_64/libgcc.a: libgcc/x86_64/_eprintf.o
libgcc/x86_64/__gcc_bcmp.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -m64 -DL__gcc_bcmp $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/x86_64/__gcc_bcmp.o
x86_64/libgcc.a: libgcc/x86_64/__gcc_bcmp.o
libgcc/x86_64/_divdi3_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -fexceptions -fnon-call-exceptions -m64 -DL_divdi3 -c $(srcdir)/libgcc2.c -o libgcc/x86_64/_divdi3_s.o
libgcc/x86_64/_divdi3.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -fexceptions -fnon-call-exceptions -m64 -DL_divdi3 $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/x86_64/_divdi3.o
x86_64/libgcc.a: libgcc/x86_64/_divdi3.o
x86_64/libgcc_s.dylib: libgcc/x86_64/_divdi3_s.o
libgcc/x86_64/libgcc.map: libgcc/x86_64/_divdi3_s.o
libgcc/x86_64/_moddi3_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -fexceptions -fnon-call-exceptions -m64 -DL_moddi3 -c $(srcdir)/libgcc2.c -o libgcc/x86_64/_moddi3_s.o
libgcc/x86_64/_moddi3.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -fexceptions -fnon-call-exceptions -m64 -DL_moddi3 $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/x86_64/_moddi3.o
x86_64/libgcc.a: libgcc/x86_64/_moddi3.o
x86_64/libgcc_s.dylib: libgcc/x86_64/_moddi3_s.o
libgcc/x86_64/libgcc.map: libgcc/x86_64/_moddi3_s.o
libgcc/x86_64/_udivdi3_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -fexceptions -fnon-call-exceptions -m64 -DL_udivdi3 -c $(srcdir)/libgcc2.c -o libgcc/x86_64/_udivdi3_s.o
libgcc/x86_64/_udivdi3.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -fexceptions -fnon-call-exceptions -m64 -DL_udivdi3 $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/x86_64/_udivdi3.o
x86_64/libgcc.a: libgcc/x86_64/_udivdi3.o
x86_64/libgcc_s.dylib: libgcc/x86_64/_udivdi3_s.o
libgcc/x86_64/libgcc.map: libgcc/x86_64/_udivdi3_s.o
libgcc/x86_64/_umoddi3_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -fexceptions -fnon-call-exceptions -m64 -DL_umoddi3 -c $(srcdir)/libgcc2.c -o libgcc/x86_64/_umoddi3_s.o
libgcc/x86_64/_umoddi3.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -fexceptions -fnon-call-exceptions -m64 -DL_umoddi3 $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/x86_64/_umoddi3.o
x86_64/libgcc.a: libgcc/x86_64/_umoddi3.o
x86_64/libgcc_s.dylib: libgcc/x86_64/_umoddi3_s.o
libgcc/x86_64/libgcc.map: libgcc/x86_64/_umoddi3_s.o
libgcc/x86_64/_udiv_w_sdiv_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -fexceptions -fnon-call-exceptions -m64 -DL_udiv_w_sdiv -c $(srcdir)/libgcc2.c -o libgcc/x86_64/_udiv_w_sdiv_s.o
libgcc/x86_64/_udiv_w_sdiv.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -fexceptions -fnon-call-exceptions -m64 -DL_udiv_w_sdiv $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/x86_64/_udiv_w_sdiv.o
x86_64/libgcc.a: libgcc/x86_64/_udiv_w_sdiv.o
x86_64/libgcc_s.dylib: libgcc/x86_64/_udiv_w_sdiv_s.o
libgcc/x86_64/libgcc.map: libgcc/x86_64/_udiv_w_sdiv_s.o
libgcc/x86_64/_udivmoddi4_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -fexceptions -fnon-call-exceptions -m64 -DL_udivmoddi4 -c $(srcdir)/libgcc2.c -o libgcc/x86_64/_udivmoddi4_s.o
libgcc/x86_64/_udivmoddi4.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -fexceptions -fnon-call-exceptions -m64 -DL_udivmoddi4 $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/x86_64/_udivmoddi4.o
x86_64/libgcc.a: libgcc/x86_64/_udivmoddi4.o
x86_64/libgcc_s.dylib: libgcc/x86_64/_udivmoddi4_s.o
libgcc/x86_64/libgcc.map: libgcc/x86_64/_udivmoddi4_s.o
libgcc/x86_64/darwin-64_s.o: stmp-dirs /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/darwin-64.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -m64 -c /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/darwin-64.c -o libgcc/x86_64/darwin-64_s.o
libgcc/x86_64/darwin-64.o: stmp-dirs /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/darwin-64.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -m64 $(vis_hide) -c /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/darwin-64.c -o libgcc/x86_64/darwin-64.o
x86_64/libgcc.a: libgcc/x86_64/darwin-64.o
x86_64/libgcc_s.dylib: libgcc/x86_64/darwin-64_s.o
libgcc/x86_64/libgcc.map: libgcc/x86_64/darwin-64_s.o
libgcc/x86_64/unwind-dw2.o: stmp-dirs /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/unwind-dw2.c unwind.inc unwind-dw2-fde.h unwind-dw2-fde.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -m64 -fexceptions $(vis_hide) -c /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/unwind-dw2.c -o libgcc/x86_64/unwind-dw2.o
x86_64/libgcc_eh.a: libgcc/x86_64/unwind-dw2.o
libgcc/x86_64/unwind-dw2-fde-darwin.o: stmp-dirs /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/unwind-dw2-fde-darwin.c unwind.inc unwind-dw2-fde.h unwind-dw2-fde.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -m64 -fexceptions $(vis_hide) -c /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/unwind-dw2-fde-darwin.c -o libgcc/x86_64/unwind-dw2-fde-darwin.o
x86_64/libgcc_eh.a: libgcc/x86_64/unwind-dw2-fde-darwin.o
libgcc/x86_64/unwind-sjlj.o: stmp-dirs /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/unwind-sjlj.c unwind.inc unwind-dw2-fde.h unwind-dw2-fde.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -m64 -fexceptions $(vis_hide) -c /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/unwind-sjlj.c -o libgcc/x86_64/unwind-sjlj.o
x86_64/libgcc_eh.a: libgcc/x86_64/unwind-sjlj.o
libgcc/x86_64/unwind-c.o: stmp-dirs /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/unwind-c.c unwind.inc unwind-dw2-fde.h unwind-dw2-fde.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -m64 -fexceptions $(vis_hide) -c /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/unwind-c.c -o libgcc/x86_64/unwind-c.o
x86_64/libgcc_eh.a: libgcc/x86_64/unwind-c.o
libgcc/x86_64/unwind-dw2_s.o: stmp-dirs /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/unwind-dw2.c unwind.inc unwind-dw2-fde.h unwind-dw2-fde.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -m64 -fexceptions -c /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/unwind-dw2.c -o libgcc/x86_64/unwind-dw2_s.o
x86_64/libgcc_s.dylib: libgcc/x86_64/unwind-dw2_s.o
libgcc/x86_64/libgcc.map: libgcc/x86_64/unwind-dw2_s.o
libgcc/x86_64/unwind-dw2-fde-darwin_s.o: stmp-dirs /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/unwind-dw2-fde-darwin.c unwind.inc unwind-dw2-fde.h unwind-dw2-fde.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -m64 -fexceptions -c /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/unwind-dw2-fde-darwin.c -o libgcc/x86_64/unwind-dw2-fde-darwin_s.o
x86_64/libgcc_s.dylib: libgcc/x86_64/unwind-dw2-fde-darwin_s.o
libgcc/x86_64/libgcc.map: libgcc/x86_64/unwind-dw2-fde-darwin_s.o
libgcc/x86_64/unwind-sjlj_s.o: stmp-dirs /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/unwind-sjlj.c unwind.inc unwind-dw2-fde.h unwind-dw2-fde.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -m64 -fexceptions -c /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/unwind-sjlj.c -o libgcc/x86_64/unwind-sjlj_s.o
x86_64/libgcc_s.dylib: libgcc/x86_64/unwind-sjlj_s.o
libgcc/x86_64/libgcc.map: libgcc/x86_64/unwind-sjlj_s.o
libgcc/x86_64/unwind-c_s.o: stmp-dirs /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/unwind-c.c unwind.inc unwind-dw2-fde.h unwind-dw2-fde.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -m64 -fexceptions -c /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/unwind-c.c -o libgcc/x86_64/unwind-c_s.o
x86_64/libgcc_s.dylib: libgcc/x86_64/unwind-c_s.o
libgcc/x86_64/libgcc.map: libgcc/x86_64/unwind-c_s.o
libgcc/x86_64/_gcov.o: stmp-dirs $(srcdir)/libgcov.c $(srcdir)/gcov-io.h $(srcdir)/gcov-io.c gcov-iov.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES)  -m64 -DL_gcov -c $(srcdir)/libgcov.c -o libgcc/x86_64/_gcov.o
x86_64/libgcov.a: libgcc/x86_64/_gcov.o
libgcc/x86_64/_gcov_merge_add.o: stmp-dirs $(srcdir)/libgcov.c $(srcdir)/gcov-io.h $(srcdir)/gcov-io.c gcov-iov.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES)  -m64 -DL_gcov_merge_add -c $(srcdir)/libgcov.c -o libgcc/x86_64/_gcov_merge_add.o
x86_64/libgcov.a: libgcc/x86_64/_gcov_merge_add.o
libgcc/x86_64/_gcov_merge_single.o: stmp-dirs $(srcdir)/libgcov.c $(srcdir)/gcov-io.h $(srcdir)/gcov-io.c gcov-iov.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES)  -m64 -DL_gcov_merge_single -c $(srcdir)/libgcov.c -o libgcc/x86_64/_gcov_merge_single.o
x86_64/libgcov.a: libgcc/x86_64/_gcov_merge_single.o
libgcc/x86_64/_gcov_merge_delta.o: stmp-dirs $(srcdir)/libgcov.c $(srcdir)/gcov-io.h $(srcdir)/gcov-io.c gcov-iov.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES)  -m64 -DL_gcov_merge_delta -c $(srcdir)/libgcov.c -o libgcc/x86_64/_gcov_merge_delta.o
x86_64/libgcov.a: libgcc/x86_64/_gcov_merge_delta.o
libgcc/x86_64/_gcov_fork.o: stmp-dirs $(srcdir)/libgcov.c $(srcdir)/gcov-io.h $(srcdir)/gcov-io.c gcov-iov.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES)  -m64 -DL_gcov_fork -c $(srcdir)/libgcov.c -o libgcc/x86_64/_gcov_fork.o
x86_64/libgcov.a: libgcc/x86_64/_gcov_fork.o
libgcc/x86_64/_gcov_execl.o: stmp-dirs $(srcdir)/libgcov.c $(srcdir)/gcov-io.h $(srcdir)/gcov-io.c gcov-iov.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES)  -m64 -DL_gcov_execl -c $(srcdir)/libgcov.c -o libgcc/x86_64/_gcov_execl.o
x86_64/libgcov.a: libgcc/x86_64/_gcov_execl.o
libgcc/x86_64/_gcov_execlp.o: stmp-dirs $(srcdir)/libgcov.c $(srcdir)/gcov-io.h $(srcdir)/gcov-io.c gcov-iov.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES)  -m64 -DL_gcov_execlp -c $(srcdir)/libgcov.c -o libgcc/x86_64/_gcov_execlp.o
x86_64/libgcov.a: libgcc/x86_64/_gcov_execlp.o
libgcc/x86_64/_gcov_execle.o: stmp-dirs $(srcdir)/libgcov.c $(srcdir)/gcov-io.h $(srcdir)/gcov-io.c gcov-iov.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES)  -m64 -DL_gcov_execle -c $(srcdir)/libgcov.c -o libgcc/x86_64/_gcov_execle.o
x86_64/libgcov.a: libgcc/x86_64/_gcov_execle.o
libgcc/x86_64/_gcov_execv.o: stmp-dirs $(srcdir)/libgcov.c $(srcdir)/gcov-io.h $(srcdir)/gcov-io.c gcov-iov.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES)  -m64 -DL_gcov_execv -c $(srcdir)/libgcov.c -o libgcc/x86_64/_gcov_execv.o
x86_64/libgcov.a: libgcc/x86_64/_gcov_execv.o
libgcc/x86_64/_gcov_execvp.o: stmp-dirs $(srcdir)/libgcov.c $(srcdir)/gcov-io.h $(srcdir)/gcov-io.c gcov-iov.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES)  -m64 -DL_gcov_execvp -c $(srcdir)/libgcov.c -o libgcc/x86_64/_gcov_execvp.o
x86_64/libgcov.a: libgcc/x86_64/_gcov_execvp.o
libgcc/x86_64/_gcov_execve.o: stmp-dirs $(srcdir)/libgcov.c $(srcdir)/gcov-io.h $(srcdir)/gcov-io.c gcov-iov.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES)  -m64 -DL_gcov_execve -c $(srcdir)/libgcov.c -o libgcc/x86_64/_gcov_execve.o
x86_64/libgcov.a: libgcc/x86_64/_gcov_execve.o
libgcc/x86_64/_gcov_interval_profiler.o: stmp-dirs $(srcdir)/libgcov.c $(srcdir)/gcov-io.h $(srcdir)/gcov-io.c gcov-iov.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES)  -m64 -DL_gcov_interval_profiler -c $(srcdir)/libgcov.c -o libgcc/x86_64/_gcov_interval_profiler.o
x86_64/libgcov.a: libgcc/x86_64/_gcov_interval_profiler.o
libgcc/x86_64/_gcov_pow2_profiler.o: stmp-dirs $(srcdir)/libgcov.c $(srcdir)/gcov-io.h $(srcdir)/gcov-io.c gcov-iov.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES)  -m64 -DL_gcov_pow2_profiler -c $(srcdir)/libgcov.c -o libgcc/x86_64/_gcov_pow2_profiler.o
x86_64/libgcov.a: libgcc/x86_64/_gcov_pow2_profiler.o
libgcc/x86_64/_gcov_one_value_profiler.o: stmp-dirs $(srcdir)/libgcov.c $(srcdir)/gcov-io.h $(srcdir)/gcov-io.c gcov-iov.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES)  -m64 -DL_gcov_one_value_profiler -c $(srcdir)/libgcov.c -o libgcc/x86_64/_gcov_one_value_profiler.o
x86_64/libgcov.a: libgcc/x86_64/_gcov_one_value_profiler.o

extrax86_64: stmp-dirs
	$(MAKE) GCC_FOR_TARGET="$(GCC_FOR_TARGET)" \
	  AR_FOR_TARGET="$(AR_FOR_TARGET)" \
	  AR_CREATE_FOR_TARGET="$(AR_CREATE_FOR_TARGET)" \
	  AR_EXTRACT_FOR_TARGET="$(AR_EXTRACT_FOR_TARGET)" \
	  AR_FLAGS_FOR_TARGET="$(AR_FLAGS_FOR_TARGET)" \
	  CC="$(CC)" CFLAGS="$(CFLAGS)" \
	  BUILD_PREFIX="$(BUILD_PREFIX)" \
	  BUILD_PREFIX_1="$(BUILD_PREFIX_1)" \
	  LANGUAGES="$(LANGUAGES)" \
	  LIBGCC2_CFLAGS="$(LIBGCC2_CFLAGS) -m64 "  \
	  LIBGCC2_STATIC_CFLAGS="$(LIBGCC2_STATIC_CFLAGS)"  \
	  MULTILIB_CFLAGS=" -m64" T=x86_64/ x86_64/crt3.o
all: extrax86_64
x86_64/libgcc_s.dylib: extrax86_64

libgcc/x86_64/libgcc.map: /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/mkmap-flat.awk /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/libgcc-std.ver
	{ $(NM_FOR_TARGET) -pg $(objects); echo %%; \
	  cat /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/libgcc-std.ver \
	    | sed -e '/^[   ]*#/d' \
	          -e 's/^%\(if\|else\|elif\|endif\|define\)/#\1/' \
	    | $(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES)  -m64 -E -xassembler-with-cpp -; \
	} | $(AWK) -f /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/mkmap-flat.awk -v leading_underscore=1 > libgcc/x86_64/tmp-libgcc.map
	mv 'libgcc/x86_64/tmp-libgcc.map' $@
x86_64/libgcc_s.dylib: libgcc/x86_64/libgcc.map

x86_64/libgcc.a: stmp-dirs
	-rm -f x86_64/libgcc.a
	$(AR_CREATE_FOR_TARGET) x86_64/libgcc.a $(objects)
	$(RANLIB_FOR_TARGET) x86_64/libgcc.a
all: x86_64/libgcc.a

x86_64/libgcov.a: stmp-dirs
	-rm -f x86_64/libgcov.a
	$(AR_CREATE_FOR_TARGET) x86_64/libgcov.a $(objects)
	$(RANLIB_FOR_TARGET) x86_64/libgcov.a
all: x86_64/libgcov.a

x86_64/libgcc_eh.a: stmp-dirs
	-rm -f x86_64/libgcc_eh.a
	$(AR_CREATE_FOR_TARGET) x86_64/libgcc_eh.a $(objects)
	$(RANLIB_FOR_TARGET) x86_64/libgcc_eh.a
all: x86_64/libgcc_eh.a

x86_64/libgcc_s.dylib: stmp-dirs 
	i686-apple-darwin11-gcc  -O2  -O2 -g -O2   -DIN_GCC    -W -Wall -Wwrite-strings -Wstrict-prototypes -Wmissing-prototypes -Wold-style-definition  -isystem ./include  -fPIC -pipe -g -DHAVE_GTHR_DEFAULT -DIN_LIBGCC2 -D__GCC_FLOAT_NOT_NEEDED  -dynamiclib -nodefaultlibs -install_name /usr/lib/libgcc_s`if test x86_64 = ppc64 ; then echo _x86_64 ; fi`.1.dylib -single_module -o x86_64/libgcc_s.1.dylib.tmp -Wl,-exported_symbols_list,libgcc/x86_64/libgcc.map -compatibility_version 1 -current_version 1.0  -m64 $(objects) -lc
all: x86_64/libgcc_s.dylib

#
# ml: static;@static@fno-pic
# dir: static
# flags: -static -fno-pic
# libgcc_a: static/libgcc.a
# libgcov_a: static/libgcov.a
# libgcc_eh_a: static/libgcc_eh.a
# libunwind_a:
#
# shlib_slibdir_qual:
# libgcc_s_so: static/libgcc_s.dylib
# libunwind_so:
#

dirs += static libgcc/static

libgcc/static/_get_pc_thunk_ax_s.o: stmp-dirs $(srcdir)/config/$(LIB1ASMSRC)
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -static -fno-pic -DL_get_pc_thunk_ax -xassembler-with-cpp -c $(srcdir)/config/$(LIB1ASMSRC) -o libgcc/static/_get_pc_thunk_ax_s.o
libgcc/static/_get_pc_thunk_ax.o: stmp-dirs $(srcdir)/config/$(LIB1ASMSRC) libgcc/static/_get_pc_thunk_ax.vis
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -static -fno-pic -DL_get_pc_thunk_ax -xassembler-with-cpp -c $(srcdir)/config/$(LIB1ASMSRC) -include libgcc/static/_get_pc_thunk_ax.vis -o libgcc/static/_get_pc_thunk_ax.o
libgcc/static/_get_pc_thunk_ax.vis: libgcc/static/_get_pc_thunk_ax_s.o; $(gen-hide-list)
static/libgcc.a: libgcc/static/_get_pc_thunk_ax.o
static/libgcc_s.dylib: libgcc/static/_get_pc_thunk_ax_s.o
libgcc/static/libgcc.map: libgcc/static/_get_pc_thunk_ax_s.o
libgcc/static/_get_pc_thunk_dx_s.o: stmp-dirs $(srcdir)/config/$(LIB1ASMSRC)
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -static -fno-pic -DL_get_pc_thunk_dx -xassembler-with-cpp -c $(srcdir)/config/$(LIB1ASMSRC) -o libgcc/static/_get_pc_thunk_dx_s.o
libgcc/static/_get_pc_thunk_dx.o: stmp-dirs $(srcdir)/config/$(LIB1ASMSRC) libgcc/static/_get_pc_thunk_dx.vis
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -static -fno-pic -DL_get_pc_thunk_dx -xassembler-with-cpp -c $(srcdir)/config/$(LIB1ASMSRC) -include libgcc/static/_get_pc_thunk_dx.vis -o libgcc/static/_get_pc_thunk_dx.o
libgcc/static/_get_pc_thunk_dx.vis: libgcc/static/_get_pc_thunk_dx_s.o; $(gen-hide-list)
static/libgcc.a: libgcc/static/_get_pc_thunk_dx.o
static/libgcc_s.dylib: libgcc/static/_get_pc_thunk_dx_s.o
libgcc/static/libgcc.map: libgcc/static/_get_pc_thunk_dx_s.o
libgcc/static/_get_pc_thunk_cx_s.o: stmp-dirs $(srcdir)/config/$(LIB1ASMSRC)
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -static -fno-pic -DL_get_pc_thunk_cx -xassembler-with-cpp -c $(srcdir)/config/$(LIB1ASMSRC) -o libgcc/static/_get_pc_thunk_cx_s.o
libgcc/static/_get_pc_thunk_cx.o: stmp-dirs $(srcdir)/config/$(LIB1ASMSRC) libgcc/static/_get_pc_thunk_cx.vis
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -static -fno-pic -DL_get_pc_thunk_cx -xassembler-with-cpp -c $(srcdir)/config/$(LIB1ASMSRC) -include libgcc/static/_get_pc_thunk_cx.vis -o libgcc/static/_get_pc_thunk_cx.o
libgcc/static/_get_pc_thunk_cx.vis: libgcc/static/_get_pc_thunk_cx_s.o; $(gen-hide-list)
static/libgcc.a: libgcc/static/_get_pc_thunk_cx.o
static/libgcc_s.dylib: libgcc/static/_get_pc_thunk_cx_s.o
libgcc/static/libgcc.map: libgcc/static/_get_pc_thunk_cx_s.o
libgcc/static/_get_pc_thunk_bx_s.o: stmp-dirs $(srcdir)/config/$(LIB1ASMSRC)
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -static -fno-pic -DL_get_pc_thunk_bx -xassembler-with-cpp -c $(srcdir)/config/$(LIB1ASMSRC) -o libgcc/static/_get_pc_thunk_bx_s.o
libgcc/static/_get_pc_thunk_bx.o: stmp-dirs $(srcdir)/config/$(LIB1ASMSRC) libgcc/static/_get_pc_thunk_bx.vis
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -static -fno-pic -DL_get_pc_thunk_bx -xassembler-with-cpp -c $(srcdir)/config/$(LIB1ASMSRC) -include libgcc/static/_get_pc_thunk_bx.vis -o libgcc/static/_get_pc_thunk_bx.o
libgcc/static/_get_pc_thunk_bx.vis: libgcc/static/_get_pc_thunk_bx_s.o; $(gen-hide-list)
static/libgcc.a: libgcc/static/_get_pc_thunk_bx.o
static/libgcc_s.dylib: libgcc/static/_get_pc_thunk_bx_s.o
libgcc/static/libgcc.map: libgcc/static/_get_pc_thunk_bx_s.o
libgcc/static/_get_pc_thunk_si_s.o: stmp-dirs $(srcdir)/config/$(LIB1ASMSRC)
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -static -fno-pic -DL_get_pc_thunk_si -xassembler-with-cpp -c $(srcdir)/config/$(LIB1ASMSRC) -o libgcc/static/_get_pc_thunk_si_s.o
libgcc/static/_get_pc_thunk_si.o: stmp-dirs $(srcdir)/config/$(LIB1ASMSRC) libgcc/static/_get_pc_thunk_si.vis
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -static -fno-pic -DL_get_pc_thunk_si -xassembler-with-cpp -c $(srcdir)/config/$(LIB1ASMSRC) -include libgcc/static/_get_pc_thunk_si.vis -o libgcc/static/_get_pc_thunk_si.o
libgcc/static/_get_pc_thunk_si.vis: libgcc/static/_get_pc_thunk_si_s.o; $(gen-hide-list)
static/libgcc.a: libgcc/static/_get_pc_thunk_si.o
static/libgcc_s.dylib: libgcc/static/_get_pc_thunk_si_s.o
libgcc/static/libgcc.map: libgcc/static/_get_pc_thunk_si_s.o
libgcc/static/_get_pc_thunk_di_s.o: stmp-dirs $(srcdir)/config/$(LIB1ASMSRC)
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -static -fno-pic -DL_get_pc_thunk_di -xassembler-with-cpp -c $(srcdir)/config/$(LIB1ASMSRC) -o libgcc/static/_get_pc_thunk_di_s.o
libgcc/static/_get_pc_thunk_di.o: stmp-dirs $(srcdir)/config/$(LIB1ASMSRC) libgcc/static/_get_pc_thunk_di.vis
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -static -fno-pic -DL_get_pc_thunk_di -xassembler-with-cpp -c $(srcdir)/config/$(LIB1ASMSRC) -include libgcc/static/_get_pc_thunk_di.vis -o libgcc/static/_get_pc_thunk_di.o
libgcc/static/_get_pc_thunk_di.vis: libgcc/static/_get_pc_thunk_di_s.o; $(gen-hide-list)
static/libgcc.a: libgcc/static/_get_pc_thunk_di.o
static/libgcc_s.dylib: libgcc/static/_get_pc_thunk_di_s.o
libgcc/static/libgcc.map: libgcc/static/_get_pc_thunk_di_s.o
libgcc/static/_get_pc_thunk_bp_s.o: stmp-dirs $(srcdir)/config/$(LIB1ASMSRC)
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -static -fno-pic -DL_get_pc_thunk_bp -xassembler-with-cpp -c $(srcdir)/config/$(LIB1ASMSRC) -o libgcc/static/_get_pc_thunk_bp_s.o
libgcc/static/_get_pc_thunk_bp.o: stmp-dirs $(srcdir)/config/$(LIB1ASMSRC) libgcc/static/_get_pc_thunk_bp.vis
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -static -fno-pic -DL_get_pc_thunk_bp -xassembler-with-cpp -c $(srcdir)/config/$(LIB1ASMSRC) -include libgcc/static/_get_pc_thunk_bp.vis -o libgcc/static/_get_pc_thunk_bp.o
libgcc/static/_get_pc_thunk_bp.vis: libgcc/static/_get_pc_thunk_bp_s.o; $(gen-hide-list)
static/libgcc.a: libgcc/static/_get_pc_thunk_bp.o
static/libgcc_s.dylib: libgcc/static/_get_pc_thunk_bp_s.o
libgcc/static/libgcc.map: libgcc/static/_get_pc_thunk_bp_s.o
libgcc/static/_muldi3_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -static -fno-pic -DL_muldi3 -c $(srcdir)/libgcc2.c -o libgcc/static/_muldi3_s.o
libgcc/static/_muldi3.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -static -fno-pic -DL_muldi3 $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/static/_muldi3.o
static/libgcc.a: libgcc/static/_muldi3.o
static/libgcc_s.dylib: libgcc/static/_muldi3_s.o
libgcc/static/libgcc.map: libgcc/static/_muldi3_s.o
libgcc/static/_negdi2_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -static -fno-pic -DL_negdi2 -c $(srcdir)/libgcc2.c -o libgcc/static/_negdi2_s.o
libgcc/static/_negdi2.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -static -fno-pic -DL_negdi2 $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/static/_negdi2.o
static/libgcc.a: libgcc/static/_negdi2.o
static/libgcc_s.dylib: libgcc/static/_negdi2_s.o
libgcc/static/libgcc.map: libgcc/static/_negdi2_s.o
libgcc/static/_lshrdi3_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -static -fno-pic -DL_lshrdi3 -c $(srcdir)/libgcc2.c -o libgcc/static/_lshrdi3_s.o
libgcc/static/_lshrdi3.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -static -fno-pic -DL_lshrdi3 $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/static/_lshrdi3.o
static/libgcc.a: libgcc/static/_lshrdi3.o
static/libgcc_s.dylib: libgcc/static/_lshrdi3_s.o
libgcc/static/libgcc.map: libgcc/static/_lshrdi3_s.o
libgcc/static/_ashldi3_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -static -fno-pic -DL_ashldi3 -c $(srcdir)/libgcc2.c -o libgcc/static/_ashldi3_s.o
libgcc/static/_ashldi3.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -static -fno-pic -DL_ashldi3 $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/static/_ashldi3.o
static/libgcc.a: libgcc/static/_ashldi3.o
static/libgcc_s.dylib: libgcc/static/_ashldi3_s.o
libgcc/static/libgcc.map: libgcc/static/_ashldi3_s.o
libgcc/static/_ashrdi3_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -static -fno-pic -DL_ashrdi3 -c $(srcdir)/libgcc2.c -o libgcc/static/_ashrdi3_s.o
libgcc/static/_ashrdi3.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -static -fno-pic -DL_ashrdi3 $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/static/_ashrdi3.o
static/libgcc.a: libgcc/static/_ashrdi3.o
static/libgcc_s.dylib: libgcc/static/_ashrdi3_s.o
libgcc/static/libgcc.map: libgcc/static/_ashrdi3_s.o
libgcc/static/_cmpdi2_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -static -fno-pic -DL_cmpdi2 -c $(srcdir)/libgcc2.c -o libgcc/static/_cmpdi2_s.o
libgcc/static/_cmpdi2.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -static -fno-pic -DL_cmpdi2 $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/static/_cmpdi2.o
static/libgcc.a: libgcc/static/_cmpdi2.o
static/libgcc_s.dylib: libgcc/static/_cmpdi2_s.o
libgcc/static/libgcc.map: libgcc/static/_cmpdi2_s.o
libgcc/static/_ucmpdi2_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -static -fno-pic -DL_ucmpdi2 -c $(srcdir)/libgcc2.c -o libgcc/static/_ucmpdi2_s.o
libgcc/static/_ucmpdi2.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -static -fno-pic -DL_ucmpdi2 $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/static/_ucmpdi2.o
static/libgcc.a: libgcc/static/_ucmpdi2.o
static/libgcc_s.dylib: libgcc/static/_ucmpdi2_s.o
libgcc/static/libgcc.map: libgcc/static/_ucmpdi2_s.o
libgcc/static/_clear_cache_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -static -fno-pic -DL_clear_cache -c $(srcdir)/libgcc2.c -o libgcc/static/_clear_cache_s.o
libgcc/static/_clear_cache.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -static -fno-pic -DL_clear_cache $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/static/_clear_cache.o
static/libgcc.a: libgcc/static/_clear_cache.o
static/libgcc_s.dylib: libgcc/static/_clear_cache_s.o
libgcc/static/libgcc.map: libgcc/static/_clear_cache_s.o
libgcc/static/_enable_execute_stack_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -static -fno-pic -DL_enable_execute_stack -c $(srcdir)/libgcc2.c -o libgcc/static/_enable_execute_stack_s.o
libgcc/static/_enable_execute_stack.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -static -fno-pic -DL_enable_execute_stack $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/static/_enable_execute_stack.o
static/libgcc.a: libgcc/static/_enable_execute_stack.o
static/libgcc_s.dylib: libgcc/static/_enable_execute_stack_s.o
libgcc/static/libgcc.map: libgcc/static/_enable_execute_stack_s.o
libgcc/static/_trampoline_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -static -fno-pic -DL_trampoline -c $(srcdir)/libgcc2.c -o libgcc/static/_trampoline_s.o
libgcc/static/_trampoline.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -static -fno-pic -DL_trampoline $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/static/_trampoline.o
static/libgcc.a: libgcc/static/_trampoline.o
static/libgcc_s.dylib: libgcc/static/_trampoline_s.o
libgcc/static/libgcc.map: libgcc/static/_trampoline_s.o
libgcc/static/__main_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -static -fno-pic -DL__main -c $(srcdir)/libgcc2.c -o libgcc/static/__main_s.o
libgcc/static/__main.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -static -fno-pic -DL__main $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/static/__main.o
static/libgcc.a: libgcc/static/__main.o
static/libgcc_s.dylib: libgcc/static/__main_s.o
libgcc/static/libgcc.map: libgcc/static/__main_s.o
libgcc/static/_absvsi2_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -static -fno-pic -DL_absvsi2 -c $(srcdir)/libgcc2.c -o libgcc/static/_absvsi2_s.o
libgcc/static/_absvsi2.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -static -fno-pic -DL_absvsi2 $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/static/_absvsi2.o
static/libgcc.a: libgcc/static/_absvsi2.o
static/libgcc_s.dylib: libgcc/static/_absvsi2_s.o
libgcc/static/libgcc.map: libgcc/static/_absvsi2_s.o
libgcc/static/_absvdi2_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -static -fno-pic -DL_absvdi2 -c $(srcdir)/libgcc2.c -o libgcc/static/_absvdi2_s.o
libgcc/static/_absvdi2.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -static -fno-pic -DL_absvdi2 $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/static/_absvdi2.o
static/libgcc.a: libgcc/static/_absvdi2.o
static/libgcc_s.dylib: libgcc/static/_absvdi2_s.o
libgcc/static/libgcc.map: libgcc/static/_absvdi2_s.o
libgcc/static/_addvsi3_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -static -fno-pic -DL_addvsi3 -c $(srcdir)/libgcc2.c -o libgcc/static/_addvsi3_s.o
libgcc/static/_addvsi3.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -static -fno-pic -DL_addvsi3 $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/static/_addvsi3.o
static/libgcc.a: libgcc/static/_addvsi3.o
static/libgcc_s.dylib: libgcc/static/_addvsi3_s.o
libgcc/static/libgcc.map: libgcc/static/_addvsi3_s.o
libgcc/static/_addvdi3_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -static -fno-pic -DL_addvdi3 -c $(srcdir)/libgcc2.c -o libgcc/static/_addvdi3_s.o
libgcc/static/_addvdi3.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -static -fno-pic -DL_addvdi3 $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/static/_addvdi3.o
static/libgcc.a: libgcc/static/_addvdi3.o
static/libgcc_s.dylib: libgcc/static/_addvdi3_s.o
libgcc/static/libgcc.map: libgcc/static/_addvdi3_s.o
libgcc/static/_subvsi3_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -static -fno-pic -DL_subvsi3 -c $(srcdir)/libgcc2.c -o libgcc/static/_subvsi3_s.o
libgcc/static/_subvsi3.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -static -fno-pic -DL_subvsi3 $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/static/_subvsi3.o
static/libgcc.a: libgcc/static/_subvsi3.o
static/libgcc_s.dylib: libgcc/static/_subvsi3_s.o
libgcc/static/libgcc.map: libgcc/static/_subvsi3_s.o
libgcc/static/_subvdi3_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -static -fno-pic -DL_subvdi3 -c $(srcdir)/libgcc2.c -o libgcc/static/_subvdi3_s.o
libgcc/static/_subvdi3.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -static -fno-pic -DL_subvdi3 $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/static/_subvdi3.o
static/libgcc.a: libgcc/static/_subvdi3.o
static/libgcc_s.dylib: libgcc/static/_subvdi3_s.o
libgcc/static/libgcc.map: libgcc/static/_subvdi3_s.o
libgcc/static/_mulvsi3_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -static -fno-pic -DL_mulvsi3 -c $(srcdir)/libgcc2.c -o libgcc/static/_mulvsi3_s.o
libgcc/static/_mulvsi3.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -static -fno-pic -DL_mulvsi3 $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/static/_mulvsi3.o
static/libgcc.a: libgcc/static/_mulvsi3.o
static/libgcc_s.dylib: libgcc/static/_mulvsi3_s.o
libgcc/static/libgcc.map: libgcc/static/_mulvsi3_s.o
libgcc/static/_mulvdi3_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -static -fno-pic -DL_mulvdi3 -c $(srcdir)/libgcc2.c -o libgcc/static/_mulvdi3_s.o
libgcc/static/_mulvdi3.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -static -fno-pic -DL_mulvdi3 $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/static/_mulvdi3.o
static/libgcc.a: libgcc/static/_mulvdi3.o
static/libgcc_s.dylib: libgcc/static/_mulvdi3_s.o
libgcc/static/libgcc.map: libgcc/static/_mulvdi3_s.o
libgcc/static/_negvsi2_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -static -fno-pic -DL_negvsi2 -c $(srcdir)/libgcc2.c -o libgcc/static/_negvsi2_s.o
libgcc/static/_negvsi2.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -static -fno-pic -DL_negvsi2 $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/static/_negvsi2.o
static/libgcc.a: libgcc/static/_negvsi2.o
static/libgcc_s.dylib: libgcc/static/_negvsi2_s.o
libgcc/static/libgcc.map: libgcc/static/_negvsi2_s.o
libgcc/static/_negvdi2_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -static -fno-pic -DL_negvdi2 -c $(srcdir)/libgcc2.c -o libgcc/static/_negvdi2_s.o
libgcc/static/_negvdi2.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -static -fno-pic -DL_negvdi2 $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/static/_negvdi2.o
static/libgcc.a: libgcc/static/_negvdi2.o
static/libgcc_s.dylib: libgcc/static/_negvdi2_s.o
libgcc/static/libgcc.map: libgcc/static/_negvdi2_s.o
libgcc/static/_ctors_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -static -fno-pic -DL_ctors -c $(srcdir)/libgcc2.c -o libgcc/static/_ctors_s.o
libgcc/static/_ctors.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -static -fno-pic -DL_ctors $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/static/_ctors.o
static/libgcc.a: libgcc/static/_ctors.o
static/libgcc_s.dylib: libgcc/static/_ctors_s.o
libgcc/static/libgcc.map: libgcc/static/_ctors_s.o
libgcc/static/_ffssi2_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -static -fno-pic -DL_ffssi2 -c $(srcdir)/libgcc2.c -o libgcc/static/_ffssi2_s.o
libgcc/static/_ffssi2.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -static -fno-pic -DL_ffssi2 $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/static/_ffssi2.o
static/libgcc.a: libgcc/static/_ffssi2.o
static/libgcc_s.dylib: libgcc/static/_ffssi2_s.o
libgcc/static/libgcc.map: libgcc/static/_ffssi2_s.o
libgcc/static/_ffsdi2_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -static -fno-pic -DL_ffsdi2 -c $(srcdir)/libgcc2.c -o libgcc/static/_ffsdi2_s.o
libgcc/static/_ffsdi2.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -static -fno-pic -DL_ffsdi2 $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/static/_ffsdi2.o
static/libgcc.a: libgcc/static/_ffsdi2.o
static/libgcc_s.dylib: libgcc/static/_ffsdi2_s.o
libgcc/static/libgcc.map: libgcc/static/_ffsdi2_s.o
libgcc/static/_clz_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -static -fno-pic -DL_clz -c $(srcdir)/libgcc2.c -o libgcc/static/_clz_s.o
libgcc/static/_clz.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -static -fno-pic -DL_clz $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/static/_clz.o
static/libgcc.a: libgcc/static/_clz.o
static/libgcc_s.dylib: libgcc/static/_clz_s.o
libgcc/static/libgcc.map: libgcc/static/_clz_s.o
libgcc/static/_clzsi2_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -static -fno-pic -DL_clzsi2 -c $(srcdir)/libgcc2.c -o libgcc/static/_clzsi2_s.o
libgcc/static/_clzsi2.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -static -fno-pic -DL_clzsi2 $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/static/_clzsi2.o
static/libgcc.a: libgcc/static/_clzsi2.o
static/libgcc_s.dylib: libgcc/static/_clzsi2_s.o
libgcc/static/libgcc.map: libgcc/static/_clzsi2_s.o
libgcc/static/_clzdi2_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -static -fno-pic -DL_clzdi2 -c $(srcdir)/libgcc2.c -o libgcc/static/_clzdi2_s.o
libgcc/static/_clzdi2.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -static -fno-pic -DL_clzdi2 $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/static/_clzdi2.o
static/libgcc.a: libgcc/static/_clzdi2.o
static/libgcc_s.dylib: libgcc/static/_clzdi2_s.o
libgcc/static/libgcc.map: libgcc/static/_clzdi2_s.o
libgcc/static/_ctzsi2_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -static -fno-pic -DL_ctzsi2 -c $(srcdir)/libgcc2.c -o libgcc/static/_ctzsi2_s.o
libgcc/static/_ctzsi2.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -static -fno-pic -DL_ctzsi2 $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/static/_ctzsi2.o
static/libgcc.a: libgcc/static/_ctzsi2.o
static/libgcc_s.dylib: libgcc/static/_ctzsi2_s.o
libgcc/static/libgcc.map: libgcc/static/_ctzsi2_s.o
libgcc/static/_ctzdi2_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -static -fno-pic -DL_ctzdi2 -c $(srcdir)/libgcc2.c -o libgcc/static/_ctzdi2_s.o
libgcc/static/_ctzdi2.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -static -fno-pic -DL_ctzdi2 $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/static/_ctzdi2.o
static/libgcc.a: libgcc/static/_ctzdi2.o
static/libgcc_s.dylib: libgcc/static/_ctzdi2_s.o
libgcc/static/libgcc.map: libgcc/static/_ctzdi2_s.o
libgcc/static/_popcount_tab_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -static -fno-pic -DL_popcount_tab -c $(srcdir)/libgcc2.c -o libgcc/static/_popcount_tab_s.o
libgcc/static/_popcount_tab.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -static -fno-pic -DL_popcount_tab $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/static/_popcount_tab.o
static/libgcc.a: libgcc/static/_popcount_tab.o
static/libgcc_s.dylib: libgcc/static/_popcount_tab_s.o
libgcc/static/libgcc.map: libgcc/static/_popcount_tab_s.o
libgcc/static/_popcountsi2_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -static -fno-pic -DL_popcountsi2 -c $(srcdir)/libgcc2.c -o libgcc/static/_popcountsi2_s.o
libgcc/static/_popcountsi2.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -static -fno-pic -DL_popcountsi2 $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/static/_popcountsi2.o
static/libgcc.a: libgcc/static/_popcountsi2.o
static/libgcc_s.dylib: libgcc/static/_popcountsi2_s.o
libgcc/static/libgcc.map: libgcc/static/_popcountsi2_s.o
libgcc/static/_popcountdi2_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -static -fno-pic -DL_popcountdi2 -c $(srcdir)/libgcc2.c -o libgcc/static/_popcountdi2_s.o
libgcc/static/_popcountdi2.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -static -fno-pic -DL_popcountdi2 $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/static/_popcountdi2.o
static/libgcc.a: libgcc/static/_popcountdi2.o
static/libgcc_s.dylib: libgcc/static/_popcountdi2_s.o
libgcc/static/libgcc.map: libgcc/static/_popcountdi2_s.o
libgcc/static/_paritysi2_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -static -fno-pic -DL_paritysi2 -c $(srcdir)/libgcc2.c -o libgcc/static/_paritysi2_s.o
libgcc/static/_paritysi2.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -static -fno-pic -DL_paritysi2 $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/static/_paritysi2.o
static/libgcc.a: libgcc/static/_paritysi2.o
static/libgcc_s.dylib: libgcc/static/_paritysi2_s.o
libgcc/static/libgcc.map: libgcc/static/_paritysi2_s.o
libgcc/static/_paritydi2_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -static -fno-pic -DL_paritydi2 -c $(srcdir)/libgcc2.c -o libgcc/static/_paritydi2_s.o
libgcc/static/_paritydi2.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -static -fno-pic -DL_paritydi2 $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/static/_paritydi2.o
static/libgcc.a: libgcc/static/_paritydi2.o
static/libgcc_s.dylib: libgcc/static/_paritydi2_s.o
libgcc/static/libgcc.map: libgcc/static/_paritydi2_s.o
libgcc/static/_powisf2_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -static -fno-pic -DL_powisf2 -c $(srcdir)/libgcc2.c -o libgcc/static/_powisf2_s.o
libgcc/static/_powisf2.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -static -fno-pic -DL_powisf2 $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/static/_powisf2.o
static/libgcc.a: libgcc/static/_powisf2.o
static/libgcc_s.dylib: libgcc/static/_powisf2_s.o
libgcc/static/libgcc.map: libgcc/static/_powisf2_s.o
libgcc/static/_powidf2_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -static -fno-pic -DL_powidf2 -c $(srcdir)/libgcc2.c -o libgcc/static/_powidf2_s.o
libgcc/static/_powidf2.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -static -fno-pic -DL_powidf2 $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/static/_powidf2.o
static/libgcc.a: libgcc/static/_powidf2.o
static/libgcc_s.dylib: libgcc/static/_powidf2_s.o
libgcc/static/libgcc.map: libgcc/static/_powidf2_s.o
libgcc/static/_powixf2_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -static -fno-pic -DL_powixf2 -c $(srcdir)/libgcc2.c -o libgcc/static/_powixf2_s.o
libgcc/static/_powixf2.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -static -fno-pic -DL_powixf2 $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/static/_powixf2.o
static/libgcc.a: libgcc/static/_powixf2.o
static/libgcc_s.dylib: libgcc/static/_powixf2_s.o
libgcc/static/libgcc.map: libgcc/static/_powixf2_s.o
libgcc/static/_powitf2_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -static -fno-pic -DL_powitf2 -c $(srcdir)/libgcc2.c -o libgcc/static/_powitf2_s.o
libgcc/static/_powitf2.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -static -fno-pic -DL_powitf2 $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/static/_powitf2.o
static/libgcc.a: libgcc/static/_powitf2.o
static/libgcc_s.dylib: libgcc/static/_powitf2_s.o
libgcc/static/libgcc.map: libgcc/static/_powitf2_s.o
libgcc/static/_mulsc3_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -static -fno-pic -DL_mulsc3 -c $(srcdir)/libgcc2.c -o libgcc/static/_mulsc3_s.o
libgcc/static/_mulsc3.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -static -fno-pic -DL_mulsc3 $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/static/_mulsc3.o
static/libgcc.a: libgcc/static/_mulsc3.o
static/libgcc_s.dylib: libgcc/static/_mulsc3_s.o
libgcc/static/libgcc.map: libgcc/static/_mulsc3_s.o
libgcc/static/_muldc3_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -static -fno-pic -DL_muldc3 -c $(srcdir)/libgcc2.c -o libgcc/static/_muldc3_s.o
libgcc/static/_muldc3.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -static -fno-pic -DL_muldc3 $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/static/_muldc3.o
static/libgcc.a: libgcc/static/_muldc3.o
static/libgcc_s.dylib: libgcc/static/_muldc3_s.o
libgcc/static/libgcc.map: libgcc/static/_muldc3_s.o
libgcc/static/_mulxc3_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -static -fno-pic -DL_mulxc3 -c $(srcdir)/libgcc2.c -o libgcc/static/_mulxc3_s.o
libgcc/static/_mulxc3.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -static -fno-pic -DL_mulxc3 $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/static/_mulxc3.o
static/libgcc.a: libgcc/static/_mulxc3.o
static/libgcc_s.dylib: libgcc/static/_mulxc3_s.o
libgcc/static/libgcc.map: libgcc/static/_mulxc3_s.o
libgcc/static/_multc3_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -static -fno-pic -DL_multc3 -c $(srcdir)/libgcc2.c -o libgcc/static/_multc3_s.o
libgcc/static/_multc3.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -static -fno-pic -DL_multc3 $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/static/_multc3.o
static/libgcc.a: libgcc/static/_multc3.o
static/libgcc_s.dylib: libgcc/static/_multc3_s.o
libgcc/static/libgcc.map: libgcc/static/_multc3_s.o
libgcc/static/_divsc3_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -static -fno-pic -DL_divsc3 -c $(srcdir)/libgcc2.c -o libgcc/static/_divsc3_s.o
libgcc/static/_divsc3.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -static -fno-pic -DL_divsc3 $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/static/_divsc3.o
static/libgcc.a: libgcc/static/_divsc3.o
static/libgcc_s.dylib: libgcc/static/_divsc3_s.o
libgcc/static/libgcc.map: libgcc/static/_divsc3_s.o
libgcc/static/_divdc3_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -static -fno-pic -DL_divdc3 -c $(srcdir)/libgcc2.c -o libgcc/static/_divdc3_s.o
libgcc/static/_divdc3.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -static -fno-pic -DL_divdc3 $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/static/_divdc3.o
static/libgcc.a: libgcc/static/_divdc3.o
static/libgcc_s.dylib: libgcc/static/_divdc3_s.o
libgcc/static/libgcc.map: libgcc/static/_divdc3_s.o
libgcc/static/_divxc3_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -static -fno-pic -DL_divxc3 -c $(srcdir)/libgcc2.c -o libgcc/static/_divxc3_s.o
libgcc/static/_divxc3.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -static -fno-pic -DL_divxc3 $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/static/_divxc3.o
static/libgcc.a: libgcc/static/_divxc3.o
static/libgcc_s.dylib: libgcc/static/_divxc3_s.o
libgcc/static/libgcc.map: libgcc/static/_divxc3_s.o
libgcc/static/_divtc3_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -static -fno-pic -DL_divtc3 -c $(srcdir)/libgcc2.c -o libgcc/static/_divtc3_s.o
libgcc/static/_divtc3.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -static -fno-pic -DL_divtc3 $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/static/_divtc3.o
static/libgcc.a: libgcc/static/_divtc3.o
static/libgcc_s.dylib: libgcc/static/_divtc3_s.o
libgcc/static/libgcc.map: libgcc/static/_divtc3_s.o
libgcc/static/_bswapsi2_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -static -fno-pic -DL_bswapsi2 -c $(srcdir)/libgcc2.c -o libgcc/static/_bswapsi2_s.o
libgcc/static/_bswapsi2.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -static -fno-pic -DL_bswapsi2 $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/static/_bswapsi2.o
static/libgcc.a: libgcc/static/_bswapsi2.o
static/libgcc_s.dylib: libgcc/static/_bswapsi2_s.o
libgcc/static/libgcc.map: libgcc/static/_bswapsi2_s.o
libgcc/static/_bswapdi2_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -static -fno-pic -DL_bswapdi2 -c $(srcdir)/libgcc2.c -o libgcc/static/_bswapdi2_s.o
libgcc/static/_bswapdi2.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -static -fno-pic -DL_bswapdi2 $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/static/_bswapdi2.o
static/libgcc.a: libgcc/static/_bswapdi2.o
static/libgcc_s.dylib: libgcc/static/_bswapdi2_s.o
libgcc/static/libgcc.map: libgcc/static/_bswapdi2_s.o
libgcc/static/_fixunssfsi_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -static -fno-pic -DL_fixunssfsi -DLIBGCC2_UNITS_PER_WORD=4 -c $(srcdir)/libgcc2.c -o libgcc/static/_fixunssfsi_s.o
libgcc/static/_fixunssfsi.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -static -fno-pic -DL_fixunssfsi -DLIBGCC2_UNITS_PER_WORD=4 $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/static/_fixunssfsi.o
static/libgcc.a: libgcc/static/_fixunssfsi.o
static/libgcc_s.dylib: libgcc/static/_fixunssfsi_s.o
libgcc/static/libgcc.map: libgcc/static/_fixunssfsi_s.o
libgcc/static/_fixunsdfsi_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -static -fno-pic -DL_fixunsdfsi -DLIBGCC2_UNITS_PER_WORD=4 -c $(srcdir)/libgcc2.c -o libgcc/static/_fixunsdfsi_s.o
libgcc/static/_fixunsdfsi.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -static -fno-pic -DL_fixunsdfsi -DLIBGCC2_UNITS_PER_WORD=4 $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/static/_fixunsdfsi.o
static/libgcc.a: libgcc/static/_fixunsdfsi.o
static/libgcc_s.dylib: libgcc/static/_fixunsdfsi_s.o
libgcc/static/libgcc.map: libgcc/static/_fixunsdfsi_s.o
libgcc/static/_fixunsxfsi_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -static -fno-pic -DL_fixunsxfsi -DLIBGCC2_UNITS_PER_WORD=4 -c $(srcdir)/libgcc2.c -o libgcc/static/_fixunsxfsi_s.o
libgcc/static/_fixunsxfsi.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -static -fno-pic -DL_fixunsxfsi -DLIBGCC2_UNITS_PER_WORD=4 $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/static/_fixunsxfsi.o
static/libgcc.a: libgcc/static/_fixunsxfsi.o
static/libgcc_s.dylib: libgcc/static/_fixunsxfsi_s.o
libgcc/static/libgcc.map: libgcc/static/_fixunsxfsi_s.o
libgcc/static/_fixsfdi_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -static -fno-pic -DL_fixsfdi -DLIBGCC2_UNITS_PER_WORD=4 -c $(srcdir)/libgcc2.c -o libgcc/static/_fixsfdi_s.o
libgcc/static/_fixsfdi.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -static -fno-pic -DL_fixsfdi -DLIBGCC2_UNITS_PER_WORD=4 $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/static/_fixsfdi.o
static/libgcc.a: libgcc/static/_fixsfdi.o
static/libgcc_s.dylib: libgcc/static/_fixsfdi_s.o
libgcc/static/libgcc.map: libgcc/static/_fixsfdi_s.o
libgcc/static/_fixsfti_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -static -fno-pic -DL_fixsfdi -DLIBGCC2_UNITS_PER_WORD=8 -c $(srcdir)/libgcc2.c -o libgcc/static/_fixsfti_s.o
libgcc/static/_fixsfti.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -static -fno-pic -DL_fixsfdi -DLIBGCC2_UNITS_PER_WORD=8 $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/static/_fixsfti.o
static/libgcc.a: libgcc/static/_fixsfti.o
static/libgcc_s.dylib: libgcc/static/_fixsfti_s.o
libgcc/static/libgcc.map: libgcc/static/_fixsfti_s.o
libgcc/static/_fixunssfdi_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -static -fno-pic -DL_fixunssfdi -DLIBGCC2_UNITS_PER_WORD=4 -c $(srcdir)/libgcc2.c -o libgcc/static/_fixunssfdi_s.o
libgcc/static/_fixunssfdi.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -static -fno-pic -DL_fixunssfdi -DLIBGCC2_UNITS_PER_WORD=4 $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/static/_fixunssfdi.o
static/libgcc.a: libgcc/static/_fixunssfdi.o
static/libgcc_s.dylib: libgcc/static/_fixunssfdi_s.o
libgcc/static/libgcc.map: libgcc/static/_fixunssfdi_s.o
libgcc/static/_fixunssfti_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -static -fno-pic -DL_fixunssfdi -DLIBGCC2_UNITS_PER_WORD=8 -c $(srcdir)/libgcc2.c -o libgcc/static/_fixunssfti_s.o
libgcc/static/_fixunssfti.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -static -fno-pic -DL_fixunssfdi -DLIBGCC2_UNITS_PER_WORD=8 $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/static/_fixunssfti.o
static/libgcc.a: libgcc/static/_fixunssfti.o
static/libgcc_s.dylib: libgcc/static/_fixunssfti_s.o
libgcc/static/libgcc.map: libgcc/static/_fixunssfti_s.o
libgcc/static/_floatdisf_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -static -fno-pic -DL_floatdisf -DLIBGCC2_UNITS_PER_WORD=4 -c $(srcdir)/libgcc2.c -o libgcc/static/_floatdisf_s.o
libgcc/static/_floatdisf.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -static -fno-pic -DL_floatdisf -DLIBGCC2_UNITS_PER_WORD=4 $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/static/_floatdisf.o
static/libgcc.a: libgcc/static/_floatdisf.o
static/libgcc_s.dylib: libgcc/static/_floatdisf_s.o
libgcc/static/libgcc.map: libgcc/static/_floatdisf_s.o
libgcc/static/_floattisf_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -static -fno-pic -DL_floatdisf -DLIBGCC2_UNITS_PER_WORD=8 -c $(srcdir)/libgcc2.c -o libgcc/static/_floattisf_s.o
libgcc/static/_floattisf.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -static -fno-pic -DL_floatdisf -DLIBGCC2_UNITS_PER_WORD=8 $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/static/_floattisf.o
static/libgcc.a: libgcc/static/_floattisf.o
static/libgcc_s.dylib: libgcc/static/_floattisf_s.o
libgcc/static/libgcc.map: libgcc/static/_floattisf_s.o
libgcc/static/_floatundisf_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -static -fno-pic -DL_floatundisf -DLIBGCC2_UNITS_PER_WORD=4 -c $(srcdir)/libgcc2.c -o libgcc/static/_floatundisf_s.o
libgcc/static/_floatundisf.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -static -fno-pic -DL_floatundisf -DLIBGCC2_UNITS_PER_WORD=4 $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/static/_floatundisf.o
static/libgcc.a: libgcc/static/_floatundisf.o
static/libgcc_s.dylib: libgcc/static/_floatundisf_s.o
libgcc/static/libgcc.map: libgcc/static/_floatundisf_s.o
libgcc/static/_floatuntisf_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -static -fno-pic -DL_floatundisf -DLIBGCC2_UNITS_PER_WORD=8 -c $(srcdir)/libgcc2.c -o libgcc/static/_floatuntisf_s.o
libgcc/static/_floatuntisf.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -static -fno-pic -DL_floatundisf -DLIBGCC2_UNITS_PER_WORD=8 $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/static/_floatuntisf.o
static/libgcc.a: libgcc/static/_floatuntisf.o
static/libgcc_s.dylib: libgcc/static/_floatuntisf_s.o
libgcc/static/libgcc.map: libgcc/static/_floatuntisf_s.o
libgcc/static/_fixdfdi_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -static -fno-pic -DL_fixdfdi -DLIBGCC2_UNITS_PER_WORD=4 -c $(srcdir)/libgcc2.c -o libgcc/static/_fixdfdi_s.o
libgcc/static/_fixdfdi.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -static -fno-pic -DL_fixdfdi -DLIBGCC2_UNITS_PER_WORD=4 $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/static/_fixdfdi.o
static/libgcc.a: libgcc/static/_fixdfdi.o
static/libgcc_s.dylib: libgcc/static/_fixdfdi_s.o
libgcc/static/libgcc.map: libgcc/static/_fixdfdi_s.o
libgcc/static/_fixdfti_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -static -fno-pic -DL_fixdfdi -DLIBGCC2_UNITS_PER_WORD=8 -c $(srcdir)/libgcc2.c -o libgcc/static/_fixdfti_s.o
libgcc/static/_fixdfti.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -static -fno-pic -DL_fixdfdi -DLIBGCC2_UNITS_PER_WORD=8 $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/static/_fixdfti.o
static/libgcc.a: libgcc/static/_fixdfti.o
static/libgcc_s.dylib: libgcc/static/_fixdfti_s.o
libgcc/static/libgcc.map: libgcc/static/_fixdfti_s.o
libgcc/static/_fixunsdfdi_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -static -fno-pic -DL_fixunsdfdi -DLIBGCC2_UNITS_PER_WORD=4 -c $(srcdir)/libgcc2.c -o libgcc/static/_fixunsdfdi_s.o
libgcc/static/_fixunsdfdi.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -static -fno-pic -DL_fixunsdfdi -DLIBGCC2_UNITS_PER_WORD=4 $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/static/_fixunsdfdi.o
static/libgcc.a: libgcc/static/_fixunsdfdi.o
static/libgcc_s.dylib: libgcc/static/_fixunsdfdi_s.o
libgcc/static/libgcc.map: libgcc/static/_fixunsdfdi_s.o
libgcc/static/_fixunsdfti_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -static -fno-pic -DL_fixunsdfdi -DLIBGCC2_UNITS_PER_WORD=8 -c $(srcdir)/libgcc2.c -o libgcc/static/_fixunsdfti_s.o
libgcc/static/_fixunsdfti.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -static -fno-pic -DL_fixunsdfdi -DLIBGCC2_UNITS_PER_WORD=8 $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/static/_fixunsdfti.o
static/libgcc.a: libgcc/static/_fixunsdfti.o
static/libgcc_s.dylib: libgcc/static/_fixunsdfti_s.o
libgcc/static/libgcc.map: libgcc/static/_fixunsdfti_s.o
libgcc/static/_floatdidf_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -static -fno-pic -DL_floatdidf -DLIBGCC2_UNITS_PER_WORD=4 -c $(srcdir)/libgcc2.c -o libgcc/static/_floatdidf_s.o
libgcc/static/_floatdidf.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -static -fno-pic -DL_floatdidf -DLIBGCC2_UNITS_PER_WORD=4 $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/static/_floatdidf.o
static/libgcc.a: libgcc/static/_floatdidf.o
static/libgcc_s.dylib: libgcc/static/_floatdidf_s.o
libgcc/static/libgcc.map: libgcc/static/_floatdidf_s.o
libgcc/static/_floattidf_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -static -fno-pic -DL_floatdidf -DLIBGCC2_UNITS_PER_WORD=8 -c $(srcdir)/libgcc2.c -o libgcc/static/_floattidf_s.o
libgcc/static/_floattidf.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -static -fno-pic -DL_floatdidf -DLIBGCC2_UNITS_PER_WORD=8 $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/static/_floattidf.o
static/libgcc.a: libgcc/static/_floattidf.o
static/libgcc_s.dylib: libgcc/static/_floattidf_s.o
libgcc/static/libgcc.map: libgcc/static/_floattidf_s.o
libgcc/static/_floatundidf_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -static -fno-pic -DL_floatundidf -DLIBGCC2_UNITS_PER_WORD=4 -c $(srcdir)/libgcc2.c -o libgcc/static/_floatundidf_s.o
libgcc/static/_floatundidf.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -static -fno-pic -DL_floatundidf -DLIBGCC2_UNITS_PER_WORD=4 $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/static/_floatundidf.o
static/libgcc.a: libgcc/static/_floatundidf.o
static/libgcc_s.dylib: libgcc/static/_floatundidf_s.o
libgcc/static/libgcc.map: libgcc/static/_floatundidf_s.o
libgcc/static/_floatuntidf_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -static -fno-pic -DL_floatundidf -DLIBGCC2_UNITS_PER_WORD=8 -c $(srcdir)/libgcc2.c -o libgcc/static/_floatuntidf_s.o
libgcc/static/_floatuntidf.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -static -fno-pic -DL_floatundidf -DLIBGCC2_UNITS_PER_WORD=8 $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/static/_floatuntidf.o
static/libgcc.a: libgcc/static/_floatuntidf.o
static/libgcc_s.dylib: libgcc/static/_floatuntidf_s.o
libgcc/static/libgcc.map: libgcc/static/_floatuntidf_s.o
libgcc/static/_fixxfdi_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -static -fno-pic -DL_fixxfdi -DLIBGCC2_UNITS_PER_WORD=4 -c $(srcdir)/libgcc2.c -o libgcc/static/_fixxfdi_s.o
libgcc/static/_fixxfdi.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -static -fno-pic -DL_fixxfdi -DLIBGCC2_UNITS_PER_WORD=4 $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/static/_fixxfdi.o
static/libgcc.a: libgcc/static/_fixxfdi.o
static/libgcc_s.dylib: libgcc/static/_fixxfdi_s.o
libgcc/static/libgcc.map: libgcc/static/_fixxfdi_s.o
libgcc/static/_fixxfti_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -static -fno-pic -DL_fixxfdi -DLIBGCC2_UNITS_PER_WORD=8 -c $(srcdir)/libgcc2.c -o libgcc/static/_fixxfti_s.o
libgcc/static/_fixxfti.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -static -fno-pic -DL_fixxfdi -DLIBGCC2_UNITS_PER_WORD=8 $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/static/_fixxfti.o
static/libgcc.a: libgcc/static/_fixxfti.o
static/libgcc_s.dylib: libgcc/static/_fixxfti_s.o
libgcc/static/libgcc.map: libgcc/static/_fixxfti_s.o
libgcc/static/_fixunsxfdi_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -static -fno-pic -DL_fixunsxfdi -DLIBGCC2_UNITS_PER_WORD=4 -c $(srcdir)/libgcc2.c -o libgcc/static/_fixunsxfdi_s.o
libgcc/static/_fixunsxfdi.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -static -fno-pic -DL_fixunsxfdi -DLIBGCC2_UNITS_PER_WORD=4 $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/static/_fixunsxfdi.o
static/libgcc.a: libgcc/static/_fixunsxfdi.o
static/libgcc_s.dylib: libgcc/static/_fixunsxfdi_s.o
libgcc/static/libgcc.map: libgcc/static/_fixunsxfdi_s.o
libgcc/static/_fixunsxfti_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -static -fno-pic -DL_fixunsxfdi -DLIBGCC2_UNITS_PER_WORD=8 -c $(srcdir)/libgcc2.c -o libgcc/static/_fixunsxfti_s.o
libgcc/static/_fixunsxfti.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -static -fno-pic -DL_fixunsxfdi -DLIBGCC2_UNITS_PER_WORD=8 $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/static/_fixunsxfti.o
static/libgcc.a: libgcc/static/_fixunsxfti.o
static/libgcc_s.dylib: libgcc/static/_fixunsxfti_s.o
libgcc/static/libgcc.map: libgcc/static/_fixunsxfti_s.o
libgcc/static/_floatdixf_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -static -fno-pic -DL_floatdixf -DLIBGCC2_UNITS_PER_WORD=4 -c $(srcdir)/libgcc2.c -o libgcc/static/_floatdixf_s.o
libgcc/static/_floatdixf.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -static -fno-pic -DL_floatdixf -DLIBGCC2_UNITS_PER_WORD=4 $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/static/_floatdixf.o
static/libgcc.a: libgcc/static/_floatdixf.o
static/libgcc_s.dylib: libgcc/static/_floatdixf_s.o
libgcc/static/libgcc.map: libgcc/static/_floatdixf_s.o
libgcc/static/_floattixf_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -static -fno-pic -DL_floatdixf -DLIBGCC2_UNITS_PER_WORD=8 -c $(srcdir)/libgcc2.c -o libgcc/static/_floattixf_s.o
libgcc/static/_floattixf.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -static -fno-pic -DL_floatdixf -DLIBGCC2_UNITS_PER_WORD=8 $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/static/_floattixf.o
static/libgcc.a: libgcc/static/_floattixf.o
static/libgcc_s.dylib: libgcc/static/_floattixf_s.o
libgcc/static/libgcc.map: libgcc/static/_floattixf_s.o
libgcc/static/_floatundixf_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -static -fno-pic -DL_floatundixf -DLIBGCC2_UNITS_PER_WORD=4 -c $(srcdir)/libgcc2.c -o libgcc/static/_floatundixf_s.o
libgcc/static/_floatundixf.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -static -fno-pic -DL_floatundixf -DLIBGCC2_UNITS_PER_WORD=4 $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/static/_floatundixf.o
static/libgcc.a: libgcc/static/_floatundixf.o
static/libgcc_s.dylib: libgcc/static/_floatundixf_s.o
libgcc/static/libgcc.map: libgcc/static/_floatundixf_s.o
libgcc/static/_floatuntixf_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -static -fno-pic -DL_floatundixf -DLIBGCC2_UNITS_PER_WORD=8 -c $(srcdir)/libgcc2.c -o libgcc/static/_floatuntixf_s.o
libgcc/static/_floatuntixf.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -static -fno-pic -DL_floatundixf -DLIBGCC2_UNITS_PER_WORD=8 $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/static/_floatuntixf.o
static/libgcc.a: libgcc/static/_floatuntixf.o
static/libgcc_s.dylib: libgcc/static/_floatuntixf_s.o
libgcc/static/libgcc.map: libgcc/static/_floatuntixf_s.o
libgcc/static/_fixtfdi_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -static -fno-pic -DL_fixtfdi -DLIBGCC2_UNITS_PER_WORD=4 -c $(srcdir)/libgcc2.c -o libgcc/static/_fixtfdi_s.o
libgcc/static/_fixtfdi.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -static -fno-pic -DL_fixtfdi -DLIBGCC2_UNITS_PER_WORD=4 $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/static/_fixtfdi.o
static/libgcc.a: libgcc/static/_fixtfdi.o
static/libgcc_s.dylib: libgcc/static/_fixtfdi_s.o
libgcc/static/libgcc.map: libgcc/static/_fixtfdi_s.o
libgcc/static/_fixtfti_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -static -fno-pic -DL_fixtfdi -DLIBGCC2_UNITS_PER_WORD=8 -c $(srcdir)/libgcc2.c -o libgcc/static/_fixtfti_s.o
libgcc/static/_fixtfti.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -static -fno-pic -DL_fixtfdi -DLIBGCC2_UNITS_PER_WORD=8 $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/static/_fixtfti.o
static/libgcc.a: libgcc/static/_fixtfti.o
static/libgcc_s.dylib: libgcc/static/_fixtfti_s.o
libgcc/static/libgcc.map: libgcc/static/_fixtfti_s.o
libgcc/static/_fixunstfdi_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -static -fno-pic -DL_fixunstfdi -DLIBGCC2_UNITS_PER_WORD=4 -c $(srcdir)/libgcc2.c -o libgcc/static/_fixunstfdi_s.o
libgcc/static/_fixunstfdi.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -static -fno-pic -DL_fixunstfdi -DLIBGCC2_UNITS_PER_WORD=4 $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/static/_fixunstfdi.o
static/libgcc.a: libgcc/static/_fixunstfdi.o
static/libgcc_s.dylib: libgcc/static/_fixunstfdi_s.o
libgcc/static/libgcc.map: libgcc/static/_fixunstfdi_s.o
libgcc/static/_fixunstfti_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -static -fno-pic -DL_fixunstfdi -DLIBGCC2_UNITS_PER_WORD=8 -c $(srcdir)/libgcc2.c -o libgcc/static/_fixunstfti_s.o
libgcc/static/_fixunstfti.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -static -fno-pic -DL_fixunstfdi -DLIBGCC2_UNITS_PER_WORD=8 $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/static/_fixunstfti.o
static/libgcc.a: libgcc/static/_fixunstfti.o
static/libgcc_s.dylib: libgcc/static/_fixunstfti_s.o
libgcc/static/libgcc.map: libgcc/static/_fixunstfti_s.o
libgcc/static/_floatditf_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -static -fno-pic -DL_floatditf -DLIBGCC2_UNITS_PER_WORD=4 -c $(srcdir)/libgcc2.c -o libgcc/static/_floatditf_s.o
libgcc/static/_floatditf.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -static -fno-pic -DL_floatditf -DLIBGCC2_UNITS_PER_WORD=4 $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/static/_floatditf.o
static/libgcc.a: libgcc/static/_floatditf.o
static/libgcc_s.dylib: libgcc/static/_floatditf_s.o
libgcc/static/libgcc.map: libgcc/static/_floatditf_s.o
libgcc/static/_floattitf_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -static -fno-pic -DL_floatditf -DLIBGCC2_UNITS_PER_WORD=8 -c $(srcdir)/libgcc2.c -o libgcc/static/_floattitf_s.o
libgcc/static/_floattitf.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -static -fno-pic -DL_floatditf -DLIBGCC2_UNITS_PER_WORD=8 $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/static/_floattitf.o
static/libgcc.a: libgcc/static/_floattitf.o
static/libgcc_s.dylib: libgcc/static/_floattitf_s.o
libgcc/static/libgcc.map: libgcc/static/_floattitf_s.o
libgcc/static/_floatunditf_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -static -fno-pic -DL_floatunditf -DLIBGCC2_UNITS_PER_WORD=4 -c $(srcdir)/libgcc2.c -o libgcc/static/_floatunditf_s.o
libgcc/static/_floatunditf.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -static -fno-pic -DL_floatunditf -DLIBGCC2_UNITS_PER_WORD=4 $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/static/_floatunditf.o
static/libgcc.a: libgcc/static/_floatunditf.o
static/libgcc_s.dylib: libgcc/static/_floatunditf_s.o
libgcc/static/libgcc.map: libgcc/static/_floatunditf_s.o
libgcc/static/_floatuntitf_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -static -fno-pic -DL_floatunditf -DLIBGCC2_UNITS_PER_WORD=8 -c $(srcdir)/libgcc2.c -o libgcc/static/_floatuntitf_s.o
libgcc/static/_floatuntitf.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -static -fno-pic -DL_floatunditf -DLIBGCC2_UNITS_PER_WORD=8 $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/static/_floatuntitf.o
static/libgcc.a: libgcc/static/_floatuntitf.o
static/libgcc_s.dylib: libgcc/static/_floatuntitf_s.o
libgcc/static/libgcc.map: libgcc/static/_floatuntitf_s.o
libgcc/static/_eprintf.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -static -fno-pic -DL_eprintf $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/static/_eprintf.o
static/libgcc.a: libgcc/static/_eprintf.o
libgcc/static/__gcc_bcmp.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -static -fno-pic -DL__gcc_bcmp $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/static/__gcc_bcmp.o
static/libgcc.a: libgcc/static/__gcc_bcmp.o
libgcc/static/_divdi3_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -fexceptions -fnon-call-exceptions -static -fno-pic -DL_divdi3 -c $(srcdir)/libgcc2.c -o libgcc/static/_divdi3_s.o
libgcc/static/_divdi3.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -fexceptions -fnon-call-exceptions -static -fno-pic -DL_divdi3 $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/static/_divdi3.o
static/libgcc.a: libgcc/static/_divdi3.o
static/libgcc_s.dylib: libgcc/static/_divdi3_s.o
libgcc/static/libgcc.map: libgcc/static/_divdi3_s.o
libgcc/static/_moddi3_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -fexceptions -fnon-call-exceptions -static -fno-pic -DL_moddi3 -c $(srcdir)/libgcc2.c -o libgcc/static/_moddi3_s.o
libgcc/static/_moddi3.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -fexceptions -fnon-call-exceptions -static -fno-pic -DL_moddi3 $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/static/_moddi3.o
static/libgcc.a: libgcc/static/_moddi3.o
static/libgcc_s.dylib: libgcc/static/_moddi3_s.o
libgcc/static/libgcc.map: libgcc/static/_moddi3_s.o
libgcc/static/_udivdi3_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -fexceptions -fnon-call-exceptions -static -fno-pic -DL_udivdi3 -c $(srcdir)/libgcc2.c -o libgcc/static/_udivdi3_s.o
libgcc/static/_udivdi3.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -fexceptions -fnon-call-exceptions -static -fno-pic -DL_udivdi3 $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/static/_udivdi3.o
static/libgcc.a: libgcc/static/_udivdi3.o
static/libgcc_s.dylib: libgcc/static/_udivdi3_s.o
libgcc/static/libgcc.map: libgcc/static/_udivdi3_s.o
libgcc/static/_umoddi3_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -fexceptions -fnon-call-exceptions -static -fno-pic -DL_umoddi3 -c $(srcdir)/libgcc2.c -o libgcc/static/_umoddi3_s.o
libgcc/static/_umoddi3.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -fexceptions -fnon-call-exceptions -static -fno-pic -DL_umoddi3 $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/static/_umoddi3.o
static/libgcc.a: libgcc/static/_umoddi3.o
static/libgcc_s.dylib: libgcc/static/_umoddi3_s.o
libgcc/static/libgcc.map: libgcc/static/_umoddi3_s.o
libgcc/static/_udiv_w_sdiv_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -fexceptions -fnon-call-exceptions -static -fno-pic -DL_udiv_w_sdiv -c $(srcdir)/libgcc2.c -o libgcc/static/_udiv_w_sdiv_s.o
libgcc/static/_udiv_w_sdiv.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -fexceptions -fnon-call-exceptions -static -fno-pic -DL_udiv_w_sdiv $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/static/_udiv_w_sdiv.o
static/libgcc.a: libgcc/static/_udiv_w_sdiv.o
static/libgcc_s.dylib: libgcc/static/_udiv_w_sdiv_s.o
libgcc/static/libgcc.map: libgcc/static/_udiv_w_sdiv_s.o
libgcc/static/_udivmoddi4_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -fexceptions -fnon-call-exceptions -static -fno-pic -DL_udivmoddi4 -c $(srcdir)/libgcc2.c -o libgcc/static/_udivmoddi4_s.o
libgcc/static/_udivmoddi4.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -fexceptions -fnon-call-exceptions -static -fno-pic -DL_udivmoddi4 $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/static/_udivmoddi4.o
static/libgcc.a: libgcc/static/_udivmoddi4.o
static/libgcc_s.dylib: libgcc/static/_udivmoddi4_s.o
libgcc/static/libgcc.map: libgcc/static/_udivmoddi4_s.o
libgcc/static/darwin-64_s.o: stmp-dirs /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/darwin-64.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -static -fno-pic -c /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/darwin-64.c -o libgcc/static/darwin-64_s.o
libgcc/static/darwin-64.o: stmp-dirs /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/darwin-64.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -static -fno-pic $(vis_hide) -c /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/darwin-64.c -o libgcc/static/darwin-64.o
static/libgcc.a: libgcc/static/darwin-64.o
static/libgcc_s.dylib: libgcc/static/darwin-64_s.o
libgcc/static/libgcc.map: libgcc/static/darwin-64_s.o
libgcc/static/unwind-dw2.o: stmp-dirs /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/unwind-dw2.c unwind.inc unwind-dw2-fde.h unwind-dw2-fde.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -static -fno-pic -fexceptions $(vis_hide) -c /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/unwind-dw2.c -o libgcc/static/unwind-dw2.o
static/libgcc_eh.a: libgcc/static/unwind-dw2.o
libgcc/static/unwind-dw2-fde-darwin.o: stmp-dirs /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/unwind-dw2-fde-darwin.c unwind.inc unwind-dw2-fde.h unwind-dw2-fde.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -static -fno-pic -fexceptions $(vis_hide) -c /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/unwind-dw2-fde-darwin.c -o libgcc/static/unwind-dw2-fde-darwin.o
static/libgcc_eh.a: libgcc/static/unwind-dw2-fde-darwin.o
libgcc/static/unwind-sjlj.o: stmp-dirs /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/unwind-sjlj.c unwind.inc unwind-dw2-fde.h unwind-dw2-fde.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -static -fno-pic -fexceptions $(vis_hide) -c /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/unwind-sjlj.c -o libgcc/static/unwind-sjlj.o
static/libgcc_eh.a: libgcc/static/unwind-sjlj.o
libgcc/static/unwind-c.o: stmp-dirs /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/unwind-c.c unwind.inc unwind-dw2-fde.h unwind-dw2-fde.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -static -fno-pic -fexceptions $(vis_hide) -c /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/unwind-c.c -o libgcc/static/unwind-c.o
static/libgcc_eh.a: libgcc/static/unwind-c.o
libgcc/static/unwind-dw2_s.o: stmp-dirs /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/unwind-dw2.c unwind.inc unwind-dw2-fde.h unwind-dw2-fde.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -static -fno-pic -fexceptions -c /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/unwind-dw2.c -o libgcc/static/unwind-dw2_s.o
static/libgcc_s.dylib: libgcc/static/unwind-dw2_s.o
libgcc/static/libgcc.map: libgcc/static/unwind-dw2_s.o
libgcc/static/unwind-dw2-fde-darwin_s.o: stmp-dirs /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/unwind-dw2-fde-darwin.c unwind.inc unwind-dw2-fde.h unwind-dw2-fde.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -static -fno-pic -fexceptions -c /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/unwind-dw2-fde-darwin.c -o libgcc/static/unwind-dw2-fde-darwin_s.o
static/libgcc_s.dylib: libgcc/static/unwind-dw2-fde-darwin_s.o
libgcc/static/libgcc.map: libgcc/static/unwind-dw2-fde-darwin_s.o
libgcc/static/unwind-sjlj_s.o: stmp-dirs /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/unwind-sjlj.c unwind.inc unwind-dw2-fde.h unwind-dw2-fde.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -static -fno-pic -fexceptions -c /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/unwind-sjlj.c -o libgcc/static/unwind-sjlj_s.o
static/libgcc_s.dylib: libgcc/static/unwind-sjlj_s.o
libgcc/static/libgcc.map: libgcc/static/unwind-sjlj_s.o
libgcc/static/unwind-c_s.o: stmp-dirs /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/unwind-c.c unwind.inc unwind-dw2-fde.h unwind-dw2-fde.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -static -fno-pic -fexceptions -c /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/unwind-c.c -o libgcc/static/unwind-c_s.o
static/libgcc_s.dylib: libgcc/static/unwind-c_s.o
libgcc/static/libgcc.map: libgcc/static/unwind-c_s.o
libgcc/static/_gcov.o: stmp-dirs $(srcdir)/libgcov.c $(srcdir)/gcov-io.h $(srcdir)/gcov-io.c gcov-iov.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES)  -static -fno-pic -DL_gcov -c $(srcdir)/libgcov.c -o libgcc/static/_gcov.o
static/libgcov.a: libgcc/static/_gcov.o
libgcc/static/_gcov_merge_add.o: stmp-dirs $(srcdir)/libgcov.c $(srcdir)/gcov-io.h $(srcdir)/gcov-io.c gcov-iov.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES)  -static -fno-pic -DL_gcov_merge_add -c $(srcdir)/libgcov.c -o libgcc/static/_gcov_merge_add.o
static/libgcov.a: libgcc/static/_gcov_merge_add.o
libgcc/static/_gcov_merge_single.o: stmp-dirs $(srcdir)/libgcov.c $(srcdir)/gcov-io.h $(srcdir)/gcov-io.c gcov-iov.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES)  -static -fno-pic -DL_gcov_merge_single -c $(srcdir)/libgcov.c -o libgcc/static/_gcov_merge_single.o
static/libgcov.a: libgcc/static/_gcov_merge_single.o
libgcc/static/_gcov_merge_delta.o: stmp-dirs $(srcdir)/libgcov.c $(srcdir)/gcov-io.h $(srcdir)/gcov-io.c gcov-iov.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES)  -static -fno-pic -DL_gcov_merge_delta -c $(srcdir)/libgcov.c -o libgcc/static/_gcov_merge_delta.o
static/libgcov.a: libgcc/static/_gcov_merge_delta.o
libgcc/static/_gcov_fork.o: stmp-dirs $(srcdir)/libgcov.c $(srcdir)/gcov-io.h $(srcdir)/gcov-io.c gcov-iov.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES)  -static -fno-pic -DL_gcov_fork -c $(srcdir)/libgcov.c -o libgcc/static/_gcov_fork.o
static/libgcov.a: libgcc/static/_gcov_fork.o
libgcc/static/_gcov_execl.o: stmp-dirs $(srcdir)/libgcov.c $(srcdir)/gcov-io.h $(srcdir)/gcov-io.c gcov-iov.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES)  -static -fno-pic -DL_gcov_execl -c $(srcdir)/libgcov.c -o libgcc/static/_gcov_execl.o
static/libgcov.a: libgcc/static/_gcov_execl.o
libgcc/static/_gcov_execlp.o: stmp-dirs $(srcdir)/libgcov.c $(srcdir)/gcov-io.h $(srcdir)/gcov-io.c gcov-iov.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES)  -static -fno-pic -DL_gcov_execlp -c $(srcdir)/libgcov.c -o libgcc/static/_gcov_execlp.o
static/libgcov.a: libgcc/static/_gcov_execlp.o
libgcc/static/_gcov_execle.o: stmp-dirs $(srcdir)/libgcov.c $(srcdir)/gcov-io.h $(srcdir)/gcov-io.c gcov-iov.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES)  -static -fno-pic -DL_gcov_execle -c $(srcdir)/libgcov.c -o libgcc/static/_gcov_execle.o
static/libgcov.a: libgcc/static/_gcov_execle.o
libgcc/static/_gcov_execv.o: stmp-dirs $(srcdir)/libgcov.c $(srcdir)/gcov-io.h $(srcdir)/gcov-io.c gcov-iov.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES)  -static -fno-pic -DL_gcov_execv -c $(srcdir)/libgcov.c -o libgcc/static/_gcov_execv.o
static/libgcov.a: libgcc/static/_gcov_execv.o
libgcc/static/_gcov_execvp.o: stmp-dirs $(srcdir)/libgcov.c $(srcdir)/gcov-io.h $(srcdir)/gcov-io.c gcov-iov.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES)  -static -fno-pic -DL_gcov_execvp -c $(srcdir)/libgcov.c -o libgcc/static/_gcov_execvp.o
static/libgcov.a: libgcc/static/_gcov_execvp.o
libgcc/static/_gcov_execve.o: stmp-dirs $(srcdir)/libgcov.c $(srcdir)/gcov-io.h $(srcdir)/gcov-io.c gcov-iov.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES)  -static -fno-pic -DL_gcov_execve -c $(srcdir)/libgcov.c -o libgcc/static/_gcov_execve.o
static/libgcov.a: libgcc/static/_gcov_execve.o
libgcc/static/_gcov_interval_profiler.o: stmp-dirs $(srcdir)/libgcov.c $(srcdir)/gcov-io.h $(srcdir)/gcov-io.c gcov-iov.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES)  -static -fno-pic -DL_gcov_interval_profiler -c $(srcdir)/libgcov.c -o libgcc/static/_gcov_interval_profiler.o
static/libgcov.a: libgcc/static/_gcov_interval_profiler.o
libgcc/static/_gcov_pow2_profiler.o: stmp-dirs $(srcdir)/libgcov.c $(srcdir)/gcov-io.h $(srcdir)/gcov-io.c gcov-iov.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES)  -static -fno-pic -DL_gcov_pow2_profiler -c $(srcdir)/libgcov.c -o libgcc/static/_gcov_pow2_profiler.o
static/libgcov.a: libgcc/static/_gcov_pow2_profiler.o
libgcc/static/_gcov_one_value_profiler.o: stmp-dirs $(srcdir)/libgcov.c $(srcdir)/gcov-io.h $(srcdir)/gcov-io.c gcov-iov.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES)  -static -fno-pic -DL_gcov_one_value_profiler -c $(srcdir)/libgcov.c -o libgcc/static/_gcov_one_value_profiler.o
static/libgcov.a: libgcc/static/_gcov_one_value_profiler.o

extrastatic: stmp-dirs
	$(MAKE) GCC_FOR_TARGET="$(GCC_FOR_TARGET)" \
	  AR_FOR_TARGET="$(AR_FOR_TARGET)" \
	  AR_CREATE_FOR_TARGET="$(AR_CREATE_FOR_TARGET)" \
	  AR_EXTRACT_FOR_TARGET="$(AR_EXTRACT_FOR_TARGET)" \
	  AR_FLAGS_FOR_TARGET="$(AR_FLAGS_FOR_TARGET)" \
	  CC="$(CC)" CFLAGS="$(CFLAGS)" \
	  BUILD_PREFIX="$(BUILD_PREFIX)" \
	  BUILD_PREFIX_1="$(BUILD_PREFIX_1)" \
	  LANGUAGES="$(LANGUAGES)" \
	  LIBGCC2_CFLAGS="$(LIBGCC2_CFLAGS) -static -fno-pic "  \
	  LIBGCC2_STATIC_CFLAGS="$(LIBGCC2_STATIC_CFLAGS)"  \
	  MULTILIB_CFLAGS=" -static -fno-pic" T=static/ static/crt3.o
all: extrastatic
static/libgcc_s.dylib: extrastatic

libgcc/static/libgcc.map: /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/mkmap-flat.awk /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/libgcc-std.ver
	{ $(NM_FOR_TARGET) -pg $(objects); echo %%; \
	  cat /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/libgcc-std.ver \
	    | sed -e '/^[   ]*#/d' \
	          -e 's/^%\(if\|else\|elif\|endif\|define\)/#\1/' \
	    | $(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES)  -static -fno-pic -E -xassembler-with-cpp -; \
	} | $(AWK) -f /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/mkmap-flat.awk -v leading_underscore=1 > libgcc/static/tmp-libgcc.map
	mv 'libgcc/static/tmp-libgcc.map' $@
static/libgcc_s.dylib: libgcc/static/libgcc.map

static/libgcc.a: stmp-dirs
	-rm -f static/libgcc.a
	$(AR_CREATE_FOR_TARGET) static/libgcc.a $(objects)
	$(RANLIB_FOR_TARGET) static/libgcc.a
all: static/libgcc.a

static/libgcov.a: stmp-dirs
	-rm -f static/libgcov.a
	$(AR_CREATE_FOR_TARGET) static/libgcov.a $(objects)
	$(RANLIB_FOR_TARGET) static/libgcov.a
all: static/libgcov.a

static/libgcc_eh.a: stmp-dirs
	-rm -f static/libgcc_eh.a
	$(AR_CREATE_FOR_TARGET) static/libgcc_eh.a $(objects)
	$(RANLIB_FOR_TARGET) static/libgcc_eh.a
all: static/libgcc_eh.a

#
# ml: kext;@Dmalloc=kern_os_malloc@Dfree=kern_os_free@DLIBCC_KEXT@static@fno-pic@fno-exceptions@fno-non-call-exceptions
# dir: kext
# flags: -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT -static -fno-pic -fno-exceptions -fno-non-call-exceptions
# libgcc_a: kext/libgcc.a
# libgcov_a: kext/libgcov.a
# libgcc_eh_a: kext/libgcc_eh.a
# libunwind_a:
#
# shlib_slibdir_qual:
# libgcc_s_so: kext/libgcc_s.dylib
# libunwind_so:
#

dirs += kext libgcc/kext

libgcc/kext/_get_pc_thunk_ax_s.o: stmp-dirs $(srcdir)/config/$(LIB1ASMSRC)
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT -static -fno-pic -fno-exceptions -fno-non-call-exceptions -DL_get_pc_thunk_ax -xassembler-with-cpp -c $(srcdir)/config/$(LIB1ASMSRC) -o libgcc/kext/_get_pc_thunk_ax_s.o
libgcc/kext/_get_pc_thunk_ax.o: stmp-dirs $(srcdir)/config/$(LIB1ASMSRC) libgcc/kext/_get_pc_thunk_ax.vis
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT -static -fno-pic -fno-exceptions -fno-non-call-exceptions -DL_get_pc_thunk_ax -xassembler-with-cpp -c $(srcdir)/config/$(LIB1ASMSRC) -include libgcc/kext/_get_pc_thunk_ax.vis -o libgcc/kext/_get_pc_thunk_ax.o
libgcc/kext/_get_pc_thunk_ax.vis: libgcc/kext/_get_pc_thunk_ax_s.o; $(gen-hide-list)
kext/libgcc.a: libgcc/kext/_get_pc_thunk_ax.o
kext/libgcc_s.dylib: libgcc/kext/_get_pc_thunk_ax_s.o
libgcc/kext/libgcc.map: libgcc/kext/_get_pc_thunk_ax_s.o
libgcc/kext/_get_pc_thunk_dx_s.o: stmp-dirs $(srcdir)/config/$(LIB1ASMSRC)
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT -static -fno-pic -fno-exceptions -fno-non-call-exceptions -DL_get_pc_thunk_dx -xassembler-with-cpp -c $(srcdir)/config/$(LIB1ASMSRC) -o libgcc/kext/_get_pc_thunk_dx_s.o
libgcc/kext/_get_pc_thunk_dx.o: stmp-dirs $(srcdir)/config/$(LIB1ASMSRC) libgcc/kext/_get_pc_thunk_dx.vis
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT -static -fno-pic -fno-exceptions -fno-non-call-exceptions -DL_get_pc_thunk_dx -xassembler-with-cpp -c $(srcdir)/config/$(LIB1ASMSRC) -include libgcc/kext/_get_pc_thunk_dx.vis -o libgcc/kext/_get_pc_thunk_dx.o
libgcc/kext/_get_pc_thunk_dx.vis: libgcc/kext/_get_pc_thunk_dx_s.o; $(gen-hide-list)
kext/libgcc.a: libgcc/kext/_get_pc_thunk_dx.o
kext/libgcc_s.dylib: libgcc/kext/_get_pc_thunk_dx_s.o
libgcc/kext/libgcc.map: libgcc/kext/_get_pc_thunk_dx_s.o
libgcc/kext/_get_pc_thunk_cx_s.o: stmp-dirs $(srcdir)/config/$(LIB1ASMSRC)
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT -static -fno-pic -fno-exceptions -fno-non-call-exceptions -DL_get_pc_thunk_cx -xassembler-with-cpp -c $(srcdir)/config/$(LIB1ASMSRC) -o libgcc/kext/_get_pc_thunk_cx_s.o
libgcc/kext/_get_pc_thunk_cx.o: stmp-dirs $(srcdir)/config/$(LIB1ASMSRC) libgcc/kext/_get_pc_thunk_cx.vis
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT -static -fno-pic -fno-exceptions -fno-non-call-exceptions -DL_get_pc_thunk_cx -xassembler-with-cpp -c $(srcdir)/config/$(LIB1ASMSRC) -include libgcc/kext/_get_pc_thunk_cx.vis -o libgcc/kext/_get_pc_thunk_cx.o
libgcc/kext/_get_pc_thunk_cx.vis: libgcc/kext/_get_pc_thunk_cx_s.o; $(gen-hide-list)
kext/libgcc.a: libgcc/kext/_get_pc_thunk_cx.o
kext/libgcc_s.dylib: libgcc/kext/_get_pc_thunk_cx_s.o
libgcc/kext/libgcc.map: libgcc/kext/_get_pc_thunk_cx_s.o
libgcc/kext/_get_pc_thunk_bx_s.o: stmp-dirs $(srcdir)/config/$(LIB1ASMSRC)
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT -static -fno-pic -fno-exceptions -fno-non-call-exceptions -DL_get_pc_thunk_bx -xassembler-with-cpp -c $(srcdir)/config/$(LIB1ASMSRC) -o libgcc/kext/_get_pc_thunk_bx_s.o
libgcc/kext/_get_pc_thunk_bx.o: stmp-dirs $(srcdir)/config/$(LIB1ASMSRC) libgcc/kext/_get_pc_thunk_bx.vis
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT -static -fno-pic -fno-exceptions -fno-non-call-exceptions -DL_get_pc_thunk_bx -xassembler-with-cpp -c $(srcdir)/config/$(LIB1ASMSRC) -include libgcc/kext/_get_pc_thunk_bx.vis -o libgcc/kext/_get_pc_thunk_bx.o
libgcc/kext/_get_pc_thunk_bx.vis: libgcc/kext/_get_pc_thunk_bx_s.o; $(gen-hide-list)
kext/libgcc.a: libgcc/kext/_get_pc_thunk_bx.o
kext/libgcc_s.dylib: libgcc/kext/_get_pc_thunk_bx_s.o
libgcc/kext/libgcc.map: libgcc/kext/_get_pc_thunk_bx_s.o
libgcc/kext/_get_pc_thunk_si_s.o: stmp-dirs $(srcdir)/config/$(LIB1ASMSRC)
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT -static -fno-pic -fno-exceptions -fno-non-call-exceptions -DL_get_pc_thunk_si -xassembler-with-cpp -c $(srcdir)/config/$(LIB1ASMSRC) -o libgcc/kext/_get_pc_thunk_si_s.o
libgcc/kext/_get_pc_thunk_si.o: stmp-dirs $(srcdir)/config/$(LIB1ASMSRC) libgcc/kext/_get_pc_thunk_si.vis
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT -static -fno-pic -fno-exceptions -fno-non-call-exceptions -DL_get_pc_thunk_si -xassembler-with-cpp -c $(srcdir)/config/$(LIB1ASMSRC) -include libgcc/kext/_get_pc_thunk_si.vis -o libgcc/kext/_get_pc_thunk_si.o
libgcc/kext/_get_pc_thunk_si.vis: libgcc/kext/_get_pc_thunk_si_s.o; $(gen-hide-list)
kext/libgcc.a: libgcc/kext/_get_pc_thunk_si.o
kext/libgcc_s.dylib: libgcc/kext/_get_pc_thunk_si_s.o
libgcc/kext/libgcc.map: libgcc/kext/_get_pc_thunk_si_s.o
libgcc/kext/_get_pc_thunk_di_s.o: stmp-dirs $(srcdir)/config/$(LIB1ASMSRC)
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT -static -fno-pic -fno-exceptions -fno-non-call-exceptions -DL_get_pc_thunk_di -xassembler-with-cpp -c $(srcdir)/config/$(LIB1ASMSRC) -o libgcc/kext/_get_pc_thunk_di_s.o
libgcc/kext/_get_pc_thunk_di.o: stmp-dirs $(srcdir)/config/$(LIB1ASMSRC) libgcc/kext/_get_pc_thunk_di.vis
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT -static -fno-pic -fno-exceptions -fno-non-call-exceptions -DL_get_pc_thunk_di -xassembler-with-cpp -c $(srcdir)/config/$(LIB1ASMSRC) -include libgcc/kext/_get_pc_thunk_di.vis -o libgcc/kext/_get_pc_thunk_di.o
libgcc/kext/_get_pc_thunk_di.vis: libgcc/kext/_get_pc_thunk_di_s.o; $(gen-hide-list)
kext/libgcc.a: libgcc/kext/_get_pc_thunk_di.o
kext/libgcc_s.dylib: libgcc/kext/_get_pc_thunk_di_s.o
libgcc/kext/libgcc.map: libgcc/kext/_get_pc_thunk_di_s.o
libgcc/kext/_get_pc_thunk_bp_s.o: stmp-dirs $(srcdir)/config/$(LIB1ASMSRC)
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT -static -fno-pic -fno-exceptions -fno-non-call-exceptions -DL_get_pc_thunk_bp -xassembler-with-cpp -c $(srcdir)/config/$(LIB1ASMSRC) -o libgcc/kext/_get_pc_thunk_bp_s.o
libgcc/kext/_get_pc_thunk_bp.o: stmp-dirs $(srcdir)/config/$(LIB1ASMSRC) libgcc/kext/_get_pc_thunk_bp.vis
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT -static -fno-pic -fno-exceptions -fno-non-call-exceptions -DL_get_pc_thunk_bp -xassembler-with-cpp -c $(srcdir)/config/$(LIB1ASMSRC) -include libgcc/kext/_get_pc_thunk_bp.vis -o libgcc/kext/_get_pc_thunk_bp.o
libgcc/kext/_get_pc_thunk_bp.vis: libgcc/kext/_get_pc_thunk_bp_s.o; $(gen-hide-list)
kext/libgcc.a: libgcc/kext/_get_pc_thunk_bp.o
kext/libgcc_s.dylib: libgcc/kext/_get_pc_thunk_bp_s.o
libgcc/kext/libgcc.map: libgcc/kext/_get_pc_thunk_bp_s.o
libgcc/kext/_muldi3_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT -static -fno-pic -fno-exceptions -fno-non-call-exceptions -DL_muldi3 -c $(srcdir)/libgcc2.c -o libgcc/kext/_muldi3_s.o
libgcc/kext/_muldi3.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT -static -fno-pic -fno-exceptions -fno-non-call-exceptions -DL_muldi3 $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/kext/_muldi3.o
kext/libgcc.a: libgcc/kext/_muldi3.o
kext/libgcc_s.dylib: libgcc/kext/_muldi3_s.o
libgcc/kext/libgcc.map: libgcc/kext/_muldi3_s.o
libgcc/kext/_negdi2_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT -static -fno-pic -fno-exceptions -fno-non-call-exceptions -DL_negdi2 -c $(srcdir)/libgcc2.c -o libgcc/kext/_negdi2_s.o
libgcc/kext/_negdi2.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT -static -fno-pic -fno-exceptions -fno-non-call-exceptions -DL_negdi2 $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/kext/_negdi2.o
kext/libgcc.a: libgcc/kext/_negdi2.o
kext/libgcc_s.dylib: libgcc/kext/_negdi2_s.o
libgcc/kext/libgcc.map: libgcc/kext/_negdi2_s.o
libgcc/kext/_lshrdi3_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT -static -fno-pic -fno-exceptions -fno-non-call-exceptions -DL_lshrdi3 -c $(srcdir)/libgcc2.c -o libgcc/kext/_lshrdi3_s.o
libgcc/kext/_lshrdi3.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT -static -fno-pic -fno-exceptions -fno-non-call-exceptions -DL_lshrdi3 $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/kext/_lshrdi3.o
kext/libgcc.a: libgcc/kext/_lshrdi3.o
kext/libgcc_s.dylib: libgcc/kext/_lshrdi3_s.o
libgcc/kext/libgcc.map: libgcc/kext/_lshrdi3_s.o
libgcc/kext/_ashldi3_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT -static -fno-pic -fno-exceptions -fno-non-call-exceptions -DL_ashldi3 -c $(srcdir)/libgcc2.c -o libgcc/kext/_ashldi3_s.o
libgcc/kext/_ashldi3.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT -static -fno-pic -fno-exceptions -fno-non-call-exceptions -DL_ashldi3 $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/kext/_ashldi3.o
kext/libgcc.a: libgcc/kext/_ashldi3.o
kext/libgcc_s.dylib: libgcc/kext/_ashldi3_s.o
libgcc/kext/libgcc.map: libgcc/kext/_ashldi3_s.o
libgcc/kext/_ashrdi3_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT -static -fno-pic -fno-exceptions -fno-non-call-exceptions -DL_ashrdi3 -c $(srcdir)/libgcc2.c -o libgcc/kext/_ashrdi3_s.o
libgcc/kext/_ashrdi3.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT -static -fno-pic -fno-exceptions -fno-non-call-exceptions -DL_ashrdi3 $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/kext/_ashrdi3.o
kext/libgcc.a: libgcc/kext/_ashrdi3.o
kext/libgcc_s.dylib: libgcc/kext/_ashrdi3_s.o
libgcc/kext/libgcc.map: libgcc/kext/_ashrdi3_s.o
libgcc/kext/_cmpdi2_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT -static -fno-pic -fno-exceptions -fno-non-call-exceptions -DL_cmpdi2 -c $(srcdir)/libgcc2.c -o libgcc/kext/_cmpdi2_s.o
libgcc/kext/_cmpdi2.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT -static -fno-pic -fno-exceptions -fno-non-call-exceptions -DL_cmpdi2 $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/kext/_cmpdi2.o
kext/libgcc.a: libgcc/kext/_cmpdi2.o
kext/libgcc_s.dylib: libgcc/kext/_cmpdi2_s.o
libgcc/kext/libgcc.map: libgcc/kext/_cmpdi2_s.o
libgcc/kext/_ucmpdi2_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT -static -fno-pic -fno-exceptions -fno-non-call-exceptions -DL_ucmpdi2 -c $(srcdir)/libgcc2.c -o libgcc/kext/_ucmpdi2_s.o
libgcc/kext/_ucmpdi2.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT -static -fno-pic -fno-exceptions -fno-non-call-exceptions -DL_ucmpdi2 $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/kext/_ucmpdi2.o
kext/libgcc.a: libgcc/kext/_ucmpdi2.o
kext/libgcc_s.dylib: libgcc/kext/_ucmpdi2_s.o
libgcc/kext/libgcc.map: libgcc/kext/_ucmpdi2_s.o
libgcc/kext/_clear_cache_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT -static -fno-pic -fno-exceptions -fno-non-call-exceptions -DL_clear_cache -c $(srcdir)/libgcc2.c -o libgcc/kext/_clear_cache_s.o
libgcc/kext/_clear_cache.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT -static -fno-pic -fno-exceptions -fno-non-call-exceptions -DL_clear_cache $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/kext/_clear_cache.o
kext/libgcc.a: libgcc/kext/_clear_cache.o
kext/libgcc_s.dylib: libgcc/kext/_clear_cache_s.o
libgcc/kext/libgcc.map: libgcc/kext/_clear_cache_s.o
libgcc/kext/_enable_execute_stack_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT -static -fno-pic -fno-exceptions -fno-non-call-exceptions -DL_enable_execute_stack -c $(srcdir)/libgcc2.c -o libgcc/kext/_enable_execute_stack_s.o
libgcc/kext/_enable_execute_stack.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT -static -fno-pic -fno-exceptions -fno-non-call-exceptions -DL_enable_execute_stack $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/kext/_enable_execute_stack.o
kext/libgcc.a: libgcc/kext/_enable_execute_stack.o
kext/libgcc_s.dylib: libgcc/kext/_enable_execute_stack_s.o
libgcc/kext/libgcc.map: libgcc/kext/_enable_execute_stack_s.o
libgcc/kext/_trampoline_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT -static -fno-pic -fno-exceptions -fno-non-call-exceptions -DL_trampoline -c $(srcdir)/libgcc2.c -o libgcc/kext/_trampoline_s.o
libgcc/kext/_trampoline.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT -static -fno-pic -fno-exceptions -fno-non-call-exceptions -DL_trampoline $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/kext/_trampoline.o
kext/libgcc.a: libgcc/kext/_trampoline.o
kext/libgcc_s.dylib: libgcc/kext/_trampoline_s.o
libgcc/kext/libgcc.map: libgcc/kext/_trampoline_s.o
libgcc/kext/__main_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT -static -fno-pic -fno-exceptions -fno-non-call-exceptions -DL__main -c $(srcdir)/libgcc2.c -o libgcc/kext/__main_s.o
libgcc/kext/__main.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT -static -fno-pic -fno-exceptions -fno-non-call-exceptions -DL__main $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/kext/__main.o
kext/libgcc.a: libgcc/kext/__main.o
kext/libgcc_s.dylib: libgcc/kext/__main_s.o
libgcc/kext/libgcc.map: libgcc/kext/__main_s.o
libgcc/kext/_absvsi2_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT -static -fno-pic -fno-exceptions -fno-non-call-exceptions -DL_absvsi2 -c $(srcdir)/libgcc2.c -o libgcc/kext/_absvsi2_s.o
libgcc/kext/_absvsi2.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT -static -fno-pic -fno-exceptions -fno-non-call-exceptions -DL_absvsi2 $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/kext/_absvsi2.o
kext/libgcc.a: libgcc/kext/_absvsi2.o
kext/libgcc_s.dylib: libgcc/kext/_absvsi2_s.o
libgcc/kext/libgcc.map: libgcc/kext/_absvsi2_s.o
libgcc/kext/_absvdi2_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT -static -fno-pic -fno-exceptions -fno-non-call-exceptions -DL_absvdi2 -c $(srcdir)/libgcc2.c -o libgcc/kext/_absvdi2_s.o
libgcc/kext/_absvdi2.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT -static -fno-pic -fno-exceptions -fno-non-call-exceptions -DL_absvdi2 $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/kext/_absvdi2.o
kext/libgcc.a: libgcc/kext/_absvdi2.o
kext/libgcc_s.dylib: libgcc/kext/_absvdi2_s.o
libgcc/kext/libgcc.map: libgcc/kext/_absvdi2_s.o
libgcc/kext/_addvsi3_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT -static -fno-pic -fno-exceptions -fno-non-call-exceptions -DL_addvsi3 -c $(srcdir)/libgcc2.c -o libgcc/kext/_addvsi3_s.o
libgcc/kext/_addvsi3.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT -static -fno-pic -fno-exceptions -fno-non-call-exceptions -DL_addvsi3 $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/kext/_addvsi3.o
kext/libgcc.a: libgcc/kext/_addvsi3.o
kext/libgcc_s.dylib: libgcc/kext/_addvsi3_s.o
libgcc/kext/libgcc.map: libgcc/kext/_addvsi3_s.o
libgcc/kext/_addvdi3_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT -static -fno-pic -fno-exceptions -fno-non-call-exceptions -DL_addvdi3 -c $(srcdir)/libgcc2.c -o libgcc/kext/_addvdi3_s.o
libgcc/kext/_addvdi3.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT -static -fno-pic -fno-exceptions -fno-non-call-exceptions -DL_addvdi3 $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/kext/_addvdi3.o
kext/libgcc.a: libgcc/kext/_addvdi3.o
kext/libgcc_s.dylib: libgcc/kext/_addvdi3_s.o
libgcc/kext/libgcc.map: libgcc/kext/_addvdi3_s.o
libgcc/kext/_subvsi3_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT -static -fno-pic -fno-exceptions -fno-non-call-exceptions -DL_subvsi3 -c $(srcdir)/libgcc2.c -o libgcc/kext/_subvsi3_s.o
libgcc/kext/_subvsi3.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT -static -fno-pic -fno-exceptions -fno-non-call-exceptions -DL_subvsi3 $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/kext/_subvsi3.o
kext/libgcc.a: libgcc/kext/_subvsi3.o
kext/libgcc_s.dylib: libgcc/kext/_subvsi3_s.o
libgcc/kext/libgcc.map: libgcc/kext/_subvsi3_s.o
libgcc/kext/_subvdi3_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT -static -fno-pic -fno-exceptions -fno-non-call-exceptions -DL_subvdi3 -c $(srcdir)/libgcc2.c -o libgcc/kext/_subvdi3_s.o
libgcc/kext/_subvdi3.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT -static -fno-pic -fno-exceptions -fno-non-call-exceptions -DL_subvdi3 $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/kext/_subvdi3.o
kext/libgcc.a: libgcc/kext/_subvdi3.o
kext/libgcc_s.dylib: libgcc/kext/_subvdi3_s.o
libgcc/kext/libgcc.map: libgcc/kext/_subvdi3_s.o
libgcc/kext/_mulvsi3_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT -static -fno-pic -fno-exceptions -fno-non-call-exceptions -DL_mulvsi3 -c $(srcdir)/libgcc2.c -o libgcc/kext/_mulvsi3_s.o
libgcc/kext/_mulvsi3.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT -static -fno-pic -fno-exceptions -fno-non-call-exceptions -DL_mulvsi3 $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/kext/_mulvsi3.o
kext/libgcc.a: libgcc/kext/_mulvsi3.o
kext/libgcc_s.dylib: libgcc/kext/_mulvsi3_s.o
libgcc/kext/libgcc.map: libgcc/kext/_mulvsi3_s.o
libgcc/kext/_mulvdi3_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT -static -fno-pic -fno-exceptions -fno-non-call-exceptions -DL_mulvdi3 -c $(srcdir)/libgcc2.c -o libgcc/kext/_mulvdi3_s.o
libgcc/kext/_mulvdi3.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT -static -fno-pic -fno-exceptions -fno-non-call-exceptions -DL_mulvdi3 $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/kext/_mulvdi3.o
kext/libgcc.a: libgcc/kext/_mulvdi3.o
kext/libgcc_s.dylib: libgcc/kext/_mulvdi3_s.o
libgcc/kext/libgcc.map: libgcc/kext/_mulvdi3_s.o
libgcc/kext/_negvsi2_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT -static -fno-pic -fno-exceptions -fno-non-call-exceptions -DL_negvsi2 -c $(srcdir)/libgcc2.c -o libgcc/kext/_negvsi2_s.o
libgcc/kext/_negvsi2.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT -static -fno-pic -fno-exceptions -fno-non-call-exceptions -DL_negvsi2 $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/kext/_negvsi2.o
kext/libgcc.a: libgcc/kext/_negvsi2.o
kext/libgcc_s.dylib: libgcc/kext/_negvsi2_s.o
libgcc/kext/libgcc.map: libgcc/kext/_negvsi2_s.o
libgcc/kext/_negvdi2_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT -static -fno-pic -fno-exceptions -fno-non-call-exceptions -DL_negvdi2 -c $(srcdir)/libgcc2.c -o libgcc/kext/_negvdi2_s.o
libgcc/kext/_negvdi2.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT -static -fno-pic -fno-exceptions -fno-non-call-exceptions -DL_negvdi2 $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/kext/_negvdi2.o
kext/libgcc.a: libgcc/kext/_negvdi2.o
kext/libgcc_s.dylib: libgcc/kext/_negvdi2_s.o
libgcc/kext/libgcc.map: libgcc/kext/_negvdi2_s.o
libgcc/kext/_ctors_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT -static -fno-pic -fno-exceptions -fno-non-call-exceptions -DL_ctors -c $(srcdir)/libgcc2.c -o libgcc/kext/_ctors_s.o
libgcc/kext/_ctors.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT -static -fno-pic -fno-exceptions -fno-non-call-exceptions -DL_ctors $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/kext/_ctors.o
kext/libgcc.a: libgcc/kext/_ctors.o
kext/libgcc_s.dylib: libgcc/kext/_ctors_s.o
libgcc/kext/libgcc.map: libgcc/kext/_ctors_s.o
libgcc/kext/_ffssi2_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT -static -fno-pic -fno-exceptions -fno-non-call-exceptions -DL_ffssi2 -c $(srcdir)/libgcc2.c -o libgcc/kext/_ffssi2_s.o
libgcc/kext/_ffssi2.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT -static -fno-pic -fno-exceptions -fno-non-call-exceptions -DL_ffssi2 $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/kext/_ffssi2.o
kext/libgcc.a: libgcc/kext/_ffssi2.o
kext/libgcc_s.dylib: libgcc/kext/_ffssi2_s.o
libgcc/kext/libgcc.map: libgcc/kext/_ffssi2_s.o
libgcc/kext/_ffsdi2_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT -static -fno-pic -fno-exceptions -fno-non-call-exceptions -DL_ffsdi2 -c $(srcdir)/libgcc2.c -o libgcc/kext/_ffsdi2_s.o
libgcc/kext/_ffsdi2.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT -static -fno-pic -fno-exceptions -fno-non-call-exceptions -DL_ffsdi2 $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/kext/_ffsdi2.o
kext/libgcc.a: libgcc/kext/_ffsdi2.o
kext/libgcc_s.dylib: libgcc/kext/_ffsdi2_s.o
libgcc/kext/libgcc.map: libgcc/kext/_ffsdi2_s.o
libgcc/kext/_clz_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT -static -fno-pic -fno-exceptions -fno-non-call-exceptions -DL_clz -c $(srcdir)/libgcc2.c -o libgcc/kext/_clz_s.o
libgcc/kext/_clz.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT -static -fno-pic -fno-exceptions -fno-non-call-exceptions -DL_clz $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/kext/_clz.o
kext/libgcc.a: libgcc/kext/_clz.o
kext/libgcc_s.dylib: libgcc/kext/_clz_s.o
libgcc/kext/libgcc.map: libgcc/kext/_clz_s.o
libgcc/kext/_clzsi2_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT -static -fno-pic -fno-exceptions -fno-non-call-exceptions -DL_clzsi2 -c $(srcdir)/libgcc2.c -o libgcc/kext/_clzsi2_s.o
libgcc/kext/_clzsi2.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT -static -fno-pic -fno-exceptions -fno-non-call-exceptions -DL_clzsi2 $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/kext/_clzsi2.o
kext/libgcc.a: libgcc/kext/_clzsi2.o
kext/libgcc_s.dylib: libgcc/kext/_clzsi2_s.o
libgcc/kext/libgcc.map: libgcc/kext/_clzsi2_s.o
libgcc/kext/_clzdi2_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT -static -fno-pic -fno-exceptions -fno-non-call-exceptions -DL_clzdi2 -c $(srcdir)/libgcc2.c -o libgcc/kext/_clzdi2_s.o
libgcc/kext/_clzdi2.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT -static -fno-pic -fno-exceptions -fno-non-call-exceptions -DL_clzdi2 $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/kext/_clzdi2.o
kext/libgcc.a: libgcc/kext/_clzdi2.o
kext/libgcc_s.dylib: libgcc/kext/_clzdi2_s.o
libgcc/kext/libgcc.map: libgcc/kext/_clzdi2_s.o
libgcc/kext/_ctzsi2_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT -static -fno-pic -fno-exceptions -fno-non-call-exceptions -DL_ctzsi2 -c $(srcdir)/libgcc2.c -o libgcc/kext/_ctzsi2_s.o
libgcc/kext/_ctzsi2.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT -static -fno-pic -fno-exceptions -fno-non-call-exceptions -DL_ctzsi2 $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/kext/_ctzsi2.o
kext/libgcc.a: libgcc/kext/_ctzsi2.o
kext/libgcc_s.dylib: libgcc/kext/_ctzsi2_s.o
libgcc/kext/libgcc.map: libgcc/kext/_ctzsi2_s.o
libgcc/kext/_ctzdi2_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT -static -fno-pic -fno-exceptions -fno-non-call-exceptions -DL_ctzdi2 -c $(srcdir)/libgcc2.c -o libgcc/kext/_ctzdi2_s.o
libgcc/kext/_ctzdi2.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT -static -fno-pic -fno-exceptions -fno-non-call-exceptions -DL_ctzdi2 $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/kext/_ctzdi2.o
kext/libgcc.a: libgcc/kext/_ctzdi2.o
kext/libgcc_s.dylib: libgcc/kext/_ctzdi2_s.o
libgcc/kext/libgcc.map: libgcc/kext/_ctzdi2_s.o
libgcc/kext/_popcount_tab_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT -static -fno-pic -fno-exceptions -fno-non-call-exceptions -DL_popcount_tab -c $(srcdir)/libgcc2.c -o libgcc/kext/_popcount_tab_s.o
libgcc/kext/_popcount_tab.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT -static -fno-pic -fno-exceptions -fno-non-call-exceptions -DL_popcount_tab $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/kext/_popcount_tab.o
kext/libgcc.a: libgcc/kext/_popcount_tab.o
kext/libgcc_s.dylib: libgcc/kext/_popcount_tab_s.o
libgcc/kext/libgcc.map: libgcc/kext/_popcount_tab_s.o
libgcc/kext/_popcountsi2_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT -static -fno-pic -fno-exceptions -fno-non-call-exceptions -DL_popcountsi2 -c $(srcdir)/libgcc2.c -o libgcc/kext/_popcountsi2_s.o
libgcc/kext/_popcountsi2.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT -static -fno-pic -fno-exceptions -fno-non-call-exceptions -DL_popcountsi2 $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/kext/_popcountsi2.o
kext/libgcc.a: libgcc/kext/_popcountsi2.o
kext/libgcc_s.dylib: libgcc/kext/_popcountsi2_s.o
libgcc/kext/libgcc.map: libgcc/kext/_popcountsi2_s.o
libgcc/kext/_popcountdi2_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT -static -fno-pic -fno-exceptions -fno-non-call-exceptions -DL_popcountdi2 -c $(srcdir)/libgcc2.c -o libgcc/kext/_popcountdi2_s.o
libgcc/kext/_popcountdi2.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT -static -fno-pic -fno-exceptions -fno-non-call-exceptions -DL_popcountdi2 $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/kext/_popcountdi2.o
kext/libgcc.a: libgcc/kext/_popcountdi2.o
kext/libgcc_s.dylib: libgcc/kext/_popcountdi2_s.o
libgcc/kext/libgcc.map: libgcc/kext/_popcountdi2_s.o
libgcc/kext/_paritysi2_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT -static -fno-pic -fno-exceptions -fno-non-call-exceptions -DL_paritysi2 -c $(srcdir)/libgcc2.c -o libgcc/kext/_paritysi2_s.o
libgcc/kext/_paritysi2.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT -static -fno-pic -fno-exceptions -fno-non-call-exceptions -DL_paritysi2 $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/kext/_paritysi2.o
kext/libgcc.a: libgcc/kext/_paritysi2.o
kext/libgcc_s.dylib: libgcc/kext/_paritysi2_s.o
libgcc/kext/libgcc.map: libgcc/kext/_paritysi2_s.o
libgcc/kext/_paritydi2_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT -static -fno-pic -fno-exceptions -fno-non-call-exceptions -DL_paritydi2 -c $(srcdir)/libgcc2.c -o libgcc/kext/_paritydi2_s.o
libgcc/kext/_paritydi2.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT -static -fno-pic -fno-exceptions -fno-non-call-exceptions -DL_paritydi2 $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/kext/_paritydi2.o
kext/libgcc.a: libgcc/kext/_paritydi2.o
kext/libgcc_s.dylib: libgcc/kext/_paritydi2_s.o
libgcc/kext/libgcc.map: libgcc/kext/_paritydi2_s.o
libgcc/kext/_powisf2_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT -static -fno-pic -fno-exceptions -fno-non-call-exceptions -DL_powisf2 -c $(srcdir)/libgcc2.c -o libgcc/kext/_powisf2_s.o
libgcc/kext/_powisf2.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT -static -fno-pic -fno-exceptions -fno-non-call-exceptions -DL_powisf2 $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/kext/_powisf2.o
kext/libgcc.a: libgcc/kext/_powisf2.o
kext/libgcc_s.dylib: libgcc/kext/_powisf2_s.o
libgcc/kext/libgcc.map: libgcc/kext/_powisf2_s.o
libgcc/kext/_powidf2_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT -static -fno-pic -fno-exceptions -fno-non-call-exceptions -DL_powidf2 -c $(srcdir)/libgcc2.c -o libgcc/kext/_powidf2_s.o
libgcc/kext/_powidf2.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT -static -fno-pic -fno-exceptions -fno-non-call-exceptions -DL_powidf2 $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/kext/_powidf2.o
kext/libgcc.a: libgcc/kext/_powidf2.o
kext/libgcc_s.dylib: libgcc/kext/_powidf2_s.o
libgcc/kext/libgcc.map: libgcc/kext/_powidf2_s.o
libgcc/kext/_powixf2_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT -static -fno-pic -fno-exceptions -fno-non-call-exceptions -DL_powixf2 -c $(srcdir)/libgcc2.c -o libgcc/kext/_powixf2_s.o
libgcc/kext/_powixf2.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT -static -fno-pic -fno-exceptions -fno-non-call-exceptions -DL_powixf2 $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/kext/_powixf2.o
kext/libgcc.a: libgcc/kext/_powixf2.o
kext/libgcc_s.dylib: libgcc/kext/_powixf2_s.o
libgcc/kext/libgcc.map: libgcc/kext/_powixf2_s.o
libgcc/kext/_powitf2_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT -static -fno-pic -fno-exceptions -fno-non-call-exceptions -DL_powitf2 -c $(srcdir)/libgcc2.c -o libgcc/kext/_powitf2_s.o
libgcc/kext/_powitf2.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT -static -fno-pic -fno-exceptions -fno-non-call-exceptions -DL_powitf2 $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/kext/_powitf2.o
kext/libgcc.a: libgcc/kext/_powitf2.o
kext/libgcc_s.dylib: libgcc/kext/_powitf2_s.o
libgcc/kext/libgcc.map: libgcc/kext/_powitf2_s.o
libgcc/kext/_mulsc3_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT -static -fno-pic -fno-exceptions -fno-non-call-exceptions -DL_mulsc3 -c $(srcdir)/libgcc2.c -o libgcc/kext/_mulsc3_s.o
libgcc/kext/_mulsc3.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT -static -fno-pic -fno-exceptions -fno-non-call-exceptions -DL_mulsc3 $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/kext/_mulsc3.o
kext/libgcc.a: libgcc/kext/_mulsc3.o
kext/libgcc_s.dylib: libgcc/kext/_mulsc3_s.o
libgcc/kext/libgcc.map: libgcc/kext/_mulsc3_s.o
libgcc/kext/_muldc3_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT -static -fno-pic -fno-exceptions -fno-non-call-exceptions -DL_muldc3 -c $(srcdir)/libgcc2.c -o libgcc/kext/_muldc3_s.o
libgcc/kext/_muldc3.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT -static -fno-pic -fno-exceptions -fno-non-call-exceptions -DL_muldc3 $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/kext/_muldc3.o
kext/libgcc.a: libgcc/kext/_muldc3.o
kext/libgcc_s.dylib: libgcc/kext/_muldc3_s.o
libgcc/kext/libgcc.map: libgcc/kext/_muldc3_s.o
libgcc/kext/_mulxc3_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT -static -fno-pic -fno-exceptions -fno-non-call-exceptions -DL_mulxc3 -c $(srcdir)/libgcc2.c -o libgcc/kext/_mulxc3_s.o
libgcc/kext/_mulxc3.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT -static -fno-pic -fno-exceptions -fno-non-call-exceptions -DL_mulxc3 $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/kext/_mulxc3.o
kext/libgcc.a: libgcc/kext/_mulxc3.o
kext/libgcc_s.dylib: libgcc/kext/_mulxc3_s.o
libgcc/kext/libgcc.map: libgcc/kext/_mulxc3_s.o
libgcc/kext/_multc3_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT -static -fno-pic -fno-exceptions -fno-non-call-exceptions -DL_multc3 -c $(srcdir)/libgcc2.c -o libgcc/kext/_multc3_s.o
libgcc/kext/_multc3.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT -static -fno-pic -fno-exceptions -fno-non-call-exceptions -DL_multc3 $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/kext/_multc3.o
kext/libgcc.a: libgcc/kext/_multc3.o
kext/libgcc_s.dylib: libgcc/kext/_multc3_s.o
libgcc/kext/libgcc.map: libgcc/kext/_multc3_s.o
libgcc/kext/_divsc3_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT -static -fno-pic -fno-exceptions -fno-non-call-exceptions -DL_divsc3 -c $(srcdir)/libgcc2.c -o libgcc/kext/_divsc3_s.o
libgcc/kext/_divsc3.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT -static -fno-pic -fno-exceptions -fno-non-call-exceptions -DL_divsc3 $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/kext/_divsc3.o
kext/libgcc.a: libgcc/kext/_divsc3.o
kext/libgcc_s.dylib: libgcc/kext/_divsc3_s.o
libgcc/kext/libgcc.map: libgcc/kext/_divsc3_s.o
libgcc/kext/_divdc3_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT -static -fno-pic -fno-exceptions -fno-non-call-exceptions -DL_divdc3 -c $(srcdir)/libgcc2.c -o libgcc/kext/_divdc3_s.o
libgcc/kext/_divdc3.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT -static -fno-pic -fno-exceptions -fno-non-call-exceptions -DL_divdc3 $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/kext/_divdc3.o
kext/libgcc.a: libgcc/kext/_divdc3.o
kext/libgcc_s.dylib: libgcc/kext/_divdc3_s.o
libgcc/kext/libgcc.map: libgcc/kext/_divdc3_s.o
libgcc/kext/_divxc3_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT -static -fno-pic -fno-exceptions -fno-non-call-exceptions -DL_divxc3 -c $(srcdir)/libgcc2.c -o libgcc/kext/_divxc3_s.o
libgcc/kext/_divxc3.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT -static -fno-pic -fno-exceptions -fno-non-call-exceptions -DL_divxc3 $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/kext/_divxc3.o
kext/libgcc.a: libgcc/kext/_divxc3.o
kext/libgcc_s.dylib: libgcc/kext/_divxc3_s.o
libgcc/kext/libgcc.map: libgcc/kext/_divxc3_s.o
libgcc/kext/_divtc3_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT -static -fno-pic -fno-exceptions -fno-non-call-exceptions -DL_divtc3 -c $(srcdir)/libgcc2.c -o libgcc/kext/_divtc3_s.o
libgcc/kext/_divtc3.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT -static -fno-pic -fno-exceptions -fno-non-call-exceptions -DL_divtc3 $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/kext/_divtc3.o
kext/libgcc.a: libgcc/kext/_divtc3.o
kext/libgcc_s.dylib: libgcc/kext/_divtc3_s.o
libgcc/kext/libgcc.map: libgcc/kext/_divtc3_s.o
libgcc/kext/_bswapsi2_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT -static -fno-pic -fno-exceptions -fno-non-call-exceptions -DL_bswapsi2 -c $(srcdir)/libgcc2.c -o libgcc/kext/_bswapsi2_s.o
libgcc/kext/_bswapsi2.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT -static -fno-pic -fno-exceptions -fno-non-call-exceptions -DL_bswapsi2 $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/kext/_bswapsi2.o
kext/libgcc.a: libgcc/kext/_bswapsi2.o
kext/libgcc_s.dylib: libgcc/kext/_bswapsi2_s.o
libgcc/kext/libgcc.map: libgcc/kext/_bswapsi2_s.o
libgcc/kext/_bswapdi2_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT -static -fno-pic -fno-exceptions -fno-non-call-exceptions -DL_bswapdi2 -c $(srcdir)/libgcc2.c -o libgcc/kext/_bswapdi2_s.o
libgcc/kext/_bswapdi2.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT -static -fno-pic -fno-exceptions -fno-non-call-exceptions -DL_bswapdi2 $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/kext/_bswapdi2.o
kext/libgcc.a: libgcc/kext/_bswapdi2.o
kext/libgcc_s.dylib: libgcc/kext/_bswapdi2_s.o
libgcc/kext/libgcc.map: libgcc/kext/_bswapdi2_s.o
libgcc/kext/_fixunssfsi_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT -static -fno-pic -fno-exceptions -fno-non-call-exceptions -DL_fixunssfsi -DLIBGCC2_UNITS_PER_WORD=4 -c $(srcdir)/libgcc2.c -o libgcc/kext/_fixunssfsi_s.o
libgcc/kext/_fixunssfsi.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT -static -fno-pic -fno-exceptions -fno-non-call-exceptions -DL_fixunssfsi -DLIBGCC2_UNITS_PER_WORD=4 $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/kext/_fixunssfsi.o
kext/libgcc.a: libgcc/kext/_fixunssfsi.o
kext/libgcc_s.dylib: libgcc/kext/_fixunssfsi_s.o
libgcc/kext/libgcc.map: libgcc/kext/_fixunssfsi_s.o
libgcc/kext/_fixunsdfsi_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT -static -fno-pic -fno-exceptions -fno-non-call-exceptions -DL_fixunsdfsi -DLIBGCC2_UNITS_PER_WORD=4 -c $(srcdir)/libgcc2.c -o libgcc/kext/_fixunsdfsi_s.o
libgcc/kext/_fixunsdfsi.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT -static -fno-pic -fno-exceptions -fno-non-call-exceptions -DL_fixunsdfsi -DLIBGCC2_UNITS_PER_WORD=4 $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/kext/_fixunsdfsi.o
kext/libgcc.a: libgcc/kext/_fixunsdfsi.o
kext/libgcc_s.dylib: libgcc/kext/_fixunsdfsi_s.o
libgcc/kext/libgcc.map: libgcc/kext/_fixunsdfsi_s.o
libgcc/kext/_fixunsxfsi_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT -static -fno-pic -fno-exceptions -fno-non-call-exceptions -DL_fixunsxfsi -DLIBGCC2_UNITS_PER_WORD=4 -c $(srcdir)/libgcc2.c -o libgcc/kext/_fixunsxfsi_s.o
libgcc/kext/_fixunsxfsi.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT -static -fno-pic -fno-exceptions -fno-non-call-exceptions -DL_fixunsxfsi -DLIBGCC2_UNITS_PER_WORD=4 $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/kext/_fixunsxfsi.o
kext/libgcc.a: libgcc/kext/_fixunsxfsi.o
kext/libgcc_s.dylib: libgcc/kext/_fixunsxfsi_s.o
libgcc/kext/libgcc.map: libgcc/kext/_fixunsxfsi_s.o
libgcc/kext/_fixsfdi_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT -static -fno-pic -fno-exceptions -fno-non-call-exceptions -DL_fixsfdi -DLIBGCC2_UNITS_PER_WORD=4 -c $(srcdir)/libgcc2.c -o libgcc/kext/_fixsfdi_s.o
libgcc/kext/_fixsfdi.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT -static -fno-pic -fno-exceptions -fno-non-call-exceptions -DL_fixsfdi -DLIBGCC2_UNITS_PER_WORD=4 $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/kext/_fixsfdi.o
kext/libgcc.a: libgcc/kext/_fixsfdi.o
kext/libgcc_s.dylib: libgcc/kext/_fixsfdi_s.o
libgcc/kext/libgcc.map: libgcc/kext/_fixsfdi_s.o
libgcc/kext/_fixsfti_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT -static -fno-pic -fno-exceptions -fno-non-call-exceptions -DL_fixsfdi -DLIBGCC2_UNITS_PER_WORD=8 -c $(srcdir)/libgcc2.c -o libgcc/kext/_fixsfti_s.o
libgcc/kext/_fixsfti.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT -static -fno-pic -fno-exceptions -fno-non-call-exceptions -DL_fixsfdi -DLIBGCC2_UNITS_PER_WORD=8 $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/kext/_fixsfti.o
kext/libgcc.a: libgcc/kext/_fixsfti.o
kext/libgcc_s.dylib: libgcc/kext/_fixsfti_s.o
libgcc/kext/libgcc.map: libgcc/kext/_fixsfti_s.o
libgcc/kext/_fixunssfdi_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT -static -fno-pic -fno-exceptions -fno-non-call-exceptions -DL_fixunssfdi -DLIBGCC2_UNITS_PER_WORD=4 -c $(srcdir)/libgcc2.c -o libgcc/kext/_fixunssfdi_s.o
libgcc/kext/_fixunssfdi.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT -static -fno-pic -fno-exceptions -fno-non-call-exceptions -DL_fixunssfdi -DLIBGCC2_UNITS_PER_WORD=4 $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/kext/_fixunssfdi.o
kext/libgcc.a: libgcc/kext/_fixunssfdi.o
kext/libgcc_s.dylib: libgcc/kext/_fixunssfdi_s.o
libgcc/kext/libgcc.map: libgcc/kext/_fixunssfdi_s.o
libgcc/kext/_fixunssfti_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT -static -fno-pic -fno-exceptions -fno-non-call-exceptions -DL_fixunssfdi -DLIBGCC2_UNITS_PER_WORD=8 -c $(srcdir)/libgcc2.c -o libgcc/kext/_fixunssfti_s.o
libgcc/kext/_fixunssfti.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT -static -fno-pic -fno-exceptions -fno-non-call-exceptions -DL_fixunssfdi -DLIBGCC2_UNITS_PER_WORD=8 $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/kext/_fixunssfti.o
kext/libgcc.a: libgcc/kext/_fixunssfti.o
kext/libgcc_s.dylib: libgcc/kext/_fixunssfti_s.o
libgcc/kext/libgcc.map: libgcc/kext/_fixunssfti_s.o
libgcc/kext/_floatdisf_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT -static -fno-pic -fno-exceptions -fno-non-call-exceptions -DL_floatdisf -DLIBGCC2_UNITS_PER_WORD=4 -c $(srcdir)/libgcc2.c -o libgcc/kext/_floatdisf_s.o
libgcc/kext/_floatdisf.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT -static -fno-pic -fno-exceptions -fno-non-call-exceptions -DL_floatdisf -DLIBGCC2_UNITS_PER_WORD=4 $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/kext/_floatdisf.o
kext/libgcc.a: libgcc/kext/_floatdisf.o
kext/libgcc_s.dylib: libgcc/kext/_floatdisf_s.o
libgcc/kext/libgcc.map: libgcc/kext/_floatdisf_s.o
libgcc/kext/_floattisf_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT -static -fno-pic -fno-exceptions -fno-non-call-exceptions -DL_floatdisf -DLIBGCC2_UNITS_PER_WORD=8 -c $(srcdir)/libgcc2.c -o libgcc/kext/_floattisf_s.o
libgcc/kext/_floattisf.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT -static -fno-pic -fno-exceptions -fno-non-call-exceptions -DL_floatdisf -DLIBGCC2_UNITS_PER_WORD=8 $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/kext/_floattisf.o
kext/libgcc.a: libgcc/kext/_floattisf.o
kext/libgcc_s.dylib: libgcc/kext/_floattisf_s.o
libgcc/kext/libgcc.map: libgcc/kext/_floattisf_s.o
libgcc/kext/_floatundisf_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT -static -fno-pic -fno-exceptions -fno-non-call-exceptions -DL_floatundisf -DLIBGCC2_UNITS_PER_WORD=4 -c $(srcdir)/libgcc2.c -o libgcc/kext/_floatundisf_s.o
libgcc/kext/_floatundisf.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT -static -fno-pic -fno-exceptions -fno-non-call-exceptions -DL_floatundisf -DLIBGCC2_UNITS_PER_WORD=4 $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/kext/_floatundisf.o
kext/libgcc.a: libgcc/kext/_floatundisf.o
kext/libgcc_s.dylib: libgcc/kext/_floatundisf_s.o
libgcc/kext/libgcc.map: libgcc/kext/_floatundisf_s.o
libgcc/kext/_floatuntisf_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT -static -fno-pic -fno-exceptions -fno-non-call-exceptions -DL_floatundisf -DLIBGCC2_UNITS_PER_WORD=8 -c $(srcdir)/libgcc2.c -o libgcc/kext/_floatuntisf_s.o
libgcc/kext/_floatuntisf.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT -static -fno-pic -fno-exceptions -fno-non-call-exceptions -DL_floatundisf -DLIBGCC2_UNITS_PER_WORD=8 $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/kext/_floatuntisf.o
kext/libgcc.a: libgcc/kext/_floatuntisf.o
kext/libgcc_s.dylib: libgcc/kext/_floatuntisf_s.o
libgcc/kext/libgcc.map: libgcc/kext/_floatuntisf_s.o
libgcc/kext/_fixdfdi_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT -static -fno-pic -fno-exceptions -fno-non-call-exceptions -DL_fixdfdi -DLIBGCC2_UNITS_PER_WORD=4 -c $(srcdir)/libgcc2.c -o libgcc/kext/_fixdfdi_s.o
libgcc/kext/_fixdfdi.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT -static -fno-pic -fno-exceptions -fno-non-call-exceptions -DL_fixdfdi -DLIBGCC2_UNITS_PER_WORD=4 $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/kext/_fixdfdi.o
kext/libgcc.a: libgcc/kext/_fixdfdi.o
kext/libgcc_s.dylib: libgcc/kext/_fixdfdi_s.o
libgcc/kext/libgcc.map: libgcc/kext/_fixdfdi_s.o
libgcc/kext/_fixdfti_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT -static -fno-pic -fno-exceptions -fno-non-call-exceptions -DL_fixdfdi -DLIBGCC2_UNITS_PER_WORD=8 -c $(srcdir)/libgcc2.c -o libgcc/kext/_fixdfti_s.o
libgcc/kext/_fixdfti.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT -static -fno-pic -fno-exceptions -fno-non-call-exceptions -DL_fixdfdi -DLIBGCC2_UNITS_PER_WORD=8 $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/kext/_fixdfti.o
kext/libgcc.a: libgcc/kext/_fixdfti.o
kext/libgcc_s.dylib: libgcc/kext/_fixdfti_s.o
libgcc/kext/libgcc.map: libgcc/kext/_fixdfti_s.o
libgcc/kext/_fixunsdfdi_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT -static -fno-pic -fno-exceptions -fno-non-call-exceptions -DL_fixunsdfdi -DLIBGCC2_UNITS_PER_WORD=4 -c $(srcdir)/libgcc2.c -o libgcc/kext/_fixunsdfdi_s.o
libgcc/kext/_fixunsdfdi.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT -static -fno-pic -fno-exceptions -fno-non-call-exceptions -DL_fixunsdfdi -DLIBGCC2_UNITS_PER_WORD=4 $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/kext/_fixunsdfdi.o
kext/libgcc.a: libgcc/kext/_fixunsdfdi.o
kext/libgcc_s.dylib: libgcc/kext/_fixunsdfdi_s.o
libgcc/kext/libgcc.map: libgcc/kext/_fixunsdfdi_s.o
libgcc/kext/_fixunsdfti_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT -static -fno-pic -fno-exceptions -fno-non-call-exceptions -DL_fixunsdfdi -DLIBGCC2_UNITS_PER_WORD=8 -c $(srcdir)/libgcc2.c -o libgcc/kext/_fixunsdfti_s.o
libgcc/kext/_fixunsdfti.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT -static -fno-pic -fno-exceptions -fno-non-call-exceptions -DL_fixunsdfdi -DLIBGCC2_UNITS_PER_WORD=8 $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/kext/_fixunsdfti.o
kext/libgcc.a: libgcc/kext/_fixunsdfti.o
kext/libgcc_s.dylib: libgcc/kext/_fixunsdfti_s.o
libgcc/kext/libgcc.map: libgcc/kext/_fixunsdfti_s.o
libgcc/kext/_floatdidf_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT -static -fno-pic -fno-exceptions -fno-non-call-exceptions -DL_floatdidf -DLIBGCC2_UNITS_PER_WORD=4 -c $(srcdir)/libgcc2.c -o libgcc/kext/_floatdidf_s.o
libgcc/kext/_floatdidf.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT -static -fno-pic -fno-exceptions -fno-non-call-exceptions -DL_floatdidf -DLIBGCC2_UNITS_PER_WORD=4 $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/kext/_floatdidf.o
kext/libgcc.a: libgcc/kext/_floatdidf.o
kext/libgcc_s.dylib: libgcc/kext/_floatdidf_s.o
libgcc/kext/libgcc.map: libgcc/kext/_floatdidf_s.o
libgcc/kext/_floattidf_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT -static -fno-pic -fno-exceptions -fno-non-call-exceptions -DL_floatdidf -DLIBGCC2_UNITS_PER_WORD=8 -c $(srcdir)/libgcc2.c -o libgcc/kext/_floattidf_s.o
libgcc/kext/_floattidf.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT -static -fno-pic -fno-exceptions -fno-non-call-exceptions -DL_floatdidf -DLIBGCC2_UNITS_PER_WORD=8 $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/kext/_floattidf.o
kext/libgcc.a: libgcc/kext/_floattidf.o
kext/libgcc_s.dylib: libgcc/kext/_floattidf_s.o
libgcc/kext/libgcc.map: libgcc/kext/_floattidf_s.o
libgcc/kext/_floatundidf_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT -static -fno-pic -fno-exceptions -fno-non-call-exceptions -DL_floatundidf -DLIBGCC2_UNITS_PER_WORD=4 -c $(srcdir)/libgcc2.c -o libgcc/kext/_floatundidf_s.o
libgcc/kext/_floatundidf.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT -static -fno-pic -fno-exceptions -fno-non-call-exceptions -DL_floatundidf -DLIBGCC2_UNITS_PER_WORD=4 $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/kext/_floatundidf.o
kext/libgcc.a: libgcc/kext/_floatundidf.o
kext/libgcc_s.dylib: libgcc/kext/_floatundidf_s.o
libgcc/kext/libgcc.map: libgcc/kext/_floatundidf_s.o
libgcc/kext/_floatuntidf_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT -static -fno-pic -fno-exceptions -fno-non-call-exceptions -DL_floatundidf -DLIBGCC2_UNITS_PER_WORD=8 -c $(srcdir)/libgcc2.c -o libgcc/kext/_floatuntidf_s.o
libgcc/kext/_floatuntidf.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT -static -fno-pic -fno-exceptions -fno-non-call-exceptions -DL_floatundidf -DLIBGCC2_UNITS_PER_WORD=8 $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/kext/_floatuntidf.o
kext/libgcc.a: libgcc/kext/_floatuntidf.o
kext/libgcc_s.dylib: libgcc/kext/_floatuntidf_s.o
libgcc/kext/libgcc.map: libgcc/kext/_floatuntidf_s.o
libgcc/kext/_fixxfdi_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT -static -fno-pic -fno-exceptions -fno-non-call-exceptions -DL_fixxfdi -DLIBGCC2_UNITS_PER_WORD=4 -c $(srcdir)/libgcc2.c -o libgcc/kext/_fixxfdi_s.o
libgcc/kext/_fixxfdi.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT -static -fno-pic -fno-exceptions -fno-non-call-exceptions -DL_fixxfdi -DLIBGCC2_UNITS_PER_WORD=4 $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/kext/_fixxfdi.o
kext/libgcc.a: libgcc/kext/_fixxfdi.o
kext/libgcc_s.dylib: libgcc/kext/_fixxfdi_s.o
libgcc/kext/libgcc.map: libgcc/kext/_fixxfdi_s.o
libgcc/kext/_fixxfti_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT -static -fno-pic -fno-exceptions -fno-non-call-exceptions -DL_fixxfdi -DLIBGCC2_UNITS_PER_WORD=8 -c $(srcdir)/libgcc2.c -o libgcc/kext/_fixxfti_s.o
libgcc/kext/_fixxfti.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT -static -fno-pic -fno-exceptions -fno-non-call-exceptions -DL_fixxfdi -DLIBGCC2_UNITS_PER_WORD=8 $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/kext/_fixxfti.o
kext/libgcc.a: libgcc/kext/_fixxfti.o
kext/libgcc_s.dylib: libgcc/kext/_fixxfti_s.o
libgcc/kext/libgcc.map: libgcc/kext/_fixxfti_s.o
libgcc/kext/_fixunsxfdi_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT -static -fno-pic -fno-exceptions -fno-non-call-exceptions -DL_fixunsxfdi -DLIBGCC2_UNITS_PER_WORD=4 -c $(srcdir)/libgcc2.c -o libgcc/kext/_fixunsxfdi_s.o
libgcc/kext/_fixunsxfdi.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT -static -fno-pic -fno-exceptions -fno-non-call-exceptions -DL_fixunsxfdi -DLIBGCC2_UNITS_PER_WORD=4 $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/kext/_fixunsxfdi.o
kext/libgcc.a: libgcc/kext/_fixunsxfdi.o
kext/libgcc_s.dylib: libgcc/kext/_fixunsxfdi_s.o
libgcc/kext/libgcc.map: libgcc/kext/_fixunsxfdi_s.o
libgcc/kext/_fixunsxfti_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT -static -fno-pic -fno-exceptions -fno-non-call-exceptions -DL_fixunsxfdi -DLIBGCC2_UNITS_PER_WORD=8 -c $(srcdir)/libgcc2.c -o libgcc/kext/_fixunsxfti_s.o
libgcc/kext/_fixunsxfti.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT -static -fno-pic -fno-exceptions -fno-non-call-exceptions -DL_fixunsxfdi -DLIBGCC2_UNITS_PER_WORD=8 $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/kext/_fixunsxfti.o
kext/libgcc.a: libgcc/kext/_fixunsxfti.o
kext/libgcc_s.dylib: libgcc/kext/_fixunsxfti_s.o
libgcc/kext/libgcc.map: libgcc/kext/_fixunsxfti_s.o
libgcc/kext/_floatdixf_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT -static -fno-pic -fno-exceptions -fno-non-call-exceptions -DL_floatdixf -DLIBGCC2_UNITS_PER_WORD=4 -c $(srcdir)/libgcc2.c -o libgcc/kext/_floatdixf_s.o
libgcc/kext/_floatdixf.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT -static -fno-pic -fno-exceptions -fno-non-call-exceptions -DL_floatdixf -DLIBGCC2_UNITS_PER_WORD=4 $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/kext/_floatdixf.o
kext/libgcc.a: libgcc/kext/_floatdixf.o
kext/libgcc_s.dylib: libgcc/kext/_floatdixf_s.o
libgcc/kext/libgcc.map: libgcc/kext/_floatdixf_s.o
libgcc/kext/_floattixf_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT -static -fno-pic -fno-exceptions -fno-non-call-exceptions -DL_floatdixf -DLIBGCC2_UNITS_PER_WORD=8 -c $(srcdir)/libgcc2.c -o libgcc/kext/_floattixf_s.o
libgcc/kext/_floattixf.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT -static -fno-pic -fno-exceptions -fno-non-call-exceptions -DL_floatdixf -DLIBGCC2_UNITS_PER_WORD=8 $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/kext/_floattixf.o
kext/libgcc.a: libgcc/kext/_floattixf.o
kext/libgcc_s.dylib: libgcc/kext/_floattixf_s.o
libgcc/kext/libgcc.map: libgcc/kext/_floattixf_s.o
libgcc/kext/_floatundixf_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT -static -fno-pic -fno-exceptions -fno-non-call-exceptions -DL_floatundixf -DLIBGCC2_UNITS_PER_WORD=4 -c $(srcdir)/libgcc2.c -o libgcc/kext/_floatundixf_s.o
libgcc/kext/_floatundixf.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT -static -fno-pic -fno-exceptions -fno-non-call-exceptions -DL_floatundixf -DLIBGCC2_UNITS_PER_WORD=4 $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/kext/_floatundixf.o
kext/libgcc.a: libgcc/kext/_floatundixf.o
kext/libgcc_s.dylib: libgcc/kext/_floatundixf_s.o
libgcc/kext/libgcc.map: libgcc/kext/_floatundixf_s.o
libgcc/kext/_floatuntixf_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT -static -fno-pic -fno-exceptions -fno-non-call-exceptions -DL_floatundixf -DLIBGCC2_UNITS_PER_WORD=8 -c $(srcdir)/libgcc2.c -o libgcc/kext/_floatuntixf_s.o
libgcc/kext/_floatuntixf.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT -static -fno-pic -fno-exceptions -fno-non-call-exceptions -DL_floatundixf -DLIBGCC2_UNITS_PER_WORD=8 $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/kext/_floatuntixf.o
kext/libgcc.a: libgcc/kext/_floatuntixf.o
kext/libgcc_s.dylib: libgcc/kext/_floatuntixf_s.o
libgcc/kext/libgcc.map: libgcc/kext/_floatuntixf_s.o
libgcc/kext/_fixtfdi_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT -static -fno-pic -fno-exceptions -fno-non-call-exceptions -DL_fixtfdi -DLIBGCC2_UNITS_PER_WORD=4 -c $(srcdir)/libgcc2.c -o libgcc/kext/_fixtfdi_s.o
libgcc/kext/_fixtfdi.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT -static -fno-pic -fno-exceptions -fno-non-call-exceptions -DL_fixtfdi -DLIBGCC2_UNITS_PER_WORD=4 $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/kext/_fixtfdi.o
kext/libgcc.a: libgcc/kext/_fixtfdi.o
kext/libgcc_s.dylib: libgcc/kext/_fixtfdi_s.o
libgcc/kext/libgcc.map: libgcc/kext/_fixtfdi_s.o
libgcc/kext/_fixtfti_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT -static -fno-pic -fno-exceptions -fno-non-call-exceptions -DL_fixtfdi -DLIBGCC2_UNITS_PER_WORD=8 -c $(srcdir)/libgcc2.c -o libgcc/kext/_fixtfti_s.o
libgcc/kext/_fixtfti.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT -static -fno-pic -fno-exceptions -fno-non-call-exceptions -DL_fixtfdi -DLIBGCC2_UNITS_PER_WORD=8 $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/kext/_fixtfti.o
kext/libgcc.a: libgcc/kext/_fixtfti.o
kext/libgcc_s.dylib: libgcc/kext/_fixtfti_s.o
libgcc/kext/libgcc.map: libgcc/kext/_fixtfti_s.o
libgcc/kext/_fixunstfdi_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT -static -fno-pic -fno-exceptions -fno-non-call-exceptions -DL_fixunstfdi -DLIBGCC2_UNITS_PER_WORD=4 -c $(srcdir)/libgcc2.c -o libgcc/kext/_fixunstfdi_s.o
libgcc/kext/_fixunstfdi.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT -static -fno-pic -fno-exceptions -fno-non-call-exceptions -DL_fixunstfdi -DLIBGCC2_UNITS_PER_WORD=4 $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/kext/_fixunstfdi.o
kext/libgcc.a: libgcc/kext/_fixunstfdi.o
kext/libgcc_s.dylib: libgcc/kext/_fixunstfdi_s.o
libgcc/kext/libgcc.map: libgcc/kext/_fixunstfdi_s.o
libgcc/kext/_fixunstfti_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT -static -fno-pic -fno-exceptions -fno-non-call-exceptions -DL_fixunstfdi -DLIBGCC2_UNITS_PER_WORD=8 -c $(srcdir)/libgcc2.c -o libgcc/kext/_fixunstfti_s.o
libgcc/kext/_fixunstfti.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT -static -fno-pic -fno-exceptions -fno-non-call-exceptions -DL_fixunstfdi -DLIBGCC2_UNITS_PER_WORD=8 $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/kext/_fixunstfti.o
kext/libgcc.a: libgcc/kext/_fixunstfti.o
kext/libgcc_s.dylib: libgcc/kext/_fixunstfti_s.o
libgcc/kext/libgcc.map: libgcc/kext/_fixunstfti_s.o
libgcc/kext/_floatditf_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT -static -fno-pic -fno-exceptions -fno-non-call-exceptions -DL_floatditf -DLIBGCC2_UNITS_PER_WORD=4 -c $(srcdir)/libgcc2.c -o libgcc/kext/_floatditf_s.o
libgcc/kext/_floatditf.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT -static -fno-pic -fno-exceptions -fno-non-call-exceptions -DL_floatditf -DLIBGCC2_UNITS_PER_WORD=4 $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/kext/_floatditf.o
kext/libgcc.a: libgcc/kext/_floatditf.o
kext/libgcc_s.dylib: libgcc/kext/_floatditf_s.o
libgcc/kext/libgcc.map: libgcc/kext/_floatditf_s.o
libgcc/kext/_floattitf_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT -static -fno-pic -fno-exceptions -fno-non-call-exceptions -DL_floatditf -DLIBGCC2_UNITS_PER_WORD=8 -c $(srcdir)/libgcc2.c -o libgcc/kext/_floattitf_s.o
libgcc/kext/_floattitf.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT -static -fno-pic -fno-exceptions -fno-non-call-exceptions -DL_floatditf -DLIBGCC2_UNITS_PER_WORD=8 $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/kext/_floattitf.o
kext/libgcc.a: libgcc/kext/_floattitf.o
kext/libgcc_s.dylib: libgcc/kext/_floattitf_s.o
libgcc/kext/libgcc.map: libgcc/kext/_floattitf_s.o
libgcc/kext/_floatunditf_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT -static -fno-pic -fno-exceptions -fno-non-call-exceptions -DL_floatunditf -DLIBGCC2_UNITS_PER_WORD=4 -c $(srcdir)/libgcc2.c -o libgcc/kext/_floatunditf_s.o
libgcc/kext/_floatunditf.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT -static -fno-pic -fno-exceptions -fno-non-call-exceptions -DL_floatunditf -DLIBGCC2_UNITS_PER_WORD=4 $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/kext/_floatunditf.o
kext/libgcc.a: libgcc/kext/_floatunditf.o
kext/libgcc_s.dylib: libgcc/kext/_floatunditf_s.o
libgcc/kext/libgcc.map: libgcc/kext/_floatunditf_s.o
libgcc/kext/_floatuntitf_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT -static -fno-pic -fno-exceptions -fno-non-call-exceptions -DL_floatunditf -DLIBGCC2_UNITS_PER_WORD=8 -c $(srcdir)/libgcc2.c -o libgcc/kext/_floatuntitf_s.o
libgcc/kext/_floatuntitf.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT -static -fno-pic -fno-exceptions -fno-non-call-exceptions -DL_floatunditf -DLIBGCC2_UNITS_PER_WORD=8 $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/kext/_floatuntitf.o
kext/libgcc.a: libgcc/kext/_floatuntitf.o
kext/libgcc_s.dylib: libgcc/kext/_floatuntitf_s.o
libgcc/kext/libgcc.map: libgcc/kext/_floatuntitf_s.o
libgcc/kext/_eprintf.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT -static -fno-pic -fno-exceptions -fno-non-call-exceptions -DL_eprintf $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/kext/_eprintf.o
kext/libgcc.a: libgcc/kext/_eprintf.o
libgcc/kext/__gcc_bcmp.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT -static -fno-pic -fno-exceptions -fno-non-call-exceptions -DL__gcc_bcmp $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/kext/__gcc_bcmp.o
kext/libgcc.a: libgcc/kext/__gcc_bcmp.o
libgcc/kext/_divdi3_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -fexceptions -fnon-call-exceptions -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT -static -fno-pic -fno-exceptions -fno-non-call-exceptions -DL_divdi3 -c $(srcdir)/libgcc2.c -o libgcc/kext/_divdi3_s.o
libgcc/kext/_divdi3.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -fexceptions -fnon-call-exceptions -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT -static -fno-pic -fno-exceptions -fno-non-call-exceptions -DL_divdi3 $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/kext/_divdi3.o
kext/libgcc.a: libgcc/kext/_divdi3.o
kext/libgcc_s.dylib: libgcc/kext/_divdi3_s.o
libgcc/kext/libgcc.map: libgcc/kext/_divdi3_s.o
libgcc/kext/_moddi3_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -fexceptions -fnon-call-exceptions -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT -static -fno-pic -fno-exceptions -fno-non-call-exceptions -DL_moddi3 -c $(srcdir)/libgcc2.c -o libgcc/kext/_moddi3_s.o
libgcc/kext/_moddi3.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -fexceptions -fnon-call-exceptions -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT -static -fno-pic -fno-exceptions -fno-non-call-exceptions -DL_moddi3 $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/kext/_moddi3.o
kext/libgcc.a: libgcc/kext/_moddi3.o
kext/libgcc_s.dylib: libgcc/kext/_moddi3_s.o
libgcc/kext/libgcc.map: libgcc/kext/_moddi3_s.o
libgcc/kext/_udivdi3_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -fexceptions -fnon-call-exceptions -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT -static -fno-pic -fno-exceptions -fno-non-call-exceptions -DL_udivdi3 -c $(srcdir)/libgcc2.c -o libgcc/kext/_udivdi3_s.o
libgcc/kext/_udivdi3.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -fexceptions -fnon-call-exceptions -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT -static -fno-pic -fno-exceptions -fno-non-call-exceptions -DL_udivdi3 $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/kext/_udivdi3.o
kext/libgcc.a: libgcc/kext/_udivdi3.o
kext/libgcc_s.dylib: libgcc/kext/_udivdi3_s.o
libgcc/kext/libgcc.map: libgcc/kext/_udivdi3_s.o
libgcc/kext/_umoddi3_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -fexceptions -fnon-call-exceptions -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT -static -fno-pic -fno-exceptions -fno-non-call-exceptions -DL_umoddi3 -c $(srcdir)/libgcc2.c -o libgcc/kext/_umoddi3_s.o
libgcc/kext/_umoddi3.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -fexceptions -fnon-call-exceptions -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT -static -fno-pic -fno-exceptions -fno-non-call-exceptions -DL_umoddi3 $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/kext/_umoddi3.o
kext/libgcc.a: libgcc/kext/_umoddi3.o
kext/libgcc_s.dylib: libgcc/kext/_umoddi3_s.o
libgcc/kext/libgcc.map: libgcc/kext/_umoddi3_s.o
libgcc/kext/_udiv_w_sdiv_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -fexceptions -fnon-call-exceptions -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT -static -fno-pic -fno-exceptions -fno-non-call-exceptions -DL_udiv_w_sdiv -c $(srcdir)/libgcc2.c -o libgcc/kext/_udiv_w_sdiv_s.o
libgcc/kext/_udiv_w_sdiv.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -fexceptions -fnon-call-exceptions -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT -static -fno-pic -fno-exceptions -fno-non-call-exceptions -DL_udiv_w_sdiv $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/kext/_udiv_w_sdiv.o
kext/libgcc.a: libgcc/kext/_udiv_w_sdiv.o
kext/libgcc_s.dylib: libgcc/kext/_udiv_w_sdiv_s.o
libgcc/kext/libgcc.map: libgcc/kext/_udiv_w_sdiv_s.o
libgcc/kext/_udivmoddi4_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -fexceptions -fnon-call-exceptions -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT -static -fno-pic -fno-exceptions -fno-non-call-exceptions -DL_udivmoddi4 -c $(srcdir)/libgcc2.c -o libgcc/kext/_udivmoddi4_s.o
libgcc/kext/_udivmoddi4.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -fexceptions -fnon-call-exceptions -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT -static -fno-pic -fno-exceptions -fno-non-call-exceptions -DL_udivmoddi4 $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/kext/_udivmoddi4.o
kext/libgcc.a: libgcc/kext/_udivmoddi4.o
kext/libgcc_s.dylib: libgcc/kext/_udivmoddi4_s.o
libgcc/kext/libgcc.map: libgcc/kext/_udivmoddi4_s.o
libgcc/kext/darwin-64_s.o: stmp-dirs /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/darwin-64.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT -static -fno-pic -fno-exceptions -fno-non-call-exceptions -c /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/darwin-64.c -o libgcc/kext/darwin-64_s.o
libgcc/kext/darwin-64.o: stmp-dirs /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/darwin-64.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT -static -fno-pic -fno-exceptions -fno-non-call-exceptions $(vis_hide) -c /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/darwin-64.c -o libgcc/kext/darwin-64.o
kext/libgcc.a: libgcc/kext/darwin-64.o
kext/libgcc_s.dylib: libgcc/kext/darwin-64_s.o
libgcc/kext/libgcc.map: libgcc/kext/darwin-64_s.o
libgcc/kext/unwind-dw2.o: stmp-dirs /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/unwind-dw2.c unwind.inc unwind-dw2-fde.h unwind-dw2-fde.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT -static -fno-pic -fno-exceptions -fno-non-call-exceptions -fexceptions $(vis_hide) -c /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/unwind-dw2.c -o libgcc/kext/unwind-dw2.o
kext/libgcc_eh.a: libgcc/kext/unwind-dw2.o
libgcc/kext/unwind-dw2-fde-darwin.o: stmp-dirs /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/unwind-dw2-fde-darwin.c unwind.inc unwind-dw2-fde.h unwind-dw2-fde.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT -static -fno-pic -fno-exceptions -fno-non-call-exceptions -fexceptions $(vis_hide) -c /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/unwind-dw2-fde-darwin.c -o libgcc/kext/unwind-dw2-fde-darwin.o
kext/libgcc_eh.a: libgcc/kext/unwind-dw2-fde-darwin.o
libgcc/kext/unwind-sjlj.o: stmp-dirs /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/unwind-sjlj.c unwind.inc unwind-dw2-fde.h unwind-dw2-fde.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT -static -fno-pic -fno-exceptions -fno-non-call-exceptions -fexceptions $(vis_hide) -c /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/unwind-sjlj.c -o libgcc/kext/unwind-sjlj.o
kext/libgcc_eh.a: libgcc/kext/unwind-sjlj.o
libgcc/kext/unwind-c.o: stmp-dirs /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/unwind-c.c unwind.inc unwind-dw2-fde.h unwind-dw2-fde.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT -static -fno-pic -fno-exceptions -fno-non-call-exceptions -fexceptions $(vis_hide) -c /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/unwind-c.c -o libgcc/kext/unwind-c.o
kext/libgcc_eh.a: libgcc/kext/unwind-c.o
libgcc/kext/unwind-dw2_s.o: stmp-dirs /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/unwind-dw2.c unwind.inc unwind-dw2-fde.h unwind-dw2-fde.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT -static -fno-pic -fno-exceptions -fno-non-call-exceptions -fexceptions -c /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/unwind-dw2.c -o libgcc/kext/unwind-dw2_s.o
kext/libgcc_s.dylib: libgcc/kext/unwind-dw2_s.o
libgcc/kext/libgcc.map: libgcc/kext/unwind-dw2_s.o
libgcc/kext/unwind-dw2-fde-darwin_s.o: stmp-dirs /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/unwind-dw2-fde-darwin.c unwind.inc unwind-dw2-fde.h unwind-dw2-fde.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT -static -fno-pic -fno-exceptions -fno-non-call-exceptions -fexceptions -c /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/unwind-dw2-fde-darwin.c -o libgcc/kext/unwind-dw2-fde-darwin_s.o
kext/libgcc_s.dylib: libgcc/kext/unwind-dw2-fde-darwin_s.o
libgcc/kext/libgcc.map: libgcc/kext/unwind-dw2-fde-darwin_s.o
libgcc/kext/unwind-sjlj_s.o: stmp-dirs /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/unwind-sjlj.c unwind.inc unwind-dw2-fde.h unwind-dw2-fde.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT -static -fno-pic -fno-exceptions -fno-non-call-exceptions -fexceptions -c /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/unwind-sjlj.c -o libgcc/kext/unwind-sjlj_s.o
kext/libgcc_s.dylib: libgcc/kext/unwind-sjlj_s.o
libgcc/kext/libgcc.map: libgcc/kext/unwind-sjlj_s.o
libgcc/kext/unwind-c_s.o: stmp-dirs /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/unwind-c.c unwind.inc unwind-dw2-fde.h unwind-dw2-fde.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT -static -fno-pic -fno-exceptions -fno-non-call-exceptions -fexceptions -c /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/unwind-c.c -o libgcc/kext/unwind-c_s.o
kext/libgcc_s.dylib: libgcc/kext/unwind-c_s.o
libgcc/kext/libgcc.map: libgcc/kext/unwind-c_s.o
libgcc/kext/_gcov.o: stmp-dirs $(srcdir)/libgcov.c $(srcdir)/gcov-io.h $(srcdir)/gcov-io.c gcov-iov.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES)  -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT -static -fno-pic -fno-exceptions -fno-non-call-exceptions -DL_gcov -c $(srcdir)/libgcov.c -o libgcc/kext/_gcov.o
kext/libgcov.a: libgcc/kext/_gcov.o
libgcc/kext/_gcov_merge_add.o: stmp-dirs $(srcdir)/libgcov.c $(srcdir)/gcov-io.h $(srcdir)/gcov-io.c gcov-iov.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES)  -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT -static -fno-pic -fno-exceptions -fno-non-call-exceptions -DL_gcov_merge_add -c $(srcdir)/libgcov.c -o libgcc/kext/_gcov_merge_add.o
kext/libgcov.a: libgcc/kext/_gcov_merge_add.o
libgcc/kext/_gcov_merge_single.o: stmp-dirs $(srcdir)/libgcov.c $(srcdir)/gcov-io.h $(srcdir)/gcov-io.c gcov-iov.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES)  -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT -static -fno-pic -fno-exceptions -fno-non-call-exceptions -DL_gcov_merge_single -c $(srcdir)/libgcov.c -o libgcc/kext/_gcov_merge_single.o
kext/libgcov.a: libgcc/kext/_gcov_merge_single.o
libgcc/kext/_gcov_merge_delta.o: stmp-dirs $(srcdir)/libgcov.c $(srcdir)/gcov-io.h $(srcdir)/gcov-io.c gcov-iov.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES)  -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT -static -fno-pic -fno-exceptions -fno-non-call-exceptions -DL_gcov_merge_delta -c $(srcdir)/libgcov.c -o libgcc/kext/_gcov_merge_delta.o
kext/libgcov.a: libgcc/kext/_gcov_merge_delta.o
libgcc/kext/_gcov_fork.o: stmp-dirs $(srcdir)/libgcov.c $(srcdir)/gcov-io.h $(srcdir)/gcov-io.c gcov-iov.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES)  -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT -static -fno-pic -fno-exceptions -fno-non-call-exceptions -DL_gcov_fork -c $(srcdir)/libgcov.c -o libgcc/kext/_gcov_fork.o
kext/libgcov.a: libgcc/kext/_gcov_fork.o
libgcc/kext/_gcov_execl.o: stmp-dirs $(srcdir)/libgcov.c $(srcdir)/gcov-io.h $(srcdir)/gcov-io.c gcov-iov.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES)  -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT -static -fno-pic -fno-exceptions -fno-non-call-exceptions -DL_gcov_execl -c $(srcdir)/libgcov.c -o libgcc/kext/_gcov_execl.o
kext/libgcov.a: libgcc/kext/_gcov_execl.o
libgcc/kext/_gcov_execlp.o: stmp-dirs $(srcdir)/libgcov.c $(srcdir)/gcov-io.h $(srcdir)/gcov-io.c gcov-iov.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES)  -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT -static -fno-pic -fno-exceptions -fno-non-call-exceptions -DL_gcov_execlp -c $(srcdir)/libgcov.c -o libgcc/kext/_gcov_execlp.o
kext/libgcov.a: libgcc/kext/_gcov_execlp.o
libgcc/kext/_gcov_execle.o: stmp-dirs $(srcdir)/libgcov.c $(srcdir)/gcov-io.h $(srcdir)/gcov-io.c gcov-iov.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES)  -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT -static -fno-pic -fno-exceptions -fno-non-call-exceptions -DL_gcov_execle -c $(srcdir)/libgcov.c -o libgcc/kext/_gcov_execle.o
kext/libgcov.a: libgcc/kext/_gcov_execle.o
libgcc/kext/_gcov_execv.o: stmp-dirs $(srcdir)/libgcov.c $(srcdir)/gcov-io.h $(srcdir)/gcov-io.c gcov-iov.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES)  -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT -static -fno-pic -fno-exceptions -fno-non-call-exceptions -DL_gcov_execv -c $(srcdir)/libgcov.c -o libgcc/kext/_gcov_execv.o
kext/libgcov.a: libgcc/kext/_gcov_execv.o
libgcc/kext/_gcov_execvp.o: stmp-dirs $(srcdir)/libgcov.c $(srcdir)/gcov-io.h $(srcdir)/gcov-io.c gcov-iov.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES)  -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT -static -fno-pic -fno-exceptions -fno-non-call-exceptions -DL_gcov_execvp -c $(srcdir)/libgcov.c -o libgcc/kext/_gcov_execvp.o
kext/libgcov.a: libgcc/kext/_gcov_execvp.o
libgcc/kext/_gcov_execve.o: stmp-dirs $(srcdir)/libgcov.c $(srcdir)/gcov-io.h $(srcdir)/gcov-io.c gcov-iov.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES)  -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT -static -fno-pic -fno-exceptions -fno-non-call-exceptions -DL_gcov_execve -c $(srcdir)/libgcov.c -o libgcc/kext/_gcov_execve.o
kext/libgcov.a: libgcc/kext/_gcov_execve.o
libgcc/kext/_gcov_interval_profiler.o: stmp-dirs $(srcdir)/libgcov.c $(srcdir)/gcov-io.h $(srcdir)/gcov-io.c gcov-iov.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES)  -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT -static -fno-pic -fno-exceptions -fno-non-call-exceptions -DL_gcov_interval_profiler -c $(srcdir)/libgcov.c -o libgcc/kext/_gcov_interval_profiler.o
kext/libgcov.a: libgcc/kext/_gcov_interval_profiler.o
libgcc/kext/_gcov_pow2_profiler.o: stmp-dirs $(srcdir)/libgcov.c $(srcdir)/gcov-io.h $(srcdir)/gcov-io.c gcov-iov.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES)  -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT -static -fno-pic -fno-exceptions -fno-non-call-exceptions -DL_gcov_pow2_profiler -c $(srcdir)/libgcov.c -o libgcc/kext/_gcov_pow2_profiler.o
kext/libgcov.a: libgcc/kext/_gcov_pow2_profiler.o
libgcc/kext/_gcov_one_value_profiler.o: stmp-dirs $(srcdir)/libgcov.c $(srcdir)/gcov-io.h $(srcdir)/gcov-io.c gcov-iov.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES)  -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT -static -fno-pic -fno-exceptions -fno-non-call-exceptions -DL_gcov_one_value_profiler -c $(srcdir)/libgcov.c -o libgcc/kext/_gcov_one_value_profiler.o
kext/libgcov.a: libgcc/kext/_gcov_one_value_profiler.o

extrakext: stmp-dirs
	$(MAKE) GCC_FOR_TARGET="$(GCC_FOR_TARGET)" \
	  AR_FOR_TARGET="$(AR_FOR_TARGET)" \
	  AR_CREATE_FOR_TARGET="$(AR_CREATE_FOR_TARGET)" \
	  AR_EXTRACT_FOR_TARGET="$(AR_EXTRACT_FOR_TARGET)" \
	  AR_FLAGS_FOR_TARGET="$(AR_FLAGS_FOR_TARGET)" \
	  CC="$(CC)" CFLAGS="$(CFLAGS)" \
	  BUILD_PREFIX="$(BUILD_PREFIX)" \
	  BUILD_PREFIX_1="$(BUILD_PREFIX_1)" \
	  LANGUAGES="$(LANGUAGES)" \
	  LIBGCC2_CFLAGS="$(LIBGCC2_CFLAGS) -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT -static -fno-pic -fno-exceptions -fno-non-call-exceptions "  \
	  LIBGCC2_STATIC_CFLAGS="$(LIBGCC2_STATIC_CFLAGS)"  \
	  MULTILIB_CFLAGS=" -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT -static -fno-pic -fno-exceptions -fno-non-call-exceptions" T=kext/ kext/crt3.o
all: extrakext
kext/libgcc_s.dylib: extrakext

libgcc/kext/libgcc.map: /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/mkmap-flat.awk /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/libgcc-std.ver
	{ $(NM_FOR_TARGET) -pg $(objects); echo %%; \
	  cat /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/libgcc-std.ver \
	    | sed -e '/^[   ]*#/d' \
	          -e 's/^%\(if\|else\|elif\|endif\|define\)/#\1/' \
	    | $(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES)  -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT -static -fno-pic -fno-exceptions -fno-non-call-exceptions -E -xassembler-with-cpp -; \
	} | $(AWK) -f /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/mkmap-flat.awk -v leading_underscore=1 > libgcc/kext/tmp-libgcc.map
	mv 'libgcc/kext/tmp-libgcc.map' $@
kext/libgcc_s.dylib: libgcc/kext/libgcc.map

kext/libgcc.a: stmp-dirs
	-rm -f kext/libgcc.a
	$(AR_CREATE_FOR_TARGET) kext/libgcc.a $(objects)
	$(RANLIB_FOR_TARGET) kext/libgcc.a
all: kext/libgcc.a

kext/libgcov.a: stmp-dirs
	-rm -f kext/libgcov.a
	$(AR_CREATE_FOR_TARGET) kext/libgcov.a $(objects)
	$(RANLIB_FOR_TARGET) kext/libgcov.a
all: kext/libgcov.a

kext/libgcc_eh.a: stmp-dirs
	-rm -f kext/libgcc_eh.a
	$(AR_CREATE_FOR_TARGET) kext/libgcc_eh.a $(objects)
	$(RANLIB_FOR_TARGET) kext/libgcc_eh.a
all: kext/libgcc_eh.a

#
# ml: kext64;@mkernel@m64@Dmalloc=kern_os_malloc@Dfree=kern_os_free@DLIBCC_KEXT
# dir: kext64
# flags: -mkernel -m64 -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT
# libgcc_a: kext64/libgcc.a
# libgcov_a: kext64/libgcov.a
# libgcc_eh_a: kext64/libgcc_eh.a
# libunwind_a:
#
# shlib_slibdir_qual: /x86_64
# libgcc_s_so: kext64/libgcc_s.dylib
# libunwind_so:
#

dirs += kext64 libgcc/kext64

libgcc/kext64/_get_pc_thunk_ax_s.o: stmp-dirs $(srcdir)/config/$(LIB1ASMSRC)
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -mkernel -m64 -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT -DL_get_pc_thunk_ax -xassembler-with-cpp -c $(srcdir)/config/$(LIB1ASMSRC) -o libgcc/kext64/_get_pc_thunk_ax_s.o
libgcc/kext64/_get_pc_thunk_ax.o: stmp-dirs $(srcdir)/config/$(LIB1ASMSRC) libgcc/kext64/_get_pc_thunk_ax.vis
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -mkernel -m64 -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT -DL_get_pc_thunk_ax -xassembler-with-cpp -c $(srcdir)/config/$(LIB1ASMSRC) -include libgcc/kext64/_get_pc_thunk_ax.vis -o libgcc/kext64/_get_pc_thunk_ax.o
libgcc/kext64/_get_pc_thunk_ax.vis: libgcc/kext64/_get_pc_thunk_ax_s.o; $(gen-hide-list)
kext64/libgcc.a: libgcc/kext64/_get_pc_thunk_ax.o
kext64/libgcc_s.dylib: libgcc/kext64/_get_pc_thunk_ax_s.o
libgcc/kext64/libgcc.map: libgcc/kext64/_get_pc_thunk_ax_s.o
libgcc/kext64/_get_pc_thunk_dx_s.o: stmp-dirs $(srcdir)/config/$(LIB1ASMSRC)
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -mkernel -m64 -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT -DL_get_pc_thunk_dx -xassembler-with-cpp -c $(srcdir)/config/$(LIB1ASMSRC) -o libgcc/kext64/_get_pc_thunk_dx_s.o
libgcc/kext64/_get_pc_thunk_dx.o: stmp-dirs $(srcdir)/config/$(LIB1ASMSRC) libgcc/kext64/_get_pc_thunk_dx.vis
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -mkernel -m64 -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT -DL_get_pc_thunk_dx -xassembler-with-cpp -c $(srcdir)/config/$(LIB1ASMSRC) -include libgcc/kext64/_get_pc_thunk_dx.vis -o libgcc/kext64/_get_pc_thunk_dx.o
libgcc/kext64/_get_pc_thunk_dx.vis: libgcc/kext64/_get_pc_thunk_dx_s.o; $(gen-hide-list)
kext64/libgcc.a: libgcc/kext64/_get_pc_thunk_dx.o
kext64/libgcc_s.dylib: libgcc/kext64/_get_pc_thunk_dx_s.o
libgcc/kext64/libgcc.map: libgcc/kext64/_get_pc_thunk_dx_s.o
libgcc/kext64/_get_pc_thunk_cx_s.o: stmp-dirs $(srcdir)/config/$(LIB1ASMSRC)
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -mkernel -m64 -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT -DL_get_pc_thunk_cx -xassembler-with-cpp -c $(srcdir)/config/$(LIB1ASMSRC) -o libgcc/kext64/_get_pc_thunk_cx_s.o
libgcc/kext64/_get_pc_thunk_cx.o: stmp-dirs $(srcdir)/config/$(LIB1ASMSRC) libgcc/kext64/_get_pc_thunk_cx.vis
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -mkernel -m64 -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT -DL_get_pc_thunk_cx -xassembler-with-cpp -c $(srcdir)/config/$(LIB1ASMSRC) -include libgcc/kext64/_get_pc_thunk_cx.vis -o libgcc/kext64/_get_pc_thunk_cx.o
libgcc/kext64/_get_pc_thunk_cx.vis: libgcc/kext64/_get_pc_thunk_cx_s.o; $(gen-hide-list)
kext64/libgcc.a: libgcc/kext64/_get_pc_thunk_cx.o
kext64/libgcc_s.dylib: libgcc/kext64/_get_pc_thunk_cx_s.o
libgcc/kext64/libgcc.map: libgcc/kext64/_get_pc_thunk_cx_s.o
libgcc/kext64/_get_pc_thunk_bx_s.o: stmp-dirs $(srcdir)/config/$(LIB1ASMSRC)
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -mkernel -m64 -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT -DL_get_pc_thunk_bx -xassembler-with-cpp -c $(srcdir)/config/$(LIB1ASMSRC) -o libgcc/kext64/_get_pc_thunk_bx_s.o
libgcc/kext64/_get_pc_thunk_bx.o: stmp-dirs $(srcdir)/config/$(LIB1ASMSRC) libgcc/kext64/_get_pc_thunk_bx.vis
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -mkernel -m64 -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT -DL_get_pc_thunk_bx -xassembler-with-cpp -c $(srcdir)/config/$(LIB1ASMSRC) -include libgcc/kext64/_get_pc_thunk_bx.vis -o libgcc/kext64/_get_pc_thunk_bx.o
libgcc/kext64/_get_pc_thunk_bx.vis: libgcc/kext64/_get_pc_thunk_bx_s.o; $(gen-hide-list)
kext64/libgcc.a: libgcc/kext64/_get_pc_thunk_bx.o
kext64/libgcc_s.dylib: libgcc/kext64/_get_pc_thunk_bx_s.o
libgcc/kext64/libgcc.map: libgcc/kext64/_get_pc_thunk_bx_s.o
libgcc/kext64/_get_pc_thunk_si_s.o: stmp-dirs $(srcdir)/config/$(LIB1ASMSRC)
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -mkernel -m64 -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT -DL_get_pc_thunk_si -xassembler-with-cpp -c $(srcdir)/config/$(LIB1ASMSRC) -o libgcc/kext64/_get_pc_thunk_si_s.o
libgcc/kext64/_get_pc_thunk_si.o: stmp-dirs $(srcdir)/config/$(LIB1ASMSRC) libgcc/kext64/_get_pc_thunk_si.vis
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -mkernel -m64 -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT -DL_get_pc_thunk_si -xassembler-with-cpp -c $(srcdir)/config/$(LIB1ASMSRC) -include libgcc/kext64/_get_pc_thunk_si.vis -o libgcc/kext64/_get_pc_thunk_si.o
libgcc/kext64/_get_pc_thunk_si.vis: libgcc/kext64/_get_pc_thunk_si_s.o; $(gen-hide-list)
kext64/libgcc.a: libgcc/kext64/_get_pc_thunk_si.o
kext64/libgcc_s.dylib: libgcc/kext64/_get_pc_thunk_si_s.o
libgcc/kext64/libgcc.map: libgcc/kext64/_get_pc_thunk_si_s.o
libgcc/kext64/_get_pc_thunk_di_s.o: stmp-dirs $(srcdir)/config/$(LIB1ASMSRC)
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -mkernel -m64 -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT -DL_get_pc_thunk_di -xassembler-with-cpp -c $(srcdir)/config/$(LIB1ASMSRC) -o libgcc/kext64/_get_pc_thunk_di_s.o
libgcc/kext64/_get_pc_thunk_di.o: stmp-dirs $(srcdir)/config/$(LIB1ASMSRC) libgcc/kext64/_get_pc_thunk_di.vis
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -mkernel -m64 -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT -DL_get_pc_thunk_di -xassembler-with-cpp -c $(srcdir)/config/$(LIB1ASMSRC) -include libgcc/kext64/_get_pc_thunk_di.vis -o libgcc/kext64/_get_pc_thunk_di.o
libgcc/kext64/_get_pc_thunk_di.vis: libgcc/kext64/_get_pc_thunk_di_s.o; $(gen-hide-list)
kext64/libgcc.a: libgcc/kext64/_get_pc_thunk_di.o
kext64/libgcc_s.dylib: libgcc/kext64/_get_pc_thunk_di_s.o
libgcc/kext64/libgcc.map: libgcc/kext64/_get_pc_thunk_di_s.o
libgcc/kext64/_get_pc_thunk_bp_s.o: stmp-dirs $(srcdir)/config/$(LIB1ASMSRC)
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -mkernel -m64 -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT -DL_get_pc_thunk_bp -xassembler-with-cpp -c $(srcdir)/config/$(LIB1ASMSRC) -o libgcc/kext64/_get_pc_thunk_bp_s.o
libgcc/kext64/_get_pc_thunk_bp.o: stmp-dirs $(srcdir)/config/$(LIB1ASMSRC) libgcc/kext64/_get_pc_thunk_bp.vis
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -mkernel -m64 -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT -DL_get_pc_thunk_bp -xassembler-with-cpp -c $(srcdir)/config/$(LIB1ASMSRC) -include libgcc/kext64/_get_pc_thunk_bp.vis -o libgcc/kext64/_get_pc_thunk_bp.o
libgcc/kext64/_get_pc_thunk_bp.vis: libgcc/kext64/_get_pc_thunk_bp_s.o; $(gen-hide-list)
kext64/libgcc.a: libgcc/kext64/_get_pc_thunk_bp.o
kext64/libgcc_s.dylib: libgcc/kext64/_get_pc_thunk_bp_s.o
libgcc/kext64/libgcc.map: libgcc/kext64/_get_pc_thunk_bp_s.o
libgcc/kext64/_muldi3_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -mkernel -m64 -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT -DL_muldi3 -c $(srcdir)/libgcc2.c -o libgcc/kext64/_muldi3_s.o
libgcc/kext64/_muldi3.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -mkernel -m64 -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT -DL_muldi3 $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/kext64/_muldi3.o
kext64/libgcc.a: libgcc/kext64/_muldi3.o
kext64/libgcc_s.dylib: libgcc/kext64/_muldi3_s.o
libgcc/kext64/libgcc.map: libgcc/kext64/_muldi3_s.o
libgcc/kext64/_negdi2_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -mkernel -m64 -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT -DL_negdi2 -c $(srcdir)/libgcc2.c -o libgcc/kext64/_negdi2_s.o
libgcc/kext64/_negdi2.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -mkernel -m64 -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT -DL_negdi2 $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/kext64/_negdi2.o
kext64/libgcc.a: libgcc/kext64/_negdi2.o
kext64/libgcc_s.dylib: libgcc/kext64/_negdi2_s.o
libgcc/kext64/libgcc.map: libgcc/kext64/_negdi2_s.o
libgcc/kext64/_lshrdi3_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -mkernel -m64 -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT -DL_lshrdi3 -c $(srcdir)/libgcc2.c -o libgcc/kext64/_lshrdi3_s.o
libgcc/kext64/_lshrdi3.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -mkernel -m64 -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT -DL_lshrdi3 $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/kext64/_lshrdi3.o
kext64/libgcc.a: libgcc/kext64/_lshrdi3.o
kext64/libgcc_s.dylib: libgcc/kext64/_lshrdi3_s.o
libgcc/kext64/libgcc.map: libgcc/kext64/_lshrdi3_s.o
libgcc/kext64/_ashldi3_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -mkernel -m64 -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT -DL_ashldi3 -c $(srcdir)/libgcc2.c -o libgcc/kext64/_ashldi3_s.o
libgcc/kext64/_ashldi3.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -mkernel -m64 -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT -DL_ashldi3 $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/kext64/_ashldi3.o
kext64/libgcc.a: libgcc/kext64/_ashldi3.o
kext64/libgcc_s.dylib: libgcc/kext64/_ashldi3_s.o
libgcc/kext64/libgcc.map: libgcc/kext64/_ashldi3_s.o
libgcc/kext64/_ashrdi3_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -mkernel -m64 -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT -DL_ashrdi3 -c $(srcdir)/libgcc2.c -o libgcc/kext64/_ashrdi3_s.o
libgcc/kext64/_ashrdi3.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -mkernel -m64 -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT -DL_ashrdi3 $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/kext64/_ashrdi3.o
kext64/libgcc.a: libgcc/kext64/_ashrdi3.o
kext64/libgcc_s.dylib: libgcc/kext64/_ashrdi3_s.o
libgcc/kext64/libgcc.map: libgcc/kext64/_ashrdi3_s.o
libgcc/kext64/_cmpdi2_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -mkernel -m64 -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT -DL_cmpdi2 -c $(srcdir)/libgcc2.c -o libgcc/kext64/_cmpdi2_s.o
libgcc/kext64/_cmpdi2.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -mkernel -m64 -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT -DL_cmpdi2 $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/kext64/_cmpdi2.o
kext64/libgcc.a: libgcc/kext64/_cmpdi2.o
kext64/libgcc_s.dylib: libgcc/kext64/_cmpdi2_s.o
libgcc/kext64/libgcc.map: libgcc/kext64/_cmpdi2_s.o
libgcc/kext64/_ucmpdi2_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -mkernel -m64 -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT -DL_ucmpdi2 -c $(srcdir)/libgcc2.c -o libgcc/kext64/_ucmpdi2_s.o
libgcc/kext64/_ucmpdi2.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -mkernel -m64 -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT -DL_ucmpdi2 $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/kext64/_ucmpdi2.o
kext64/libgcc.a: libgcc/kext64/_ucmpdi2.o
kext64/libgcc_s.dylib: libgcc/kext64/_ucmpdi2_s.o
libgcc/kext64/libgcc.map: libgcc/kext64/_ucmpdi2_s.o
libgcc/kext64/_clear_cache_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -mkernel -m64 -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT -DL_clear_cache -c $(srcdir)/libgcc2.c -o libgcc/kext64/_clear_cache_s.o
libgcc/kext64/_clear_cache.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -mkernel -m64 -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT -DL_clear_cache $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/kext64/_clear_cache.o
kext64/libgcc.a: libgcc/kext64/_clear_cache.o
kext64/libgcc_s.dylib: libgcc/kext64/_clear_cache_s.o
libgcc/kext64/libgcc.map: libgcc/kext64/_clear_cache_s.o
libgcc/kext64/_enable_execute_stack_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -mkernel -m64 -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT -DL_enable_execute_stack -c $(srcdir)/libgcc2.c -o libgcc/kext64/_enable_execute_stack_s.o
libgcc/kext64/_enable_execute_stack.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -mkernel -m64 -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT -DL_enable_execute_stack $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/kext64/_enable_execute_stack.o
kext64/libgcc.a: libgcc/kext64/_enable_execute_stack.o
kext64/libgcc_s.dylib: libgcc/kext64/_enable_execute_stack_s.o
libgcc/kext64/libgcc.map: libgcc/kext64/_enable_execute_stack_s.o
libgcc/kext64/_trampoline_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -mkernel -m64 -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT -DL_trampoline -c $(srcdir)/libgcc2.c -o libgcc/kext64/_trampoline_s.o
libgcc/kext64/_trampoline.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -mkernel -m64 -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT -DL_trampoline $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/kext64/_trampoline.o
kext64/libgcc.a: libgcc/kext64/_trampoline.o
kext64/libgcc_s.dylib: libgcc/kext64/_trampoline_s.o
libgcc/kext64/libgcc.map: libgcc/kext64/_trampoline_s.o
libgcc/kext64/__main_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -mkernel -m64 -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT -DL__main -c $(srcdir)/libgcc2.c -o libgcc/kext64/__main_s.o
libgcc/kext64/__main.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -mkernel -m64 -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT -DL__main $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/kext64/__main.o
kext64/libgcc.a: libgcc/kext64/__main.o
kext64/libgcc_s.dylib: libgcc/kext64/__main_s.o
libgcc/kext64/libgcc.map: libgcc/kext64/__main_s.o
libgcc/kext64/_absvsi2_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -mkernel -m64 -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT -DL_absvsi2 -c $(srcdir)/libgcc2.c -o libgcc/kext64/_absvsi2_s.o
libgcc/kext64/_absvsi2.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -mkernel -m64 -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT -DL_absvsi2 $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/kext64/_absvsi2.o
kext64/libgcc.a: libgcc/kext64/_absvsi2.o
kext64/libgcc_s.dylib: libgcc/kext64/_absvsi2_s.o
libgcc/kext64/libgcc.map: libgcc/kext64/_absvsi2_s.o
libgcc/kext64/_absvdi2_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -mkernel -m64 -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT -DL_absvdi2 -c $(srcdir)/libgcc2.c -o libgcc/kext64/_absvdi2_s.o
libgcc/kext64/_absvdi2.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -mkernel -m64 -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT -DL_absvdi2 $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/kext64/_absvdi2.o
kext64/libgcc.a: libgcc/kext64/_absvdi2.o
kext64/libgcc_s.dylib: libgcc/kext64/_absvdi2_s.o
libgcc/kext64/libgcc.map: libgcc/kext64/_absvdi2_s.o
libgcc/kext64/_addvsi3_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -mkernel -m64 -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT -DL_addvsi3 -c $(srcdir)/libgcc2.c -o libgcc/kext64/_addvsi3_s.o
libgcc/kext64/_addvsi3.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -mkernel -m64 -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT -DL_addvsi3 $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/kext64/_addvsi3.o
kext64/libgcc.a: libgcc/kext64/_addvsi3.o
kext64/libgcc_s.dylib: libgcc/kext64/_addvsi3_s.o
libgcc/kext64/libgcc.map: libgcc/kext64/_addvsi3_s.o
libgcc/kext64/_addvdi3_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -mkernel -m64 -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT -DL_addvdi3 -c $(srcdir)/libgcc2.c -o libgcc/kext64/_addvdi3_s.o
libgcc/kext64/_addvdi3.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -mkernel -m64 -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT -DL_addvdi3 $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/kext64/_addvdi3.o
kext64/libgcc.a: libgcc/kext64/_addvdi3.o
kext64/libgcc_s.dylib: libgcc/kext64/_addvdi3_s.o
libgcc/kext64/libgcc.map: libgcc/kext64/_addvdi3_s.o
libgcc/kext64/_subvsi3_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -mkernel -m64 -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT -DL_subvsi3 -c $(srcdir)/libgcc2.c -o libgcc/kext64/_subvsi3_s.o
libgcc/kext64/_subvsi3.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -mkernel -m64 -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT -DL_subvsi3 $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/kext64/_subvsi3.o
kext64/libgcc.a: libgcc/kext64/_subvsi3.o
kext64/libgcc_s.dylib: libgcc/kext64/_subvsi3_s.o
libgcc/kext64/libgcc.map: libgcc/kext64/_subvsi3_s.o
libgcc/kext64/_subvdi3_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -mkernel -m64 -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT -DL_subvdi3 -c $(srcdir)/libgcc2.c -o libgcc/kext64/_subvdi3_s.o
libgcc/kext64/_subvdi3.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -mkernel -m64 -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT -DL_subvdi3 $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/kext64/_subvdi3.o
kext64/libgcc.a: libgcc/kext64/_subvdi3.o
kext64/libgcc_s.dylib: libgcc/kext64/_subvdi3_s.o
libgcc/kext64/libgcc.map: libgcc/kext64/_subvdi3_s.o
libgcc/kext64/_mulvsi3_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -mkernel -m64 -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT -DL_mulvsi3 -c $(srcdir)/libgcc2.c -o libgcc/kext64/_mulvsi3_s.o
libgcc/kext64/_mulvsi3.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -mkernel -m64 -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT -DL_mulvsi3 $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/kext64/_mulvsi3.o
kext64/libgcc.a: libgcc/kext64/_mulvsi3.o
kext64/libgcc_s.dylib: libgcc/kext64/_mulvsi3_s.o
libgcc/kext64/libgcc.map: libgcc/kext64/_mulvsi3_s.o
libgcc/kext64/_mulvdi3_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -mkernel -m64 -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT -DL_mulvdi3 -c $(srcdir)/libgcc2.c -o libgcc/kext64/_mulvdi3_s.o
libgcc/kext64/_mulvdi3.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -mkernel -m64 -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT -DL_mulvdi3 $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/kext64/_mulvdi3.o
kext64/libgcc.a: libgcc/kext64/_mulvdi3.o
kext64/libgcc_s.dylib: libgcc/kext64/_mulvdi3_s.o
libgcc/kext64/libgcc.map: libgcc/kext64/_mulvdi3_s.o
libgcc/kext64/_negvsi2_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -mkernel -m64 -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT -DL_negvsi2 -c $(srcdir)/libgcc2.c -o libgcc/kext64/_negvsi2_s.o
libgcc/kext64/_negvsi2.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -mkernel -m64 -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT -DL_negvsi2 $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/kext64/_negvsi2.o
kext64/libgcc.a: libgcc/kext64/_negvsi2.o
kext64/libgcc_s.dylib: libgcc/kext64/_negvsi2_s.o
libgcc/kext64/libgcc.map: libgcc/kext64/_negvsi2_s.o
libgcc/kext64/_negvdi2_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -mkernel -m64 -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT -DL_negvdi2 -c $(srcdir)/libgcc2.c -o libgcc/kext64/_negvdi2_s.o
libgcc/kext64/_negvdi2.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -mkernel -m64 -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT -DL_negvdi2 $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/kext64/_negvdi2.o
kext64/libgcc.a: libgcc/kext64/_negvdi2.o
kext64/libgcc_s.dylib: libgcc/kext64/_negvdi2_s.o
libgcc/kext64/libgcc.map: libgcc/kext64/_negvdi2_s.o
libgcc/kext64/_ctors_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -mkernel -m64 -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT -DL_ctors -c $(srcdir)/libgcc2.c -o libgcc/kext64/_ctors_s.o
libgcc/kext64/_ctors.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -mkernel -m64 -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT -DL_ctors $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/kext64/_ctors.o
kext64/libgcc.a: libgcc/kext64/_ctors.o
kext64/libgcc_s.dylib: libgcc/kext64/_ctors_s.o
libgcc/kext64/libgcc.map: libgcc/kext64/_ctors_s.o
libgcc/kext64/_ffssi2_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -mkernel -m64 -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT -DL_ffssi2 -c $(srcdir)/libgcc2.c -o libgcc/kext64/_ffssi2_s.o
libgcc/kext64/_ffssi2.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -mkernel -m64 -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT -DL_ffssi2 $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/kext64/_ffssi2.o
kext64/libgcc.a: libgcc/kext64/_ffssi2.o
kext64/libgcc_s.dylib: libgcc/kext64/_ffssi2_s.o
libgcc/kext64/libgcc.map: libgcc/kext64/_ffssi2_s.o
libgcc/kext64/_ffsdi2_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -mkernel -m64 -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT -DL_ffsdi2 -c $(srcdir)/libgcc2.c -o libgcc/kext64/_ffsdi2_s.o
libgcc/kext64/_ffsdi2.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -mkernel -m64 -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT -DL_ffsdi2 $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/kext64/_ffsdi2.o
kext64/libgcc.a: libgcc/kext64/_ffsdi2.o
kext64/libgcc_s.dylib: libgcc/kext64/_ffsdi2_s.o
libgcc/kext64/libgcc.map: libgcc/kext64/_ffsdi2_s.o
libgcc/kext64/_clz_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -mkernel -m64 -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT -DL_clz -c $(srcdir)/libgcc2.c -o libgcc/kext64/_clz_s.o
libgcc/kext64/_clz.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -mkernel -m64 -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT -DL_clz $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/kext64/_clz.o
kext64/libgcc.a: libgcc/kext64/_clz.o
kext64/libgcc_s.dylib: libgcc/kext64/_clz_s.o
libgcc/kext64/libgcc.map: libgcc/kext64/_clz_s.o
libgcc/kext64/_clzsi2_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -mkernel -m64 -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT -DL_clzsi2 -c $(srcdir)/libgcc2.c -o libgcc/kext64/_clzsi2_s.o
libgcc/kext64/_clzsi2.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -mkernel -m64 -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT -DL_clzsi2 $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/kext64/_clzsi2.o
kext64/libgcc.a: libgcc/kext64/_clzsi2.o
kext64/libgcc_s.dylib: libgcc/kext64/_clzsi2_s.o
libgcc/kext64/libgcc.map: libgcc/kext64/_clzsi2_s.o
libgcc/kext64/_clzdi2_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -mkernel -m64 -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT -DL_clzdi2 -c $(srcdir)/libgcc2.c -o libgcc/kext64/_clzdi2_s.o
libgcc/kext64/_clzdi2.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -mkernel -m64 -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT -DL_clzdi2 $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/kext64/_clzdi2.o
kext64/libgcc.a: libgcc/kext64/_clzdi2.o
kext64/libgcc_s.dylib: libgcc/kext64/_clzdi2_s.o
libgcc/kext64/libgcc.map: libgcc/kext64/_clzdi2_s.o
libgcc/kext64/_ctzsi2_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -mkernel -m64 -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT -DL_ctzsi2 -c $(srcdir)/libgcc2.c -o libgcc/kext64/_ctzsi2_s.o
libgcc/kext64/_ctzsi2.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -mkernel -m64 -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT -DL_ctzsi2 $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/kext64/_ctzsi2.o
kext64/libgcc.a: libgcc/kext64/_ctzsi2.o
kext64/libgcc_s.dylib: libgcc/kext64/_ctzsi2_s.o
libgcc/kext64/libgcc.map: libgcc/kext64/_ctzsi2_s.o
libgcc/kext64/_ctzdi2_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -mkernel -m64 -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT -DL_ctzdi2 -c $(srcdir)/libgcc2.c -o libgcc/kext64/_ctzdi2_s.o
libgcc/kext64/_ctzdi2.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -mkernel -m64 -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT -DL_ctzdi2 $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/kext64/_ctzdi2.o
kext64/libgcc.a: libgcc/kext64/_ctzdi2.o
kext64/libgcc_s.dylib: libgcc/kext64/_ctzdi2_s.o
libgcc/kext64/libgcc.map: libgcc/kext64/_ctzdi2_s.o
libgcc/kext64/_popcount_tab_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -mkernel -m64 -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT -DL_popcount_tab -c $(srcdir)/libgcc2.c -o libgcc/kext64/_popcount_tab_s.o
libgcc/kext64/_popcount_tab.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -mkernel -m64 -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT -DL_popcount_tab $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/kext64/_popcount_tab.o
kext64/libgcc.a: libgcc/kext64/_popcount_tab.o
kext64/libgcc_s.dylib: libgcc/kext64/_popcount_tab_s.o
libgcc/kext64/libgcc.map: libgcc/kext64/_popcount_tab_s.o
libgcc/kext64/_popcountsi2_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -mkernel -m64 -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT -DL_popcountsi2 -c $(srcdir)/libgcc2.c -o libgcc/kext64/_popcountsi2_s.o
libgcc/kext64/_popcountsi2.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -mkernel -m64 -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT -DL_popcountsi2 $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/kext64/_popcountsi2.o
kext64/libgcc.a: libgcc/kext64/_popcountsi2.o
kext64/libgcc_s.dylib: libgcc/kext64/_popcountsi2_s.o
libgcc/kext64/libgcc.map: libgcc/kext64/_popcountsi2_s.o
libgcc/kext64/_popcountdi2_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -mkernel -m64 -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT -DL_popcountdi2 -c $(srcdir)/libgcc2.c -o libgcc/kext64/_popcountdi2_s.o
libgcc/kext64/_popcountdi2.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -mkernel -m64 -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT -DL_popcountdi2 $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/kext64/_popcountdi2.o
kext64/libgcc.a: libgcc/kext64/_popcountdi2.o
kext64/libgcc_s.dylib: libgcc/kext64/_popcountdi2_s.o
libgcc/kext64/libgcc.map: libgcc/kext64/_popcountdi2_s.o
libgcc/kext64/_paritysi2_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -mkernel -m64 -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT -DL_paritysi2 -c $(srcdir)/libgcc2.c -o libgcc/kext64/_paritysi2_s.o
libgcc/kext64/_paritysi2.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -mkernel -m64 -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT -DL_paritysi2 $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/kext64/_paritysi2.o
kext64/libgcc.a: libgcc/kext64/_paritysi2.o
kext64/libgcc_s.dylib: libgcc/kext64/_paritysi2_s.o
libgcc/kext64/libgcc.map: libgcc/kext64/_paritysi2_s.o
libgcc/kext64/_paritydi2_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -mkernel -m64 -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT -DL_paritydi2 -c $(srcdir)/libgcc2.c -o libgcc/kext64/_paritydi2_s.o
libgcc/kext64/_paritydi2.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -mkernel -m64 -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT -DL_paritydi2 $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/kext64/_paritydi2.o
kext64/libgcc.a: libgcc/kext64/_paritydi2.o
kext64/libgcc_s.dylib: libgcc/kext64/_paritydi2_s.o
libgcc/kext64/libgcc.map: libgcc/kext64/_paritydi2_s.o
libgcc/kext64/_powisf2_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -mkernel -m64 -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT -DL_powisf2 -c $(srcdir)/libgcc2.c -o libgcc/kext64/_powisf2_s.o
libgcc/kext64/_powisf2.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -mkernel -m64 -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT -DL_powisf2 $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/kext64/_powisf2.o
kext64/libgcc.a: libgcc/kext64/_powisf2.o
kext64/libgcc_s.dylib: libgcc/kext64/_powisf2_s.o
libgcc/kext64/libgcc.map: libgcc/kext64/_powisf2_s.o
libgcc/kext64/_powidf2_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -mkernel -m64 -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT -DL_powidf2 -c $(srcdir)/libgcc2.c -o libgcc/kext64/_powidf2_s.o
libgcc/kext64/_powidf2.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -mkernel -m64 -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT -DL_powidf2 $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/kext64/_powidf2.o
kext64/libgcc.a: libgcc/kext64/_powidf2.o
kext64/libgcc_s.dylib: libgcc/kext64/_powidf2_s.o
libgcc/kext64/libgcc.map: libgcc/kext64/_powidf2_s.o
libgcc/kext64/_powixf2_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -mkernel -m64 -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT -DL_powixf2 -c $(srcdir)/libgcc2.c -o libgcc/kext64/_powixf2_s.o
libgcc/kext64/_powixf2.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -mkernel -m64 -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT -DL_powixf2 $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/kext64/_powixf2.o
kext64/libgcc.a: libgcc/kext64/_powixf2.o
kext64/libgcc_s.dylib: libgcc/kext64/_powixf2_s.o
libgcc/kext64/libgcc.map: libgcc/kext64/_powixf2_s.o
libgcc/kext64/_powitf2_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -mkernel -m64 -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT -DL_powitf2 -c $(srcdir)/libgcc2.c -o libgcc/kext64/_powitf2_s.o
libgcc/kext64/_powitf2.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -mkernel -m64 -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT -DL_powitf2 $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/kext64/_powitf2.o
kext64/libgcc.a: libgcc/kext64/_powitf2.o
kext64/libgcc_s.dylib: libgcc/kext64/_powitf2_s.o
libgcc/kext64/libgcc.map: libgcc/kext64/_powitf2_s.o
libgcc/kext64/_mulsc3_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -mkernel -m64 -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT -DL_mulsc3 -c $(srcdir)/libgcc2.c -o libgcc/kext64/_mulsc3_s.o
libgcc/kext64/_mulsc3.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -mkernel -m64 -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT -DL_mulsc3 $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/kext64/_mulsc3.o
kext64/libgcc.a: libgcc/kext64/_mulsc3.o
kext64/libgcc_s.dylib: libgcc/kext64/_mulsc3_s.o
libgcc/kext64/libgcc.map: libgcc/kext64/_mulsc3_s.o
libgcc/kext64/_muldc3_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -mkernel -m64 -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT -DL_muldc3 -c $(srcdir)/libgcc2.c -o libgcc/kext64/_muldc3_s.o
libgcc/kext64/_muldc3.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -mkernel -m64 -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT -DL_muldc3 $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/kext64/_muldc3.o
kext64/libgcc.a: libgcc/kext64/_muldc3.o
kext64/libgcc_s.dylib: libgcc/kext64/_muldc3_s.o
libgcc/kext64/libgcc.map: libgcc/kext64/_muldc3_s.o
libgcc/kext64/_mulxc3_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -mkernel -m64 -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT -DL_mulxc3 -c $(srcdir)/libgcc2.c -o libgcc/kext64/_mulxc3_s.o
libgcc/kext64/_mulxc3.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -mkernel -m64 -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT -DL_mulxc3 $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/kext64/_mulxc3.o
kext64/libgcc.a: libgcc/kext64/_mulxc3.o
kext64/libgcc_s.dylib: libgcc/kext64/_mulxc3_s.o
libgcc/kext64/libgcc.map: libgcc/kext64/_mulxc3_s.o
libgcc/kext64/_multc3_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -mkernel -m64 -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT -DL_multc3 -c $(srcdir)/libgcc2.c -o libgcc/kext64/_multc3_s.o
libgcc/kext64/_multc3.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -mkernel -m64 -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT -DL_multc3 $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/kext64/_multc3.o
kext64/libgcc.a: libgcc/kext64/_multc3.o
kext64/libgcc_s.dylib: libgcc/kext64/_multc3_s.o
libgcc/kext64/libgcc.map: libgcc/kext64/_multc3_s.o
libgcc/kext64/_divsc3_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -mkernel -m64 -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT -DL_divsc3 -c $(srcdir)/libgcc2.c -o libgcc/kext64/_divsc3_s.o
libgcc/kext64/_divsc3.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -mkernel -m64 -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT -DL_divsc3 $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/kext64/_divsc3.o
kext64/libgcc.a: libgcc/kext64/_divsc3.o
kext64/libgcc_s.dylib: libgcc/kext64/_divsc3_s.o
libgcc/kext64/libgcc.map: libgcc/kext64/_divsc3_s.o
libgcc/kext64/_divdc3_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -mkernel -m64 -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT -DL_divdc3 -c $(srcdir)/libgcc2.c -o libgcc/kext64/_divdc3_s.o
libgcc/kext64/_divdc3.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -mkernel -m64 -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT -DL_divdc3 $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/kext64/_divdc3.o
kext64/libgcc.a: libgcc/kext64/_divdc3.o
kext64/libgcc_s.dylib: libgcc/kext64/_divdc3_s.o
libgcc/kext64/libgcc.map: libgcc/kext64/_divdc3_s.o
libgcc/kext64/_divxc3_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -mkernel -m64 -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT -DL_divxc3 -c $(srcdir)/libgcc2.c -o libgcc/kext64/_divxc3_s.o
libgcc/kext64/_divxc3.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -mkernel -m64 -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT -DL_divxc3 $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/kext64/_divxc3.o
kext64/libgcc.a: libgcc/kext64/_divxc3.o
kext64/libgcc_s.dylib: libgcc/kext64/_divxc3_s.o
libgcc/kext64/libgcc.map: libgcc/kext64/_divxc3_s.o
libgcc/kext64/_divtc3_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -mkernel -m64 -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT -DL_divtc3 -c $(srcdir)/libgcc2.c -o libgcc/kext64/_divtc3_s.o
libgcc/kext64/_divtc3.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -mkernel -m64 -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT -DL_divtc3 $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/kext64/_divtc3.o
kext64/libgcc.a: libgcc/kext64/_divtc3.o
kext64/libgcc_s.dylib: libgcc/kext64/_divtc3_s.o
libgcc/kext64/libgcc.map: libgcc/kext64/_divtc3_s.o
libgcc/kext64/_bswapsi2_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -mkernel -m64 -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT -DL_bswapsi2 -c $(srcdir)/libgcc2.c -o libgcc/kext64/_bswapsi2_s.o
libgcc/kext64/_bswapsi2.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -mkernel -m64 -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT -DL_bswapsi2 $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/kext64/_bswapsi2.o
kext64/libgcc.a: libgcc/kext64/_bswapsi2.o
kext64/libgcc_s.dylib: libgcc/kext64/_bswapsi2_s.o
libgcc/kext64/libgcc.map: libgcc/kext64/_bswapsi2_s.o
libgcc/kext64/_bswapdi2_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -mkernel -m64 -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT -DL_bswapdi2 -c $(srcdir)/libgcc2.c -o libgcc/kext64/_bswapdi2_s.o
libgcc/kext64/_bswapdi2.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -mkernel -m64 -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT -DL_bswapdi2 $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/kext64/_bswapdi2.o
kext64/libgcc.a: libgcc/kext64/_bswapdi2.o
kext64/libgcc_s.dylib: libgcc/kext64/_bswapdi2_s.o
libgcc/kext64/libgcc.map: libgcc/kext64/_bswapdi2_s.o
libgcc/kext64/_fixunssfsi_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -mkernel -m64 -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT -DL_fixunssfsi -DLIBGCC2_UNITS_PER_WORD=4 -c $(srcdir)/libgcc2.c -o libgcc/kext64/_fixunssfsi_s.o
libgcc/kext64/_fixunssfsi.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -mkernel -m64 -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT -DL_fixunssfsi -DLIBGCC2_UNITS_PER_WORD=4 $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/kext64/_fixunssfsi.o
kext64/libgcc.a: libgcc/kext64/_fixunssfsi.o
kext64/libgcc_s.dylib: libgcc/kext64/_fixunssfsi_s.o
libgcc/kext64/libgcc.map: libgcc/kext64/_fixunssfsi_s.o
libgcc/kext64/_fixunsdfsi_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -mkernel -m64 -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT -DL_fixunsdfsi -DLIBGCC2_UNITS_PER_WORD=4 -c $(srcdir)/libgcc2.c -o libgcc/kext64/_fixunsdfsi_s.o
libgcc/kext64/_fixunsdfsi.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -mkernel -m64 -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT -DL_fixunsdfsi -DLIBGCC2_UNITS_PER_WORD=4 $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/kext64/_fixunsdfsi.o
kext64/libgcc.a: libgcc/kext64/_fixunsdfsi.o
kext64/libgcc_s.dylib: libgcc/kext64/_fixunsdfsi_s.o
libgcc/kext64/libgcc.map: libgcc/kext64/_fixunsdfsi_s.o
libgcc/kext64/_fixunsxfsi_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -mkernel -m64 -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT -DL_fixunsxfsi -DLIBGCC2_UNITS_PER_WORD=4 -c $(srcdir)/libgcc2.c -o libgcc/kext64/_fixunsxfsi_s.o
libgcc/kext64/_fixunsxfsi.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -mkernel -m64 -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT -DL_fixunsxfsi -DLIBGCC2_UNITS_PER_WORD=4 $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/kext64/_fixunsxfsi.o
kext64/libgcc.a: libgcc/kext64/_fixunsxfsi.o
kext64/libgcc_s.dylib: libgcc/kext64/_fixunsxfsi_s.o
libgcc/kext64/libgcc.map: libgcc/kext64/_fixunsxfsi_s.o
libgcc/kext64/_fixsfdi_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -mkernel -m64 -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT -DL_fixsfdi -DLIBGCC2_UNITS_PER_WORD=4 -c $(srcdir)/libgcc2.c -o libgcc/kext64/_fixsfdi_s.o
libgcc/kext64/_fixsfdi.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -mkernel -m64 -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT -DL_fixsfdi -DLIBGCC2_UNITS_PER_WORD=4 $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/kext64/_fixsfdi.o
kext64/libgcc.a: libgcc/kext64/_fixsfdi.o
kext64/libgcc_s.dylib: libgcc/kext64/_fixsfdi_s.o
libgcc/kext64/libgcc.map: libgcc/kext64/_fixsfdi_s.o
libgcc/kext64/_fixsfti_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -mkernel -m64 -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT -DL_fixsfdi -DLIBGCC2_UNITS_PER_WORD=8 -c $(srcdir)/libgcc2.c -o libgcc/kext64/_fixsfti_s.o
libgcc/kext64/_fixsfti.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -mkernel -m64 -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT -DL_fixsfdi -DLIBGCC2_UNITS_PER_WORD=8 $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/kext64/_fixsfti.o
kext64/libgcc.a: libgcc/kext64/_fixsfti.o
kext64/libgcc_s.dylib: libgcc/kext64/_fixsfti_s.o
libgcc/kext64/libgcc.map: libgcc/kext64/_fixsfti_s.o
libgcc/kext64/_fixunssfdi_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -mkernel -m64 -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT -DL_fixunssfdi -DLIBGCC2_UNITS_PER_WORD=4 -c $(srcdir)/libgcc2.c -o libgcc/kext64/_fixunssfdi_s.o
libgcc/kext64/_fixunssfdi.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -mkernel -m64 -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT -DL_fixunssfdi -DLIBGCC2_UNITS_PER_WORD=4 $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/kext64/_fixunssfdi.o
kext64/libgcc.a: libgcc/kext64/_fixunssfdi.o
kext64/libgcc_s.dylib: libgcc/kext64/_fixunssfdi_s.o
libgcc/kext64/libgcc.map: libgcc/kext64/_fixunssfdi_s.o
libgcc/kext64/_fixunssfti_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -mkernel -m64 -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT -DL_fixunssfdi -DLIBGCC2_UNITS_PER_WORD=8 -c $(srcdir)/libgcc2.c -o libgcc/kext64/_fixunssfti_s.o
libgcc/kext64/_fixunssfti.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -mkernel -m64 -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT -DL_fixunssfdi -DLIBGCC2_UNITS_PER_WORD=8 $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/kext64/_fixunssfti.o
kext64/libgcc.a: libgcc/kext64/_fixunssfti.o
kext64/libgcc_s.dylib: libgcc/kext64/_fixunssfti_s.o
libgcc/kext64/libgcc.map: libgcc/kext64/_fixunssfti_s.o
libgcc/kext64/_floatdisf_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -mkernel -m64 -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT -DL_floatdisf -DLIBGCC2_UNITS_PER_WORD=4 -c $(srcdir)/libgcc2.c -o libgcc/kext64/_floatdisf_s.o
libgcc/kext64/_floatdisf.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -mkernel -m64 -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT -DL_floatdisf -DLIBGCC2_UNITS_PER_WORD=4 $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/kext64/_floatdisf.o
kext64/libgcc.a: libgcc/kext64/_floatdisf.o
kext64/libgcc_s.dylib: libgcc/kext64/_floatdisf_s.o
libgcc/kext64/libgcc.map: libgcc/kext64/_floatdisf_s.o
libgcc/kext64/_floattisf_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -mkernel -m64 -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT -DL_floatdisf -DLIBGCC2_UNITS_PER_WORD=8 -c $(srcdir)/libgcc2.c -o libgcc/kext64/_floattisf_s.o
libgcc/kext64/_floattisf.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -mkernel -m64 -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT -DL_floatdisf -DLIBGCC2_UNITS_PER_WORD=8 $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/kext64/_floattisf.o
kext64/libgcc.a: libgcc/kext64/_floattisf.o
kext64/libgcc_s.dylib: libgcc/kext64/_floattisf_s.o
libgcc/kext64/libgcc.map: libgcc/kext64/_floattisf_s.o
libgcc/kext64/_floatundisf_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -mkernel -m64 -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT -DL_floatundisf -DLIBGCC2_UNITS_PER_WORD=4 -c $(srcdir)/libgcc2.c -o libgcc/kext64/_floatundisf_s.o
libgcc/kext64/_floatundisf.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -mkernel -m64 -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT -DL_floatundisf -DLIBGCC2_UNITS_PER_WORD=4 $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/kext64/_floatundisf.o
kext64/libgcc.a: libgcc/kext64/_floatundisf.o
kext64/libgcc_s.dylib: libgcc/kext64/_floatundisf_s.o
libgcc/kext64/libgcc.map: libgcc/kext64/_floatundisf_s.o
libgcc/kext64/_floatuntisf_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -mkernel -m64 -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT -DL_floatundisf -DLIBGCC2_UNITS_PER_WORD=8 -c $(srcdir)/libgcc2.c -o libgcc/kext64/_floatuntisf_s.o
libgcc/kext64/_floatuntisf.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -mkernel -m64 -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT -DL_floatundisf -DLIBGCC2_UNITS_PER_WORD=8 $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/kext64/_floatuntisf.o
kext64/libgcc.a: libgcc/kext64/_floatuntisf.o
kext64/libgcc_s.dylib: libgcc/kext64/_floatuntisf_s.o
libgcc/kext64/libgcc.map: libgcc/kext64/_floatuntisf_s.o
libgcc/kext64/_fixdfdi_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -mkernel -m64 -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT -DL_fixdfdi -DLIBGCC2_UNITS_PER_WORD=4 -c $(srcdir)/libgcc2.c -o libgcc/kext64/_fixdfdi_s.o
libgcc/kext64/_fixdfdi.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -mkernel -m64 -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT -DL_fixdfdi -DLIBGCC2_UNITS_PER_WORD=4 $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/kext64/_fixdfdi.o
kext64/libgcc.a: libgcc/kext64/_fixdfdi.o
kext64/libgcc_s.dylib: libgcc/kext64/_fixdfdi_s.o
libgcc/kext64/libgcc.map: libgcc/kext64/_fixdfdi_s.o
libgcc/kext64/_fixdfti_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -mkernel -m64 -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT -DL_fixdfdi -DLIBGCC2_UNITS_PER_WORD=8 -c $(srcdir)/libgcc2.c -o libgcc/kext64/_fixdfti_s.o
libgcc/kext64/_fixdfti.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -mkernel -m64 -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT -DL_fixdfdi -DLIBGCC2_UNITS_PER_WORD=8 $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/kext64/_fixdfti.o
kext64/libgcc.a: libgcc/kext64/_fixdfti.o
kext64/libgcc_s.dylib: libgcc/kext64/_fixdfti_s.o
libgcc/kext64/libgcc.map: libgcc/kext64/_fixdfti_s.o
libgcc/kext64/_fixunsdfdi_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -mkernel -m64 -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT -DL_fixunsdfdi -DLIBGCC2_UNITS_PER_WORD=4 -c $(srcdir)/libgcc2.c -o libgcc/kext64/_fixunsdfdi_s.o
libgcc/kext64/_fixunsdfdi.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -mkernel -m64 -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT -DL_fixunsdfdi -DLIBGCC2_UNITS_PER_WORD=4 $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/kext64/_fixunsdfdi.o
kext64/libgcc.a: libgcc/kext64/_fixunsdfdi.o
kext64/libgcc_s.dylib: libgcc/kext64/_fixunsdfdi_s.o
libgcc/kext64/libgcc.map: libgcc/kext64/_fixunsdfdi_s.o
libgcc/kext64/_fixunsdfti_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -mkernel -m64 -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT -DL_fixunsdfdi -DLIBGCC2_UNITS_PER_WORD=8 -c $(srcdir)/libgcc2.c -o libgcc/kext64/_fixunsdfti_s.o
libgcc/kext64/_fixunsdfti.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -mkernel -m64 -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT -DL_fixunsdfdi -DLIBGCC2_UNITS_PER_WORD=8 $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/kext64/_fixunsdfti.o
kext64/libgcc.a: libgcc/kext64/_fixunsdfti.o
kext64/libgcc_s.dylib: libgcc/kext64/_fixunsdfti_s.o
libgcc/kext64/libgcc.map: libgcc/kext64/_fixunsdfti_s.o
libgcc/kext64/_floatdidf_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -mkernel -m64 -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT -DL_floatdidf -DLIBGCC2_UNITS_PER_WORD=4 -c $(srcdir)/libgcc2.c -o libgcc/kext64/_floatdidf_s.o
libgcc/kext64/_floatdidf.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -mkernel -m64 -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT -DL_floatdidf -DLIBGCC2_UNITS_PER_WORD=4 $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/kext64/_floatdidf.o
kext64/libgcc.a: libgcc/kext64/_floatdidf.o
kext64/libgcc_s.dylib: libgcc/kext64/_floatdidf_s.o
libgcc/kext64/libgcc.map: libgcc/kext64/_floatdidf_s.o
libgcc/kext64/_floattidf_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -mkernel -m64 -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT -DL_floatdidf -DLIBGCC2_UNITS_PER_WORD=8 -c $(srcdir)/libgcc2.c -o libgcc/kext64/_floattidf_s.o
libgcc/kext64/_floattidf.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -mkernel -m64 -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT -DL_floatdidf -DLIBGCC2_UNITS_PER_WORD=8 $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/kext64/_floattidf.o
kext64/libgcc.a: libgcc/kext64/_floattidf.o
kext64/libgcc_s.dylib: libgcc/kext64/_floattidf_s.o
libgcc/kext64/libgcc.map: libgcc/kext64/_floattidf_s.o
libgcc/kext64/_floatundidf_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -mkernel -m64 -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT -DL_floatundidf -DLIBGCC2_UNITS_PER_WORD=4 -c $(srcdir)/libgcc2.c -o libgcc/kext64/_floatundidf_s.o
libgcc/kext64/_floatundidf.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -mkernel -m64 -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT -DL_floatundidf -DLIBGCC2_UNITS_PER_WORD=4 $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/kext64/_floatundidf.o
kext64/libgcc.a: libgcc/kext64/_floatundidf.o
kext64/libgcc_s.dylib: libgcc/kext64/_floatundidf_s.o
libgcc/kext64/libgcc.map: libgcc/kext64/_floatundidf_s.o
libgcc/kext64/_floatuntidf_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -mkernel -m64 -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT -DL_floatundidf -DLIBGCC2_UNITS_PER_WORD=8 -c $(srcdir)/libgcc2.c -o libgcc/kext64/_floatuntidf_s.o
libgcc/kext64/_floatuntidf.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -mkernel -m64 -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT -DL_floatundidf -DLIBGCC2_UNITS_PER_WORD=8 $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/kext64/_floatuntidf.o
kext64/libgcc.a: libgcc/kext64/_floatuntidf.o
kext64/libgcc_s.dylib: libgcc/kext64/_floatuntidf_s.o
libgcc/kext64/libgcc.map: libgcc/kext64/_floatuntidf_s.o
libgcc/kext64/_fixxfdi_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -mkernel -m64 -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT -DL_fixxfdi -DLIBGCC2_UNITS_PER_WORD=4 -c $(srcdir)/libgcc2.c -o libgcc/kext64/_fixxfdi_s.o
libgcc/kext64/_fixxfdi.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -mkernel -m64 -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT -DL_fixxfdi -DLIBGCC2_UNITS_PER_WORD=4 $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/kext64/_fixxfdi.o
kext64/libgcc.a: libgcc/kext64/_fixxfdi.o
kext64/libgcc_s.dylib: libgcc/kext64/_fixxfdi_s.o
libgcc/kext64/libgcc.map: libgcc/kext64/_fixxfdi_s.o
libgcc/kext64/_fixxfti_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -mkernel -m64 -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT -DL_fixxfdi -DLIBGCC2_UNITS_PER_WORD=8 -c $(srcdir)/libgcc2.c -o libgcc/kext64/_fixxfti_s.o
libgcc/kext64/_fixxfti.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -mkernel -m64 -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT -DL_fixxfdi -DLIBGCC2_UNITS_PER_WORD=8 $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/kext64/_fixxfti.o
kext64/libgcc.a: libgcc/kext64/_fixxfti.o
kext64/libgcc_s.dylib: libgcc/kext64/_fixxfti_s.o
libgcc/kext64/libgcc.map: libgcc/kext64/_fixxfti_s.o
libgcc/kext64/_fixunsxfdi_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -mkernel -m64 -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT -DL_fixunsxfdi -DLIBGCC2_UNITS_PER_WORD=4 -c $(srcdir)/libgcc2.c -o libgcc/kext64/_fixunsxfdi_s.o
libgcc/kext64/_fixunsxfdi.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -mkernel -m64 -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT -DL_fixunsxfdi -DLIBGCC2_UNITS_PER_WORD=4 $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/kext64/_fixunsxfdi.o
kext64/libgcc.a: libgcc/kext64/_fixunsxfdi.o
kext64/libgcc_s.dylib: libgcc/kext64/_fixunsxfdi_s.o
libgcc/kext64/libgcc.map: libgcc/kext64/_fixunsxfdi_s.o
libgcc/kext64/_fixunsxfti_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -mkernel -m64 -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT -DL_fixunsxfdi -DLIBGCC2_UNITS_PER_WORD=8 -c $(srcdir)/libgcc2.c -o libgcc/kext64/_fixunsxfti_s.o
libgcc/kext64/_fixunsxfti.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -mkernel -m64 -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT -DL_fixunsxfdi -DLIBGCC2_UNITS_PER_WORD=8 $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/kext64/_fixunsxfti.o
kext64/libgcc.a: libgcc/kext64/_fixunsxfti.o
kext64/libgcc_s.dylib: libgcc/kext64/_fixunsxfti_s.o
libgcc/kext64/libgcc.map: libgcc/kext64/_fixunsxfti_s.o
libgcc/kext64/_floatdixf_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -mkernel -m64 -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT -DL_floatdixf -DLIBGCC2_UNITS_PER_WORD=4 -c $(srcdir)/libgcc2.c -o libgcc/kext64/_floatdixf_s.o
libgcc/kext64/_floatdixf.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -mkernel -m64 -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT -DL_floatdixf -DLIBGCC2_UNITS_PER_WORD=4 $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/kext64/_floatdixf.o
kext64/libgcc.a: libgcc/kext64/_floatdixf.o
kext64/libgcc_s.dylib: libgcc/kext64/_floatdixf_s.o
libgcc/kext64/libgcc.map: libgcc/kext64/_floatdixf_s.o
libgcc/kext64/_floattixf_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -mkernel -m64 -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT -DL_floatdixf -DLIBGCC2_UNITS_PER_WORD=8 -c $(srcdir)/libgcc2.c -o libgcc/kext64/_floattixf_s.o
libgcc/kext64/_floattixf.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -mkernel -m64 -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT -DL_floatdixf -DLIBGCC2_UNITS_PER_WORD=8 $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/kext64/_floattixf.o
kext64/libgcc.a: libgcc/kext64/_floattixf.o
kext64/libgcc_s.dylib: libgcc/kext64/_floattixf_s.o
libgcc/kext64/libgcc.map: libgcc/kext64/_floattixf_s.o
libgcc/kext64/_floatundixf_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -mkernel -m64 -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT -DL_floatundixf -DLIBGCC2_UNITS_PER_WORD=4 -c $(srcdir)/libgcc2.c -o libgcc/kext64/_floatundixf_s.o
libgcc/kext64/_floatundixf.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -mkernel -m64 -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT -DL_floatundixf -DLIBGCC2_UNITS_PER_WORD=4 $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/kext64/_floatundixf.o
kext64/libgcc.a: libgcc/kext64/_floatundixf.o
kext64/libgcc_s.dylib: libgcc/kext64/_floatundixf_s.o
libgcc/kext64/libgcc.map: libgcc/kext64/_floatundixf_s.o
libgcc/kext64/_floatuntixf_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -mkernel -m64 -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT -DL_floatundixf -DLIBGCC2_UNITS_PER_WORD=8 -c $(srcdir)/libgcc2.c -o libgcc/kext64/_floatuntixf_s.o
libgcc/kext64/_floatuntixf.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -mkernel -m64 -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT -DL_floatundixf -DLIBGCC2_UNITS_PER_WORD=8 $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/kext64/_floatuntixf.o
kext64/libgcc.a: libgcc/kext64/_floatuntixf.o
kext64/libgcc_s.dylib: libgcc/kext64/_floatuntixf_s.o
libgcc/kext64/libgcc.map: libgcc/kext64/_floatuntixf_s.o
libgcc/kext64/_fixtfdi_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -mkernel -m64 -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT -DL_fixtfdi -DLIBGCC2_UNITS_PER_WORD=4 -c $(srcdir)/libgcc2.c -o libgcc/kext64/_fixtfdi_s.o
libgcc/kext64/_fixtfdi.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -mkernel -m64 -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT -DL_fixtfdi -DLIBGCC2_UNITS_PER_WORD=4 $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/kext64/_fixtfdi.o
kext64/libgcc.a: libgcc/kext64/_fixtfdi.o
kext64/libgcc_s.dylib: libgcc/kext64/_fixtfdi_s.o
libgcc/kext64/libgcc.map: libgcc/kext64/_fixtfdi_s.o
libgcc/kext64/_fixtfti_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -mkernel -m64 -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT -DL_fixtfdi -DLIBGCC2_UNITS_PER_WORD=8 -c $(srcdir)/libgcc2.c -o libgcc/kext64/_fixtfti_s.o
libgcc/kext64/_fixtfti.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -mkernel -m64 -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT -DL_fixtfdi -DLIBGCC2_UNITS_PER_WORD=8 $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/kext64/_fixtfti.o
kext64/libgcc.a: libgcc/kext64/_fixtfti.o
kext64/libgcc_s.dylib: libgcc/kext64/_fixtfti_s.o
libgcc/kext64/libgcc.map: libgcc/kext64/_fixtfti_s.o
libgcc/kext64/_fixunstfdi_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -mkernel -m64 -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT -DL_fixunstfdi -DLIBGCC2_UNITS_PER_WORD=4 -c $(srcdir)/libgcc2.c -o libgcc/kext64/_fixunstfdi_s.o
libgcc/kext64/_fixunstfdi.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -mkernel -m64 -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT -DL_fixunstfdi -DLIBGCC2_UNITS_PER_WORD=4 $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/kext64/_fixunstfdi.o
kext64/libgcc.a: libgcc/kext64/_fixunstfdi.o
kext64/libgcc_s.dylib: libgcc/kext64/_fixunstfdi_s.o
libgcc/kext64/libgcc.map: libgcc/kext64/_fixunstfdi_s.o
libgcc/kext64/_fixunstfti_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -mkernel -m64 -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT -DL_fixunstfdi -DLIBGCC2_UNITS_PER_WORD=8 -c $(srcdir)/libgcc2.c -o libgcc/kext64/_fixunstfti_s.o
libgcc/kext64/_fixunstfti.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -mkernel -m64 -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT -DL_fixunstfdi -DLIBGCC2_UNITS_PER_WORD=8 $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/kext64/_fixunstfti.o
kext64/libgcc.a: libgcc/kext64/_fixunstfti.o
kext64/libgcc_s.dylib: libgcc/kext64/_fixunstfti_s.o
libgcc/kext64/libgcc.map: libgcc/kext64/_fixunstfti_s.o
libgcc/kext64/_floatditf_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -mkernel -m64 -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT -DL_floatditf -DLIBGCC2_UNITS_PER_WORD=4 -c $(srcdir)/libgcc2.c -o libgcc/kext64/_floatditf_s.o
libgcc/kext64/_floatditf.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -mkernel -m64 -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT -DL_floatditf -DLIBGCC2_UNITS_PER_WORD=4 $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/kext64/_floatditf.o
kext64/libgcc.a: libgcc/kext64/_floatditf.o
kext64/libgcc_s.dylib: libgcc/kext64/_floatditf_s.o
libgcc/kext64/libgcc.map: libgcc/kext64/_floatditf_s.o
libgcc/kext64/_floattitf_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -mkernel -m64 -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT -DL_floatditf -DLIBGCC2_UNITS_PER_WORD=8 -c $(srcdir)/libgcc2.c -o libgcc/kext64/_floattitf_s.o
libgcc/kext64/_floattitf.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -mkernel -m64 -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT -DL_floatditf -DLIBGCC2_UNITS_PER_WORD=8 $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/kext64/_floattitf.o
kext64/libgcc.a: libgcc/kext64/_floattitf.o
kext64/libgcc_s.dylib: libgcc/kext64/_floattitf_s.o
libgcc/kext64/libgcc.map: libgcc/kext64/_floattitf_s.o
libgcc/kext64/_floatunditf_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -mkernel -m64 -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT -DL_floatunditf -DLIBGCC2_UNITS_PER_WORD=4 -c $(srcdir)/libgcc2.c -o libgcc/kext64/_floatunditf_s.o
libgcc/kext64/_floatunditf.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -mkernel -m64 -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT -DL_floatunditf -DLIBGCC2_UNITS_PER_WORD=4 $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/kext64/_floatunditf.o
kext64/libgcc.a: libgcc/kext64/_floatunditf.o
kext64/libgcc_s.dylib: libgcc/kext64/_floatunditf_s.o
libgcc/kext64/libgcc.map: libgcc/kext64/_floatunditf_s.o
libgcc/kext64/_floatuntitf_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -mkernel -m64 -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT -DL_floatunditf -DLIBGCC2_UNITS_PER_WORD=8 -c $(srcdir)/libgcc2.c -o libgcc/kext64/_floatuntitf_s.o
libgcc/kext64/_floatuntitf.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -mkernel -m64 -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT -DL_floatunditf -DLIBGCC2_UNITS_PER_WORD=8 $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/kext64/_floatuntitf.o
kext64/libgcc.a: libgcc/kext64/_floatuntitf.o
kext64/libgcc_s.dylib: libgcc/kext64/_floatuntitf_s.o
libgcc/kext64/libgcc.map: libgcc/kext64/_floatuntitf_s.o
libgcc/kext64/_eprintf.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -mkernel -m64 -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT -DL_eprintf $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/kext64/_eprintf.o
kext64/libgcc.a: libgcc/kext64/_eprintf.o
libgcc/kext64/__gcc_bcmp.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -mkernel -m64 -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT -DL__gcc_bcmp $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/kext64/__gcc_bcmp.o
kext64/libgcc.a: libgcc/kext64/__gcc_bcmp.o
libgcc/kext64/_divdi3_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -fexceptions -fnon-call-exceptions -mkernel -m64 -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT -DL_divdi3 -c $(srcdir)/libgcc2.c -o libgcc/kext64/_divdi3_s.o
libgcc/kext64/_divdi3.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -fexceptions -fnon-call-exceptions -mkernel -m64 -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT -DL_divdi3 $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/kext64/_divdi3.o
kext64/libgcc.a: libgcc/kext64/_divdi3.o
kext64/libgcc_s.dylib: libgcc/kext64/_divdi3_s.o
libgcc/kext64/libgcc.map: libgcc/kext64/_divdi3_s.o
libgcc/kext64/_moddi3_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -fexceptions -fnon-call-exceptions -mkernel -m64 -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT -DL_moddi3 -c $(srcdir)/libgcc2.c -o libgcc/kext64/_moddi3_s.o
libgcc/kext64/_moddi3.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -fexceptions -fnon-call-exceptions -mkernel -m64 -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT -DL_moddi3 $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/kext64/_moddi3.o
kext64/libgcc.a: libgcc/kext64/_moddi3.o
kext64/libgcc_s.dylib: libgcc/kext64/_moddi3_s.o
libgcc/kext64/libgcc.map: libgcc/kext64/_moddi3_s.o
libgcc/kext64/_udivdi3_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -fexceptions -fnon-call-exceptions -mkernel -m64 -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT -DL_udivdi3 -c $(srcdir)/libgcc2.c -o libgcc/kext64/_udivdi3_s.o
libgcc/kext64/_udivdi3.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -fexceptions -fnon-call-exceptions -mkernel -m64 -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT -DL_udivdi3 $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/kext64/_udivdi3.o
kext64/libgcc.a: libgcc/kext64/_udivdi3.o
kext64/libgcc_s.dylib: libgcc/kext64/_udivdi3_s.o
libgcc/kext64/libgcc.map: libgcc/kext64/_udivdi3_s.o
libgcc/kext64/_umoddi3_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -fexceptions -fnon-call-exceptions -mkernel -m64 -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT -DL_umoddi3 -c $(srcdir)/libgcc2.c -o libgcc/kext64/_umoddi3_s.o
libgcc/kext64/_umoddi3.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -fexceptions -fnon-call-exceptions -mkernel -m64 -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT -DL_umoddi3 $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/kext64/_umoddi3.o
kext64/libgcc.a: libgcc/kext64/_umoddi3.o
kext64/libgcc_s.dylib: libgcc/kext64/_umoddi3_s.o
libgcc/kext64/libgcc.map: libgcc/kext64/_umoddi3_s.o
libgcc/kext64/_udiv_w_sdiv_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -fexceptions -fnon-call-exceptions -mkernel -m64 -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT -DL_udiv_w_sdiv -c $(srcdir)/libgcc2.c -o libgcc/kext64/_udiv_w_sdiv_s.o
libgcc/kext64/_udiv_w_sdiv.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -fexceptions -fnon-call-exceptions -mkernel -m64 -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT -DL_udiv_w_sdiv $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/kext64/_udiv_w_sdiv.o
kext64/libgcc.a: libgcc/kext64/_udiv_w_sdiv.o
kext64/libgcc_s.dylib: libgcc/kext64/_udiv_w_sdiv_s.o
libgcc/kext64/libgcc.map: libgcc/kext64/_udiv_w_sdiv_s.o
libgcc/kext64/_udivmoddi4_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -fexceptions -fnon-call-exceptions -mkernel -m64 -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT -DL_udivmoddi4 -c $(srcdir)/libgcc2.c -o libgcc/kext64/_udivmoddi4_s.o
libgcc/kext64/_udivmoddi4.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -fexceptions -fnon-call-exceptions -mkernel -m64 -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT -DL_udivmoddi4 $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/kext64/_udivmoddi4.o
kext64/libgcc.a: libgcc/kext64/_udivmoddi4.o
kext64/libgcc_s.dylib: libgcc/kext64/_udivmoddi4_s.o
libgcc/kext64/libgcc.map: libgcc/kext64/_udivmoddi4_s.o
libgcc/kext64/darwin-64_s.o: stmp-dirs /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/darwin-64.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -mkernel -m64 -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT -c /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/darwin-64.c -o libgcc/kext64/darwin-64_s.o
libgcc/kext64/darwin-64.o: stmp-dirs /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/darwin-64.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -mkernel -m64 -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT $(vis_hide) -c /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/config/darwin-64.c -o libgcc/kext64/darwin-64.o
kext64/libgcc.a: libgcc/kext64/darwin-64.o
kext64/libgcc_s.dylib: libgcc/kext64/darwin-64_s.o
libgcc/kext64/libgcc.map: libgcc/kext64/darwin-64_s.o
libgcc/kext64/unwind-dw2.o: stmp-dirs /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/unwind-dw2.c unwind.inc unwind-dw2-fde.h unwind-dw2-fde.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -mkernel -m64 -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT -fexceptions $(vis_hide) -c /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/unwind-dw2.c -o libgcc/kext64/unwind-dw2.o
kext64/libgcc_eh.a: libgcc/kext64/unwind-dw2.o
libgcc/kext64/unwind-dw2-fde-darwin.o: stmp-dirs /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/unwind-dw2-fde-darwin.c unwind.inc unwind-dw2-fde.h unwind-dw2-fde.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -mkernel -m64 -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT -fexceptions $(vis_hide) -c /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/unwind-dw2-fde-darwin.c -o libgcc/kext64/unwind-dw2-fde-darwin.o
kext64/libgcc_eh.a: libgcc/kext64/unwind-dw2-fde-darwin.o
libgcc/kext64/unwind-sjlj.o: stmp-dirs /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/unwind-sjlj.c unwind.inc unwind-dw2-fde.h unwind-dw2-fde.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -mkernel -m64 -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT -fexceptions $(vis_hide) -c /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/unwind-sjlj.c -o libgcc/kext64/unwind-sjlj.o
kext64/libgcc_eh.a: libgcc/kext64/unwind-sjlj.o
libgcc/kext64/unwind-c.o: stmp-dirs /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/unwind-c.c unwind.inc unwind-dw2-fde.h unwind-dw2-fde.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -mkernel -m64 -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT -fexceptions $(vis_hide) -c /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/unwind-c.c -o libgcc/kext64/unwind-c.o
kext64/libgcc_eh.a: libgcc/kext64/unwind-c.o
libgcc/kext64/unwind-dw2_s.o: stmp-dirs /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/unwind-dw2.c unwind.inc unwind-dw2-fde.h unwind-dw2-fde.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -mkernel -m64 -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT -fexceptions -c /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/unwind-dw2.c -o libgcc/kext64/unwind-dw2_s.o
kext64/libgcc_s.dylib: libgcc/kext64/unwind-dw2_s.o
libgcc/kext64/libgcc.map: libgcc/kext64/unwind-dw2_s.o
libgcc/kext64/unwind-dw2-fde-darwin_s.o: stmp-dirs /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/unwind-dw2-fde-darwin.c unwind.inc unwind-dw2-fde.h unwind-dw2-fde.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -mkernel -m64 -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT -fexceptions -c /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/unwind-dw2-fde-darwin.c -o libgcc/kext64/unwind-dw2-fde-darwin_s.o
kext64/libgcc_s.dylib: libgcc/kext64/unwind-dw2-fde-darwin_s.o
libgcc/kext64/libgcc.map: libgcc/kext64/unwind-dw2-fde-darwin_s.o
libgcc/kext64/unwind-sjlj_s.o: stmp-dirs /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/unwind-sjlj.c unwind.inc unwind-dw2-fde.h unwind-dw2-fde.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -mkernel -m64 -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT -fexceptions -c /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/unwind-sjlj.c -o libgcc/kext64/unwind-sjlj_s.o
kext64/libgcc_s.dylib: libgcc/kext64/unwind-sjlj_s.o
libgcc/kext64/libgcc.map: libgcc/kext64/unwind-sjlj_s.o
libgcc/kext64/unwind-c_s.o: stmp-dirs /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/unwind-c.c unwind.inc unwind-dw2-fde.h unwind-dw2-fde.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -mkernel -m64 -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT -fexceptions -c /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/unwind-c.c -o libgcc/kext64/unwind-c_s.o
kext64/libgcc_s.dylib: libgcc/kext64/unwind-c_s.o
libgcc/kext64/libgcc.map: libgcc/kext64/unwind-c_s.o
libgcc/kext64/_gcov.o: stmp-dirs $(srcdir)/libgcov.c $(srcdir)/gcov-io.h $(srcdir)/gcov-io.c gcov-iov.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES)  -mkernel -m64 -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT -DL_gcov -c $(srcdir)/libgcov.c -o libgcc/kext64/_gcov.o
kext64/libgcov.a: libgcc/kext64/_gcov.o
libgcc/kext64/_gcov_merge_add.o: stmp-dirs $(srcdir)/libgcov.c $(srcdir)/gcov-io.h $(srcdir)/gcov-io.c gcov-iov.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES)  -mkernel -m64 -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT -DL_gcov_merge_add -c $(srcdir)/libgcov.c -o libgcc/kext64/_gcov_merge_add.o
kext64/libgcov.a: libgcc/kext64/_gcov_merge_add.o
libgcc/kext64/_gcov_merge_single.o: stmp-dirs $(srcdir)/libgcov.c $(srcdir)/gcov-io.h $(srcdir)/gcov-io.c gcov-iov.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES)  -mkernel -m64 -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT -DL_gcov_merge_single -c $(srcdir)/libgcov.c -o libgcc/kext64/_gcov_merge_single.o
kext64/libgcov.a: libgcc/kext64/_gcov_merge_single.o
libgcc/kext64/_gcov_merge_delta.o: stmp-dirs $(srcdir)/libgcov.c $(srcdir)/gcov-io.h $(srcdir)/gcov-io.c gcov-iov.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES)  -mkernel -m64 -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT -DL_gcov_merge_delta -c $(srcdir)/libgcov.c -o libgcc/kext64/_gcov_merge_delta.o
kext64/libgcov.a: libgcc/kext64/_gcov_merge_delta.o
libgcc/kext64/_gcov_fork.o: stmp-dirs $(srcdir)/libgcov.c $(srcdir)/gcov-io.h $(srcdir)/gcov-io.c gcov-iov.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES)  -mkernel -m64 -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT -DL_gcov_fork -c $(srcdir)/libgcov.c -o libgcc/kext64/_gcov_fork.o
kext64/libgcov.a: libgcc/kext64/_gcov_fork.o
libgcc/kext64/_gcov_execl.o: stmp-dirs $(srcdir)/libgcov.c $(srcdir)/gcov-io.h $(srcdir)/gcov-io.c gcov-iov.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES)  -mkernel -m64 -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT -DL_gcov_execl -c $(srcdir)/libgcov.c -o libgcc/kext64/_gcov_execl.o
kext64/libgcov.a: libgcc/kext64/_gcov_execl.o
libgcc/kext64/_gcov_execlp.o: stmp-dirs $(srcdir)/libgcov.c $(srcdir)/gcov-io.h $(srcdir)/gcov-io.c gcov-iov.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES)  -mkernel -m64 -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT -DL_gcov_execlp -c $(srcdir)/libgcov.c -o libgcc/kext64/_gcov_execlp.o
kext64/libgcov.a: libgcc/kext64/_gcov_execlp.o
libgcc/kext64/_gcov_execle.o: stmp-dirs $(srcdir)/libgcov.c $(srcdir)/gcov-io.h $(srcdir)/gcov-io.c gcov-iov.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES)  -mkernel -m64 -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT -DL_gcov_execle -c $(srcdir)/libgcov.c -o libgcc/kext64/_gcov_execle.o
kext64/libgcov.a: libgcc/kext64/_gcov_execle.o
libgcc/kext64/_gcov_execv.o: stmp-dirs $(srcdir)/libgcov.c $(srcdir)/gcov-io.h $(srcdir)/gcov-io.c gcov-iov.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES)  -mkernel -m64 -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT -DL_gcov_execv -c $(srcdir)/libgcov.c -o libgcc/kext64/_gcov_execv.o
kext64/libgcov.a: libgcc/kext64/_gcov_execv.o
libgcc/kext64/_gcov_execvp.o: stmp-dirs $(srcdir)/libgcov.c $(srcdir)/gcov-io.h $(srcdir)/gcov-io.c gcov-iov.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES)  -mkernel -m64 -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT -DL_gcov_execvp -c $(srcdir)/libgcov.c -o libgcc/kext64/_gcov_execvp.o
kext64/libgcov.a: libgcc/kext64/_gcov_execvp.o
libgcc/kext64/_gcov_execve.o: stmp-dirs $(srcdir)/libgcov.c $(srcdir)/gcov-io.h $(srcdir)/gcov-io.c gcov-iov.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES)  -mkernel -m64 -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT -DL_gcov_execve -c $(srcdir)/libgcov.c -o libgcc/kext64/_gcov_execve.o
kext64/libgcov.a: libgcc/kext64/_gcov_execve.o
libgcc/kext64/_gcov_interval_profiler.o: stmp-dirs $(srcdir)/libgcov.c $(srcdir)/gcov-io.h $(srcdir)/gcov-io.c gcov-iov.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES)  -mkernel -m64 -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT -DL_gcov_interval_profiler -c $(srcdir)/libgcov.c -o libgcc/kext64/_gcov_interval_profiler.o
kext64/libgcov.a: libgcc/kext64/_gcov_interval_profiler.o
libgcc/kext64/_gcov_pow2_profiler.o: stmp-dirs $(srcdir)/libgcov.c $(srcdir)/gcov-io.h $(srcdir)/gcov-io.c gcov-iov.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES)  -mkernel -m64 -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT -DL_gcov_pow2_profiler -c $(srcdir)/libgcov.c -o libgcc/kext64/_gcov_pow2_profiler.o
kext64/libgcov.a: libgcc/kext64/_gcov_pow2_profiler.o
libgcc/kext64/_gcov_one_value_profiler.o: stmp-dirs $(srcdir)/libgcov.c $(srcdir)/gcov-io.h $(srcdir)/gcov-io.c gcov-iov.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES)  -mkernel -m64 -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT -DL_gcov_one_value_profiler -c $(srcdir)/libgcov.c -o libgcc/kext64/_gcov_one_value_profiler.o
kext64/libgcov.a: libgcc/kext64/_gcov_one_value_profiler.o

extrakext64: stmp-dirs
	$(MAKE) GCC_FOR_TARGET="$(GCC_FOR_TARGET)" \
	  AR_FOR_TARGET="$(AR_FOR_TARGET)" \
	  AR_CREATE_FOR_TARGET="$(AR_CREATE_FOR_TARGET)" \
	  AR_EXTRACT_FOR_TARGET="$(AR_EXTRACT_FOR_TARGET)" \
	  AR_FLAGS_FOR_TARGET="$(AR_FLAGS_FOR_TARGET)" \
	  CC="$(CC)" CFLAGS="$(CFLAGS)" \
	  BUILD_PREFIX="$(BUILD_PREFIX)" \
	  BUILD_PREFIX_1="$(BUILD_PREFIX_1)" \
	  LANGUAGES="$(LANGUAGES)" \
	  LIBGCC2_CFLAGS="$(LIBGCC2_CFLAGS) -mkernel -m64 -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT "  \
	  LIBGCC2_STATIC_CFLAGS="$(LIBGCC2_STATIC_CFLAGS)"  \
	  MULTILIB_CFLAGS=" -mkernel -m64 -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT" T=kext64/ kext64/crt3.o
all: extrakext64
kext64/libgcc_s.dylib: extrakext64

libgcc/kext64/libgcc.map: /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/mkmap-flat.awk /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/libgcc-std.ver
	{ $(NM_FOR_TARGET) -pg $(objects); echo %%; \
	  cat /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/libgcc-std.ver \
	    | sed -e '/^[   ]*#/d' \
	          -e 's/^%\(if\|else\|elif\|endif\|define\)/#\1/' \
	    | $(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES)  -mkernel -m64 -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT -E -xassembler-with-cpp -; \
	} | $(AWK) -f /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/mkmap-flat.awk -v leading_underscore=1 > libgcc/kext64/tmp-libgcc.map
	mv 'libgcc/kext64/tmp-libgcc.map' $@
kext64/libgcc_s.dylib: libgcc/kext64/libgcc.map

kext64/libgcc.a: stmp-dirs
	-rm -f kext64/libgcc.a
	$(AR_CREATE_FOR_TARGET) kext64/libgcc.a $(objects)
	$(RANLIB_FOR_TARGET) kext64/libgcc.a
all: kext64/libgcc.a

kext64/libgcov.a: stmp-dirs
	-rm -f kext64/libgcov.a
	$(AR_CREATE_FOR_TARGET) kext64/libgcov.a $(objects)
	$(RANLIB_FOR_TARGET) kext64/libgcov.a
all: kext64/libgcov.a

kext64/libgcc_eh.a: stmp-dirs
	-rm -f kext64/libgcc_eh.a
	$(AR_CREATE_FOR_TARGET) kext64/libgcc_eh.a $(objects)
	$(RANLIB_FOR_TARGET) kext64/libgcc_eh.a
all: kext64/libgcc_eh.a

libgcc-stage-start:
	for dir in $(dirs); do \
	  if [ -d $(stage)/$$dir ]; then :; \
	  else /bin/sh /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/../mkinstalldirs $(stage)/$$dir; fi; \
	done
	-for dir in $(dirs); do \
	  mv $$dir/*.o $(stage)/$$dir; \
	  mv $$dir/*.vis $(stage)/$$dir; \
    mv $$dir/*.map $(stage)/$$dir; \
	  test ! -f $$dir/libgcc.a || mv $$dir/lib* $(stage)/$$dir; \
	done

stmp-dirs:
	for d in $(dirs); do \
	  if [ -d $$d ]; then true; else /bin/sh /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/../mkinstalldirs $$d; fi; \
	done
	if [ -f stmp-dirs ]; then true; else touch stmp-dirs; fi

install: all
	$(INSTALL_DATA) ./libgcc.a $(DESTDIR)$(libsubdir)/
	chmod 644 $(DESTDIR)$(libsubdir)/libgcc.a
	$(RANLIB_FOR_TARGET) $(DESTDIR)$(libsubdir)/libgcc.a
	$(INSTALL_DATA) ./libgcov.a $(DESTDIR)$(libsubdir)/
	chmod 644 $(DESTDIR)$(libsubdir)/libgcov.a
	$(RANLIB_FOR_TARGET) $(DESTDIR)$(libsubdir)/libgcov.a
	$(INSTALL_DATA) ./libgcc_eh.a $(DESTDIR)$(libsubdir)/
	chmod 644 $(DESTDIR)$(libsubdir)/libgcc_eh.a
	$(RANLIB_FOR_TARGET) $(DESTDIR)$(libsubdir)/libgcc_eh.a
	$(mkinstalldirs) $(DESTDIR)$(slibdir); /usr/bin/install -c -m 644 libgcc_s.1.dylib $(DESTDIR)$(slibdir)/libgcc_s.1.dylib
	if [ -d $(DESTDIR)$(libsubdir)/x86_64 ]; then true; else /bin/sh /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/../mkinstalldirs $(DESTDIR)$(libsubdir)/x86_64; chmod a+rx $(DESTDIR)$(libsubdir)/x86_64; fi;
	$(INSTALL_DATA) x86_64/libgcc.a $(DESTDIR)$(libsubdir)/x86_64/
	chmod 644 $(DESTDIR)$(libsubdir)/x86_64/libgcc.a
	$(RANLIB_FOR_TARGET) $(DESTDIR)$(libsubdir)/x86_64/libgcc.a
	$(INSTALL_DATA) x86_64/libgcov.a $(DESTDIR)$(libsubdir)/x86_64/
	chmod 644 $(DESTDIR)$(libsubdir)/x86_64/libgcov.a
	$(RANLIB_FOR_TARGET) $(DESTDIR)$(libsubdir)/x86_64/libgcov.a
	$(INSTALL_DATA) x86_64/libgcc_eh.a $(DESTDIR)$(libsubdir)/x86_64/
	chmod 644 $(DESTDIR)$(libsubdir)/x86_64/libgcc_eh.a
	$(RANLIB_FOR_TARGET) $(DESTDIR)$(libsubdir)/x86_64/libgcc_eh.a
	$(mkinstalldirs) $(DESTDIR)$(slibdir); /usr/bin/install -c -m 644 libgcc_s.1.dylib $(DESTDIR)$(slibdir)/libgcc_s.1.dylib
	if [ -d $(DESTDIR)$(libsubdir)/static ]; then true; else /bin/sh /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/../mkinstalldirs $(DESTDIR)$(libsubdir)/static; chmod a+rx $(DESTDIR)$(libsubdir)/static; fi;
	$(INSTALL_DATA) static/libgcc.a $(DESTDIR)$(libsubdir)/static/
	chmod 644 $(DESTDIR)$(libsubdir)/static/libgcc.a
	$(RANLIB_FOR_TARGET) $(DESTDIR)$(libsubdir)/static/libgcc.a
	$(INSTALL_DATA) static/libgcov.a $(DESTDIR)$(libsubdir)/static/
	chmod 644 $(DESTDIR)$(libsubdir)/static/libgcov.a
	$(RANLIB_FOR_TARGET) $(DESTDIR)$(libsubdir)/static/libgcov.a
	$(INSTALL_DATA) static/libgcc_eh.a $(DESTDIR)$(libsubdir)/static/
	chmod 644 $(DESTDIR)$(libsubdir)/static/libgcc_eh.a
	$(RANLIB_FOR_TARGET) $(DESTDIR)$(libsubdir)/static/libgcc_eh.a
	if [ -d $(DESTDIR)$(libsubdir)/kext ]; then true; else /bin/sh /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/../mkinstalldirs $(DESTDIR)$(libsubdir)/kext; chmod a+rx $(DESTDIR)$(libsubdir)/kext; fi;
	$(INSTALL_DATA) kext/libgcc.a $(DESTDIR)$(libsubdir)/kext/
	chmod 644 $(DESTDIR)$(libsubdir)/kext/libgcc.a
	$(RANLIB_FOR_TARGET) $(DESTDIR)$(libsubdir)/kext/libgcc.a
	$(INSTALL_DATA) kext/libgcov.a $(DESTDIR)$(libsubdir)/kext/
	chmod 644 $(DESTDIR)$(libsubdir)/kext/libgcov.a
	$(RANLIB_FOR_TARGET) $(DESTDIR)$(libsubdir)/kext/libgcov.a
	$(INSTALL_DATA) kext/libgcc_eh.a $(DESTDIR)$(libsubdir)/kext/
	chmod 644 $(DESTDIR)$(libsubdir)/kext/libgcc_eh.a
	$(RANLIB_FOR_TARGET) $(DESTDIR)$(libsubdir)/kext/libgcc_eh.a
	if [ -d $(DESTDIR)$(libsubdir)/kext64 ]; then true; else /bin/sh /Users/hflambo/local/alfresco-svn/root-02-04-2012/gigfork-server/gcc-5666.3/build/obj/src/gcc/../mkinstalldirs $(DESTDIR)$(libsubdir)/kext64; chmod a+rx $(DESTDIR)$(libsubdir)/kext64; fi;
	$(INSTALL_DATA) kext64/libgcc.a $(DESTDIR)$(libsubdir)/kext64/
	chmod 644 $(DESTDIR)$(libsubdir)/kext64/libgcc.a
	$(RANLIB_FOR_TARGET) $(DESTDIR)$(libsubdir)/kext64/libgcc.a
	$(INSTALL_DATA) kext64/libgcov.a $(DESTDIR)$(libsubdir)/kext64/
	chmod 644 $(DESTDIR)$(libsubdir)/kext64/libgcov.a
	$(RANLIB_FOR_TARGET) $(DESTDIR)$(libsubdir)/kext64/libgcov.a
	$(INSTALL_DATA) kext64/libgcc_eh.a $(DESTDIR)$(libsubdir)/kext64/
	chmod 644 $(DESTDIR)$(libsubdir)/kext64/libgcc_eh.a
	$(RANLIB_FOR_TARGET) $(DESTDIR)$(libsubdir)/kext64/libgcc_eh.a
	$(INSTALL_DATA) crt3.o $(DESTDIR)$(libsubdir)/
	$(INSTALL_DATA) x86_64/crt3.o $(DESTDIR)$(libsubdir)/x86_64/
	$(INSTALL_DATA) static/crt3.o $(DESTDIR)$(libsubdir)/static/
	$(INSTALL_DATA) kext/crt3.o $(DESTDIR)$(libsubdir)/kext/
	$(INSTALL_DATA) kext64/crt3.o $(DESTDIR)$(libsubdir)/kext64/
.PHONY: all install
