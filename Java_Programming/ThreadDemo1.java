class ThreadDemo1
{
    public static void main(String A[])
    {
        System.out.println("Inside Main");
        
        Thread t = Thread.currentThread(); //static method i.e currentThread

        System.out.println("Current thread name is : "+t.getName()); //main thread

        System.out.println("Current thread ID is : "+t.getId()); //deprecated method warning

        System.out.println("Thread is alive or not : "+t.isAlive()); //true or false

        System.out.println("Thread priority is : "+t.getPriority()); //1-10 1 is least, higher is 10, common is 5
    }
}