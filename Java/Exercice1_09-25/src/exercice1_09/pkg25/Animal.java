/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package exercice1_09.pkg25;

/**
 *
 * @author guillaume
 */
public class Animal {
    
    private boolean isSleeping;
    
    public Animal(){
        isSleeping = false;
        System.out.println("Animal créé");
    }
    
    public void vaDormir(){
        if(!isSleeping){
            System.out.println("Animal va dormir");
            isSleeping = true;
        }
    }
    
    public void reveilleToi(){
        if(isSleeping){
            System.out.println("Animal se réveille");
            isSleeping = false;
        }
    }
    
    public boolean dort(){
        if(isSleeping){
            System.out.println("L'animal dort.");
        } else {
            System.out.println("L'animal est réveillé.");
        }
        return isSleeping;
    }
    
}
