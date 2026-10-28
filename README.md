# Principio de Sustitucion de Liskov (L de SOLID)

## Que dice el principio

Si una clase hija hereda de una clase padre, la hija se tiene que poder usar en lugar
de la padre sin que el programa falle ni se comporte raro.

Ejemplo: si alguien necesita un carro para ir al trabajo, le sirve un sedan o un pick-up.
Los dos son carros y se manejan igual: volante, acelerador y freno.

## Como se implementa en este codigo

La clase Producto tiene el metodo ConvertirPrecio(), que calcula el precio final asi:

```
Preciofinal = Precio - AplicarDescuento();
```

AplicarDescuento() es virtual, entonces cada clase hija lo cambia (override) con su
propio descuento:

- Fisico: 30% del precio.
- Digital: 12% del precio.

Las dos clases hijas usan ConvertirPrecio() igual que Producto, siempre devuelve un
precio final, solo cambia cuanto descuento tienen. Por eso Fisico y Digital pueden
sustituir a Producto sin romper nada, y eso es lo que pide el principio.

Si una clase hija cambiara el metodo para hacer algo diferente (por ejemplo devolver
un precio negativo), ya no se podria usar como un Producto normal y no cumpliria Liskov.

## Explicacion de cada archivo

### Producto.h
Declara la clase padre Producto. Tiene los atributos Nombre y Precio, los get y set,
el metodo publico virtual ConvertirPrecio() y el metodo privado virtual AplicarDescuento().

### Producto.cpp
Escribe los get y set. ConvertirPrecio() le resta al precio lo que devuelve
AplicarDescuento(). En Producto, AplicarDescuento() devuelve getPrecio().

### Fisico.h
Declara Fisico, que hereda de Producto. Agrega el atributo Peso con sus get y set, y
sobrescribe AplicarDescuento() con override.

### Fisico.cpp
AplicarDescuento() devuelve getPrecio() * 0.30, o sea el 30% del precio.

### Digital.h
Declara Digital, que hereda de Producto. Agrega el atributo filePath con sus get y set,
y tambien sobrescribe AplicarDescuento() con override.

### Digital.cpp
AplicarDescuento() devuelve getPrecio() * 0.12, o sea el 12% del precio.

### main.cpp
1. Crea un producto fisico "Nintendo" de 500 con peso 1200.
2. Crea un producto digital "Game" de 120 con su ruta.
3. Llama a ConvertirPrecio() en los dos y muestra el precio final.

Se llama al mismo metodo en los dos objetos y cada uno da su resultado correcto:
500 - 30% = 350 y 120 - 12% = 105.6.

## Resultado al ejecutarlo

```
Sustitucion de Liskov

[Producto Fisico] 30% Descuento $500. Precio Final: $350

[Producto Digital ] 12% Descuento $120. Precio Final: $105.6
```
