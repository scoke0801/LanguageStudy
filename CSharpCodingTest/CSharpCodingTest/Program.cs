using System.Diagnostics;

public class PerformanceComparison
{
    // 필드
    public int PublicField;
    private int _privateField;

    // 자동 구현 프로퍼티
    public int AutoProperty { get; set; }

    // 간단한 프로퍼티
    public int SimpleProperty
    {
        get => _privateField;
        set => _privateField = value;
    }

    // 복잡한 프로퍼티
    public int ComplexProperty
    {
        get
        {
            Console.WriteLine("복잡한 getter 실행");
            return _privateField * 2;
        }
        set
        {
            Console.WriteLine("복잡한 setter 실행");
            if (value > 0)
                _privateField = value / 2;
        }
    }

    public static void PerformanceTest()
    {
        var obj = new PerformanceComparison();
        const int iterations = 10_000_000;
        var sw = Stopwatch.StartNew();

        // 필드 접근
        sw.Start();
        for (int i = 0; i < iterations; i++)
        {
            obj.PublicField = i;
            var value = obj.PublicField;
        }
        sw.Stop();
        Console.WriteLine($"필드: {sw.ElapsedMilliseconds}ms");

        // 자동 프로퍼티 접근
        sw.Restart();
        for (int i = 0; i < iterations; i++)
        {
            obj.AutoProperty = i;
            var value = obj.AutoProperty;
        }
        sw.Stop();
        Console.WriteLine($"자동 프로퍼티: {sw.ElapsedMilliseconds}ms");

        // 간단한 프로퍼티 접근
        sw.Restart();
        for (int i = 0; i < iterations; i++)
        {
            obj.SimpleProperty = i;
            var value = obj.SimpleProperty;
        }
        sw.Stop();
        Console.WriteLine($"간단한 프로퍼티: {sw.ElapsedMilliseconds}ms");
    }

    static void Main()
    {
        PerformanceTest();
    }
}