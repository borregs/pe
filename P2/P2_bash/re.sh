# Este script se ejecuta mediante el mando system("")
# Este script lee linea por linea un listado de nombres y cuenta las letras de cada uno

filename="$1"
lncount=0
acum=0

while read -r line
do
  name="$line"
  echo "Name read from file: $name"
  echo "Length of this name: ${#name}"
  acum=$(( acum + ${#name} ))
  lncount=$((lncount + 1))
  echo " "

done < al.lst

  echo "Termine de processar $lncount lineas del archivo al.lst"
  echo "En promedio la cantidad de letras de los nombres processados fue de: $(( $acum / $lncount ))"
  echo " "
  export PROM=8
