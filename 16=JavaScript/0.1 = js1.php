<html>
<head>
<meta http-equiv="Content-Type" content="text/html; charset=utf-8" />
<style type="text/css">
body{
font-family:Tahoma, Geneva, sans-serif;
font-size:12px;
}
</style>
<script type="text/javascript">
 function countTextJs1(){
  var txtForJs1=document.getElementById('txtForJs1').value;
  var countTxt=txtForJs1.length;
    document.getElementById('rs_txtForJs1').innerHTML=countTxt
 }
 function countTextJs2(){
  var txtForJs2=document.getElementById('txtForJs2').value;
  var countTxtNull=0;
  var countTxt=0;
  try{
   countTxtNull=txtForJs2.match(/\s/g).length;
  }catch(e){}
  countTxt=txtForJs2.length-countTxtNull;
    document.getElementById('rs_txtForJs2').innerHTML=countTxt
 }
</script>
</head>

<body>
<div>
กรอกข้อมูล <input name="txtForJs1" id="txtForJs1" type="text" size="100" onkeyup="countTextJs1()" /> <span id="rs_txtForJs1">0</span>
</div>
<br />
<div>
  กรอกข้อมูล <input name="txtForJs2" id="txtForJs2" type="text" size="100" onkeyup="countTextJs2()" /> <span id="rs_txtForJs2">0</span>
</div>
</body>
</html>
