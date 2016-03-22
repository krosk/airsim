#include <utility>

template <class T>
T& Container<T>::add(int uid, const T &value)
{
    if (contains(uid))
    {
        remove(uid);
    }
    m_container.insert(std::pair<int, T>(uid, value));
	return get(uid);
}

template <class T>
bool Container<T>::contains(int uid) const
{
	return m_container.find(uid) != m_container.cend();
}

template <class T>
T& Container<T>::get(int uid)
{
	return m_container.at(uid);
}

template <class T>
void Container<T>::remove(int uid)
{
	m_container.erase(uid);
}

template <class T>
std::vector<int> Container<T>::uids() const
{
	std::vector<int> uidsList;
	for ( auto it = m_container.cbegin(); it != m_container.cend(); ++it )
	{
		uidsList.push_back(it->first);
	}
	return uidsList;
}