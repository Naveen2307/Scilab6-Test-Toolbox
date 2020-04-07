LIBNAME = add

all: lib$(LIBNAME).so test$(LIBNAME)

$(LIBNAME).o: $(LIBNAME).h $(LIBNAME).c
	gcc -fPIC -c $(LIBNAME).c

lib$(LIBNAME).so: $(LIBNAME).o
	gcc -shared -o lib$(LIBNAME).so $(LIBNAME).o

test$(LIBNAME): lib$(LIBNAME).so main.c add.h
	gcc -Wall -L$(PWD) -Wl,-rpath=$(PWD) -o $@ main.c -l$(LIBNAME) -g

install:
	cp add.h ../thirdparty/linux/include/
	cp libadd.so ../thirdparty/linux/lib/x64/

.PHONY: clean
clean:
	$(RM) -f *.so *.o test
