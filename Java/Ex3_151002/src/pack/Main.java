package pack;

import java.util.regex.Pattern;

public class Main {

    public static void main(String[] args) {
	// write your code here
        Main m = new Main();
        m.showLettre(10, "Jeanne", "Pierre", "Paul");
    }

    public void showLettre(int num, String prenomA, String prenomB, String prenomC){
        String[] lettre = {"Je vous adresse à tous deux mes sincères félicitations",
                "à l’occasion de votre XXN anniversaire de mariage.",
                "Votre entente  et votre complicité font plaisir à voir.\n",
                "« L’amour n’est pas un sentiment, c’est un art »,",
                "disait G. Duhamel. Je pense que vous êtes deux grands",
                "artistes, qui avez su barrer à merveille votre navire",
                "et franchir les nombreux écueils que la vie quotidienne",
                "a fait surgir devant vous. Vous avez su créer un",
                "foyer affectueux, réalisation  d’une heureuse union.\n",
                "Chère XXA, cher XXB, je vous réitère mes sincères",
                "félicitations pour  cet anniversaire de mariage et",
                "vous souhaite de tout cœur que la solidité de votre",
                "union perdure encore durant de longues années.\n",
                "Avec mon meilleur souvenir,\nXXC"};


        for(int i = 0; i<lettre.length; i++){
            String actStr = lettre[i];

            //Replace XXN, XXA, XXB, XXC with function args
            actStr = actStr.replace("XXN", Integer.toString(num));
            actStr = actStr.replace("XXA", prenomA);
            actStr = actStr.replace("XXB", prenomB);
            actStr = actStr.replace("XXC", prenomC);

            //Adding space at the end of the string
            actStr += " ";

            //Adding one more new line for each \n
            if(actStr.contains("\n")) {
                String[] strArray = actStr.split("\n");
                strArray[0] += "\n\n";
                actStr = strArray[0];
                if(!strArray[1].equals(" ")){
                    actStr += strArray[1];
                }
            }

            //Removing unnecessary spaces
            if(actStr.contains("  ")){
                actStr = actStr.replace("  ", " ");
            }

            //Adding a space after a comma if needed
            if(actStr.contains(",")){
                if(actStr.charAt(actStr.indexOf(",")+1) != ' '){
                    String[] strArray = actStr.split(Pattern.quote(","));
                    strArray[0] += ", ";
                    actStr = strArray[0]+strArray[1];


                }
            }

            //Adding a space after a point if needed
            if(actStr.contains(".")){
                if(actStr.charAt(actStr.indexOf(".")+1) != ' '){
                    String[] strArray = actStr.split(Pattern.quote("."));
                    strArray[0] += ". ";
                    actStr = new StringBuilder().append(strArray[0]).append(strArray[1]).toString();

                }
            }

            //Putting the string back in the array
            lettre[i] = actStr;
        }


        for (int i=0; i<lettre.length; i++){
            System.out.print(lettre[i]);
        }



    }
}
