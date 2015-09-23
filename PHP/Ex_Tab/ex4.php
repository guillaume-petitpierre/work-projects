<?php
	$str = "ceci est un test";
	$strWords = explode(" ", $str);
	
	array_map("strtoupper", $strWords);
	print_r($strWords);
?>
