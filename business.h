//
//  business.h
//
//
//  Created by mark on 2018-05-24.
//

#ifndef business_h
#define business_h

#include <iostream>
#include <algorithm>	/* to support std::system under Linux enviro */

class Business {
    int mode;
public:
    int GetMode(void);
    void SetMode(int);
    void Help(void);
    void New(void);
    void Report(void);
    void Edit(void);
    void Quit(void);
};
#endif /* business_h */
