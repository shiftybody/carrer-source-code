<?php

    $IDPropietario = $_REQUEST['IDPropietario'];
    $Nombre = $_REQUEST['Nombre'];
    $ApellidoPaterno = $_REQUEST['ApellidoPaterno'];
    $ApellidoMaterno = $_REQUEST['ApellidoMaterno'];
    $Localidad = $_REQUEST['Localidad'];
    $Municipio = $_REQUEST['Municipio'];
    $RFC = $_REQUEST['RFC'];

    $SQL = "INSERT INTO propietarios(IDPropietario,Nombre,ApellidoPaterno,ApellidoMaterno,Localidad,Municipio,RFC) VALUES ('$IDPropietario','$Nombre','$ApellidoPaterno','$ApellidoMaterno','$Localidad','$Municipio','$RFC')";

    include("conexion.php");
    $Con = Conectar();
    $Result = Ejecutar($Con, $SQL) or die ("Error al insertar datos".mysqli_error($Con));
    if ($Result) {
        print("Registro insertado correctamente");
    }else{
        print("Registro No insertado");
    }
    Cerrar($Con);

?>
