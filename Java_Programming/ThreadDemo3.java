class Demo implements Runnable
{
    public void run()
    {
        System.out.println("Thread is running..."); //here logic is written while programming
    }
}

class ThreadDemo3
{
    public static void main(String A[])
    {
        System.out.println("Inside Main thread"); //main thread

        Demo dobj1 = new Demo(); //created first thread
        Demo dobj2 = new Demo(); //created second thread

        dobj1.start(); //error
        dobj2.start(); //error
    }
}