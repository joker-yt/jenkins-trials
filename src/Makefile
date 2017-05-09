TARGET=Test
SRC= main.cpp
CPPFLAGS=-g
CPPFLAGS+= -std=c++11 -fPIC
CPPFLAGS_CGOVR=$(CPPFLAGS) -fprofile-arcs -ftest-coverage
LDFLAGS_CGOVR += -fprofile-arcs

all:$(TARGET)

$(TARGET): $(SRC)
	g++ $< -o $@ $(CPPFLAGS)

# need to output the result by xml
gcovr: $(SRC)
	g++ $< -o $(TARGET)_gcov $(CPPFLAGS_CGOVR) $(LDFLAGS_CGOVR)

	# linkage確認
clean:
	rm -f $(TARGET) *gcov *.gcno *.gcda
