<style>
   @import "global.css";
</style>
<link href="js/jquery-ui.min.css" rel="stylesheet">
<script src="js/jquery-2.1.1.min.js"> </script>
<script src="js/jquery-ui.min.js"> </script>
<script>
$(function(){
	$('#tabs').tabs({active: 0});
        $('#tabs').css('border','none');
});
</script>



<body>
<table id="container">
<tr><td id="article">

<div id="top">  </div>
<div id="tabs"> 
   <ul>
       <li><a href="#tab1">แท็บ 1</a></li>
       <li><a href="#tab2">แท็บ 2</a></li>
       <li><a href="#tab3">แท็บ 3</a></li>
   </ul>
   <div id="tab1"> </div>
   <div id="tab2"> </div>
   <div id="tab3"> </div>
</div> 

</td> 
<td id="aside"> <?php include "aside.php" ?> </td>
</tr>
<tr>

<td id="footer" class="text-center"><?php include "footter.php"; ?></td>
<td>&nbsp;</td>
</tr>
</table>
</body>
    
