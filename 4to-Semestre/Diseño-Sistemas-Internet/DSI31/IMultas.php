<?php

$Folio = $_REQUEST['Folio'];    
$Fecha = $_REQUEST['Fecha'];
$IDTarjeta = $_REQUEST['IDTarjeta'];
$IDVehiculo = $_REQUEST['IDVehiculo'];
$IDOficial = $_REQUEST['IDOficial'];
$NoLicencia = $_REQUEST['NoLicencia'];
$Hora = $_REQUEST['Hora'];
$ReporteSeccion = $_REQUEST['ReporteSeccion'];
$NombreVia = $_REQUEST['NombreVia'];
$Kilometro = $_REQUEST['Kilometro'];
$DireccionSentido = $_REQUEST['DireccionSentido'];
$Municipio = $_REQUEST['Municipio'];
$ReferenciaLugar = $_REQUEST['ReferenciaLugar'];
$CalificacionBoleta = $_REQUEST['CalificacionBoleta'];
$ArticuloFundamento = $_REQUEST['ArticuloFundamento'];
$Motivo = $_REQUEST['Motivo'];
$GarantiaRetenida = $_REQUEST['GarantiaRetenida'];
$NumeroParteAccidente = $_REQUEST['NumeroParteAccidente'];
$Convenio = $_REQUEST['Convenio'];
$PuestoADisposicion = $_REQUEST['PuestoADisposicion'];
$ObservacionesP = $_REQUEST['ObservacionesP'];
$DepositoOficial = $_REQUEST['DepositoOficial'];
$ObservacionesC = $_REQUEST['ObservacionesC'];

// print("Folio: ".$Folio);
// print("Fecha: ".$Fecha);
// print("IDTarjeta: ".$IDTarjeta);
// print("IDVehiculo: ".$IDVehiculo);
// print("IDOficial: ".$IDOficial);
// print("NoLicencia: ".$NoLicencia);
// print("Hora: ".$Hora);
// print("ReporteSeccion: ".$ReporteSeccion);
// print("NombreVia: ".$NombreVia);
// print("Kilometro: ".$Kilometro);
// print("DireccionSentido: ".$DireccionSentido);
// print("Municipio: ".$Municipio);
// print("ReferenciaLugar: ".$ReferenciaLugar);
// print("CalificacionBoleta: ".$CalificacionBoleta);
// print("ArticuloFundamento: ".$ArticuloFundamento);
// print("Motivo: ".$Motivo);
// print("GarantiaRetenida: ".$GarantiaRetenida);
// print("NumeroParteAccidente: ".$NumeroParteAccidente);
// print("Convenio: ".$Convenio);
// print("PuestoAdisposicion: ".$PuestoADisposicion);
// print("ObservacionesP: ".$ObservacionesP);
// print("DepositoOficial: ".$DepositoOficial);
// print("ObservacionesC: ".$ObservacionesC);

$sql = "INSERT INTO multas VALUES ('$Folio','$Fecha','$IDTarjeta','$IDVehiculo','$IDOficial','$NoLicencia','$Hora','$ReporteSeccion','$NombreVia','$Kilometro','$DireccionSentido','$Municipio','$ReferenciaLugar','$CalificacionBoleta','$ArticuloFundamento','$Motivo','$GarantiaRetenida','$NumeroParteAccidente','$Convenio','$PuestoADisposicion','$ObservacionesP','$DepositoOficial','$ObservacionesC')";
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