TARGET=Test
SRC= main.cpp
CPPFLAGS=-g
CPPFLAGS+= -std=c++11
CPPFLAGS_CGOVR=$(CPPFLAGS) -fprofile-arcs -ftest-coverage
LDFLAGS_CGOVR += -fprofile-arcs

all:$(TARGET)

$(TARGET): $(SRC)
	g++ $< -o $@ $(CPPFLAGS)

gcovr: $(SRC)
	g++ $< -o $(TARGET) $(CPPFLAGS_CGOVR) $(LDFLAGS_CGOVR)

	# linkage確認
clean:
	rm -f $(TARGET) *.gcno
