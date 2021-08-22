<html>
<head>
<title>Banking system</title>
<meta http-equiv="Content-Type" content="text/html; charset=utf-8"></head>
<body>
<form name="form1" method="post" action="save_register.php">
  Register Form <br>
  <table width="400" border="1" style="width: 400px">
    <tbody>

      <tr>
        <td width="125"> &nbsp;Username</td>
        <td width="180">
          <input name="txtUsername" type="text" id="txtUsername" size="20">
        </td>
      </tr>

      <tr>
        <td> &nbsp;Password</td>
        <td><input name="txtPassword" type="password" id="txtPassword" size="20">
        </td>
      </tr>

      <tr>
        <td> &nbsp;Confirm Password</td>
        <td><input name="txtConPassword" type="password" id="txtConPassword" size="20">
        </td>
      </tr>

      <tr>
        <td> &nbsp;Prefix</td>
        <td>
          <select name="ddlPrefix" id="ddlPrefix">
            <option value="Mr.">Mr.</option>
            <option value="Miss.">Miss.</option>
          </select>
        </td>
      </tr>

      <tr>
        <td>&nbsp;Name</td>
        <td><input name="txtName" type="text" id="txtName" size="20"></td>
        <td><input name="txtlast" type="text" id="txtlast" size="20"></td>
      </tr>

      <tr>
        <td>&nbsp;Email</td>
        <td><input name="txtEmail" type="text" id="txtEmail" size="20"></td>
      </tr>

      <tr>
        <td>&nbsp;Telephone</td>
        <td><input name="txtTel" type="text" id="txtTel" size="20"></td>
      </tr>

    </tbody>
  </table>
  <br>
  <input type="submit" name="Submit" value="Save">
</form>
</body>
</html>
