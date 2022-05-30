CXX: clang++
CXXFLAGS: -Wall -Wextra -g
INCLUDES = $(shell echo *.h)

testIntArrayList: IntArrayList.o testIntArrayList.o
	${CXX} -o $@ $^

%.o: %.cpp ${INCLUDES}
	${CXX} ${CXXFLAGS} -c $<

clean:
	rm -f testIntArrayList testIntArrayList.o IntArrayList.o
	
#testIntArrayList.o: IntArrayList.cpp IntArrayList.h
#	${CXX} ${CXXFLAGS} -c testIntArrayList.cpp

#IntArrayList.o: IntArrayList.cpp IntArrayList.h
#	${CXX} ${CXXFLAGS} -c IntArrayList.cpp
