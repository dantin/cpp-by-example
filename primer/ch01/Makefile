OBJECTS = main_only.exe add.exe whilecount.exe forcount.exe \
		  mysum.exe occurs.exe \
		  item_io.exe add_item.exe add_item2.exe avg_price.exe

include ../GNU_makefile_template

%.exe: %.o
	$(CC) $(CCFLAGS) $(LOCFLAGS) $< -o $@
