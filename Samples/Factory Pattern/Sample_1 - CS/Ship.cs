namespace Sample
{
    internal class Ship : ITransport
    {
        public void Delivery()
        {
            Console.WriteLine("Delivery by sea!");
        }
    }
}
