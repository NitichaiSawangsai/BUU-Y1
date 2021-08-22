<?php 	include '../Controller/class/showcss.php'; ?>
<html>

    <title>GUNAUG BANKING</title>
    <?php  showcss();?>
<body>
  <div class="col-md-8">
    <?php
			  $objConnect = mysqli_connect("localhost","root","","mew") or die("Error Connect to Database");
			  $strSQL = "SELECT * FROM history WHERE account_num = '".$_POST['account']."'";
				$objQuery = $objConnect->query($strSQL) or die ("Error Query [".$strSQL."]");
		?>
				<table width="600" border="1">
				          <tr>
											 	<th width="91"> <div align="center">Account </div></th>
											 	<th width="98"> <div align="center">List </div></th>
											 	<th width="90"> <div align="center">Amount </div></th>
											 	<th width="97"> <div align="center">Time </div></th>
											 	<th width="59"> <div align="center">Date </div></th>
								 	</tr>
						 	<?php while($objResult = mysqli_fetch_array($objQuery)) { ?>
								 	<tr>
										 	<td><?php echo $objResult['account_num'];?></td>
										 	<td><?php echo $objResult['list'];?></td>
										 	<td><?php echo $objResult['amount'];?></td>
										 	<td><?php echo $objResult['time'];?></td>
										 	<td><?php echo $objResult['date'];?></td>
								 	</tr>
						 	<?php }  ?>
							 	</table> <?php $objConnect->close(); ?>

</div>
</body>
</script>
</html>
