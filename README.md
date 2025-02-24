# 6. Zigzag Conversion

The string "PAYPALISHIRING" is written in a zigzag pattern on a given number of rows like this: (you may want to display this pattern in a fixed font for better legibility)

P   A   H   N
A P L S I I G
Y   I   R
And then read line by line: "PAHNAPLSIIGYIR"

Write the code that will take a string and make this conversion given a number of rows:

string convert(string s, int numRows); 

Example 1:

Input: s = "PAYPALISHIRING", numRows = 3
Output: "PAHNAPLSIIGYIR"
Example 2:

Input: s = "PAYPALISHIRING", numRows = 4
Output: "PINALSIGYAHRPI"
Explanation:
P     I    N
A   L S  I G
Y A   H R
P     I
Example 3:

Input: s = "A", numRows = 1
Output: "A" 

Constraints:

1 <= s.length <= 1000
s consists of English letters (lower-case and upper-case), ',' and '.'.
1 <= numRows <= 1000

# 6. Зигзагообразное преобразование

Строка "PAYPALISHIRING" записывается зигзагообразным узором в заданном количестве строк следующим образом: (вы можете отобразить этот узор фиксированным шрифтом для лучшей читаемости)

P   A   H   N
A P L S I I G
Y   I   R
А затем читайте построчно: "PAHNAPLSIIGYIR"

Напишите код, который будет принимать строку и выполнять это преобразование с учётом количества строк:

преобразование строки(string s, int numRows); 

Пример 1:

Ввод: s = «PAYPALISHIRING», numRows = 3
Вывод: «PAHNAPLSIIGYIR»
Пример 2:

Ввод: s = «PAYPALISHIRING», numRows = 4
Вывод: «PINALSIGYAHRPI»
Объяснение:
P     I    N
A   L S  I G
Y A   H R
P     I
Пример 3:

Ввод: s = «A», numRows = 1
Вывод: «A»
 

Ограничения:

1 <= s.length <= 1000
s состоит из английских букв (строчных и прописных), ',' и '.'.
1 <= numRows <= 1000
