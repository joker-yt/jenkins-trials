SRCS= test_CTestBase.cpp \
		  test_CTestDerive.cpp
# TARGET+=$(subst .cpp,.bin,$(SRCS))
CPPFLAGS=-g
CPPFLAGS+= -std=c++11 -fPIC
INCLUDES+= -I../src
LDFLAGS=-lgmock -lpthread

all: $(test)

test: $(SRCS)
	@for i in $(subst .cpp,,$(SRCS)) ; \
	do \
		g++ $$i.cpp -o $$i.bin $(INCLUDES) $(CPPFLAGS) $(LDFLAGS) ; \
	done

# need to output the result by xml
# linkage確認
clean:
	rm -f *.bin *gcov *.gcno *.gcda
