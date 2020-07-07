OBJECTS = convs.exe unsigned.exe literals.exe escape.exe scope_levels.exe \
		  inits.exe dbl_ptr.exe compounddecls.exe \
		  Sales_data.exe

include ../GNU_makefile_template

%.exe: %.o
	$(CC) $(CCFLAGS) $(LOCFLAGS) $< -o $@
