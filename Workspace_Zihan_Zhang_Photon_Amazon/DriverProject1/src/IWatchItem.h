/*
 * IWatchItem.h
 *
 *  Created on: 2018年11月12日
 *      Author: zihan
 */

#ifndef IWATCHITEM_H_
#define IWATCHITEM_H_

#include "BaseItem.h"

namespace edu {
namespace neu {
namespace csye6205 {

class IWatchItem: public BaseItem {
public:
	IWatchItem();
	IWatchItem(int id, string name, double price);
	virtual ~IWatchItem();
};

} /* namespace csye6205 */
} /* namespace neu */
} /* namespace edu */

#endif /* IWATCHITEM_H_ */
