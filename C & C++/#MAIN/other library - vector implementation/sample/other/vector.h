///
// Written in 2022 by Filip Mazev (@mazevmazev)
//
// To the extent possible under law, the author(s) have dedicated all
// copyright and related and neighboring rights to this software to the
// public domain worldwide. This software is distributed without any warranty.
//
// CC0 Public Domain Dedication <http://creativecommons.org/publicdomain/zero/1.0/>.
// A minimal implementation of dynamic arrays / oth::vector
///

/** @file other/vector */

#ifndef _GLIBCXX_EXPERIMENTAL_SET
#define _GLIBCXX_EXPERIMENTAL_SET 1

#pragma GCC system_header

#if __cplusplus >= 201402L

#include <iostream>

namespace std _GLIBCXX_VISIBILITY(default)
{
    _GLIBCXX_BEGIN_NAMESPACE_VERSION
    namespace oth
    {
        template <class TYPE> class vector
        {
        private:
            int num{0}; TYPE *arr{nullptr};
        public:
            vector(){ this->num=0; this->arr = nullptr; }
            ~vector(){ delete[] this->arr; this->arr=nullptr; }

            vector(const vector &other)
            {
                if(this != &other){ this->num = other.num; delete[] this->arr; auto *tmp = new TYPE[other.num];
                    for(unsigned int i=0; i<this->num; i++){ tmp[i] = other.arr[i]; } this->arr=tmp; }
            }

            vector &operator = (vector &other)
            {
                if(this != &other){ this->num = other.num; delete[] this->arr;auto *tmp = new TYPE[other.num];
                    for(unsigned int i=0; i<this->num; i++){ tmp[i] = other.arr[i]; } this->arr=tmp; }
                return *this;
            }

            auto &operator[](int index){ return this->arr[index]; }

            friend std::ostream &operator << (std::ostream &output, vector &other){
                for(unsigned int i=0; i<other.size(); i++){ output<<other.arr[i]<<" "; } return output; }

            friend std::istream &operator >> (std::istream &input, vector &other)
            {
                auto *tmp = new TYPE[other.num+1];
                    for(unsigned int i=0; i<other.num; i++){ tmp[i] = other.arr[i]; }
                input>>tmp[other.num++]; delete[] other.arr; other.arr = tmp; return input;
            }

            void push_back(auto element)
            {
                auto *tmp = new TYPE[this->num+1];
                    for(unsigned int i=0; i<this->num; i++){ tmp[i] = this->arr[i]; }
                tmp[this->num++] = element; delete[] this->arr; this->arr = tmp;
            }

            void pop_back()
            {
                if(!empty()){ auto *tmp = new TYPE[--this->num];
                    for(unsigned int i=0; i<this->num; i++){ tmp[i] = this->arr[i]; }
                        delete[] this->arr; this->arr = tmp;  }
            }

            void erase(int pos)
            {
                if(pos<this->num){ for(unsigned int i=0; i<this->num; i++){
                    if(i==pos){ --this->num; for(unsigned int j=i; j<this->num; j++){ this->arr[j] = this->arr[j+1]; } break; } } }
            }

            size_t size(){ return (size_t)this->num; }
            bool empty(){ return (this->num==0); }
            auto back(){ return this->arr[this->num-1]; }
            auto front(){ return this->arr[0]; }
        };
    } // namespace oth
} // namespace std

#endif // C++14

#endif // _GLIBCXX_EXPERIMENTAL_SET
