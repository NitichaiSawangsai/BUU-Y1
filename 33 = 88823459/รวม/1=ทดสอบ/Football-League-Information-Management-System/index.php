<?php
nclude "dblink.php";
$sql = "SELECT * FROM matches WHERE (league = '$lg')
	AND (home_goals IS NULL) AND (away_goals IS NULL)
	ORDER BY match_datetime DESC LIMIT 100";

$result = mysqli_query($link, $sql);
while($match = mysqli_fetch_array($result)){
	//PPPPP thai_datetime() PPPPP
	$date = thai_datetime($match['match_datetime']);
	$home = read_club_info($match['home_id']);
	$away = read_club_info($match['away_id']);
	
	$home_name = $home[0];
	$home_logo = $home[1];
	$away_name = $away[0];
	$away_logo = $away[1];
?>

<tr>
	<td><?php echo $date; ?></td>
	<td><img src="<?php echo $home_logo; ?>" class="logo">
		<?php echo $home_name; ?>
	</td>
	<td><img src="<?php echo $away_logo; ?>" class="logo ">
		<?php echo $away_name; ?>
	</td>
	<td><?php echo $match['watch']; ?></td>
</tr>
<?php
}
...
function read_club_info($id){
	global $link;
	$sql = "SELECT club_name, logo FROM clubs WHERE club_id = $id";
	$res = mysqli_fetch_array($res);
	if(empty($club['logo'])) { $club['logo'] = "images/football.png"; }
	else{ $club['logo'] = "images/logo-club/" . $club['logo']; }
	return array($club['club_name'], $club['logo']);
}
?>

<?php
$sql = "SELECT *FROM natches WHERE (league = '$lg')
	AND (home_goals IS NOT NULL) AND (away_goals IS NOT NULL)
	ORDER BY natch_datetime DESC LIMIT 100";

$result = mysqli_query($link, $sql);
while($match = mysqli_fetch_array($result)){
	$date = thai_datetime($match['match_datetime'], false);
	$home = read_club_info($match['home_id']);
	$away = read_club_info($match['away_id']);

	$home_name = home[0];
	$home_logo = home[1];

	$away_name = away[0];
	$away_logo = away[1];

	$home_goals = $match['home_goals'];
	$away_goals = $match['away_goals'];
?>
<tr>
	<td><?php echo $date; ?></td>
	<td><img src="<?php echo $home_logo; ?>" class="logo">
		<?php echo $home_name; ?>
	</td>
	<td class="text-center">
		<?php echo $home_goals . " - " . $away_goals; ?>
	</td>
	<td><img src="<?php echo $away_logo; ?>" class="logo">
		<?php echo $away_name; ?>
	</td>
</tr>
<?php
}
?>

<?php
$sql = "SELECT * FROM clubs WHERE (league = '$lg')
	ORDER BY points DESC, goals_diff DESC";

$result = mysqli_query($link, $sql);
$pos = 1;
while($club = mysqli_fetch_array($result)){
	if(empty($club['logo'])){ $club['logo'] = "images/football.png";}
?>
<tr>
	<td class="text-center"><?php echo $pos; ?></td>
	<td><img src="images/logo-club/<?php echo $club['logo']; ?>"
		class="logo"><?php echo $club['club_name']; ?>
	</td>
	<td class="text-center"><?php echo $club['played']; ?></td>
	<td class="text-center"><?php echo $club['won']; ?></td>
	<td class="text-center"><?php echo $club['drawn']; ?></td>
	<td class="text-center"><?php echo $club['lost']; ?></td>
	<td class="text-center"><?php echo $club['goals_for']; ?></td>
	<td class="text-center"><?php echo $club['goals_against']; ?></td>
	<td class="text-center"><?php echo $club['goals_diff']; ?></td>
	<td class="text-center"><?php echo $club['points']; ?></td>
</tr>
<?php
	$pos++;
}
mysqli_close($link);
?>

