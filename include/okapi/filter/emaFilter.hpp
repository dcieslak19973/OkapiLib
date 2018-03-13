/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */
#ifndef _OKAPI_EMAFILTER_HPP_
#define _OKAPI_EMAFILTER_HPP_

#include "okapi/filter/filter.hpp"

namespace okapi {
  class EmaFilter : public Filter {
  public:
    /**
     * Exponential moving average filter.
     * 
     * @param ialpha alpha gain
     */
    EmaFilter(const double ialpha);

    /**
     * Filters a reading.
     * 
     * @param reading new measurement
     * @return filtered result
     */
    double filter(const double ireading) override;

    /**
     * Returns the previous output from filter.
     * 
     * @return the previous output from filter
     */
    double getOutput() const override;

    /**
     * Set filter gains.
     * 
     * @param ialpha alpha gain
     */
    void setGains(const double ialpha);

  private:
    double alpha;
    double output, lastOutput;
  };
}

#endif
