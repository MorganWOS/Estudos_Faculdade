CREATE TABLE Cliente (
    idCliente INT  PRIMARY KEY IDENTITY(1,1),
    cpf VARCHAR(11),
    nome VARCHAR(60),
    nascimento DATE  
);

CREATE TABLE Modelo (
    idModelo INT  PRIMARY KEY IDENTITY(1,1) ,  
    Descricao VARCHAR(40)  
);

CREATE TABLE Veiculo (
    idVeiculo INT  PRIMARY KEY IDENTITY(1,1),
    idCliente INT ,
    idModelo  INT ,
    placa VARCHAR(8),
    cor VARCHAR(20),
);

CREATE TABLE Patio (
    idPatio INT PRIMARY KEY IDENTITY(1,1),
    endereco VARCHAR(40),
    capacidade INT 
);

CREATE TABLE Estaciona (
    idEstaciona INT  PRIMARY KEY IDENTITY(1,1),
    idPatio INT ,
    idVeiculo INT ,
    dataEntrada VARCHAR(10),
    horaEntrada VARCHAR(10),
    dataSaida VARCHAR(10),
    horaSaida VARCHAR(10),
);

INSERT INTO Cliente (cpf, nome, nascimento) VALUES
('12345678901', 'João Silva', '1985-06-15'),  
('23456789012', 'Maria Souza', '1990-08-20'), 
('34567890123', 'Carlos Oliveira', '1982-12-02'), 
('45678901234', 'Ana Pereira', '1995-03-10'), 
('56789012345', 'Pedro Santos', '1978-01-25'), 
('67890123456', 'Lucas Costa', '1988-11-30'), 
('78901234567', 'Mariana Lima', '1992-07-14'), 
('89012345678', 'Fernanda Rodrigues', '1986-09-05'), 
('90123456789', 'Rafael Carvalho', '1993-04-22'), 
('01234567890', 'Julia Almeida', '1991-05-12');

INSERT INTO Modelo (descricao) VALUES
('Sedan'),    
('SUV'),      
('Hatch'),    
('Pickup'),   
('Convertible'), 
('Van'),      
('Coupe'),    
('Wagon'),    
('Minivan'),  
('Sport');   

INSERT INTO Veiculo (placa, cor, idCliente, idModelo) VALUES
('AAA-1111', 'Preto', 1, 1),
('JJJ-2020', 'Branco', 2, 2), 
('CCC-3333', 'Azul', 3, 3),
('DDD-4444', 'Vermelho', 4, 4),
('EEE-5555', 'Cinza', 5, 5),
('FFF-6666', 'Prata', 6, 6),
('JEG-1010', 'Verde', 7, 7), 
('JJJ-1010', 'Amarelo', 8, 8),
('III-9999', 'Verde', 9, 9), 
('JJJ-2020', 'Rosa', 10, 10);

INSERT INTO Patio (endereco, capacidade) VALUES
('Rua A', 100),  
('Rua B', 150),  
('Rua C', 120),  
('Rua D', 80),
('Rua E', 200),
('Rua F', 110),
('Rua G', 90),
('Rua H', 130),
('Rua I', 170),
('Rua J', 140);

INSERT INTO Estaciona (idPatio, idVeiculo, dataEntrada, horaEntrada, dataSaida, horaSaida) VALUES
(1, 1, '2023-08-28', '08:00', '2023-08-28', '18:00'),  
(2, 2, '2023-08-28', '09:00', '2023-08-28', '17:00'),  
(3, 3, '2023-08-28', '07:30', '2023-08-28', '19:00'),  
(1, 6, '2023-08-28', '10:00', '2023-08-28', '16:00'),  
(2, 5, '2023-08-28', '08:30', '2023-08-28', '18:30'),  
(3, 7, '2023-08-28', '09:30', '2023-08-28', '17:30'),  
(1, 8, '2023-08-28', '08:15', '2023-08-28', '18:15'),  
(2, 9, '2023-08-28', '07:45', '2023-08-28', '19:15'),  
(3, 10, '2023-08-28', '09:15', '2023-08-28', '17:45'),  
(1, 4, '2023-08-28', '08:45', '2023-08-28', '18:45');

-- 1) Exiba a placa e o nome dos donos de todos os veículos.
   select C.nome, V.placa
      from cliente C inner join
           veiculo V on C.idCliente=v.idCliente

-- 2) Exiba o CPF e o nome do cliente que possui o veículo de placa “JJJ-2020”.
select C.cpf, C.nome
      from cliente C inner join
           veiculo V on C.idCliente=v.idCliente
           where placa = 'JJJ-2020'

-- 3) Exiba a placa e a cor do veículo que possui o código de estacionamento 1.
select V.placa, V.cor
      from veiculo V  inner join
           estaciona E on V.idVeiculo=E.idVeiculo
           where idPatio = 1


-- 4) Exiba a placa e o ano do veículo que possui o código de estacionamento 1.
select V.placa, V.ano
      from veiculo V  inner join
           estaciona E on V.idVeiculo=E.idVeiculo
           where idPatio = 1

-- 5) Exiba a placa, o ano do veículo e a descrição de seu modelo, 
--     se ele possuir ano a partir de 2000.
select V.placa, V.ano, M.descricao
      from veiculo V  inner join
           modelo M on V.idModelo=M.idModelo
           where V.ano = 2000

-- 6) Exiba o endereço, a data de entrada e de saída dos estacionamentos 
--    do veículo de placa “JEG-1010”.
select P.endereco, E.dataEntrada, E.dataSaida
      from patio P  inner join
           estaciona E on P.idPatio=E.idPatio inner JOIN
           veiculo V on E.idVeiculo=V.idVeiculo
           where V.placa = 'JEG-1010'

-- 7) Exiba a quantidade de vezes que os veículos de cor verde estacionaram.
select  total = COUNT(E.idEstaciona)
      from veiculo V  inner join
           estaciona E on V.idVeiculo=E.idVeiculo
           where V.cor = 'Verde'

-- 8) Liste todos os clientes que possuem carro de modelo 1.
select  C.nome
      from cliente C  inner join
           veiculo V on C.idCliente=V.idCliente inner JOIN
           modelo M on V.idModelo=M.idModelo
           where M.idModelo = 1

-- 9) Liste as placas, os horários de entrada e saída dos veículos de cor verde.
select  V.placa, E.horaEntrada, E.horaSaida
		   from veiculo V  inner join
           estaciona E on V.idVeiculo=E.idVeiculo
           where V.cor = 'Verde'

-- 10) Liste todas as informações sobre o veículo de placa “JJJ-2020”.
select  V.placa, V.cor, V.idCliente, V.idModelo, V.ano
      	   from Veiculo V
           where V.placa = 'JJJ-2020'


-- 11) Exiba o nome do cliente do veículo cujo código do estacionamento é 2.
select  C.nome
      from cliente C  inner join
           veiculo V on C.idCliente=V.idCliente inner JOIN
           estaciona E on V.idVeiculo=E.idVeiculo
           where E.idPatio = 2

-- 12) Exiba o CPF do cliente que possui o veículo cujo código do estacionamento é 3.
select  C.cpf
      from cliente C  inner join
           veiculo V on C.idCliente=V.idCliente inner JOIN
           estaciona E on V.idVeiculo=E.idVeiculo
           where E.idPatio = 3

-- 13) Exiba o nome do cliente e o código do estacionamento de número 2.
select  C.nome, E.idPatio
      from cliente C  inner join
           veiculo V on C.idCliente=V.idCliente inner JOIN
           estaciona E on V.idVeiculo=E.idVeiculo
           where E.idPatio = 2

-- 14) Exiba a placa, o nome dos donos e as descrições dos modelos de todos os veículos.
select  C.nome, V.placa, M.descricao
      from cliente C  inner join
           veiculo V on C.idCliente=V.idCliente inner JOIN
           modelo M on V.idModelo=M.idModelo
