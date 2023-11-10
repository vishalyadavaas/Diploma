//-------question-------//

// Create an interface called Playable with a method called play(). 
// Create two classes called Guitar and Piano, and have both implement the Playable interface. 
// Implement the play() method in each class to print out a different message (e.g. "Strumming guitar" for Guitar and "Playing piano" for Piano). 
// Then, create instances of both Guitar and Piano and call the play() method on each.

//--------solution--------//

interface Playable{
    void play();
}

class Guitar implements Playable{
    public void play(){
        System.out.println("Strumming guitar");
    }
}

class Piano implements Playable{
    public void play(){
        System.out.println("Playing Piano");
    }
}

public class Main {
    public static void main(String[] args) {
        Guitar guitar = new Guitar();
        Piano piano = new Piano();

        guitar.play();
        piano.play();
    }
}
