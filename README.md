1.The app simulates an automatic cake maker with unlimited resources. Its main role is to serve the customer with the desired cake.
In other words, the customer will have a main menu that will give the customer certain selection possibilities.

2.Command Panel - this component is the client interface, as it is a simulation this will be the CLI (command line interface).
It will contain all the functions needed to satisfy the client's wishes.

3.Command Taker - this component takes command from CommandPanel. It communicates, CakeMaker and CarouselOfCakes. 
CommandTaker's functionality is to honor commands given by the client. It manages them according to its functionality, i.e. when it receives a command from CommandPanel.
Honoring the command consists in checking that the product is in the CarouselOfCakes (mini storage), if it exists, it will be removed from the Carousel of Cakes and will distribute it to the client.
If it is not in the CarouselOfCakes, the customer will ask the CakeMaker to honour the order.

4.CarouselOfCakes - this is a cake storage. It has a maximum capacity of 12 cakes. It will only accept items of type Cake

5.CakeMaker - is the one who makes the cake. He makes a cake in a time frame specified in the recipe

6.CommandPanel - class attributes: recipe list and CommandPanel component - features:
- showProducts(): will display all products that are available for purchase
-selectProduct(name: string): will select the desired product from the menu and pass it on to CommandTaker for order pickup.
-selectProduct(name: string, nrOfProducts: int): will override the above method by specifying the quantity of the desired product
- showProductsInCarousel(): will display in the console which products are in the circular warehouse.

7.CommandTaker - class attributes: CarouselOfCakes - the one who owns the most purchased cakes, CakeMaker the one who makes the cakes, CakeRecipe - the list of ready-made cakes - features:
- takeCommand(recipe: CakeRecipe): Cake - takes the command from CommandPanel and sends it on to CakeMaker.
- Before it does another check if the cake is in the CarouselOfCakes, if the desired product is there then it will be taken directly from there.
-takeCommand(recipe: CakeRecipe, nrOfCakes): array[Cake] - takes the command if there are more than one. If a quantity of products is requested then it will ask the CakeMaker directly.
- getCakesFromCarousel(): array[Cake] - returns the list of cakes that are in the CarouselOfCakes.
- checkCarouselOfCakes(): bool - checks the current capacity in the CarouselOfCakes.
- refillCarousel():void - if the capacity in the Carousel is low, this method will ask CakeMaker to make as many cakes as needed to fill the CarouselOfCakes to the maximum.

8.CakeMaker - class attributes: - - class functions: 
- takeCommand(recipe: RecipeCake): Cake - this method simulates the creation of a cake, i.e. for each recipe received, it waits 5 seconds and then returns a Cake object.From the recipe it will take the name
