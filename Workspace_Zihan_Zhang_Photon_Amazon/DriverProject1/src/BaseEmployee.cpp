/*
 * BaseEmployee.cpp
 *
 *  Created on: 2018年11月6日
 *      Author: zihan
 */

#include "BaseEmployee.h"
#include <iostream>

namespace edu {
namespace neu {
namespace csye6205 {

BaseEmployee::BaseEmployee() {
	// TODO Auto-generated constructor stub

}

BaseEmployee::~BaseEmployee() {
	// TODO Auto-generated destructor stub
}

BaseEmployee::BaseEmployee(int id, string firstname, string lastname, int age, double wage) {
	this->ID = id;
	this->FirstName = firstname;
	this->LastName = lastname;
	this->Age = age;
	this->Wage = wage;
}

const string BaseEmployee::info() {
	return this->information;
}
void BaseEmployee::show() {
	cout<<"";
}


} /* namespace csye6205 */
} /* namespace neu */
} /* namespace edu */
