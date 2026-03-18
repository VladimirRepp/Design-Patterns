namespace Sample
{
    internal class LogisticsBySea : Logistics
    {
        public override void CreateTransport()
        {
            _transport = new Ship();
        }

        public override void ExecuteDelivery()
        {
            if (_transport == null)
            {
                Console.WriteLine("Transposrt not set!");
                return;
            }

            _transport.Delivery();
        }
    }
}
