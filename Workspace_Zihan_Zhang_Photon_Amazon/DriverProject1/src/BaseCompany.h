/*
 * BaseCompany.h
 *
 *  Created on: 2018年11月6日
 *      Author: zihan
 */

#ifndef BASECOMPANY_H_
#define BASECOMPANY_H_

#include "AbstractCompanyAPI.h"
#include "BaseEmployee.h"
#include "BaseItem.h"

namespace edu {
namespace neu {
namespace csye6205 {

class BaseCompany: public AbstractCompanyAPI {
public:
	vector<BaseEmployee> employees;
	vector<BaseItem> items;
	BaseCompany();
	virtual ~BaseCompany();

	virtual void loadEmployees(vector<string> csvData);
	virtual void scaleEmployees(double offset, double scale);
	virtual void sortEmployees();
	virtual void showEmployees();
	virtual void loadItems(vector<string> csvData);
	virtual void scaleItems(double offset, double scale);
	virtual void sortItems();
	virtual void showItems();

	static bool sortEmployeeByWage(BaseEmployee be1, BaseEmployee be2) {
		return be1.Wage > be2.Wage;
	}
	static bool sortItemByPrice(BaseItem bi1, BaseItem bi2) {
		return bi1.getPrice() > bi2.getPrice();
	}

};

} /* namespace csye6205 */
} /* namespace neu */
} /* namespace edu */

#endif /* BASECOMPANY_H_ */
