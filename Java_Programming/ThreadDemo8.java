class Demo extends Thread
{
    public void run()
    {
        int i = 0;

        for(i = 1; i <= 10; i++)
        {
        System.out.println("Thread :"+Thread.currentThread().getName()+" "+i);
        // both threads will print 10 times serially for both threads but
        // JVM thread scheduler decides its schedule so it will print as
        // JVM schedules so the order and the flow differs
        }
    }
}

class ThreadDemo8
{
    public static void main(String A[]) throws Exception
    {
        System.out.println("Inside Main thread"); //main thread

        Demo dobj1 = new Demo(); //created first thread
        Demo dobj2 = new Demo(); //created second thread

        dobj1.start();
        dobj2.start();

        dobj1.setName("First_Thread");
        dobj2.setName("Second_Thread");

        dobj1.join();
        dobj2.join();

        System.out.println("End of main thread");
    }
}