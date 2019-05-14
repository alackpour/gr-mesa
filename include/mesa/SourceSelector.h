/* -*- c++ -*- */
/* 
 * Copyright 2019 ghostop14.
 * 
 * This is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 3, or (at your option)
 * any later version.
 * 
 * This software is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License
 * along with this software; see the file COPYING.  If not, write to
 * the Free Software Foundation, Inc., 51 Franklin Street,
 * Boston, MA 02110-1301, USA.
 */


#ifndef INCLUDED_MESA_SOURCESELECTOR_H
#define INCLUDED_MESA_SOURCESELECTOR_H

#include <mesa/api.h>
#include <gnuradio/sync_block.h>

namespace gr {
  namespace mesa {

    /*!
     * \brief <+description of block+>
     * \ingroup mesa
     *
     */
    class MESA_API SourceSelector : virtual public gr::sync_block
    {
     public:
      typedef boost::shared_ptr<SourceSelector> sptr;

      /*!
       * \brief Return a shared_ptr to a new instance of mesa::SourceSelector.
       *
       * To avoid accidental use of raw pointers, mesa::SourceSelector's
       * constructor is in a private implementation
       * class. mesa::SourceSelector::make is the public interface for
       * creating new instances.
       */
      static sptr make(float holdTime, int numInputs, int defaultInput, int inputBlockSize);
    };

  } // namespace mesa
} // namespace gr

#endif /* INCLUDED_MESA_SOURCESELECTOR_H */

