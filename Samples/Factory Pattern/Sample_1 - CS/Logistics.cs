namespace Sample
{
    // Фабрика
    internal abstract class Logistics
    {
        protected ITransport _transport;

        public ITransport GetTransport => _transport;

        public abstract void CreateTransport();
        public abstract void ExecuteDelivery();
    }
}
