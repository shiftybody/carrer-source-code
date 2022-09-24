<?php

    $IDVerificaciones = $_REQUEST['IDVerificacion'];
    $IDTarjeta = $_REQUEST['IDTarjeta'];
    $EntidadFederativa = $_REQUEST['EntidadFederativa'];
    $Municipio = $_REQUEST['Municipio'];
    $NumVerificacion = $_REQUEST['NumVerificacion'];
    $IDTecnicoVerif = $_REQUEST['IDTecnicoVerif'];
    $NumCentroVerificacion = $_REQUEST['NumCentroVerificacion'];
    $FechaExpedicion = $_REQUEST['FechaExpedicion'];
    $HoraEntrada = $_REQUEST['HoraEntrada'];
    $HoraSalida = $_REQUEST['HoraSalida'];
    $Motivo = $_REQUEST['Motivo'];
    $FolioVerificacion = $_REQUEST['FolioVerificacion'];
    $Semestre = $_REQUEST['Semestre'];
    $FechaVencimiento = $_REQUEST['FechaVencimiento'];

    // print("IDVerificaciones: ".$IDVerificaciones);
    // print("IDTarjeta: ".$IDTarjeta);
    // print("EntidadFederativa: ".$EntidadFederativa);
    // print("Municipio: ".$Municipio);
    // print("NumVerificacion: ".$NumVerificacion);
    // print("IDTecnicoVerif: ".$IDTecnicoVerif);
    // print("NumCentroVerificacion: ".$NumCentroVerificacion);
    // print("FechaExpedicion: ".$FechaExpedicion);
    // print("HoraEntrada: ".$HoraEntrada);
    // print("HoraSalida: ".$HoraSalida);
    // print("Motivo: ".$Motivo);
    // print("FolioVerificacion: ".$FolioVerificacion);
    // print("Semestre: ".$Semestre);
    // print("FechaVencimiento: ".$FechaVencimiento);

    $sql = "INSERT INTO verificacion(IDVerificacion, IDTarjeta, EntidadFederativa, Municipio, NumVerificacion, IDTecnicoVerif, NumCentroVerificacion, FechaExpedicion, HoraEntrada, HoraSalida, Motivo, FolioVerificacion, Semestre, FechaVencimiento) VALUES ('$IDVerificaciones', '$IDTarjeta', '$EntidadFederativa', '$Municipio', '$NumVerificacion', '$IDTecnicoVerif', '$NumCentroVerificacion', '$FechaExpedicion', '$HoraEntrada', '$HoraSalida', '$Motivo', '$FolioVerificacion', '$Semestre', '$FechaVencimiento')";
    print("<br>".$sql);

    $con = mysqli_connect("localhost","root","","controlvehicular31");
    $result = mysqli_query($con, $sql) or die ("Error al insertar datos".mysqli_error($con));


    if ($result) {
    print("Registro insertado correctamente");
    }else{
    print("Registro No insertado");
    }

mysqli_close($con);
