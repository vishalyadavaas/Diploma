// WAP to create a simple class to find out the area and perimeter of rectangle and box using super and this keyword.

class Rectangle {
    private int length;
    private int width;

    public Rectangle(int length, int width) {
        this.length = length;
        this.width = width;
    }

    public int getArea() {
        return length * width;
    }

    public int getPerimeter() {
        return 2 * (length + width);
    }
}

class Box extends Rectangle {
    private int heigth;

    public Box(int length, int width, int heigth) {
        super(length, width);
        this.heigth = heigth;
    }

    public int getVolume() {
        return getArea() * heigth;
    }
}

public class Main {
    public static void main(String[] args) {
        Rectangle rectangle = new Rectangle(10, 20);
        System.out.println("Area of Rectangle : " + rectangle.getArea());
        System.out.println("Perimeter of Rectangle : " + rectangle.getPerimeter());

        Box box = new Box(10, 20, 5);
        System.out.println("Volume of Rectangle : " + box.getVolume());
    }
}