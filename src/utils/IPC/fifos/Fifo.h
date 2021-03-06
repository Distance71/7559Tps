#ifndef FIFO_H_
#define FIFO_H_

#include <string>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include "../../Logger.h"

class Fifo {
public:
	Fifo(const std::string name);
	virtual ~Fifo();
	virtual void openFifo() = 0;
	void closeFifo();
	void free() const;

protected:
	std::string name;
	int fd;
};

#endif