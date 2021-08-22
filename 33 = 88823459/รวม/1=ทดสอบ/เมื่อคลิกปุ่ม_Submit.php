<html>
<head>
<script type="text/javascript">
function closeWin()
{
myWindow.close();
}
</script>
</head>
<body>

<script type="text/javascript">
myWindow=window.open('','','width=200,height=100');
myWindow.document.write("This is 'myWindow'");
myWindow.document.write('<input type="button" value="Close " onclick="window.close()" />');
</script>

<input type="button" value="Close 'myWindow'" onclick="closeWin()" />

</body>
</html>
