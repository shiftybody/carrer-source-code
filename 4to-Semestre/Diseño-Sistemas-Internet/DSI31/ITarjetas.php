<?php

    $IDTarjeta = $_POST['IDTarjeta'];
    $TipoServicio = $_POST['TipoServicio'];
    $IDVehiculo = $_POST['IDVehiculo'];
    $IDPropietario = $_POST['IDPropietario'];
    $NumConstanciaInscripcion = $_POST['NumConstanciaInscripcion'];
    $Servicio = $_POST['Servicio'];
    $Origen = $_POST['Origen'];
    $Folio = $_POST['Folio'];
    $FechaVencimiento = $_POST['FechaVencimiento'];
    $CVEVehiculo = $_POST['CVEVehiculo'];
    $Uso = $_POST['Uso'];
    $Operacion = $_POST['Operacion'];
    $OficinaOperacion = $_POST['OficinaOperacion'];
    $Movimiento = $_POST['Movimiento'];
    $RFA = $_POST['RFA'];

    // print("IDTarjeta: ".$IDTarjeta);
    // print("TipoServicio: ".$TipoServicio);
    // print("IDVehiculo: ".$IDVehiculo);
    // print("IDPropietario: ".$IDPropietario);
    // print("NumConstanciaInscripcion: ".$NumConstanciaInscripcion);
    // print("Servicio: ".$Servicio);
    // print("Origen: ".$Origen);
    // print("Folio: ".$Folio);
    // print("FechaVencimiento: ".$FechaVencimiento);
    // print("CVEVehiculo: ".$CVEVehiculo);
    // print("Uso: ".$Uso);
    // print("Operacion: ".$Operacion);
    // print("OficinaOperacion: ".$OficinaOperacion);
    // print("Movimiento: ".$Movimiento);
    // print("RFA: ".$RFA);

    $sql = "INSERT INTO tarjetas(IDTarjeta,TipoServicio,IDVehiculo,IDPropietario,NumConstanciaInscripcion,Servicio,Origen,Folio,FechaVencimiento,CVEVehiculo,Uso,Operacion,OficinaOperacion,Movimiento,RFA) VALUES ('$IDTarjeta','$TipoServicio','$IDVehiculo','$IDPropietario','$NumConstanciaInscripcion','$Servicio','$Origen','$Folio','$FechaVencimiento','$CVEVehiculo','$Uso','$Operacion','$OficinaOperacion','$Movimiento','$RFA')";
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