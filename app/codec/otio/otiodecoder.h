/***

  Olive - Non-Linear Video Editor
  Copyright (C) 2019 Olive Team

  This program is free software: you can redistribute it and/or modify
  it under the terms of the GNU General Public License as published by
  the Free Software Foundation, either version 3 of the License, or
  (at your option) any later version.

  This program is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
  GNU General Public License for more details.

  You should have received a copy of the GNU General Public License
  along with this program.  If not, see <http://www.gnu.org/licenses/>.

***/

#ifndef OTIODECODER_H
#define OTIODECODER_H

#include "codec/decoder.h"

OLIVE_NAMESPACE_ENTER

class OTIODecoder : public Decoder
{
  Q_OBJECT
public:
  OTIODecoder();

  virtual QString id() override;

  virtual bool Open() override {return false;}
  virtual void Close() override {}

  virtual ItemPtr Probe(const QString& filename, const QAtomicInt* cancelled) const override;

};

OLIVE_NAMESPACE_EXIT

#endif // OTIODECODER_H
