namespace Sample
{
    internal class LogisticsByEarth : Logistics
    {
        public override void CreateTransport()
        {
            _transport = new Truck();
        }

        public override void ExecuteDelivery()
        {
            if(_transport == null)
            {
                Console.WriteLine("Transposrt not set!");
                return;
            }

            _transport.Delivery();
        }
    }
}
