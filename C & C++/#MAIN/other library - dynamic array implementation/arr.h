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

#include <iostream>
#include <list>

namespace std
{
    namespace oth
    {
        template <class TYPE> class arr
        {
        private:
            size_t num{ 0 }, _size{ 0 }; TYPE* _arr{ nullptr }; bool* check{ nullptr };
        public:
            arr() {}
            ~arr() { delete[] this->_arr; this->_arr = nullptr; delete[] this->check; this->check = nullptr; }

            arr(const arr& other)
            {
                this->_size = this->_size != other._size ? (delete[] this->_arr, this->_arr = new TYPE[other._size], delete[] this->check, this->check = new bool[other._size]), other._size : this->_size;
                this->num = other.num; for (size_t i = 0; i < this->_size; i++) { this->_arr[i] = other._arr[i]; this->check[i] = other.check[i]; }
            }

            arr& operator = (const arr& other)
            {
                this->_size = this->_size != other._size ? (delete[] this->_arr, this->_arr = new TYPE[other._size], delete[] this->check, this->check = new bool[other._size]), other._size : this->_size;
                this->num = other.num; for (size_t i = 0; i < this->_size; i++) { this->_arr[i] = other._arr[i]; this->check[i] = other.check[i]; } return *this;
            }

            auto& operator[] (size_t index) noexcept { return this->_arr[index]; }

            friend bool operator == (const arr& curr, const arr& other) noexcept
            {
                if (curr._size != other._size || curr.num != other.num) { return false; }
                bool checker = true; for (int i = 0; i < curr._size; i++) { if (curr._arr[i] != other._arr[i]) { checker = false; break; } } return checker;
            }

            friend bool operator != (const arr& curr, const arr& other) noexcept { return !(curr == other); }

            friend std::ostream& operator << (std::ostream& output, const arr& other) noexcept
            {
                for (size_t i = 0; i < other._size; i++) { if (other.check[i] == true) { output << other._arr[i] << std::endl; } } return output;
            }

            friend std::istream& operator >> (std::istream& input, arr& other) noexcept
            {
                if (other.num + 1 >= other._size) { other.resize(other._size + 1); } other.check[other.num] = true; input >> other._arr[other.num++]; return input;
            }

            inline arr& operator ++ () { resize(this->_size + 1); return *this; }

            inline arr& operator -- () { pop_back(); return *this; }

            inline arr& operator += (TYPE element) { push_back(element); return *this; }

            inline arr& operator -= (TYPE element)
            {
                for (size_t i = 0; i < this->_size; i++) {
                    if (this->_arr[i] == element) {
                        --this->_size; --this->num;
                        for (size_t j = i; j < this->_size; j++) { this->check[j] = this->check[j + 1]; this->_arr[j] = this->_arr[j + 1]; }
                    }
                } return *this;
            }

            inline void resize(size_t new_size)
            {
                if (this->_size != new_size)
                {
                    TYPE* tmp = new TYPE[new_size]; bool* c_tmp = new bool[new_size]; size_t comp = new_size < this->_size ? new_size : this->_size;
                    for (int i = 0; i < new_size; i++) { tmp[i] = i < comp ? this->_arr[i] : TYPE(); c_tmp[i] = i < comp ? this->check[i] : false; }
                    this->_size = new_size; this->num = this->num > this->_size ? this->_size : this->num;
                    delete[] this->_arr; this->_arr = new TYPE[new_size]; this->_arr = tmp; delete[] this->check; this->check = new bool[new_size]; this->check = c_tmp;
                }
            }

            inline void compact()
            {
                TYPE* tmp = new TYPE[this->num + 1]; bool* c_tmp = new bool[this->num + 1];
                int new_size = 0; for (int i = 0; i < this->_size; i++) { if (this->check[i] == true) { c_tmp[new_size] = true; tmp[new_size++] = _arr[i]; } } this->_size = new_size;
                delete[] this->_arr; this->_arr = new TYPE[new_size]; this->_arr = tmp; delete[] this->check; this->check = new bool[new_size]; this->check = c_tmp;
            }

            inline void erase(size_t index)
            {
                if (index < this->_size) {
                    for (size_t i = 0; i < this->_size; i++) {
                        if (i == index) { --this->_size; --this->num; for (size_t j = i; j < this->_size; j++) { this->check[j] = this->check[j + 1]; this->_arr[j] = this->_arr[j + 1]; } break; }
                    }
                }
            }

            inline void remove(size_t index) { if (index < this->_size && index >= 0) { this->check[index] = false; this->_arr[index] = TYPE(); this->num--; } }

            inline void set(size_t index, TYPE element) {
                if (index >= 0) { if (index >= this->_size) { resize(index + 1); } if (this->check[index] != true) { this->num++; } this->check[index] = true; this->_arr[index] = element; }
                else { throw std::bad_alloc{}; }
            }

            size_t back() noexcept { if (this->_size > 0) { int i = this->_size - 1; while (this->check[i] != true) { i--; } return i; } else { return 0; } }

            size_t front() noexcept { if (this->_size > 0) { int i = 0; while (this->check[i] != true) { i++; } return i; } else { return 0; } }

            inline void push_back(TYPE element)
            {
                size_t b_pos = back(); if(b_pos==0){ push_front(element); }
                else { if(b_pos+1 >= this->_size) { resize(this->_size+1); } this->check[b_pos+1] = true; this->_arr[b_pos+1] = element; ++this->num; }
            }

            inline void push_front(TYPE element)
            {
                size_t f_pos = front(); TYPE* tmp = new TYPE[++this->_size]; bool* c_tmp = new bool[this->_size]; c_tmp[f_pos] = true; tmp[f_pos] = element;
                for (size_t i = f_pos; i < this->_size - 1; i++) { c_tmp[i + 1] = this->check[i]; tmp[i + 1] = this->_arr[i]; }
                ++this->num; delete[] this->_arr; this->_arr = tmp; delete[] this->check; this->check = c_tmp;
            }

            inline void pop_back() { if (this->num-1 >= 0) { erase(back()); } }

            inline void pop_front() { if (this->num-1 >= 0) { erase(front()); } }

            template <typename... T> constexpr auto assign(T&&... t)
            {
                std::list<TYPE> list = { { std::forward<T>(t)... } };
                this->_size = this->_size != sizeof...(T) ? (delete[] this->_arr, this->_arr = new TYPE[sizeof...(T)], delete[] this->check, this->check = new bool[sizeof...(T)]), sizeof...(T) : this->_size;
                this->num = this->_size; size_t pos = 0; for (auto const& i : list) { this->check[pos] = true; this->_arr[pos++] = i; }
            }

            template <typename... T> constexpr auto insert(T&&... t)
            {
                std::list<TYPE> list = { { std::forward<T>(t)... } }; for (auto const& i : list) { push_back(i); }
            }

            inline std::oth::arr<TYPE> unique()
            {
                std::oth::arr<TYPE> _unique; _unique.set(0, this->_arr[0]); int cnt=0;

                for (size_t i = 0; i < this->size(); i++) { bool checker = false;
                    for (size_t j = 0; j < cnt; j++) { if (this->_arr[i] == _unique[j]) { checker = true; break; } }
                        if (checker == false && this->check[i] == true) { _unique.set(cnt++, this->_arr[i]); } }

                return _unique;
            }

            auto at(size_t index) noexcept { return this->_arr[index]; }

            const bool empty() noexcept { return (this->num == 0); }

            inline void clear() { resize(0); }

            const size_t size() noexcept { return this->_size; }

            const size_t length() noexcept { return this->num; }

            void print() { std::cout << *this; }

            void show() { for (int i = 0; i < size(); i++) { std::cout << this->_arr[i] << std::endl; } }
        };
    } // namespace oth
} // namespace std
