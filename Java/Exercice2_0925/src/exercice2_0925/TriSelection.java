/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package exercice2_0925;

/**
 *
 * @author guillaume
 */
public class TriSelection {
    
    private int[] tableau;
    
    private TriSelection(){
        tableau = new int[100];
    }
    
    public static void main(String[] args){
        TriSelection ts = new TriSelection();
        ts.rempliTableau();
        ts.afficheTableau();
        ts.trieTableau();
        System.out.println("------------------");
        ts.afficheTableau();
        
    }
    
    private void trieTableau(){
        int i, j, plusGrand, temp;  
        for (i = tableau.length - 1; i > 0; i--) {
                plusGrand = 0;
                for (j = 1; j <= i; j ++) { //locate smallest
                        if(tableau[j] < tableau[plusGrand])
                                plusGrand = j;
                }
                temp = tableau[plusGrand];
                tableau[plusGrand] = tableau[i];
                tableau[i] = temp;
        }
    }
    
    private void afficheTableau(){
        for(int a : tableau){
            System.out.println(a);
        }
    }
    
    private void rempliTableau(){
        for(int i = 0; i < 100; i++){
            tableau[i] = (int) (Math.random() * (1000 - 0))+0;
        }
    }
    
    
}
