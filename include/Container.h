#pragma once

#include <unordered_map>
#include <vector>

template <class T>
class Container
{
	private:
	std::unordered_map<int, T> m_container;

	public:
	void add(int uid, const T &value);
	bool contains(int uid) const;
	T& get(int uid);
	void remove(int uid);
	std::vector<int> uids() const;
};

#include "Container.tpp"