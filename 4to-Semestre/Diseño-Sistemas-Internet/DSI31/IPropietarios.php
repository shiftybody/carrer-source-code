<?php

    $IDPropietario = $_REQUEST['IDPropietario'];
    $Nombre = $_REQUEST['Nombre'];
    $ApellidoPaterno = $_REQUEST['ApellidoPaterno'];
    $ApellidoMaterno = $_REQUEST['ApellidoMaterno'];
    $Localidad = $_REQUEST['Localidad'];
    $Municipio = $_REQUEST['Municipio'];
    $RFC = $_REQUEST['RFC'];

    // print("IDPropietario: ".$IDPropietario);
    // print("Nombre: ".$Nombre);
    // print("ApellidoPaterno: ".$ApellidoPaterno);
    // print("ApellidoMaterno: ".$ApellidoMaterno);
    // print("Localidad: ".$Localidad);
    // print("Municipio: ".$Municipio);
    // print("RFC: ".$RFC);

    $sql = "INSERT INTO propietarios(IDPropietario,Nombre,ApellidoPaterno,ApellidoMaterno,Localidad,Municipio,RFC) VALUES ('$IDPropietario','$Nombre','$ApellidoPaterno','$ApellidoMaterno','$Localidad','$Municipio','$RFC')";
    print("<br>".$sql);

    $con = mysqli_connect("localhost","root","","controlvehicular31");
$result = mysqli_query($con, $sql) or die ("Error al insertar datos".mysqli_error($con));


if ($result) {
    print("Registro insertado correctamente");
}else{
    print("Registro No insertado");
}

mysqli_close($con);
