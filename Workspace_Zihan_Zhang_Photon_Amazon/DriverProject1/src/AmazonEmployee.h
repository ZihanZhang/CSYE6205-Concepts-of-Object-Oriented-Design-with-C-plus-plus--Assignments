/*
 * AmazonEmployee.h
 *
 *  Created on: 2018年11月6日
 *      Author: zihan
 */

#ifndef AMAZONEMPLOYEE_H_
#define AMAZONEMPLOYEE_H_

#include "BaseEmployee.h"

namespace edu {
namespace neu {
namespace csye6205 {

class AmazonEmployee: public BaseEmployee {
public:
	AmazonEmployee();
	AmazonEmployee(int id, string firstname, string lastname, int age, double wage);
	virtual ~AmazonEmployee();
};

} /* namespace csye6205 */
} /* namespace neu */
} /* namespace edu */

#endif /* AMAZONEMPLOYEE_H_ */
