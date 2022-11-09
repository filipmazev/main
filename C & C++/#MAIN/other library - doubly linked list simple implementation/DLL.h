///
// Written in 2022 by Filip Mazev (@mazevmazev)
//
// To the extent possible under law, the author(s) have dedicated all
// copyright and related and neighboring rights to this software to the
// public domain worldwide. This software is distributed without any warranty.
//
// CC0 Public Domain Dedication <http://creativecommons.org/publicdomain/zero/1.0/>.
// A minimal implementation of doubly linked lists / oth::DLL
///

/** @file other/DLL */

#include <iostream>

namespace std
{
	namespace oth
	{
		template<class TYPE> class DLLNode {
		public:
			TYPE value{ TYPE() };
			DLLNode<TYPE>* succ{ nullptr };
			DLLNode<TYPE>* prev{ nullptr };

			DLLNode() {};

			explicit DLLNode(TYPE value, DLLNode<TYPE>* prev, DLLNode<TYPE>* succ) {
				this->value = value; this->prev = prev; this->succ = succ;
			}
		};

		template<class TYPE> class DLL : public DLLNode<TYPE> {
		public:
			DLLNode<TYPE>* head{ nullptr };
			DLLNode<TYPE>* tail{ nullptr };

			DLL() {};

			void push_back(TYPE obj) {
				auto* insert = new DLLNode<TYPE>(obj, nullptr, this->head);
				if (this->head == nullptr) { this->tail = insert; }
				else { this->head->prev = insert; }
				this->head = insert;
			}

			void push_front(TYPE obj) {
				if (this->head == nullptr) { push_back(obj); return; }
				auto* insert = new DLLNode<TYPE>(obj, this->tail, nullptr);
				this->tail->succ = insert; this->tail = insert;
			}

			void push_after(TYPE obj, TYPE after) {
				DLLNode<TYPE>* temp = this->find(after);
				auto* insert = new DLLNode<TYPE>(obj, temp, temp->succ); temp->succ = insert;
			}

			auto pop_back() noexcept {
				if (this->head == nullptr) { std::cerr << "List is empty" << std::endl; return TYPE(); }

				DLLNode<TYPE>* temp = this->head; this->head = this->head->succ;
				this->head == nullptr ? (this->tail = nullptr) : (this->head->prev = nullptr);
				return temp->value;
			}

			auto pop_front() noexcept {
				if (this->head == nullptr) { std::cerr << "List is empty" << std::endl; return TYPE(); }
				if (this->head->succ == nullptr) { return pop_back(); }

				DLLNode<TYPE>* temp = this->tail;
				this->tail = this->tail->prev; this->tail->succ = nullptr;
				return temp->value;
			}

			void remove(TYPE obj) {
				DLLNode<TYPE>* element = this->head; DLLNode<TYPE>* prev = nullptr;

				if (element == nullptr) { std::cerr << "List is empty" << std::endl; return; }
				if (find(obj) == nullptr) { return; }

				while (element != nullptr) { if (element->value == obj) { break; } prev = element; element = element->succ; }
				if (element == this->head) { prev = this->head; this->head = element->succ; delete prev; return; }
				if (element->succ == nullptr) { prev->succ = nullptr; delete element; return; }
				prev->succ = element->succ; delete element;
			}

			size_t size() {
				size_t size = 0; if (this->head == nullptr) { return size; }
				DLLNode<TYPE>* temp = this->head; while (temp != nullptr) { ++size; temp = temp->succ; } return size;
			}

			void print() {
				if (this->head == nullptr) { std::cout << "List is empty"; return; }
				DLLNode<TYPE>* temp = this->head; while (temp != nullptr) { std::cout << temp->value << " "; temp = temp->succ; }
			}

			friend std::ostream& operator << (std::ostream& output, DLL<TYPE> list) noexcept { list.print(); return output; }

			DLLNode<TYPE>* find(TYPE obj) noexcept {
				if (this->head == nullptr) { std::cout << "List is empty" << std::endl; return nullptr; }

				DLLNode<TYPE>* temp = this->head;
				while (temp->value != obj && temp->succ != nullptr) { temp = temp->succ; }
				if (temp->value == obj) { return temp; }
				else { std::cout << "Element not found" << std::endl; return nullptr; }
			}

			void sort(bool mode) {
				if (this->head == nullptr) { std::cout << "List is empty" << std::endl; return; }

				DLLNode<TYPE>* element = nullptr, * index = nullptr; TYPE tempValue;

				for (element = head; element->succ != nullptr; element = element->succ) {
					for (index = element->succ; index != nullptr; index = index->succ) {
						if (mode == 0 ? (element->value > index->value) : (element->value < index->value)) {
							tempValue = element->value; element->value = index->value; index->value = tempValue;
						}
					}
				}
			}

			void merge(DLL<TYPE> list) {
				if (this->head == nullptr) { this->head = list.head; return; }

				DLLNode<TYPE>* temp = this->head;
				while (temp->succ != nullptr) { temp = temp->succ; }
				temp->succ = list.head;
			}
		};
	} // namespace oth
} // namespace std