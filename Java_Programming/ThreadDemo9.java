class Demo extends Thread
{
    public void run()
    {
        try
        {
            int i = 0;

            for(i = 1; i <= 10; i++)
            {
            System.out.println("Thread :"+Thread.currentThread().getName()+" "+i);
            Thread.sleep(3000); //when you need to slowdown the execution then you use sleep
            //3 seconds gap in printing both threads serially but simultaneously
            }
        }
        catch(Exception eobj)
        {}
    }
}

//there is also a deamon thread which is hidden but there...example garbage collector of
// java or antivirus of a pc

class ThreadDemo9
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