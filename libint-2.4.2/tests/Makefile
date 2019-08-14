TOPDIR = ..
SRCDIR = ..
-include ../MakeVars
-include ../MakeVars.features

EIGEN_ROOT=/usr/local/include/eigen3

CPPFLAGS := -I../include -I../include/libint2 -Ieri -Ihartree-fock -I$(EIGEN_ROOT) -DPREP_LIBINT2_SKIP_BOOST -DSRCDATADIR=\"$(SRCDIR)/lib/basis\" $(CPPFLAGS)
COMPUTE_LIB = -L../lib -lint2

check:: check2 

code = qc-code/hartree-fock

check2:: $(code)
	$^ 

oomp2noncanon.o: qc-code/oomp2noncanon.cc

basis_set.o: qc-code/basis_set.cc
	g++ -c -I /Users/user/Documents/c++extensions/eigen-eigen-323c052e1731 $^ -std=c++11

basis_set1.o: qc-code/basis_set1.cc

$(code): $(code).o qc-code/basis_set.o qc-code/basis_set1.o qc-code/oomp2noncanon.o   
	$(LTLINK) $(CXX) $(LDFLAGS) $(COMPUTE_LIB) $(SYSLIBS) -o $@ $^

clean:: targetclean
	-rm -f */*.o */*.d

targetclean::
	-rm -f $(code) 

distclean:: clean

