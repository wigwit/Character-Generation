# final_project

This is Project is to create a simple user interface where user can desgin a character by selecting a name and other different features such as hair, eyes, skin, hat and mood. After finishing selecting the properties, the image of the character will be printed on the screen. 

The main problem is to how to connect different choices to different images. To solve this problem, I created a customized class called character which includes the name of the feature and the image. 

The next problem is how to connect my image with the property. How do I directly link the property "black hair" to the "black_hair.png". Then I found out that it is better to sort my images in a list and indexed them with another list of the name. Therefore, I modify my charcater class such that each class has a list of images that shares the same feature (e.g. skin), but differs in properties (e.g. colors), then I can encode the properties and index together. 

As my project progressed, I found out that it is better to first establish a class called that stores information of feature and an image, then form a list of the class called feature. In this way, I bind two things in the same list instead of building two lists

Another problem that I left unsloved is the display of my image. I could not someshow change my png images to transparent backgroun. Therefore, there are some problems of showing the actual design.

Also I tried to use generic algorithm to enhace my code, under character.cpp, I use std::find_if in the public slots function set_Label