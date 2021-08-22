<!DOCTYPE html>
<html>
<body>

<h2>My First JavaScript</h2>

<script type=”text/javascript” src=”jquery.js”></script>
<script type=”text/javascript”>
$(document).ready(function() {
//	$(‘#buttonHide’).click(function(){
		$(‘#Hello’).hide();
//	});
	$(‘#buttonShow’).click(function(){
		$(‘#Hello’).show(); 
   	});   
});
</script>
<button type="button" id=”buttonShow” >Show</button>
<button type="button" id=”buttonHide” >hide</button>

<input type=”button” id=”buttonShow” value=”Show”>
<input type=”button” id=”buttonHide” value=”hide”>
<hr />
<div id=”Hello”>Hello</div>





</body>
</html> 

