<?php
	$aboTypes = array("general", "demi-tarif", "aucun");
	$abo = "saucisson";
	
	$check = false;	
	
	foreach($aboTypes as $type){
		if($type == $abo){
			echo "Le type de l'abonnement est $type";
			$check = true;
		}
	}

	if($check == false){
		echo "La valeur $abo n'est pas reconnue.";
	}
	
?>
