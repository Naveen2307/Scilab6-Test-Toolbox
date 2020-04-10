LIBNAME = mul

all: lib$(LIBNAME).so test$(LIBNAME)

$(LIBNAME).o: $(LIBNAME).h $(LIBNAME).c
	gcc -fPIC -c $(LIBNAME).c

lib$(LIBNAME).so: $(LIBNAME).o
	gcc -shared -o lib$(LIBNAME).so $(LIBNAME).o

test$(LIBNAME): lib$(LIBNAME).so main.c mul.h
	gcc -Wall -L$(PWD) -Wl,-rpath=$(PWD) -o $@ main.c -l$(LIBNAME) -g

install:
	cp mul.h ../thirdparty/linux/include/
	cp libmul.so ../thirdparty/linux/lib/x64/

.PHONY: clean
clean:
	$(RM) -f *.so *.o test
