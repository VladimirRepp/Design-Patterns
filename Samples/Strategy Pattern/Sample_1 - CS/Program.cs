namespace Sample
{
    internal class Program
    {
        static void Main(string[] args)
        {
            Enemy e = new();

            e.Move();

            e.SetMoveStrategy(new WalkMove());
            e.Move();

            e.SetMoveStrategy(new RunMove());
            e.Move();

            e.SetMoveStrategy(new FlyMove());
            e.Move();
        }
    }
}
