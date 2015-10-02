<?php

/**
 * @param string $t source dont les symboles sont � compter
 * @return array(array[string]integer tableau associatif symbole => occurences,
                 integer nombre d'occurences totales) tableau
 */
function occurences($t) {
   # � faire: construire le tableau associatif $a symbole => occurences et
   # compter le $total d'occurences!
   $total = 0;
   $a;
   $s = str_split($t);
   foreach ($s as $value) {
      $a[$value]++;
      $total++;
   }

   return array($a, $total);
}

/**
 * @param array[string]integer $o tableau associatif symbole => occurences
 * @param integer $t nombre total d'occurences
 * @return float valeur de l'entropie sur $o
 */
function calculer_entropie($o, $t) {
   $H = 0;

   # � faire: calculer l'entropie en parcourant le tableau symbole/occurence
   foreach ($o as $value) {
      $H += $value/$t * log($value/$t, 2);
   }

   return $H;
}

?>
