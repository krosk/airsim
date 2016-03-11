#include <utility>

template <class T>
void Container<T>::add(int id, const T &value)
{
	m_container.insert(std::pair<int, T>(id, value));
}
