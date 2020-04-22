rm *.o *.so *.lib test

gcc -fPIC -c mul.c
gcc -shared -o libtranspose.so mul.o
gcc -L$(pwd) -Wl,-rpath=$(pwd) -o test main.c -ltranspose -g

cp transpose.h ../thirdparty/linux/include/
cp libtranspose.so ../thirdparty/linux/lib/x64/
