<!DOCTYPE html>
<html>
  <body>
    <h1>Calcul d'entropie d'une source sans mémoire</h1>
<?php
    include("entropie-include-squelette.php");
    $texte = "";
    if(isset($_POST["texte"])){
      $texte = $_POST["texte"];
      list($occurences, $total) = occurences($texte);

?>
    <p>La cha�ne fait <?php echo $total; ?> symbole(s) dont
       <?php echo count($occurences) ?> unique(s).
       Les symboles se r�partissent comme suit:
       <ul>
       <?php
          foreach ($occurences as $key => $value) {
             echo "<li>"
                  . (ctype_graph($key) ? htmlentities($key, ENT_XHTML, "ISO-8859-1") : "ASC " . ord($key))
                  . ": " . $value . "</li>";
          }
        ?>
        </ul></p>
        if ($total) {
     $entropie = calculer_entropie($occurences, $total);
     ?>
     <p>L'entropie calcul�e vaut: <?php echo $entropie; ?></p>
        <?php
        }
     }
   ?>
   <h2>Texte � traiter</h2>
   <form action="" method="post">
   <p><textarea name="texte" rows="10" cols="60"><?php echo htmlentities($texte, ENT_XHTML, "ISO-8859-1"); ?></textarea>
      <input type="submit" />
   </p>
   </form>
  </body>
</html>
