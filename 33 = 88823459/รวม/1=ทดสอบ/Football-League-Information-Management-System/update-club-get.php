<?php
...
if(isset($_GET['league'])) {
	include "dblink.php";
	$lg = $_GET['league'];
	$sql = "SELECT * FROM clubs WHERE league = '$lg' ORDER BY club_name";
	$result = mysqli_query($link, $sql);
	while($club = mysqli_fetch_array($result)){
		$src = "images/football.png";
		if(!empty($club['logo'])){
			$src = "images/logo-club/".$club['logo'];
		}
		echo "
		<span class=\"clib\">
			<img src=\"$src\">{$club['club_name']}<br>
			<a href=\"#\" data-id=\"{$club['club_id']}\"
				data-club=\"{$club['club_name']}\">PPPPP</a>
			<a href=\"#\" data-id=\"{$club['club_name']}\">PPPPP</a>
		</span>"
	}
	mysqli_close($link);
}
?>
