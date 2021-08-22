<html>
  <head>
    <meta charset="utf-8">
  </head>
<script language="JavaScript">
//put your text here
var theText = "Nitichai Sawangsai";

function nextSize(i,incMethod,textLength)
{
if (incMethod == 1) return (72*Math.abs( Math.sin(i/(textLength/3.14))) );
if (incMethod == 2) return (255*Math.abs( Math.cos(i/(textLength/3.14))));
}

function sizeCycle(text,method,dis)
{
    output = "";
    for (i = 0; i < text.length; i++)
    {
        size = parseInt(nextSize(i +dis,method,text.length));
        output += "<font style='font-size: "+ size +"pt'>" +text.substring(i,i+1)+ "</font>";
    }
    theDiv.innerHTML = output;
}

function doWave(n) 
{ 
    sizeCycle(theText,1,n);
    if (n > theText.length) {n=0}
    setTimeout("doWave(" + (n+1) + ")", 50);
}
</script>
<div ID="theDiv" align="center">

</div>
<body onload="doWave(0)">
</body>
<html>