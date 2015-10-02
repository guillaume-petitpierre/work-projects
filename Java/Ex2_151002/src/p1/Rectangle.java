package p1;

/**
 * Created by guillaume on 10/2/15.
 */
public class Rectangle {
    private double largeur;
    private double hauteur;

    public Rectangle(){
        largeur = 1;
        hauteur = 1;
    }

    public Rectangle(double largeur, double hauteur){
        this.largeur = largeur;
        this.hauteur = hauteur;
    }

    public double getArea(){
        return largeur * hauteur;
    }

    public double getPerimeter(){
        return 2*(largeur+hauteur);
    }

    public double getLargeur() {
        return largeur;
    }

    public double getHauteur() {
        return hauteur;
    }

    public void setLargeur(double largeur) {
        this.largeur = largeur;
    }

    public void setHauteur(double hauteur) {
        this.hauteur = hauteur;
    }

    @Override
    public String toString(){
        return "Rectangle: Hauteur: " + hauteur + " Largeur: " + largeur;
    }
}
