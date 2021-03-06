/*
 * This file is part of Auriga HL7 library.
 *
 * Auriga HL7 library is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * Auriga HL7 library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with Auriga HL7 library.  If not, see <http://www.gnu.org/licenses/>.
 */


#ifndef __TCU_U10__24_H__
#define __TCU_U10__24_H__

#include "../../common/Util.h"
#include "../segment/EQU.h"
#include "../segment/MSH.h"
#include "../segment/ROL.h"
#include "../segment/TCC.h"

namespace HL7_24 {

/* TCU_U10 */
struct TCU_U10 : public HL7Message {
  TCU_U10() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID {
    TCU_U10_MSH_1,
    TCU_U10_EQU_2,
    TCU_U10_TCC_4,
    TCU_U10_ROL_7,
    FIELD_ID_MAX
  };

  const char* className() const { return "TCU_U10"; }
  TCU_U10* create() const { return new TCU_U10(); }

 private:
  /* Initialize object */
  void init() {
    setName("TCU_U10");
    addObject<MSH>(TCU_U10_MSH_1, "MSH.1", HL7::initialized,
		   HL7::repetition_off);
    addObject<EQU>(TCU_U10_EQU_2, "EQU.2", HL7::initialized,
		   HL7::repetition_off);
    addObject<TCC>(TCU_U10_TCC_4, "TCC.4", HL7::initialized,
		   HL7::repetition_on);
    addObject<ROL>(TCU_U10_ROL_7, "ROL.7", HL7::optional, HL7::repetition_off);
  }

 public:
  /* Getters list */
  MSH* getMSH_1(size_t index = 0) {
    return (MSH*)this->getObjectSafe(index, TCU_U10_MSH_1);
  }
  EQU* getEQU_2(size_t index = 0) {
    return (EQU*)this->getObjectSafe(index, TCU_U10_EQU_2);
  }
  TCC* getTCC_4(size_t index = 0) {
    return (TCC*)this->getObjectSafe(index, TCU_U10_TCC_4);
  }
  ROL* getROL_7(size_t index = 0) {
    return (ROL*)this->getObjectSafe(index, TCU_U10_ROL_7);
  }

  /* Checker list */
  bool isMSH_1(size_t index = 0) {
    try {
      return this->getObject(index, TCU_U10_MSH_1) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isEQU_2(size_t index = 0) {
    try {
      return this->getObject(index, TCU_U10_EQU_2) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isTCC_4(size_t index = 0) {
    try {
      return this->getObject(index, TCU_U10_TCC_4) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isROL_7(size_t index = 0) {
    try {
      return this->getObject(index, TCU_U10_ROL_7) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* TCU_U10_ */
} /* namespace HL7_24 */
#endif /*  __TCU_U10__24_H__ */
