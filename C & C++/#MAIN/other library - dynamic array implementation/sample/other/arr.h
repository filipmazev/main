///
// Written in 2022 by Filip Mazev (@mazevmazev)
//
// To the extent possible under law, the author(s) have dedicated all
// copyright and related and neighboring rights to this software to the
// public domain worldwide. This software is distributed without any warranty.
//
// CC0 Public Domain Dedication <http://creativecommons.org/publicdomain/zero/1.0/>.
// A minimal implementation of dynamic arrays / oth::arr
///

/** @file other/arr */

#ifndef _GLIBCXX_EXPERIMENTAL_SET
#define _GLIBCXX_EXPERIMENTAL_SET 1

#pragma GCC system_header

#if __cplusplus >= 201402L

#include <iostream>
#include <array>

namespace std _GLIBCXX_VISIBILITY(default)
{
    _GLIBCXX_BEGIN_NAMESPACE_VERSION
    namespace oth
    {
        template <class TYPE> class arr
        {
        private:
            size_t num{0}, _size{0}; TYPE *_arr{nullptr};
        public:
            arr() { this->num = 0; this->_size = 0; this->_arr = nullptr; }
            ~arr() { delete[] this->_arr; this->_arr = nullptr; }

            arr(const arr &other)
            {
                if (this != &other) {
                    this->num = other.num; this->_size = other._size; delete[] this->_arr; auto *tmp = new TYPE[other.num];
                    for (unsigned int i=0; i<this->num; i++) { tmp[i] = other._arr[i]; } this->_arr = tmp;
                }
            }

            arr &operator = (arr &other)
            {
                if (this != &other) {
                    this->num = other.num; this->_size = other._size; delete[] this->_arr; auto *tmp = new TYPE[other.num];
                    for (unsigned int i=0; i<this->num; i++) { tmp[i] = other._arr[i]; } this->_arr = tmp;
                }
                return *this;
            }

            auto &operator[] (unsigned int index) { return this->_arr[index]; }

            friend std::ostream &operator << (std::ostream &output, arr &other) {
                for (unsigned int i=0; i<other.num; i++) { output << other._arr[i] << " "; } return output;
            }

            friend std::istream& operator >> (std::istream &input, arr &other)
            {
                other.num+1>other._size?++other._size:other._size; auto *tmp = new TYPE[other._size];
                for (unsigned int i=0; i<other.num; i++) { tmp[i] = other._arr[i]; }
                input >> tmp[other.num++]; delete[] other._arr; other._arr = tmp; return input;
            }

            inline void push_back(auto element)
            {
                this->num+1>this->_size?++this->_size:this->_size; auto *tmp = new TYPE[this->_size];
                for (unsigned int i=0; i<this->num; i++) { tmp[i] = this->_arr[i]; }
                tmp[this->num++] = element; delete[] this->_arr; this->_arr = tmp;
            }

            inline void set(unsigned int index, auto element) { if(index <= this->_size) this->_arr[index] = element; else { throw std::bad_alloc{}; } }

            inline void pop_back()
            {
                if (!empty()) {
                    --this->_size; --this->num; auto* tmp = new TYPE[this->_size];
                    for (unsigned int i=0; i<this->num; i++) { tmp[i] = this->_arr[i]; }
                    delete[] this->_arr; this->_arr = tmp;
                }
            }

            inline void erase(int pos)
            {
                if (pos < this->num) {
                    for (unsigned int i=0; i<this->num; i++) {
                        if (i == pos) { --this->_size; --this->num;
                            for (unsigned int j=i; j<this->num; j++) { this->_arr[j] = this->_arr[j + 1]; } break; } } }
            }

            template <typename... T> constexpr auto assign(T&&... t)->std::array <TYPE, sizeof...(T)>
            {
                std::array<TYPE, sizeof...(T)> _new = { { std::forward<T>(t)... } };
                delete[] this->_arr; this->_arr = new TYPE[sizeof...(T)]; for(int i=0; i<sizeof...(T); i++){ this->_arr[i] = _new[i]; }
                this->_size = sizeof...(T); this->num = _size; return { { std::forward<T>(t)... } };
            }

            template <typename... T> constexpr auto insert(T&&... t)->std::array <TYPE, sizeof...(T)>
            {
                std::array<TYPE, sizeof...(T)> _new = { { std::forward<T>(t)... } };
                this->_size += _new.size(); TYPE *tmp = new TYPE[this->_size]; for(int i=0; i<this->num; i++){ tmp[i] = this->_arr[i]; }
                    int k = this->num; for (TYPE const& i : _new) { tmp[k++] = i; } this->num += _new.size();
                delete[] this->_arr; this->_arr = new TYPE[this->_size]; this->_arr = tmp; return { { std::forward<T>(t)... } };
            }

            inline void resize(size_t new_size)
            {
                this->_size = new_size; TYPE *tmp = new TYPE[this->_size]; this->num = this->_size<this->num?this->_size:this->num;
                    for(int i=0; i<this->num; i++){ tmp[i] = this->_arr[i]; }
                delete[] this->_arr; this->_arr = new TYPE[this->_size]; this->_arr = tmp;
            }

            void print() { for (unsigned int i=0; i<this->num; i++) { std::cout<<_arr[i]<<" "; } }

            inline void clear(){ while (!empty()) { pop_back(); } }

            auto at(size_t index) noexcept { return this->_arr[index]; }
            const size_t size() noexcept { return this->_size; }
            const bool empty() noexcept { return (this->num == 0); }
            auto back() noexcept { return this->_arr[this->num - 1]; }
            auto front() noexcept { return this->_arr[0]; }
        };
    } // namespace oth
} // namespace std

#endif // C++14

#endif // _GLIBCXX_EXPERIMENTAL_SET
