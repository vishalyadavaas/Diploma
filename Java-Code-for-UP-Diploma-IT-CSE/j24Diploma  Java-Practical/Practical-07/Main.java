class Shape {
    private String name;

    public Shape() {
    }

    public Shape(String n) {
        name = n;
    }

    public String getName() {
        return name;
    }

    public void setName(String n) {
        name = n;
    }
}

class Circle extends Shape {
    private Double radius;

    public Circle(Double r, String n) {
        super(n);
        radius = r;
    }

    public Double getRadius() {
        return radius;
    }

    public void setRadius(Double r) {
        radius = r;
    }

    public Double area() {
        return Math.PI * radius * radius;
    }
}

class Square extends Shape {
    private Double side;

    public Square(Double s, String n) {
        super(n);
        side = s;
    }

    public Double getSide() {
        return side;
    }

    public void setSide(Double s) {
        side = s;
    }

    public Double area() {
        return side * side;
    }
}

class Cylinder extends Circle {
    private Double height;

    public Cylinder(Double h, Double r, String n) {
        super(r, n);
        height = h;
    }

    public Double getHeight() {
        return height;
    }

    public void setHeight(Double h) {
        height = h;
    }

    public Double volume() {
        return area() * height;
    }
}

class Sphere extends Circle {
    public Sphere(Double r, String n) {
        super(r, n);
    }

    public Double volume() {
        return (4.0 / 3.0) * Math.PI * Math.pow(getRadius(), 3);
    }
}

class Cube extends Square {
    public Cube(Double s, String n) {
        super(s, n);
    }

    public Double volume() {
        return Math.pow(getSide(), 3);
    }
}

public class Main {
    public static void main(String[] args) {
        Circle circle = new Circle(5.0, "Circle");
        System.out.println(circle.getName());
        System.out.println("Area: " + circle.area());

        Square square = new Square(4.0, "Square");
        System.out.println(square.getName());
        System.out.println("Area: " + square.area());

        Cylinder cylinder = new Cylinder(3.0, 2.0, "Cylinder");
        System.out.println(cylinder.getName());
        System.out.println("Area: " + cylinder.area());
        System.out.println("Volume: " + cylinder.volume());

        Sphere sphere = new Sphere(4.0, "Sphere");
        System.out.println(sphere.getName());
        System.out.println("Area: " + sphere.area());
        System.out.println("Volume: " + sphere.volume());

        Cube cube = new Cube(5.0, "Cube");
        System.out.println(cube.getName());
        System.out.println("Area: " + cube.area());
        System.out.println("Volume: " + cube.volume());
    }
}
