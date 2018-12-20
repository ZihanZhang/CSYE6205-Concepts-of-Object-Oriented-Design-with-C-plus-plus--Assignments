/*
 * BaseItem.h
 *
 *  Created on: 2018年11月6日
 *      Author: zihan
 */

#ifndef BASEITEM_H_
#define BASEITEM_H_

#include "AbstractItemAPI.h"

namespace edu {
namespace neu {
namespace csye6205 {

class BaseItem: AbstractItemAPI {
public:
	int id;
	string name;
	double price;
	string information;
	BaseItem();
	virtual ~BaseItem();
	BaseItem(int id, string name, double price);

	virtual void setName(const string);
	virtual const string getName() const;
	virtual void setPrice(const double);
	virtual const double getPrice() const;
	virtual const string info() const;
	virtual void show() const;
};

}
}
}


#endif /* BASEITEM_H_ */
