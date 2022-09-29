-- phpMyAdmin SQL Dump
-- version 5.2.0
-- https://www.phpmyadmin.net/
--
-- Host: 127.0.0.1
-- Generation Time: Sep 29, 2022 at 03:31 AM
-- Server version: 10.4.24-MariaDB
-- PHP Version: 8.1.6

SET SQL_MODE = "NO_AUTO_VALUE_ON_ZERO";
START TRANSACTION;
SET time_zone = "+00:00";


/*!40101 SET @OLD_CHARACTER_SET_CLIENT=@@CHARACTER_SET_CLIENT */;
/*!40101 SET @OLD_CHARACTER_SET_RESULTS=@@CHARACTER_SET_RESULTS */;
/*!40101 SET @OLD_COLLATION_CONNECTION=@@COLLATION_CONNECTION */;
/*!40101 SET NAMES utf8mb4 */;

--
-- Database: `controlvehicular31`
--

-- --------------------------------------------------------

--
-- Table structure for table `conductores`
--

CREATE TABLE `conductores` (
  `IDConductor` int(11) NOT NULL,
  `Nombre` varchar(35) NOT NULL,
  `ApellidoPaterno` varchar(20) DEFAULT NULL,
  `ApellidoMaterno` varchar(20) DEFAULT NULL,
  `Domicilio` varchar(100) NOT NULL,
  `FechaNacimiento` date NOT NULL,
  `GrupoSanguineo` char(3) DEFAULT NULL,
  `Donador` tinytext NOT NULL,
  `Firma` varchar(50) NOT NULL,
  `Foto` varchar(100) NOT NULL,
  `Antiguedad` date NOT NULL,
  `NumEmergencia` char(10) NOT NULL,
  `Sexo` varchar(10) NOT NULL,
  `Restriccion` varchar(35) DEFAULT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4;

--
-- Dumping data for table `conductores`
--

INSERT INTO `conductores` (`IDConductor`, `Nombre`, `ApellidoPaterno`, `ApellidoMaterno`, `Domicilio`, `FechaNacimiento`, `GrupoSanguineo`, `Donador`, `Firma`, `Foto`, `Antiguedad`, `NumEmergencia`, `Sexo`, `Restriccion`) VALUES
(12345, 'Juanito', 'Guerrero', 'Ramirez', 'Av. De la Luz 55', '2005-10-15', 'A+', 'No', 'http://enlace.com', 'http://perfil.com', '2014-12-04', '4181293453', 'indistinto', 'noAplica'),
(15103114, 'MANUEL', 'CABRERA', 'DIAZ', 'PASEO DE LA ALBORADA 1010 35 RANCHO SAN PEDRO', '1987-10-04', 'O+', 'Si', 'http://firma.xml', 'http://foto.png', '2022-09-09', '4181293358', 'Hombre', 'NoAplica');

-- --------------------------------------------------------

--
-- Table structure for table `licencias`
--

CREATE TABLE `licencias` (
  `NoLicencia` varchar(10) NOT NULL,
  `FechaExpedición` date NOT NULL,
  `IDConductor` int(11) NOT NULL,
  `AtributoD` varchar(10) NOT NULL,
  `FechaVencimiento` date NOT NULL,
  `Observacion` varchar(50) DEFAULT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4;

--
-- Dumping data for table `licencias`
--

INSERT INTO `licencias` (`NoLicencia`, `FechaExpedición`, `IDConductor`, `AtributoD`, `FechaVencimiento`, `Observacion`) VALUES
('BR25423-3', '2004-06-04', 12345, 'desconocid', '2003-03-04', 'noAplica'),
('Q198032-10', '2018-04-23', 15103114, 'B211212424', '0000-00-00', 'NoAplica');

-- --------------------------------------------------------

--
-- Table structure for table `multas`
--

CREATE TABLE `multas` (
  `Folio` int(6) NOT NULL,
  `Fecha` date NOT NULL,
  `IDTarjeta` varchar(10) NOT NULL,
  `IDVehiculo` int(11) NOT NULL,
  `IDOficial` varchar(5) NOT NULL,
  `NoLicencia` varchar(10) NOT NULL,
  `Hora` time NOT NULL,
  `ReporteSeccion` varchar(100) NOT NULL,
  `NombreVia` varchar(100) NOT NULL,
  `Kilometro` smallint(6) NOT NULL,
  `DireccionSentido` char(5) NOT NULL,
  `Municipio` varchar(100) NOT NULL,
  `ReferenciaLugar` varchar(200) NOT NULL,
  `CalificacionBoleta` varchar(150) DEFAULT NULL,
  `ArticuloFundamento` varchar(5) NOT NULL,
  `Motivo` varchar(250) NOT NULL,
  `GarantiaRetenida` varchar(22) NOT NULL,
  `NumeroParteAccidente` smallint(6) NOT NULL,
  `Convenio` char(2) NOT NULL,
  `PuestoADisposicion` char(2) NOT NULL,
  `ObservacionesP` varchar(250) DEFAULT NULL,
  `DepositoOficial` double DEFAULT NULL,
  `ObservacionesC` varchar(250) DEFAULT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4;

--
-- Dumping data for table `multas`
--

INSERT INTO `multas` (`Folio`, `Fecha`, `IDTarjeta`, `IDVehiculo`, `IDOficial`, `NoLicencia`, `Hora`, `ReporteSeccion`, `NombreVia`, `Kilometro`, `DireccionSentido`, `Municipio`, `ReferenciaLugar`, `CalificacionBoleta`, `ArticuloFundamento`, `Motivo`, `GarantiaRetenida`, `NumeroParteAccidente`, `Convenio`, `PuestoADisposicion`, `ObservacionesP`, `DepositoOficial`, `ObservacionesC`) VALUES
(24011, '2022-09-17', 'B0139480', 512, '8845', 'Q198032-10', '23:32:00', 'noAplica', 'libramiento', 14, 'Norte', 'Queretaro', 'Glorieta', 'NoAplica', '87', 'Exceso velocidad', 'Placa', 2, 'NO', 'SI', 'noAplica', 0, 'noAplica');

-- --------------------------------------------------------

--
-- Table structure for table `oficiales`
--

CREATE TABLE `oficiales` (
  `IDOficial` varchar(5) NOT NULL,
  `Nombre` varchar(35) NOT NULL,
  `ApellidoPaterno` varchar(20) DEFAULT NULL,
  `ApellidoMaterno` varchar(20) DEFAULT NULL,
  `Grupo` varchar(45) NOT NULL,
  `Firma` varchar(50) NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4;

--
-- Dumping data for table `oficiales`
--

INSERT INTO `oficiales` (`IDOficial`, `Nombre`, `ApellidoPaterno`, `ApellidoMaterno`, `Grupo`, `Firma`) VALUES
('8845', 'Jacobed', 'Cabrera', 'Diaz', 'CTO IV Pedro Escobedo', 'http://firma.xml');

-- --------------------------------------------------------

--
-- Table structure for table `propietarios`
--

CREATE TABLE `propietarios` (
  `IDPropietario` int(11) NOT NULL,
  `Nombre` varchar(35) NOT NULL,
  `ApellidoPaterno` varchar(20) NOT NULL,
  `ApellidoMaterno` varchar(20) NOT NULL,
  `localidad` varchar(100) NOT NULL,
  `Municipio` varchar(100) NOT NULL,
  `RFC` varchar(13) NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4;

--
-- Dumping data for table `propietarios`
--

INSERT INTO `propietarios` (`IDPropietario`, `Nombre`, `ApellidoPaterno`, `ApellidoMaterno`, `localidad`, `Municipio`, `RFC`) VALUES
(2147483647, 'David', 'Cano', 'Perez', 'Guanajuato', 'Dolores Hidalgo', 'CACD151031');

-- --------------------------------------------------------

--
-- Table structure for table `tarjetas`
--

CREATE TABLE `tarjetas` (
  `IDTarjeta` varchar(10) NOT NULL,
  `TipoServicio` varchar(45) NOT NULL,
  `IDVehiculo` int(11) NOT NULL,
  `IDPropietario` int(11) NOT NULL,
  `NumConstanciaInscripcion` varchar(20) NOT NULL,
  `Servicio` varchar(50) NOT NULL,
  `Origen` varchar(20) NOT NULL,
  `Folio` varchar(410) NOT NULL,
  `FechaVencimiento` date NOT NULL,
  `CVEVehiculo` tinyint(4) NOT NULL,
  `Uso` tinyint(4) NOT NULL,
  `Operacion` varchar(45) NOT NULL,
  `OficinaOperacion` tinyint(4) NOT NULL,
  `Movimiento` varchar(45) NOT NULL,
  `RFA` varchar(20) DEFAULT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4;

--
-- Dumping data for table `tarjetas`
--

INSERT INTO `tarjetas` (`IDTarjeta`, `TipoServicio`, `IDVehiculo`, `IDPropietario`, `NumConstanciaInscripcion`, `Servicio`, `Origen`, `Folio`, `FechaVencimiento`, `CVEVehiculo`, `Uso`, `Operacion`, `OficinaOperacion`, `Movimiento`, `RFA`) VALUES
('B0139480', 'PARTICULAR', 512, 2147483647, 'noAplica', 'Individual', 'Tamaulipas', '0139480', '2022-08-31', 127, 36, '2022/1211308', 4, 'REFRENDO CON CANJE DE PLACAS', 'BDEE139432');

-- --------------------------------------------------------

--
-- Table structure for table `vehiculos`
--

CREATE TABLE `vehiculos` (
  `IDVehiculo` int(11) NOT NULL,
  `NIV` char(17) NOT NULL,
  `Tipo` varchar(20) NOT NULL,
  `Marca` varchar(20) NOT NULL,
  `SubMarca` varchar(20) NOT NULL,
  `Modelo` varchar(20) NOT NULL,
  `NumSerieV` varchar(30) NOT NULL,
  `Clase` varchar(15) NOT NULL,
  `TipoCarroceria` tinyint(4) NOT NULL,
  `NumCilindros` tinyint(4) DEFAULT NULL,
  `Color` char(6) NOT NULL,
  `SerieMotor` varchar(20) NOT NULL,
  `Capacidad` tinyint(4) DEFAULT NULL,
  `CaballosFuerza` tinyint(4) NOT NULL,
  `TipoCombustible` tinyint(4) DEFAULT NULL,
  `Placa` varchar(8) NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4;

--
-- Dumping data for table `vehiculos`
--

INSERT INTO `vehiculos` (`IDVehiculo`, `NIV`, `Tipo`, `Marca`, `SubMarca`, `Modelo`, `NumSerieV`, `Clase`, `TipoCarroceria`, `NumCilindros`, `Color`, `SerieMotor`, `Capacidad`, `CaballosFuerza`, `TipoCombustible`, `Placa`) VALUES
(512, 'noAplica', 'PARTICULAR', 'NISSAN', 'MARCH', '2008', 'NB1243321', '1', 10, 4, 'MORADO', '0044610', NULL, 3, 1, '2008/UPX');

-- --------------------------------------------------------

--
-- Table structure for table `verificacion`
--

CREATE TABLE `verificacion` (
  `IDVerificacion` varchar(11) NOT NULL,
  `IDTarjeta` varchar(10) NOT NULL,
  `EntidadFederativa` varchar(100) DEFAULT NULL,
  `Municipio` varchar(100) DEFAULT NULL,
  `NumVerificacion` tinyint(4) NOT NULL,
  `IDTecnicoVerif` varchar(20) NOT NULL,
  `NumCentroVerificacion` tinyint(4) NOT NULL,
  `FechaExpedicion` date NOT NULL,
  `HoraEntrada` time NOT NULL,
  `HoraSalida` time NOT NULL,
  `Motivo` varchar(200) NOT NULL,
  `FolioVerificacion` int(11) DEFAULT NULL,
  `Semestre` tinyint(4) DEFAULT NULL,
  `FechaVencimiento` date DEFAULT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4;

--
-- Dumping data for table `verificacion`
--

INSERT INTO `verificacion` (`IDVerificacion`, `IDTarjeta`, `EntidadFederativa`, `Municipio`, `NumVerificacion`, `IDTecnicoVerif`, `NumCentroVerificacion`, `FechaExpedicion`, `HoraEntrada`, `HoraSalida`, `Motivo`, `FolioVerificacion`, `Semestre`, `FechaVencimiento`) VALUES
('23433', 'B0139480', 'Guanajuato', 'Dolores Hidalgo', 127, 'B012', 127, '2022-08-31', '20:30:00', '22:29:00', 'NoAplica', 1392345, 4, '2022-09-23');

--
-- Indexes for dumped tables
--

--
-- Indexes for table `conductores`
--
ALTER TABLE `conductores`
  ADD PRIMARY KEY (`IDConductor`);

--
-- Indexes for table `licencias`
--
ALTER TABLE `licencias`
  ADD PRIMARY KEY (`NoLicencia`),
  ADD KEY `FK_2` (`IDConductor`);

--
-- Indexes for table `multas`
--
ALTER TABLE `multas`
  ADD PRIMARY KEY (`Folio`),
  ADD KEY `FK_2` (`NoLicencia`),
  ADD KEY `FK_6` (`IDOficial`),
  ADD KEY `FK_7` (`IDVehiculo`),
  ADD KEY `FK_8` (`IDTarjeta`);

--
-- Indexes for table `oficiales`
--
ALTER TABLE `oficiales`
  ADD PRIMARY KEY (`IDOficial`);

--
-- Indexes for table `propietarios`
--
ALTER TABLE `propietarios`
  ADD PRIMARY KEY (`IDPropietario`);

--
-- Indexes for table `tarjetas`
--
ALTER TABLE `tarjetas`
  ADD PRIMARY KEY (`IDTarjeta`),
  ADD KEY `FK_2` (`IDPropietario`),
  ADD KEY `FK_3` (`IDVehiculo`);

--
-- Indexes for table `vehiculos`
--
ALTER TABLE `vehiculos`
  ADD PRIMARY KEY (`IDVehiculo`);

--
-- Indexes for table `verificacion`
--
ALTER TABLE `verificacion`
  ADD PRIMARY KEY (`IDVerificacion`),
  ADD KEY `FK_2` (`IDTarjeta`);

--
-- AUTO_INCREMENT for dumped tables
--

--
-- AUTO_INCREMENT for table `conductores`
--
ALTER TABLE `conductores`
  MODIFY `IDConductor` int(11) NOT NULL AUTO_INCREMENT, AUTO_INCREMENT=15103115;

--
-- AUTO_INCREMENT for table `multas`
--
ALTER TABLE `multas`
  MODIFY `Folio` int(6) NOT NULL AUTO_INCREMENT, AUTO_INCREMENT=24012;

--
-- AUTO_INCREMENT for table `vehiculos`
--
ALTER TABLE `vehiculos`
  MODIFY `IDVehiculo` int(11) NOT NULL AUTO_INCREMENT, AUTO_INCREMENT=513;

--
-- Constraints for dumped tables
--

--
-- Constraints for table `licencias`
--
ALTER TABLE `licencias`
  ADD CONSTRAINT `FK_1` FOREIGN KEY (`IDConductor`) REFERENCES `conductores` (`IDConductor`);

--
-- Constraints for table `multas`
--
ALTER TABLE `multas`
  ADD CONSTRAINT `FK_5` FOREIGN KEY (`NoLicencia`) REFERENCES `licencias` (`NoLicencia`),
  ADD CONSTRAINT `FK_6` FOREIGN KEY (`IDOficial`) REFERENCES `oficiales` (`IDOficial`),
  ADD CONSTRAINT `FK_7` FOREIGN KEY (`IDVehiculo`) REFERENCES `vehiculos` (`IDVehiculo`),
  ADD CONSTRAINT `FK_8` FOREIGN KEY (`IDTarjeta`) REFERENCES `tarjetas` (`IDTarjeta`);

--
-- Constraints for table `tarjetas`
--
ALTER TABLE `tarjetas`
  ADD CONSTRAINT `FK_2` FOREIGN KEY (`IDPropietario`) REFERENCES `propietarios` (`IDPropietario`),
  ADD CONSTRAINT `FK_3` FOREIGN KEY (`IDVehiculo`) REFERENCES `vehiculos` (`IDVehiculo`);

--
-- Constraints for table `verificacion`
--
ALTER TABLE `verificacion`
  ADD CONSTRAINT `FK_4` FOREIGN KEY (`IDTarjeta`) REFERENCES `tarjetas` (`IDTarjeta`);
COMMIT;

/*!40101 SET CHARACTER_SET_CLIENT=@OLD_CHARACTER_SET_CLIENT */;
/*!40101 SET CHARACTER_SET_RESULTS=@OLD_CHARACTER_SET_RESULTS */;
/*!40101 SET COLLATION_CONNECTION=@OLD_COLLATION_CONNECTION */;
