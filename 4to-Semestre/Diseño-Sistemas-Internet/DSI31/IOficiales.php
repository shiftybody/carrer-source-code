<?php

$IDOficial = $_REQUEST['IDOficial'];
$Nombre = $_REQUEST['Nombre'];
$ApellidoPaterno = $_REQUEST['ApellidoPaterno'];
$ApellidoMaterno = $_REQUEST['ApellidoMaterno'];
$Grupo = $_REQUEST['Grupo'];
$Firma = $_REQUEST['Firma'];

// print("IDOficial: ".$IDOficial);
// print("Nombre: ".$Nombre);
// print("ApellidoPaterno: ".$ApellidoPaterno);
// print("ApellidoMaterno: ".$ApellidoMaterno);
// print("Grupo: ".$Grupo);
// print("Firma: ".$Firma);

$sql = "INSERT INTO oficiales VALUES ('$IDOficial','$Nombre','$ApellidoPaterno','$ApellidoMaterno','$Grupo','$Firma')";
print("<br>".$sql);

$con = mysqli_connect("localhost","root","","controlvehicular31");
$result = mysqli_query($con, $sql) or die ("Error al insertar datos".mysqli_error($con));


if ($result) {
    print("Registro insertado correctamente");
}else{
    print("Registro No insertado");
}

mysqli_close($con);

?>