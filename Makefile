TOPDIR = ..
SRCDIR = ..
-include ../MakeVars
-include ../MakeVars.features

EIGEN_ROOT=/usr/local/include/eigen3

CPPFLAGS := -O3 -march=native -DNDEBUG -I../include -I../include/libint2 -Ieri -Ihartree-fock -I$(EIGEN_ROOT) -DPREP_LIBINT2_SKIP_BOOST -DSRCDATADIR=\"$(SRCDIR)/lib/basis\" $(CPPFLAGS)

export CFLAGS+=-isysroot /Library/Developer/CommandLineTools/SDKs/MacOSX.sdk
export CCFLAGS+=-isysroot /Library/Developer/CommandLineTools/SDKs/MacOSX.sdk
export CXXFLAGS+=-isysroot /Library/Developer/CommandLineTools/SDKs/MacOSX.sdk
export CPPFLAGS+=-isysroot /Library/Developer/CommandLineTools/SDKs/MacOSX.sdk

COMPUTE_LIB = -L../lib -lint2

check:: check2 

code = qc-code/hartree-fock

check2:: $(code)
	$^ 

basic_mp2_routines.o: qc-code/basic_mp2_routines.cc

ccd_so_diis.o: qc-code/ccd_so_diis.cc

omp2_so.o: qc-code/omp2_so.cc

basis_set.o: qc-code/basis_set.cc
	g++ -c -I /Users/user/Documents/c++extensions/eigen-eigen-323c052e1731 $^ -std=c++11

basis_set1.o: qc-code/basis_set1.cc

$(code): $(code).o qc-code/basis_set.o qc-code/basis_set1.o qc-code/basic_mp2_routines.o qc-code/omp2_so.o qc-code/ccd_so_diis.o
	$(LTLINK) $(CXX) $(LDFLAGS) $(COMPUTE_LIB) $(SYSLIBS) -o $@ $^

clean:: targetclean
	-rm -f */*.o */*.d

targetclean::
	-rm -f $(code) 

distclean:: clean

