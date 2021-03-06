/*
 * IpadItem.h
 *
 *  Created on: 2018年11月6日
 *      Author: zihan
 */

#ifndef IPADITEM_H_
#define IPADITEM_H_

#include "BaseItem.h"

namespace edu {
namespace neu {
namespace csye6205 {

class IpadItem: public BaseItem {
public:
	IpadItem();
	IpadItem(int id, string name, double price);
	virtual ~IpadItem();
};

} /* namespace csye6205 */
} /* namespace neu */
} /* namespace edu */

#endif /* IPADITEM_H_ */
