using System;
using System.IO;
using System.Text.RegularExpressions;

class Program
{
    static void Main()
    {
        string textFile = @"C:\Temp\test.txt";
        string resultFile = @"C:\Temp\result.txt";
        
        if (File.Exists(textFile))
        {
            string[] lines = File.ReadAllLines(textFile);
            string pattern = @"\b\d{1,2}:\d{2}:\d{2} (AM|PM)\b";

            int counter = 0;
            double baseLineStartingWorkingHour = 8.00;
            double baseLineEndingWorkingHour = 16.50;
            double diffTotal = 0.00;

            foreach (string line in lines)
            {
                Match match = Regex.Match(line, pattern);
                if (match.Success)
                {
                    string time = match.Value;
                    string[] timeComponents = time.Split(':', ' ');
                    if (timeComponents.Length == 4)
                    {
                        _= int.TryParse(timeComponents[0], out int hour);
                        _= int.TryParse(timeComponents[1], out int minutes);
                        _= int.TryParse(timeComponents[2], out int seconds);
                        string period = timeComponents[3];

                        if ((period == "AM" && (hour >= 1 && hour <= 6))
                            || (period == "PM" && (hour >= 5 && hour <= 11))
                            || (period == "PM" && hour == 4 && minutes >= 30)
                            || (period == "PM" && hour == 12))
                        {
                            if (period == "AM" && hour == 12) { hour = 0; }
                            else if (period == "PM" && hour < 12) { hour += 12; }

                            double convertedMinutes = minutes / 60.00;
                            double convertedSeconds = seconds / 3600.00;
                            double convertedHours = hour + convertedMinutes + convertedSeconds;

                            if (convertedHours < baseLineStartingWorkingHour || convertedHours > baseLineEndingWorkingHour)
                            {
                                double diff = Math.Abs(convertedHours - (convertedHours > baseLineEndingWorkingHour ? baseLineEndingWorkingHour : baseLineStartingWorkingHour));
                                diffTotal += diff;
                                counter++;

                                Console.WriteLine(line);
                                File.AppendAllText(resultFile, line + Environment.NewLine);
                            }
                        }
                    }
                }
            }

            Console.WriteLine("\ntotal: " + counter + "\ndiff = " + "hours: " + (int)diffTotal + " minutes: " + ((int)((diffTotal - (int)diffTotal) * 60)));
            File.AppendAllText(resultFile, Environment.NewLine + "total: " + counter + Environment.NewLine + "diff = " + "hours: " + (int)diffTotal + " minutes: " + ((int)((diffTotal - (int)diffTotal) * 60)));
        }
    }
}
