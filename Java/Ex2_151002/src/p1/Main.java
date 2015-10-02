package p1;

public class Main {

    public static void main(String[] args) {
	    Rectangle r1 = new Rectangle();
        System.out.println(r1);
        System.out.println("Aire: "+r1.getArea()+" Périmètre: "+r1.getPerimeter());

        Rectangle r2 = new Rectangle(2.5, 2);
        System.out.println(r2);
        System.out.println("Aire: "+r2.getArea()+" Périmètre: "+r2.getPerimeter());
    }
}
