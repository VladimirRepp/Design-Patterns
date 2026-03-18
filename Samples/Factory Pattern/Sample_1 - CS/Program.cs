namespace Sample
{
    internal class Program
    {
        // Лор: Сейчас компания работает только с грузовиками, но в следующем 
        // квартале планирует запустить морские перевозки с помощью кораблей.

        // Задача: сделать приложение для голистики 
        // необходимо, чтобы добавление нового способа доставки 
        // не требовало изменения текущего кода 

        static void Main(string[] args)
        {
            Logistics logisticsByEarth = new LogisticsByEarth();
            logisticsByEarth.CreateTransport();
            logisticsByEarth.ExecuteDelivery();

            Logistics logisticsBySea = new LogisticsBySea();
            logisticsBySea.ExecuteDelivery();

            logisticsBySea.CreateTransport();
            logisticsBySea.ExecuteDelivery();

            // Пример вывода:
            // Delivery by earth!
            // Transposrt not set!
            // Delivery by sea!
        }
    }
}
