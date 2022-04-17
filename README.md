# HashTable
Хеш-таблица состоит из m ячеек (ячейки нумеруются целыми числами от 0 до m − 1). Для разрешения коллизий используется метод открытой адресации. Функция
h(x, i) = ((x mod m) + c ⋅ i) mod m
задает линейную последовательность проб свободных ячеек, где x — ключ, i — номер попытки (попытки нумеруются с нуля), c — константа.
В таблицу последовательно добавляется n ключей. В случае, если ключ в таблице уже есть, повторного добавления не происходит.

Формат входных данных

В первой строке через пробел записаны три целых числа: 
размер m таблицы (2 ≤ m ≤ 10 000), 
константа c (1 ≤ c ≤ m − 1),
число n ключей для добавления (0 ≤ n ≤ 10 000). 
Число c взаимно просто с числом m. Далее в последующих n строках записаны ключи, которые добавляются в хеш-таблицу, 
— целые числа из промежутка от 0 до 109. Ключи могут повторяться, но гарантируется, что в таблице достаточно места для размещения всех уникальных ключей из n заданных.

Формат выходных данных
Выводится ровно m чисел, i-е число описывает i-ю ячейку (0 ≤ i ≤ m − 1). Если ячейка пуста, выводится −1, иначе выводится ключ, который в ней содержится.
