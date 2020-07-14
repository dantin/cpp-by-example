OBJECTS = io_using.exe add_using.exe \
		  string_io.exe string_io2.exe word_echo.exe \
		  getline.exe getline2.exe getline3.exe \
		  string_size.exe \
		  strcompare.exe \
		  string_add.exe \
		  cctype.exe \
		  char_repl.exe hexify.exe \
		  vec_decls.exe square.exe \
		  vec_scores.exe binary_search.exe \
		  array_scores.exe \
		  cstring_hdr.exe
		  

include ../GNU_makefile_template

%.exe: %.o
	$(CC) $(CCFLAGS) $(LOCFLAGS) $< -o $@
