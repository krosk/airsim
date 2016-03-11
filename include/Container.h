#pragma once

#include <unordered_map>

template <class T>
class Container
{
	private:
	std::unordered_map<int, T> m_container;
	
	public:
	void add(int id, const T &value);
	//bool contains(int id) const;
	//T& get(int id) const;
	//void remove(int id);
};

#include "Container.tpp"