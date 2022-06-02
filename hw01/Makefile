CXX: clang++
CXXFLAGS: -Wall -Wextra -g
INCLUDES = $(shell echo *.h)

testCharArrayList: CharArrayList.o testCharArrayList.o
	${CXX} -o $@ $^

%.o: %.cpp ${INCLUDES}
	${CXX} ${CXXFLAGS} -c $<

clean:
	rm -f testCharArrayList testCharArrayList.o CharArrayList.o
	