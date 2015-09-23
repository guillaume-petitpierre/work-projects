/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package hour;

/**
 *
 * @author guillaume
 */
public class Hour {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        // TODO code application logic here
        long actualTimestamp = System.currentTimeMillis();
        int actualSeconds = (int) ((actualTimestamp / 1000) % 60);
        int actualMinutes = (int) ((actualTimestamp / 60000) % 60);
        int actualHours = (int) ((actualTimestamp / 3600000) % 24);

        System.out.println(String.format("%02d", actualHours)
                + ":" + String.format("%02d", actualMinutes)
                + ":" + String.format("%02d", actualSeconds));
        
    }

}
