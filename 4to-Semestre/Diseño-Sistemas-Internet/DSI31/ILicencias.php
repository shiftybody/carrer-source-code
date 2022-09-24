<?php

$NoLicencia = $_GET['NoLicencia'];
$FechaExpedicion = $_GET['FechaExpedicion'];
$IDConductor = $_GET['IDConductor'];
$AtributoD = $_GET['AtributoD'];
$FechaVencimiento = $_GET['FechaVencimiento'];
$Observacion = $_GET['Observacion'];

// print("NoLicencia: ".$NoLicencia);
// print("FechaExpedicion: ".$FechaExpedicion);
// print("IDConductor: ".$IDConductor);
// print("AtributoD: ".$AtributoD);
// print("FechaVencimiento: ".$FechaVencimiento);
// print("Observaciones: ".$Observacion);

$sql = "INSERT INTO licencias VALUES ('$NoLicencia','$FechaExpedicion','$IDConductor','$AtributoD','$FechaVencimiento','$Observacion')";
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
