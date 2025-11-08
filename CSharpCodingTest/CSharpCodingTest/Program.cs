using System.Linq;

List<int> numbers = new List<int> { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };

// 필터링
var evenNumbers = numbers.Where(n => n % 2 == 0);
Console.WriteLine($"짝수: {string.Join(", ", evenNumbers)}");

// 변환
var squares = numbers.Select(n => n * n);
Console.WriteLine($"제곱: {string.Join(", ", squares)}");

// 정렬
var sorted = numbers.OrderByDescending(n => n);

// 집계
int sum = numbers.Sum();
double average = numbers.Average();
int max = numbers.Max();
int min = numbers.Min();

Console.WriteLine($"합계: {sum}, 평균: {average:F2}");
Console.WriteLine($"최대: {max}, 최소: {min}");

// 복합 쿼리
var result = numbers
    .Where(n => n > 5)
    .Select(n => n * 2)
    .OrderBy(n => n);

Console.WriteLine($"결과: {string.Join(", ", result)}");