<?php

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


$SQL = "INSERT INTO multas VALUES ('','$Fecha','$IDTarjeta','$IDVehiculo','$IDOficial','$NoLicencia','$Hora','$ReporteSeccion','$NombreVia','$Kilometro','$DireccionSentido','$Municipio','$ReferenciaLugar','$CalificacionBoleta','$ArticuloFundamento','$Motivo','$GarantiaRetenida','$NumeroParteAccidente','$Convenio','$PuestoADisposicion','$ObservacionesP','$DepositoOficial','$ObservacionesC')";

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