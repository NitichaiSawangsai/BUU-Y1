<script type="text/javascript">

function checkMaxChars(el, num)
{
var msg;
var elName = el.name || el.id;
var msgEl = document.getElementById(elName + '-msg')
var count = num - el.value.length;
if (msgEl){
if (count == num){
msg = 'Maximum ' + num + ' characters';
} else if (count > 0){
msg = count + ' character'
+ ((count > 1)?'s':'')+ ' left';
} else if (0 == count){
msg = 'Limit reached';
} else {
msg = '<b>Too many characters</b>, please remove '
+ (count * -1);
}
msgEl.innerHTML = msg;
}
}
</script>

<textarea id="t-01" onkeyup="checkMaxChars(this, 5)";
"></textarea><span id="t-01-msg">Maximum 5 characters</span>