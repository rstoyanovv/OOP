#ifndef MYVECTOR_
#define MYVECTOR_

template <typename T>
class MyVector
{
private:
	int capacity;
	int size;
	T* data;

public:
	MyVector();
	~MyVector();
	void resize();
	void addElement(const T& element);
	T& operator[](int index);
	const T& operator[](int index) const;
	template <typename R>
	void apply(R(*func) (T&));
};

template<typename T>
inline MyVector<T>::MyVector()
{
	capacity = 5;
	size = 0;
	data = new T[capacity];
}

template<typename T>
inline MyVector<T>::~MyVector()
{
	delete[] data;
}

template<typename T>
inline void MyVector<T>::resize()
{
	capacity *= 2;
	T* newData = new T[capacity];

	for (size_t i = 0; i < size; i++) {
		newData[i] = data[i];
	}

	delete[] data;
	data = newData;
}

template<typename T>
inline void MyVector<T>::addElement(const T& element)
{
	if (size > capacity) {
		resize();
	}

	data[size] = element;
	size++;
}

template<typename T>
inline T& MyVector<T>::operator[](int index)
{
	return data[index];
}

template<typename T>
inline const T& MyVector<T>::operator[](int index) const
{
	return data[index];
}
template <typename T>
template<typename R>
inline void MyVector<T>::apply(R(*func)(T&))
{
	for (size_t i = 0; i < size; i++) {
		func(data[i]);
	}
}

#endif // !MYVECTOR_
