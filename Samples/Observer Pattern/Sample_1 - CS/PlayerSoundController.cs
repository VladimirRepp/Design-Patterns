namespace Sample_Observer
{
    internal class PlayerSoundController : IHPObserver
    {
        public void Update(int hp)
        {
            Console.WriteLine("[Log]: PlayerSoundController called Update!");
        }
    }
}
