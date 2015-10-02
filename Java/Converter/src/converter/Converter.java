/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package converter;

/**
 *
 * @author guillaume
 */
public class Converter {
    
    int value;
    
    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        // TODO code application logic here
        Converter c = new Converter(12);
	System.out.println(c.getHexString());
	c.setBinary("10101010");
	System.out.println(c.getValue());
	System.out.println(c.getHexString());
    }
    
    public Converter(int val){
        value = val;
    }
    public int getValue(){
       return value; 
    }
    
    public void setBinary(String bin){
        int strSize = bin.length();
        value = 0;
        for(int i = 0; i < strSize; i++){
            if(bin.charAt(i) == '1'){
                value += Math.pow(2, strSize-i-1);
            }
        }
    }
    
    public String getHexString(){
        String result = "";
        
        result = Integer.toHexString(value);
        
        return result;
    }
    
}
