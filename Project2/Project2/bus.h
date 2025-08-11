
#ifndef BUS_H
#define BUS_H

class bus {
private:
	int busnum;
	int passenger;
	int gain;
	const int fee;
public:
	bus(int busnum, int fee = 1500);

	void take();
	int getfee();
	void display();
};

#endif