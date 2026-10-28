principio de sustitucion de liskov

este principio nos dice que una clase hija se tiene que poder usar en lugar de la clase padre sin que el programa falle o haga algo que no se espera un ejemplo es un carro puede ser un sedan o un pickup los dos sirven para ir al trabajo porque siguen siendo carros y funcionan de forma parecida 


como se implementa


la clase producto tiene el nombre y el precio y un método convertirprecio que resta el descuento al precio original aplicardescuento, es virtual entonces cada clase hija puede escribir su propia forma de calcular el descuento fisico hereda de producto y tiene un descuento del 30% digital tanbien hereda de producto y tiene un descuento del 12% los dos usan convertirprecio y devuelven el precio final solo cambia el descuento de cada uno, asi se puede usar un fisico o un digital donde se espera un producto sin cambiar lo que se espera que haga el programa.


explicacion de los archivos
 
producto.h declara la clase producto con los atributos nombre y precio tiene sus metodos get y set y los metodos virtuales convertirprecio y aplicardescuento

producto.cpp escribe lo que hacen los get y set y convertirprecio le resta al precio lo que devuelve aplicardescuento en la clase producto aplicardescuento devuelve el precio completo 

fisico.h declara la clase fisico que hereda de producto y agrega el atributo peso con sus métodos get y set y su propia versión de aplicardescuento 


fisico.cpp escribe lo que hacen getpeso y setpeso y calcula el descuento multiplicando el precio por 0.30 

digital.h declara la clase digital que tanbien hereda de producto y agrega el filepath que es la ruta del archivo con sus metodos get y set y su propia version de aplicardescuento 

digital.cpp escribe lo que hacen getfilepath y setfilepath y calcula el descuento multiplicando el precio por 0.12 main crea el producto fisico nintendo con precio de 500 y peso de 1200 crea el producto digital game con precio de 120 y su ruta llama a convertirprecio en los dos y muestra el precio final el fisico queda en 350 y el digital en 105,6