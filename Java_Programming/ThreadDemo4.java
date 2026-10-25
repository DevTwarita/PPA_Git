class Demo implements Runnable //interface
{
    public void run()
    {
        System.out.println("Thread is running...");
    }
}

class ThreadDemo4
{
    public static void main(String A[])
    {
        System.out.println("Inside Main thread"); //main thread

        Thread dobj1 = new Thread(new Demo());
        Thread dobj2 = new Thread(new Demo());

        dobj1.start();
        dobj2.start();
    }
}