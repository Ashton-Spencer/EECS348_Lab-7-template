CC := gcc

all: football.exe temperature.exe

football.exe: football.c football.h football_main.c
	$(CC) -o football.exe football_main.c football.c

temperature.exe: temperature.c temperature.h temperature_main.c
	$(CC) -o temperature.exe temperature_main.c temperature.c

clean:
	rm -f football.exe temperature.exe
