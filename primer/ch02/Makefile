OBJECTS = escape.exe literals.exe unsigned.exe scope_levels.exe \
		  convs.exe inits.exe ref-ex.exe \
		  dbl_ptr.exe compounddecls.exe decl-ex.exe\
		  Sales_data.exe

include ../GNU_makefile_template

%.exe: %.o
	$(CC) $(CCFLAGS) $(LOCFLAGS) $< -o $@
