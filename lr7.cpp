using System;

class MainClass
{
public static void Main(string[] args)
{
int t = int.Parse(Console.ReadLine());
for (int i = 0; i < t; i++)
{
Console.ReadLine(); // пропускаем пустую строку
int n = int.Parse(Console.ReadLine());
int[] weights = new int[n];
int totalWeight = 0;
for (int j = 0; j < n; j++)
{
weights[j] = int.Parse(Console.ReadLine());
totalWeight += weights[j];
}
Array.Sort(weights); // сортируем массив весов
int team1Weight = 0;
int team2Weight = 0;
for (int j = n - 1; j >= 0; j--)
{
if (team1Weight <= team2Weight)
{
team1Weight += weights[j];
}
else
{
team2Weight += weights[j];
}
}
if (team1Weight < team2Weight)
{
Console.WriteLine(team1Weight + " " + team2Weight);
}
else
{
Console.WriteLine(team2Weight + " " + team1Weight);
}
if (i < t - 1)
{
Console.WriteLine(); // выводим пустую строку между блоками
}
}
}
}
