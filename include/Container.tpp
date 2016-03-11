#include <utility>

template <class T>
void Container<T>::add(int id, const T &value)
{
	m_container.insert(std::pair<int, T>(id, value));
}

template <class T>
bool Container<T>::contains(int id) const
{
	return m_container.find(id) != m_container.cend();
}