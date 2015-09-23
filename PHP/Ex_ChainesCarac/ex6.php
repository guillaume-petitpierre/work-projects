<?php
	$a = `date +%M`;
	if($a % 2 == 0){
		echo "OUI";
	} else {
		echo "NON";
	}
?>
