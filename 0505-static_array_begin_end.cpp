// static_array_begin_end.cpp
// Использование std::begin и std::end для получения границ диапазона статического массива.
#include <iostream>
#include <iterator> // begin, end
using namespace std;
 
// Заполняет [begin, end) квадратами индексов.
void fill_with_squares(float* begin, float* end)
{
  // Количество элементов равно разности указателей.
  for (size_t i = 0; i != end - begin; ++i)
    begin[i] = i * i;
}

// Выводим array в консоль.
void print_array(float* begin, float* end)
{
  while (begin != end)
    cout << *begin++ << '\n';
}
 
int main()
{
  // Локальный статический массив. Его размер виден только внутри main.
  float squares[100];
  // begin(squares) возвращает указатель на первый элемент массива, а
  // end(squares) возвращает указатель на фиктивный элемент, следующий за последним элементом массива.
  fill_with_squares(begin(squares), end(squares));
  // Вывести в консоль.
  print_array(begin(squares), end(squares));
}