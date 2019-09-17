gcc -shared -fPIC -o liblibrary.so library.c
gcc application.c -L $(pwd)/ -llibrary -o sample_application
export LD_LIBRARY_PATH=$(pwd):$LD_LIBRARY_PATH
./sample_application
