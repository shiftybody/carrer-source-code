<?php

header('Content-Type: text/html; charset=UTF-8');

    $IDConductor = $_POST['IDConductor'];
    $Nombre = $_POST['Nombre'];
    $ApellidoPaterno = $_POST['ApellidoPaterno'];
    $ApellidoMaterno = $_POST['ApellidoMaterno'];
    $Domicilio = $_POST['Domicilio'];
    $FechaNacimiento = $_POST['FechaNacimiento'];
    $GrupoSanguineo = $_POST['GrupoSanguineo'];
    $Donador = $_POST['Donador'];
    $Firma = $_POST['Firma'];
    $Foto = $_POST['Foto'];
    $Antiguedad = $_POST['Antiguedad'];
    $NumEmergencia = $_POST['NumEmergencia'];
    $Sexo = $_POST['Sexo'];
    $Restriccion = $_POST['Restriccion'];

    // print("IDConductor".$IDConductor);
    // print("Nombre".$Nombre);
    // print("ApellidoPaterno".$ApellidoPaterno);
    // print("ApellidoMaterno".$ApellidoMaterno);
    // print("Domicilio".$Domicilio);
    // print("FechaNacimiento".$FechaNacimiento);
    // print("GrupoSanguineo".$GrupoSanguineo);
    // print("Donador".$Donador);
    // print("Firma".$Firma);
    // print("Foto".$Foto);
    // print("Antiguedad".$Antiguedad);
    // print("<br>");

    $sql = "INSERT INTO conductores VALUES ('$IDConductor','$Nombre','$ApellidoPaterno','$ApellidoMaterno','$Domicilio','$FechaNacimiento','$GrupoSanguineo','$Donador','$Firma','$Foto','$Antiguedad','$NumEmergencia','$Sexo','$Restriccion')";

    // send to DBMS

    $con = mysqli_connect("localhost","root","","controlvehicular31");
    $result = mysqli_query($con, $sql) or die ("Error al insertar datos".mysqli_error($con));


    // if ($result) {
    //     print("Registro insertado correctamente");
    // }else{
    //     print("Registro No insertado");
    // }

    mysqli_close($con);

?>


