#include <SFML/Graphics.hpp>
using namespace sf;

#include <iostream>
#include <string>
#include <vector>
using namespace std;



int main() {
    // declaration
    vector<char> breakout;
    int page = 0;
    int slide = 0;
    int slideSize = 0;
    int escape = 0;
    bool done = false;



    // create a window
    RenderWindow window( VideoMode(2000, 1000), "Koi's Portfolio :)" ); // tenative title

    /////////////////////////////////////
    // BEGIN ANY FILE LOADING

    // perform any file processing once before draw loop begins

    //  END  ANY FILE LOADING
    /////////////////////////////////////

    // create an event object once to store future events
    Event event; // delete? 

    // while the window is open
    while( window.isOpen() ) {
        // clear any existing contents
        window.clear();

        /////////////////////////////////////
        // BEGIN DRAWING HERE

        // general
        Font font;
        if (!font.loadFromFile("/Users/emmajohnson/Desktop/CSCI_200/PP/data/Schoolbell-Regular.ttf")) {
            return -1;
        }

        // IMAGES

        // IJ 12
        Image image_IJ12;
        if (!image_IJ12.loadFromFile("/Users/emmajohnson/Desktop/CSCI_200/PP/data/IJ_12.jpg")) {
            cerr << "Error loading image" << endl;
            return -1;
        }

        Texture IJ12;
        IJ12.loadFromImage(image_IJ12);  
        IJ12.setSmooth(false);

        // IJ 11
        Image image_IJ11;
        if (!image_IJ11.loadFromFile("/Users/emmajohnson/Desktop/CSCI_200/PP/data/IJ_11.jpg")) {
            cerr << "Error loading image" << endl;
            return -1;
        }

        Texture IJ11;
        IJ11.loadFromImage(image_IJ11);  
        IJ11.setSmooth(false);

        // IJ 13
        Image image_IJ13;
        if (!image_IJ13.loadFromFile("/Users/emmajohnson/Desktop/CSCI_200/PP/data/IJ_13.jpg")) {
            cerr << "Error loading image" << endl;
            return -1;
        }

        Texture IJ13;
        IJ13.loadFromImage(image_IJ13);  
        IJ13.setSmooth(false);

        // Self Portrait (3)

        Image image_SP1;
        if (!image_SP1.loadFromFile("/Users/emmajohnson/Desktop/CSCI_200/PP/data/1.png")) {
            cerr << "Error loading image" << endl;
            return -1;
        }

        Texture SP1;
        SP1.loadFromImage(image_SP1);  
        SP1.setSmooth(false);

        Image image_SP2;
        if (!image_SP2.loadFromFile("/Users/emmajohnson/Desktop/CSCI_200/PP/data/2.png")) {
            cerr << "Error loading image" << endl;
            return -1;
        }

        Texture SP2;
        SP2.loadFromImage(image_SP2);  
        SP2.setSmooth(false);

        Image image_SP3;
        if (!image_SP3.loadFromFile("/Users/emmajohnson/Desktop/CSCI_200/PP/data/3.png")) {
            cerr << "Error loading image" << endl;
            return -1;
        }

        Texture SP3;
        SP3.loadFromImage(image_SP3);  
        SP3.setSmooth(false);

        // GR
        Image image_GR;
        if (!image_GR.loadFromFile("/Users/emmajohnson/Desktop/CSCI_200/PP/data/GR.jpg")) {
            cerr << "Error loading image" << endl;
            return -1;
        }

        Texture GR;
        GR.loadFromImage(image_GR);  
        GR.setSmooth(false);

        // IJR 1
        Image image_IJR1;
        if (!image_IJR1.loadFromFile("/Users/emmajohnson/Desktop/CSCI_200/PP/data/IJR_1.jpg")) {
            cerr << "Error loading image" << endl;
            return -1;
        }

        Texture IJR1;
        IJR1.loadFromImage(image_IJR1);  
        IJR1.setSmooth(false);

        // IJR 2
        Image image_IJR2;
        if (!image_IJR2.loadFromFile("/Users/emmajohnson/Desktop/CSCI_200/PP/data/IJR_2.jpg")) {
            cerr << "Error loading image" << endl;
            return -1;
        }

        Texture IJR2;
        IJR2.loadFromImage(image_IJR2);  
        IJR2.setSmooth(false);

        // LETTER TO FUTURE
        Image image_FUTURE;
        if (!image_FUTURE.loadFromFile("/Users/emmajohnson/Desktop/CSCI_200/PP/data/future.jpg")) {
            cerr << "Error loading image" << endl;
            return -1;
        }

        Texture FUTURE;
        FUTURE.loadFromImage(image_FUTURE);  
        FUTURE.setSmooth(false);

        // CM 1
        Image image_CM1;
        if (!image_CM1.loadFromFile("/Users/emmajohnson/Desktop/CSCI_200/PP/data/CM1.jpg")) {
            cerr << "Error loading image" << endl;
            return -1;
        }
 
        Texture CM1;
        CM1.loadFromImage(image_CM1);  
        CM1.setSmooth(false);

        // CM 2
        Image image_CM2;
        if (!image_CM2.loadFromFile("/Users/emmajohnson/Desktop/CSCI_200/PP/data/CM2.jpg")) {
            cerr << "Error loading image" << endl;
            return -1;
        }
 
        Texture CM2;
        CM2.loadFromImage(image_CM2);  
        CM2.setSmooth(false);

        // CM 3
        Image image_CM3;
        if (!image_CM3.loadFromFile("/Users/emmajohnson/Desktop/CSCI_200/PP/data/CM3.jpg")) {
            cerr << "Error loading image" << endl;
            return -1;
        }
 
        Texture CM3;
        CM3.loadFromImage(image_CM3);  
        CM3.setSmooth(false);

        // CM 4
        Image image_CM4;
        if (!image_CM4.loadFromFile("/Users/emmajohnson/Desktop/CSCI_200/PP/data/CM4.jpg")) {
            cerr << "Error loading image" << endl;
            return -1;
        }
 
        Texture CM4;
        CM4.loadFromImage(image_CM4);  
        CM4.setSmooth(false);

        

        // THE ROOM ICONS
        // Bed
        Image image_BED;
        if (!image_BED.loadFromFile("/Users/emmajohnson/Desktop/CSCI_200/PP/data/bed.png")) {
            cerr << "Error loading image" << endl;
            return -1;
        }
 
        Texture BED;
        BED.loadFromImage(image_BED);  
        BED.setSmooth(false);

        // Computer
        Image image_COMP;
        if (!image_COMP.loadFromFile("/Users/emmajohnson/Desktop/CSCI_200/PP/data/computer.jpg")) {
            cerr << "Error loading image" << endl;
            return -1;
        }
 
        Texture COMP;
        COMP.loadFromImage(image_COMP);  
        COMP.setSmooth(false);

        // Mirror
        Image image_MIR;
        if (!image_MIR.loadFromFile("/Users/emmajohnson/Desktop/CSCI_200/PP/data/mirror.jpg")) {
            cerr << "Error loading image" << endl;
            return -1;
        }
 
        Texture MIR;
        MIR.loadFromImage(image_MIR);  
        MIR.setSmooth(false);

        // Exit
        Image image_EXIT;
        if (!image_EXIT.loadFromFile("/Users/emmajohnson/Desktop/CSCI_200/PP/data/exit.png")) {
            cerr << "Error loading image" << endl;
            return -1;
        }
 
        Texture EXIT;
        EXIT.loadFromImage(image_EXIT);  
        EXIT.setSmooth(false);

 


        // PORTFOLIO CONSTRUCTION
        if (page == 0) {
        // Main page (0)
            // Title
            Text title0;
            title0.setFont(font);
            title0.setString("     KOI'S\nESCAPE ROOM");
            title0.setCharacterSize(50);
            title0.setPosition(625, 40);
            title0.setFillColor(Color::White);
            window.draw(title0);
            // House
            RectangleShape house;
            house.setSize(Vector2f(300, 300));
            house.setPosition(600,350);
            house.setFillColor(Color::White);
            window.draw(house);
            // Roof
                ConvexShape roof(3);
                roof.setPoint(0, Vector2f(600,350));
                roof.setPoint(1, Vector2f(750,200));
                roof.setPoint(2, Vector2f(900,350));
                roof.setFillColor(Color::Red);
                window.draw(roof);
            // Door
                RectangleShape door;
                door.setSize (Vector2f(150,180));
                door.setPosition(675,470);
                door.setFillColor(Color::Blue);
                window.draw(door);
            // text
            Text message0;
            message0.setFont(font);
            message0.setString("Click the Door to Continue");
            title0.setCharacterSize(30);
            message0.setPosition(585, 700);
            message0.setFillColor(Color::White);
            window.draw(message0);
            
            //credits
            Text credits;
            credits.setFont(font);
            credits.setString("By: Koi Johnson");
            credits.setCharacterSize(20);
            credits.setPosition(680, 750);
            credits.setFillColor(Color::White);
            window.draw(credits);

        } else if (page == 1) {
            // Door page (1)
            // Title
            Text title1;
            title1.setFont(font);
            title1.setString("Welcome to THE PLACE THAT KNOWS MY NAME");
            title1.setCharacterSize(50);
            title1.setPosition(320, 80);
            title1.setFillColor(Color::White);
            window.draw(title1);

            // Quote
            Text quote1;
            quote1.setFont(font);
            quote1.setString("'' Think you're escaping and run into yourself.");
            quote1.setPosition(420, 200);
            quote1.setCharacterSize(35);
            quote1.setFillColor(Color::White);
            window.draw(quote1);

            Text quote2;
            quote2.setFont(font);
            quote2.setString("Longest way round is the shortest way home. ''");
            quote2.setPosition(410, 300);
            quote2.setCharacterSize(35);
            quote2.setFillColor(Color::White);
            window.draw(quote2);

            Text quote3;
            quote3.setFont(font);
            quote3.setString("-- James Joyce, (Ulysses)");
            quote3.setPosition(550, 400);
            quote3.setCharacterSize(35);
            quote3.setFillColor(Color::White);
            window.draw(quote3);
            

            // text 1 
            Text message1;
            message1.setFont(font);
            message1.setString("Can you Escape?");
            message1.setPosition(610, 600);
            message1.setFillColor(Color::White);
            window.draw(message1);

            // text 2
            Text message1_2;
            message1_2.setFont(font);
            message1_2.setString("Hit the Next Arrow (->) on your keyboard to Continue");
            message1_2.setPosition(375, 700);
            message1_2.setFillColor(Color::White);
            window.draw(message1_2);

        } else if (page == 2) {
            // Room page (2)
            // Title
            Text title2;
            title2.setFont(font);
            title2.setString("THE ROOM");
            title2.setCharacterSize(50);
            title2.setPosition(650, 80);
            title2.setFillColor(Color::White);
            window.draw(title2);

            Text message2;
            message2.setFont(font);
            message2.setString("Explore the Room");
            message2.setPosition(650, 800);
            message2.setFillColor(Color::White);
            window.draw(message2);

            // Icon imagery
                // bed
                Sprite bed;
                bed.setTexture(BED);
                bed.setScale(.8, .8);
                bed.setPosition(350,200);            
                window.draw(bed);
                
                // computer
                Sprite computer;
                computer.setTexture(COMP);
                computer.setScale(.4, .4);
                computer.setPosition(850,200);            
                window.draw(computer);

                // mirror
                Sprite mirror;
                mirror.setTexture(MIR);
                mirror.setScale(.75, .75);
                mirror.setPosition(350,490);            
                window.draw(mirror);

                // exit
                Sprite exit;
                exit.setTexture(EXIT);
                exit.setScale(.9, .9);
                exit.setPosition(850,500);            
                window.draw(exit);

        } else if (page == 3) {
            slideSize = 3;
            // Bed page (3)
            if (slide == 0) {
                // Title
                Text title3;
                title3.setFont(font);
                title3.setString("THE BED");
                title3.setCharacterSize(50);
                title3.setPosition(600, 80);
                title3.setFillColor(Color::White);
                window.draw(title3);

                Sprite bed;
                bed.setTexture(BED);
                bed.setScale(.8, .8);
                bed.setPosition(580,300);            
                window.draw(bed);

                Text message3;
                message3.setFont(font);
                message3.setString("Where my thoughts became dreams, and my reality became my monsters.");
                message3.setPosition(350, 600);
                message3.setFillColor(Color::White);
                window.draw(message3);


            } else if (slide == 1) {
                Text split;
                split.setFont(font);
                split.setString("THE SPLIT");
                split.setCharacterSize(50);
                split.setPosition(900, 10);
                split.setFillColor(Color::White);
                window.draw(split);

                // insert IJ 12 image
                Sprite ij12;
                ij12.setTexture(IJ12);
                ij12.setScale(.30, .30);
                ij12.setPosition(110,10);            
                window.draw(ij12);

                Text t12;
                t12.setFont(font);
                t12.setString("I dreamed of being a different person. \nAnd somewhere along the lines, \nit all became messed up. \nI couldn't identify with either side, \nso I became bits and pieces of both. \nMy identity has become a real-life \nFrankenstein: and like Frankenstein, \nit can sometimes be rejected by society... \nBut, I've always had conflicting identities, \nsuch as my creative and STEM side. ");
                t12.setPosition(800, 100);
                t12.setCharacterSize(30);
                t12.setFillColor(Color::White);
                window.draw(t12);

            } else if (slide == 2) {
                Text mask;
                mask.setFont(font);
                mask.setString("THE MASK");
                mask.setCharacterSize(50);
                mask.setPosition(900, 10);
                mask.setFillColor(Color::White);
                window.draw(mask);

                // insert IJ 11 image
                Sprite ij11;
                ij11.setTexture(IJ11);
                ij11.setScale(.3, .3);
                ij11.setPosition(0,10);            
                window.draw(ij11);

                Text t11;
                t11.setFont(font);
                t11.setString("When I entered college, \nI was finally able to take off my mask. \nAll the prenotions of who \npeople thought I was \nand the expectations disappeared. \nI was able to start with a fresh slate. \nHowever, it's not always that easy. \nWhen I removed my mask, \nI soon learned the unfamiliarity \nof not being able to hide behind it. \nI was exposed. \nMy failures \n  and insecurities \n       poured out of me.");
                t11.setPosition(800, 100);
                t11.setCharacterSize(30);
                t11.setFillColor(Color::White);
                window.draw(t11);

            } else if (slide == 3) {
                Text heart;
                heart.setFont(font);
                heart.setString("THE HEART");
                heart.setCharacterSize(50);
                heart.setPosition(850, 10);
                heart.setFillColor(Color::White);
                window.draw(heart);

                // insert IJ 13 image
                Sprite ij13;
                ij13.setTexture(IJ13);
                ij13.setScale(.23, .23);
                ij13.setPosition(10,10);            
                window.draw(ij13);

                Text t13;
                t13.setFont(font);
                t13.setString("I escape into my heart. \nIt holds my passion for the creative arts, \nmy love for the things I do, and my dreams. \nI used this escape at Mines, when I needed \na break from my physics homework \nor I had a lot to think about. \nWith my heart, I've been able to stay true \nto myself and stay sane. \nI would use my passions, whether that was \nplaying the violin or doing my math homework, \nto escape from reality for a little while. \nThey say, home is where the heart is...");
                t13.setPosition(700, 100);
                t13.setCharacterSize(30);
                t13.setFillColor(Color::White);
                window.draw(t13);
                
            }

            Text message3_2;
            message3_2.setFont(font);
            message3_2.setString("Click (->) to continue or (<-) to go back");
            message3_2.setPosition(480, 800);
            message3_2.setFillColor(Color::White);
            window.draw(message3_2);

        } else if (page == 4) {
            slideSize = 3;
            // Computer (4)
            if (slide == 0) {
                // Title
                Text title4;
                title4.setFont(font);
                title4.setString("THE COMPUTER");
                title4.setCharacterSize(50);
                title4.setPosition(550, 80);
                title4.setFillColor(Color::White);
                window.draw(title4);

                Sprite computer;
                computer.setTexture(COMP);
                computer.setScale(.4, .4);
                computer.setPosition(580,280);            
                window.draw(computer);

                Text message4;
                message4.setFont(font);
                message4.setString("Where I learned how to escape.");
                message4.setPosition(500, 600);
                message4.setFillColor(Color::White);
                window.draw(message4);

                


            } else if (slide == 1) {
                Text persona;
                persona.setFont(font);
                persona.setString("THE PERSONA");
                persona.setCharacterSize(50);
                persona.setPosition(600, 10);
                persona.setFillColor(Color::White);
                window.draw(persona);

                // insert SP1
                Sprite sp1;
                sp1.setTexture(SP1);
                sp1.setScale(.25, .25);
                sp1.setPosition(5,0);            
                window.draw(sp1);
                // insert SP2
                Sprite sp2;
                sp2.setTexture(SP2);
                sp2.setScale(.23, .23);
                sp2.setPosition(1050,300);            
                window.draw(sp2);

                Text tsp1;
                tsp1.setFont(font);
                tsp1.setString("For my Conceptual Self-Portrait, I chose to go with an \nInstagram theme and metaphor. \nThis metaphor is centered around the central ideas of \ncuration, influence, and persona. \nInstagram is known as a platform for people to post \ntheir ''best-selves'' and influence people based on their \nactions. Some may build an altered persona with a \ncarefully curated profile in order to gain followers. \nSimilarly, I find my role in a team to be like an \nInstagram profile: \nportraying my best qualities and wanting to gain influence.");
                tsp1.setPosition(450, 100);
                tsp1.setCharacterSize(25);
                tsp1.setFillColor(Color::White);
                window.draw(tsp1);

                Text message4_2;
                message4_2.setFont(font);
                message4_2.setString("Click (->) to continue or (<-) to go back");
                message4_2.setPosition(450, 800);
                message4_2.setFillColor(Color::White);
                window.draw(message4_2);

            } else if (slide == 2) {
                // insert SP3
                Sprite sp3;
                sp3.setTexture(SP3);
                sp3.setScale(.23, .23);
                sp3.setPosition(550,10);            
                window.draw(sp3);

                Text tsp2;
                tsp2.setFont(font);
                tsp2.setString("The first time I learned how to escape was through social media. There, I could be anything. I could be anyone. \nMost of all, I could be the me, I wanted to be. \nWhile this is a self-portrait of who I am as a team member, the concept relates to who I am as a person. \nI sometimes see myself as a walking-Instagram page, where I follow the algorithm and pop-up on your feed. \nI micromanage my life to fit the persona my audience wants to see. \nMy self-portrait acknowledges the issues of a persona: the lack authenticity and separation of reality. \nI learned that a persona is a form of escape, but not one you'll come out of unscathed.");
                tsp2.setPosition(200, 550);
                tsp2.setCharacterSize(25);
                tsp2.setFillColor(Color::White);
                window.draw(tsp2);

            } else if (slide == 3) {
                Text world;
                world.setFont(font);
                world.setString("THE WORLD");
                world.setCharacterSize(50);
                world.setPosition(880, 10);
                world.setFillColor(Color::White);
                window.draw(world);

                // insert GR
                Sprite gr;
                gr.setTexture(GR);
                gr.setScale(.28, .28);
                gr.setPosition(10,5);            
                window.draw(gr);

                Text tgr;
                tgr.setFont(font);
                tgr.setString("Like most people, \nI've learned to shut out the world \nwith music. \nMore importantly, \nI've learned to shut out my thoughts. \nHowever, for one day, I decided to \nbrave the world \nwithout my headphones. \nI was amazed at the amount of \nthings \nI was able to find meaning to. \nI felt fully present and in-tune \nwith myself, \nfor the first time in a long time. \nI realized that I felt at peace here\n in my new home of Golden, \nI didn't need to escape.");
                tgr.setPosition(800, 70);
                tgr.setCharacterSize(30);
                tgr.setFillColor(Color::White);
                window.draw(tgr);

            } 
            if (slide != 1) {
                Text message4_3;
                message4_3.setFont(font);
                message4_3.setString("Click (->) to continue or (<-) to go back");
                message4_3.setPosition(480, 800);
                message4_3.setFillColor(Color::White);
                window.draw(message4_3);
            }

        } else if (page == 5) {
            slideSize = 3;
            // Mirror page (5)
            if (slide == 0) {
                // Title
                Text title5;
                title5.setFont(font);
                title5.setString("THE MIRROR");
                title5.setCharacterSize(50);
                title5.setPosition(580, 80);
                title5.setFillColor(Color::White);
                window.draw(title5);

                Sprite mirror;
                mirror.setTexture(MIR);
                mirror.setScale(.75, .75);
                mirror.setPosition(570,250);            
                window.draw(mirror);

                Text message5;
                message5.setFont(font);
                message5.setString("Where past, future, and present merge.");
                message5.setPosition(490, 600);
                message5.setFillColor(Color::White);
                window.draw(message5);


            } else if (slide == 1) {

                Text past;
                past.setFont(font);
                past.setString("THE PAST");
                past.setCharacterSize(50);
                past.setPosition(850, 10);
                past.setFillColor(Color::White);
                window.draw(past);

                // insert IJR 1
                Sprite ijr1;
                ijr1.setTexture(IJR1);
                ijr1.setScale(.22, .22);
                ijr1.setPosition(10,0);            
                window.draw(ijr1);

                // insert IJR 2
                Sprite ijr2;
                ijr2.setTexture(IJR2);
                ijr2.setScale(.25, .25);
                ijr2.setPosition(10,620);            
                window.draw(ijr2);

                Text tijr;
                tijr.setFont(font);
                tijr.setString("This is one of the \nfirst reflections I did in college. \nIt was a particularly rough time, \nas I had just been outed to my family. \nI had never liked reflecting \non painful memories, \nbut with this I was able to \nmomentarily escape. \nI was able to sort my feelings, understand \nthe situation, and figure out \nwhat to do next. \nI had found a way out of \nmy head and mixed emotions. \nThroughout the year in Thorson, I worked \non finding a reflection style that I liked. \nOne that felt like I was free and \ncould move on from the past positively.");
                tijr.setPosition(750, 80);
                tijr.setCharacterSize(30);
                tijr.setFillColor(Color::White);
                window.draw(tijr);

                Text message5_2;
                message5_2.setFont(font);
                message5_2.setString("Click (->) to continue or (<-) to go back");
                message5_2.setPosition(700, 800);
                message5_2.setFillColor(Color::White);
                window.draw(message5_2);


            } else if (slide == 2) {
                Text FT;
                FT.setFont(font);
                FT.setString("THE FUTURE");
                FT.setCharacterSize(50);
                FT.setPosition(600, 10);
                FT.setFillColor(Color::White);
                window.draw(FT);

                Sprite future;
                future.setTexture(FUTURE);
                future.setScale(.18, .18);
                future.setPosition(500,80);            
                window.draw(future);
                
                Text tf;
                tf.setFont(font);
                tf.setString("In this letter to myself, I mention all the things to look forward to in the future. \nIt's a promise and wish of my past self, present self, and future self to reflect and dream. \nAs I move on from my journey in Thorson, I hope to continue learning and exploring.");
                tf.setPosition(300, 660);
                tf.setCharacterSize(25);
                tf.setFillColor(Color::White);
                window.draw(tf);

            } else if (slide == 3) {
                Text lr;
                lr.setFont(font);
                lr.setString("THE PRESENT");
                lr.setCharacterSize(50);
                lr.setPosition(600, 50);
                lr.setFillColor(Color::White);
                window.draw(lr);

                Text tlr;
                tlr.setFont(font);
                tlr.setString("I had cracked, spilled out, bore my flaws to the world.\nI had hid within my heart, behind screens, and in the past. \nBut, I had also learned.\nI learned how I work with other people, I learned how I destress, \nand I learned what's important to me. For this portfolio, I focus a lot on \nidentity, as it was very prevalent and important in my first year at Mines. \nI was able to explore my different identities through \nmy experiences, activities, studies, art, and reflections.\nI've learned how to escape through these things. \nHowever, while I had the need to escape...I found a home here. \nI was able to find communities that accepted me. \nAll the different parts of me.\n\nI have finally found a Place That Knows My Name.");
                tlr.setPosition(350, 150);
                tlr.setCharacterSize(30);
                tlr.setFillColor(Color::White);
                window.draw(tlr);

            }

            if (slide != 1) {
                Text message5_3;
                message5_3.setFont(font);
                message5_3.setString("Click (->) to continue or (<-) to go back");
                message5_3.setPosition(480, 800);
                message5_3.setFillColor(Color::White);
                window.draw(message5_3);
            }

        } else if (page == 6) {
            slideSize = 4;
            // Exit page (6)
            if (slide == 0) {
                // Title
                Text title6;
                title6.setFont(font);
                title6.setString("THE EXIT");
                title6.setCharacterSize(50);
                title6.setPosition(590, 80);
                title6.setFillColor(Color::White);
                window.draw(title6);

                Sprite exit;
                exit.setTexture(EXIT);
                exit.setScale(1, 1);
                exit.setPosition(520,250);            
                window.draw(exit);

                Text message6;
                message6.setFont(font);
                message6.setString("Where you can finally escape.");
                message6.setPosition(520, 600);
                message6.setFillColor(Color::White);
                window.draw(message6);

                Text message6_2;
                message6_2.setFont(font);
                message6_2.setString("Click (->) to continue or (<-) to go back");
                message6_2.setPosition(480, 800);
                message6_2.setFillColor(Color::White);
                window.draw(message6_2);
            
            } else if (slide == 1) {
                Text abop;
                abop.setFont(font);
                abop.setString("THE HOME");
                abop.setCharacterSize(50);
                abop.setPosition(620, 20);
                abop.setFillColor(Color::White);
                window.draw(abop);

                // CM 1
                Sprite cm1;
                cm1.setTexture(CM1);
                cm1.setScale(.15, .15);
                cm1.setPosition(10,0);            
                window.draw(cm1);

                // CM 2
                Sprite cm2;
                cm2.setTexture(CM2);
                cm2.setScale(.14, .14);
                cm2.setPosition(1100, 290);            
                window.draw(cm2);

                Text cm_1;
                cm_1.setFont(font);
                cm_1.setString("Through the ABoP counter-map, I explore the themes of \nhaving a home that doesn't feel like a home. \nIn fact, the 'home' felt more like an escape room. \nThere, I wasn't able to focus on myself...\nSo I had to escape. \n\n\nMy counter-map is not meant to be fully explainable. \nJust like an identity, it's still changing and confusing. \nThere's still a great deal of 'reading between the lines'. \nSome things must be left up to interpretation for \nthis counter-map to achieve its purpose. \nMy ABoP abstractly painted what my identity meant to me, \nwhile my counter-map looks beyond that, \nonto what my identity looks like to the outside world. \nIt is meant to be interpreted differently\nand judged incorrectly,\nbecause that's when the viewer can realize that\nthis house is not a home.");
                cm_1.setPosition(495, 100);
                cm_1.setCharacterSize(25);
                cm_1.setFillColor(Color::White);
                window.draw(cm_1);

                Text message6_3;
                message6_3.setFont(font);
                message6_3.setString("Click (->) to continue or (<-) to go back");
                message6_3.setPosition(500, 800);
                message6_3.setFillColor(Color::White);
                window.draw(message6_3);


            } else if (slide == 2) {
                // CM 3
                Sprite cm3;
                cm3.setTexture(CM3);
                cm3.setScale(.15, .15);
                cm3.setPosition(10,0);            
                window.draw(cm3);

                // CM 4
                Sprite cm4;
                cm4.setTexture(CM4);
                cm4.setScale(.15, .15);
                cm4.setPosition(10,500);            
                window.draw(cm4);

                Text cm_2;
                cm_2.setFont(font);
                cm_2.setString("Shoji walls with koi fishes - \nrepresent multiple things: fragility, transparency, and color. \nPaper walls are traditionally fragile, just like me. \nHowever, while they are fragile, they allow some \ntransparency. \nI didn't want to build walls up between relationships, \nso my paper walls still allow people to get to know \nthe real me. \nThere are colorful koi fishes on the paper wall, \nto represent my connection to koi fish\nand how my identity is colorful. \n\nMonsters in the kitchen - \nshows that I live with my 'monsters' and \ninsinuates that my parents are my 'monsters'. \nIn this context, my 'monsters', represented my fears \nof being found out by my parents.");
                cm_2.setPosition(600, 30);
                cm_2.setCharacterSize(30);
                cm_2.setFillColor(Color::White);
                window.draw(cm_2);

                Text message6_4;
                message6_4.setFont(font);
                message6_4.setString("Click (->) to continue or (<-) to go back");
                message6_4.setPosition(700, 800);
                message6_4.setFillColor(Color::White);
                window.draw(message6_4);

            } else if (slide == 3) {
                // Artist statement
                Text as;
                as.setFont(font);
                as.setString("'' This is the place that knows my name. \n         It's home away from home. \n               It knows who I am.  \n               Even when I don't. '' \n                        -Koi");
                as.setPosition(350, 250);
                as.setCharacterSize(50);
                as.setFillColor(Color::White);
                window.draw(as);

            } else if (slide == 4) {
                Text end;
                end.setFont(font);
                end.setString("  You have Escaped! \nThank you for viewing \n  Koi's Escape Room. \n    - Koi Johnson");
                end.setPosition(550, 250);
                end.setCharacterSize(50);
                end.setFillColor(Color::White);
                window.draw(end);
                done = true;
            }
            
// didn't alter
        }  if (page == -1) {
            Text Escape;
            Escape.setFont(font);
            Escape.setString("Enter the 3-Letter Escape Code: ");
            Escape.setCharacterSize(50);
            Escape.setPosition(430, 80);
            Escape.setFillColor(Color::White);
            window.draw(Escape);

            for (int i = 0; i < 3; i++) {
                RectangleShape dash;
                dash.setSize(Vector2f(70, 3));
                dash.setPosition(590+(i*100),260);
                dash.setFillColor(Color::White);
                window.draw(dash);
            }

            for (size_t i = 0; i < breakout.size(); i++) {
                Text code;
                code.setFont(font);
                code.setString(breakout.at(i));
                code.setCharacterSize(50);
                code.setPosition(600+(i*100), 200);
                code.setFillColor(Color::White);
                window.draw(code); 
            }  

            if (breakout.size() == 3) {
                if (escape == 0) {
                    Text incorrect;
                    incorrect.setFont(font);
                    incorrect.setString("Incorrect");
                    incorrect.setCharacterSize(50);
                    incorrect.setPosition(650, 500);
                    incorrect.setFillColor(Color::Red);
                    window.draw(incorrect);
                    page = 2;
                    breakout.clear();
                } else {
                    Text correct;
                    correct.setFont(font);
                    correct.setString("Correct! You have escaped!");
                    correct.setCharacterSize(50);
                    correct.setPosition(500, 500);
                    correct.setFillColor(Color::Green);
                    window.draw(correct);
                    page = 6;
                }
            }
           
        }

         

        // place any draw commands here to display in the window

        //  END  DRAWING HERE
        /////////////////////////////////////


        // display the current contents of the window
        window.display();

        /////////////////////////////////////
        // BEGIN EVENT HANDLING HERE
        // check if any events happened since the last time checked
        while( window.pollEvent(event) ) {
            // figure out main breakout
            if (page == -1) {
                if (event.type == Event::TextEntered) {
                    if (event.text.unicode < 128 && breakout.size() < 3) {
                        breakout.push_back(event.text.unicode);    
                    }
                }
            }
            if (page == 0) {
                if (event.type == Event::MouseButtonPressed) {
                    if (event.mouseButton.x >= 675 && event.mouseButton.x <= 825 && event.mouseButton.y >= 470 && event.mouseButton.y <= 650) {
                        window.clear(); 
                        page = 1;
                        window.display();
                    }
                }
            }
            if (page == 1) {
                if (event.type == Event::KeyPressed) {
                    if (event.key.code == Keyboard::Right) {
                        window.clear(); 
                        page = 2;
                        window.display();
                    }
                }
            }
            if (done == false) {
                if (page == 3 || page == 4 || page == 5 || page == 6) {
                    if (event.type == Event::KeyPressed) {
                        if (event.key.code == Keyboard::Right) {
                            window.clear(); 
                            if (slide == slideSize)  {
                                page = 2;
                                slide = 0;
                            } else if (slide < slideSize) {
                                slide++;   
                            }
                            window.display();
                        }
                    }
                    if (event.type == Event::KeyPressed) {
                        if (event.key.code == Keyboard::Left) {
                            window.clear(); 
                            if (slide > 0) {
                                slide--;
                            } else if (slide == 0 && page > 3) {
                                page = 2; 
                                slide = 0;
                            } else {
                                page--;
                                slide = 0;
                            }
                            window.display();
                        }
                    }
                }
            }
            if (page == 2) {
                if (event.type == Event::MouseButtonPressed) {
                    if (event.mouseButton.x >= 450 && event.mouseButton.x <= 650 && event.mouseButton.y >= 200 && event.mouseButton.y <= 400) {
                        window.clear(); 
                        page = 3;
                        window.display();
                    } else if (event.mouseButton.x >= 850 && event.mouseButton.x <= 1050 && event.mouseButton.y >= 200 && event.mouseButton.y <= 400) {
                        window.clear(); 
                        page = 4;
                        window.display();
                    } else if (event.mouseButton.x >= 350 && event.mouseButton.x <= 550 && event.mouseButton.y >= 490 && event.mouseButton.y <= 700) {
                        window.clear(); 
                        page = 5;
                        window.display();
                    } else if (event.mouseButton.x >= 900 && event.mouseButton.x <= 1100 && event.mouseButton.y >= 500 && event.mouseButton.y <= 700) {
                        window.clear(); 
                        page = -1;
                        window.display();
                    }

                }
            }
            
        if (breakout.size() == 3) {               
            if ((breakout.at(0) == 'K' || breakout.at(0) == 'k') && (breakout.at(1) == 'O' || breakout.at(1) == 'o') && (breakout.at(2) == 'I' || breakout.at(2) == 'i')) {
                escape = 1;
            }   
        } 

        
        if (escape == 1) {
            if (event.type == Event::Closed ) {
				window.close();
			}

        }
        // test break
        if (event.type == Event::KeyPressed) {
            if (event.key.code == Keyboard::Escape) {
                window.close();
            }
        }

        
        }    
        //  END  EVENT HANDLING HERE
        /////////////////////////////////////
    }

    return 0;
}
