# final_project


Porject Description:

This is Project is to create a simple user interface where user can desgin a character by selecting a name and other different features such as hair, skin, hat and mood. After finishing selecting the properties, the image of the character will be printed on the screen. 

For example:
if a user select black hair, dark skin, red hat and happy, an corresponding image should appear on the right of the window.


Project Layout:
I divide the character design into three classes. 

Class feature: a classes that has stores a name of the property(QString) and its corresponding image (QPixmap). 
ex: feature black_hair stores the name "black" and the image "black_hair.png"

Private Variables:
name, image
Member Functions:
setName:  setting names
setImage: setting images
getName:  getting names
getImage: getting images

Class character: a classes that store different features under same property. It is a container that stores features. In this case, I use QList<feature> as my container. 
ex: class hair stores all the feature that describes the property of hair and a label which will display the one user wanted.
  
Private variables:
QList<feature>, QLabel

Member functions:
addFeature:  add one feature into the list
setComboBox: transfer all the names in feature into one Combobox, so that the user can select different options in Combobox
             ex: the class hair set the ComboBox hair_box into options of black,pink,purple,brown
size:        return the value of the size of the container
get_name:    return the name at given position
setLabel:    a slot that recieves the choice chosen from comboBox and display the corresponding message
             ex: once everything connected in mainwindows.cpp, when the user clicked "black" under the hair section, an image of black                hair will be displayed.

Class Mainwindows: the setting are as usual except I added four character variables

Private variables: character hair, character skin, character mood, character hat

Related Member Functions:
setCharacter: initialize the four characters with names and images
setComboBox: connect ComboBox created in Mainwindows to the Characters

The connect Functions:
I connect the action of Itemactivated of each combobox to the customized defined slot in class character so that once user clicked a certain option, the image will be changed correspondingly.


How do I Come to this Layout Structure:

The main problem is to how to connect different choices to different images. To solve this problem, I created a customized class called character which includes the name of the feature and the image. 

The next problem is how to connect my images with the properties, (i.e. how do I directly link the property "black hair" to the "black_hair.png"). Then I found out that it is better to sort my images in a list and indexed them with another list of the name. Therefore, I modify my charcater class such that each class has two lists, one list of images that shares the same feature (e.g. skin), but differs in properties (e.g. colors), another list of names, then I can encode the properties and index together. 

As my project progressed, I found out that it is better to first establish a class that stores information of feature and an image, then form a list of such class. In this way, I bind two things in the same list instead of building two lists.

Application to What We learnt from Class:

Since I am using a STL container, I thought it is better to implement some iterators and generic algorithm.
Therefore, I used std::find_if in the public slots function set_Label to search if the names of the feature and input QString matches together. 

I also tried to use std::for_each for my initialization of the four characters in mainwindow.cpp, since it is very redundent to write out every steps. However, the implementation did not work well as I commented in the mainwindow.cpp. When I tried to initialize all my feature with a QList<Pair<Qstring,Qstring>>, it fails and gives me error messages which says that the overloaded feature constructors are ambiguous. I have also tried several different methods but it all gives me error messages that relating to the same problem.



Problem Left Unsolved
Problem that I left unsloved is the display of my image. I could not someshow change my png images to transparent background. Therefore, there are some problems of showing the actual fitted design.

Possible Improvement:
It might be better to use the built-in QPainter to do the painting instead of importing from other resources.

The structure of the character widget is inspired by this youtube video
https://www.youtube.com/watch?v=un2yEFL47ng

