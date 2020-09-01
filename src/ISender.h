//
// Created by Usuario on 31/8/2020.
//

#ifndef LAB05_DEPENDENCY_INVERSION_WEMS99_ISENDER_H
#define LAB05_DEPENDENCY_INVERSION_WEMS99_ISENDER_H

#include <sstream>

class ISender {
public:

    virtual std:: string sendPayment() = 0;

    virtual ~ISender();

};


#endif //LAB05_DEPENDENCY_INVERSION_WEMS99_ISENDER_H
