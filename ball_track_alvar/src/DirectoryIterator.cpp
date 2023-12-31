/*
 * This file is part of ALVAR, A Library for Virtual and Augmented Reality.
 *
 * Copyright 2007-2012 VTT Technical Research Centre of Finland
 *
 * Contact: VTT Augmented Reality Team <alvar.info@vtt.fi>
 *          <http://www.vtt.fi/multimedia/alvar.html>
 *
 * ALVAR is free software; you can redistribute it and/or modify it under the
 * terms of the GNU Lesser General Public License as published by the Free
 * Software Foundation; either version 2.1 of the License, or (at your option)
 * any later version.
 *
 * This library is distributed in the hope that it will be useful, but WITHOUT
 * ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
 * FITNESS FOR A PARTICULAR PURPOSE. See the GNU Lesser General Public License
 * for more details.
 *
 * You should have received a copy of the GNU Lesser General Public License
 * along with ALVAR; if not, see
 * <http://www.gnu.org/licenses/old-licenses/lgpl-2.1.html>.
 */

#include "ball_track_alvar/DirectoryIterator.h"

#include "ball_track_alvar/DirectoryIterator_private.h"

namespace alvar {

DirectoryIterator::DirectoryIterator(const std::string &path)
    : d(new DirectoryIteratorPrivate(path))
{
}

DirectoryIterator::~DirectoryIterator()
{
    delete d;
}

bool DirectoryIterator::hasNext()
{
    return d->hasNext();
}

std::string DirectoryIterator::next()
{
    return d->next();
}

std::string DirectoryIterator::currentEntry()
{
    return d->mEntry;
}

std::string DirectoryIterator::currentPath()
{
    return d->mDirectory + d->mEntry;
}

} // namespace alvar
