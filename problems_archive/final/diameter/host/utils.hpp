/*
 * Copyright 2019 Xilinx, Inc.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef XF_GRAPH_UTILS_HPP
#define XF_GRAPH_UTILS_HPP

#include "ap_int.h"
#include <cstring>
#include <algorithm>
#include <vector>
#include <sys/time.h>

class ArgParser {
   public:
    ArgParser(int& argc, const char** argv) {
        for (int i = 1; i < argc; ++i) mTokens.push_back(std::string(argv[i]));
    }
    bool getCmdOption(const std::string option, std::string& value) const {
        std::vector<std::string>::const_iterator itr;
        itr = std::find(this->mTokens.begin(), this->mTokens.end(), option);
        if (itr != this->mTokens.end() && ++itr != this->mTokens.end()) {
            value = *itr;
            return true;
        }
        return false;
    }

   private:
    std::vector<std::string> mTokens;
};

class CSRGraph {
   public:
    unsigned numVert;
    unsigned numEdge;
    unsigned* offset;
    unsigned* column;
    float* weight;
    bool weighted;
};

class DiameterRes {
   public:
    float diameter;
    unsigned src;
    unsigned des;
};

// Compute time difference
inline unsigned long tvdiff(struct timeval* tv0, struct timeval* tv1) {
    return ((unsigned long)tv1->tv_sec - (unsigned long)tv0->tv_sec) * 1000000UL +
           ((unsigned long)tv1->tv_usec - (unsigned long)tv0->tv_usec);
}

template <typename T>
T* aligned_alloc(std::size_t num) {
    void* ptr = NULL;
    if (posix_memalign(&ptr, 4096, num * sizeof(T))) throw std::bad_alloc();
    return reinterpret_cast<T*>(ptr);
}

#endif //#ifndef VT_GRAPH_UTILS_H
