#PARA LA CONEXION SSH ENTRE EQUIPOS LINUX
#ESTANDO UBICADO EN EL DIRECTORIO EN DONDE SE ENCUENTRA LA .pem
sudo ssh -i harolkey.pem hpenates@bd7.intrared.net #pide clave del computador

#PARA GENERAR BACKUP DE MYSQL AMBIENTE 4 ESPECIFICANDO LA RUTA
mysql4dump -u hpenates -p c_nuttra < /backup/c_nuttra.sql

#VER RUTA ACTUAL
PWD

#CAMBIAR DE DIRECTORIO
CD [RUTA_DIRECTORIO]

#LISTAR ARCHIVOS Y CARPETAS DENTRO DEL DIRECTORIO ACTUAL
LS

#LISTAR ARCHIVOS Y CARPETAS DENTRO DEL DIRECTORIO ACTUAL CON SUS DETALLES
LS -L Ó LL

#CAMBIAR LOS PERMISOS DE UN ARCHIVO O CARPETA
CHMOD [VALOR DE LOS PERMISOS] [ARCHIVO ó DIRECTORIO]

#CAMBAR LOS PERMISOS DE UNA CARPETA Y SUS SUBCARPETAS DE FORMA RECURSIVA
CHMOD -R [VALOR DE LOS PERMISOS] [DIRECTORIO]

#EJEMPLO PERMISOS A UN ARCHIVO
SUDO CHMOD 777 c_nuttra.sql

#PERMISOS DE ADMINISTRADOR
SUDO

#ELIMINAR ARCHIVO
RM [NOMBRE_ARCHIVO]

#ELIMINAR ARCHIVO Y CARPETAS 
RM -R [DIRECTORIO]

#CONEXION SCP PARA COMUNICAR Y TRANSFERIR ACRHIVOS ENTRE SERVIDORES LINUX (ESTANDO EN LA CARPETA HOME/[USUARIO])
scp -i .ssh/haroldkey.pem /backup/c_nuttra.sql hpenates@bd13.intrared.net:/backup

#conectarnos a la base de datos
mysql --host 127.0.0.1 --port 3305 -u hpenates -p c_prueba < c_nuttra.sql

#BUSCA Y COMENTAREA LOS DROP DE UN .sql
sed -i 's/DROP/ -- DROP/g' c_nuttra.sql

#SUBE UNA BASE DE DATOS AL SERVIDOR ESPECIFICADO
mysql --host 127.0.0.1 --port 3305 -u hpenates - p < c_nuttra.sql

#BASH PARA CREAR USUARIOS Y DAR PERMISOS
/usr/bin/usuarioApp.bash


COMPRIMIR Y DESCOMPRIMIR ARCHIVOS

Archivos .tar.gz:
Comprimir: tar -czvf empaquetado.tar.gz /carpeta/a/empaquetar/
Descomprimir: tar -xzvf archivo.tar.gz

Archivos .tar:
Empaquetar: tar -cvf paquete.tar /dir/a/comprimir/
Desempaquetar: tar -xvf paquete.tar

Archivos .gz:
Comprimir: gzip -9 index.php
Descomprimir: gzip -d index.php.gz

Archivos .zip:
Comprimir: zip archivo.zip carpeta
Descomprimir: unzip archivo.zip


CARGAR UN ARCHIVO SQL EN LOCALHOST

source /home/jose/work/tab_genera_detcom.sql


RENOMBRAR ARCHIVOS

mv mi_archivo.txt mi_nuevo_archivo.txt


DESCARGAR ARCHIVO DESDE SERVIDOR A LOCAL

scp -i jlrodriguez.pem jlrodriguez@web7.intrared.net:/backup/3000/mysql_log_binario4/mysql-bin.003571 /home/jose/Escritorio/logs/