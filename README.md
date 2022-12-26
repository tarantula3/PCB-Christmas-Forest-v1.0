# PCB-Christmas-Forest-v1.0

[![4vDtWafMF0M](https://i.imgur.com/60MFPBY.png)](https://www.youtube.com/watch?v=wYbmAVPLWmo)

Created a small "PCB Christmas Forest" which is going to light up my study table this Christmas.
In this video, I am going to show you guys how to design these PCBs and assemble them to create a small PCB Christmas Forest.


Designing The PCBs
------------------
Sorting Out Images
------------------
![image](https://blogger.googleusercontent.com/img/b/R29vZ2xl/AVvXsEjUyUFMhnLpp_hIGF1_sIBTCDk9wFAsLsVvKKkan8XAHGw-CIiZ9gZYkliFcGX12IfpxKzCwT4LDDEoDOao96HL13kNfacCYZXTaC2m-_czxD30JyKF3NAsTMevMplcPsj91VhYciE-vZAWk-80FVEZvtBn9RMPssQpukYA7SW-QyHnYw24fTJMKM2K/w640-h360/1.png)

To start the designing process, I need transparent PNG images of the Christmas Tree, Star, Snowflake, Candy Cane etc.
So I went online, and did an "image search" and downloaded few black-and-white images of all the items that I need to design these PCBs.

![image](https://blogger.googleusercontent.com/img/b/R29vZ2xl/AVvXsEgiH2sLNLVRLuwsnFvEpUwrPW4rutU-N69LGRBRmzE0odDI9R7_ii0tDdRwla2NUqpAq3GEz0wqtGbwfAaAKxCEZBTQnAujVMNwjpjtuU7uReO_YIdKtyZGs59nkqZtSmYHSkDo31WsHtRcoRX2sdT2uHvwY5f5rz72huhpHymoDaqUKfwdcn2ISdhf/w640-h360/2.png)

Using the good old "MS Paint" I edited all these PNG files. 
I removed the rounded base and made the base flat so that it easily sits on the base plate. Then I removed a small portion from the bottom to expose a bit of copper. Pouring a blob of solder on this plate will hold the PCB nice and tight from the front side on the baseplate. 

![image](https://blogger.googleusercontent.com/img/b/R29vZ2xl/AVvXsEhHutYOV0Yysup_yovG5jkQ1Adn4WNezoDQj4X9wJG7_ZKmrKyKiw3nZIKdaMTDO6t5EtM3duyL5kW_ZXZRYEJPwXbJ99pxBhRlFGWOPTrgHKxx1LR7yL11cLsUrIaawvishjHrSGOf5m_84lhoQiGay1lUlvtLf7Jr_owaPwysoxDiWeCc7p1vHmdC/w640-h360/3.png)

In my design I have 3 different sizes of the trees. If you look closely, they are all extracted from the same tree by removing the bottom layer each time and hence generating a new size of the tree. 


Generating DXF File
-------------------

![image](https://blogger.googleusercontent.com/img/b/R29vZ2xl/AVvXsEhM6MMJdrKVjbKiZZzfYTYhicKYI6blxNXcYHWWVQ8p7wEs84L53nkW2ZtEtD3-9qISSelfORZE8bib5knHKp1FC5MBX9paqDxbHADmDeIPItsGBDezzim0Q0kd6KRnX_sIm4x6Lc7DcKAK3BQuNGGQiRsvvC-nUEhiTl52jZQcDDGmrDYfiudlBbie/w640-h360/4.png)

For the customized shapes of the PCBs, we need to generate "DXF files" to set the "Board Outlines". I am using the "paint.net" application to fill in the white spaces of the tress as I only need the borders and nothing else from the original images. Then, I uploaded the images to "https://convertio.co/" and generated the DXF files. This website allows 10 free conversions in a day unless you have a paid account with them. 

![image](https://blogger.googleusercontent.com/img/b/R29vZ2xl/AVvXsEh4T5Gi7l2AJlg7NRChD8MfruL054ewvP9pxNOpe7iOD2rCJ0DQ4th14Eg9-5VJIOfqbisTLHjpcMaF7x9O4-d7iakewCFOYp86_aUxzgCi7uQwSbObOsA8FKVCdJFTYP7wSlk0d4xl4ElxTADdn7wlDeEXtt_Id7-3uJ0ixMpzwgw8pOURZnKSrzjx/w640-h360/6.png)


Creating the Trees
------------------

![image](https://blogger.googleusercontent.com/img/b/R29vZ2xl/AVvXsEgWNXAathELNVNIi6oNLCesrKeHtyRXvYjxdRjp_UPS7disaYNVsjSRFGzMCT_mqVokdf0epAGegGDQDL_LTNzsT0hfQdk6nBzEhAeakrQ0Ko509uIFC0huhCRGTAAAsgcyJC2eRW_50-wA0YltNDG5Ua1y8hLss6YYqaOzCfV5DpFHOsJvni9bN-E1/w640-h360/8.png)

Now, lets add a "New PCB" to our project and remove the default board outlines.
Then import the DXF files via File > Import > DXF menu. Make sure you have the "BoardOutLine" selected under layers when you import the dxf file.

Now lets import the image that will go on the Top Silk Layer. Put the image over the board outline and move it to the "TopSilkLayer". Then lets go ahead and decorate our tree. Once all set, lets hide the Top Silk Layer so that we can work on the rest of items.

Using the Rectangle tool from the "PCB Tools Plate" I added a rectangle to the bottom of the PCB. I exposed the copper, so that I can use this to hold the tree on the baseplate by poring a blob of solder on it. 

Next I randomly added few LEDs here and there at the bottom side of the board. Then I added few exposed copper rectangles at the back side of the board and connected them the LEDs. Remember this is just an example, the attached gerber is totally different from what you see onscreen. 

So, this is how the tree looks like in 3D. 


Creating the Baseplate
----------------------

![image](https://blogger.googleusercontent.com/img/b/R29vZ2xl/AVvXsEgPUmK-LPNXUkIi3w4Th7Rz2mClAhzq5hziAILB5mdiqrMOew_yJIMKRfPDr0LiC9aZed7MDarN9Y0mogcGhq_f7Usj32BAUesXP_Cxt8tO7vBxXx2tcV9LmrANxvTqmE7RYsfy0uyf33UtQvIysdVOsvaRiVo71NESmwf1rzduXWSBi0Z1tMnrve4C/w640-h360/9.png)

Now to create the baseplate, we again need to add a "New PCB" to our project and remove the default board outlines.
Then go to Tools > Set Board Outline.. and select the "Round Rectangular" from the "Type" selection. Specify the height, width and the radius of the edge and hit the "Apply" button.

Then go-ahead and add the rest of the components one by one either to the "TopLayer" or the "BottomLayer" of the board and connect them using wires. I grabbed the back and the front exposed rectangles from the tree and added them to the baseplate. This way the spacings will remain intact when we solder the trees on the baseplate. That's it easy as that. Now just go ahead and download your gerber file and send it for fabrication.

So, this is how my baseplate looks like. Bit complex, but it has the exact same logic that I just showed you guys.


Ordering Process
----------------

![image](https://blogger.googleusercontent.com/img/b/R29vZ2xl/AVvXsEhwTZVAlTo9g3W8NQEjooRqSBdBdzT_IkZg1CA9xM1LnqjOnNmWSnA3qSouRkxPjHvHJDDTwxTV93Ag6u2twi2bo4ykYzRR6eGF59OD5-CrfiNKkqE7N1En8qA2X48zDiWJTmHu3veEsT_TS0yNPl_n-lCPioE6P8CcfBEM32Yy-mEnNM9yh-lWr3Fd/w640-h360/10.png)

Once I had my design ready, I just had to upload the gerber file to the PCBWay's website and select the type, color and any other customization that I want and then just send it for fabrication.
For my project, I choose the black, red and the green colors.


The Code
--------

![image](https://blogger.googleusercontent.com/img/b/R29vZ2xl/AVvXsEjNAYMwNpWIrK3H1oj2uo42cllDmBRJnC_E_L6bkMbjajUA97yZcSDku7tQuYFVjRDocU9Or3zPRD8voa_ukg5SFh2wFaMq5f4r67uk6-w5FGeKuIFfEcg7D3tUGwc0-oIPEY-DmumYDZm8YW3ZcTC49F6ikf7fQ68-D9U3ORr1nyRYFIZIzJYkFOhB/w640-h360/11.png)

The code I wrote is very simple. I have just turned on and off the LEDs after a 500ms delay. The top white LEDs turn on and off in the opposite order to the rest of the LEDs.
This code is just an example, you can write all sorts of funky stuff and load it to your Arduino board.


Testing on Breadboard
---------------------

![image](https://blogger.googleusercontent.com/img/b/R29vZ2xl/AVvXsEiq24h6vlT0XcDDeViG0_ZUTyFow4StKf-MmcLKad2xIHvBZYsaCnXJMvHW37UVwnzVHDztVqmTYpq1DlPJJLQ0NczqP-bEep1pq2XNtMd1qz7Pdg4NXE3V2MB8-ZEfcM0e2w6m2yvtPoBa8uiiERGtcTXOKKI1Vc3hv67nCXgdo57eZzQ78kZH8Qqs/w640-h360/12.png)

I tested my code on a breadboard before soldering the LEDs to the board. I wanted to see if the Arduino Nano can handle that many LEDs at once and I also wanted to check if combining different color LEDs on a same pin of Arduino will have any adverse effect.

The result was pretty promising:
 - I was able hook up 3 LEDs without any issues to all the Digital (except D13) and Analogue pins of the Arduino.
 - I was "not" able to combine yellow and orange LEDs with any other color on the same pin of Arduino.


Soldering
---------

![image](https://blogger.googleusercontent.com/img/b/R29vZ2xl/AVvXsEjB3ksOu9SnWUeYQkm7uPsyhw84yAVPPDh1lY667XbHX5Garif_myEZ6BIrFOUZIx0uzYNmHYWdOVS2FACUd9a-F-JxCSbOp7Q8QsPRLaBcwQIsnDaHra66g4POgBEvfARIcrtqeIae5_KN-lEW6wy0lA0mVyjZjvIUeK4oILPFPf3Num1wbWHYAqbZ/w640-h360/13.png)

So, this is what came in the mailbag. Have a look at the quality, its absolutely mind-blowing. 
Based on my design, the black one will stay at the back, the green one on right and the red one on the left hand side of the baseplate. 
Please make sure when you solder the trees, solder the small (red) one first, then the green one and finally the big black one at the back. This way, you will be able to solder them very easily, without going over or under the trees.
Now, lets start soldering.

![image](https://blogger.googleusercontent.com/img/b/R29vZ2xl/AVvXsEi-tKcjTqkMfJFzkuihXB8khtpN92S6DVZd84fsateGgbzzfSEQqgYAWvm71KWrus7ftZJaZ6Trixmq7prmzBRordpi8AgGISQYWdrk9x7cJT8L5qdskg9JnYYJX_6fOWBDZRFPga9xAYqmuFeZPZvzRN2yMdHRUdRP-eUxbMv9JyVN5ezPwfyEbLSK/w640-h360/15.png)

Lets start by soldering the LEDs on the trees. Since the front side of the plate has all the decorations on it, I placed all the component markings at the back side of the plate. 
I then one by one soldered all the LEDs on the front side of the plates.
Please be careful while adding the colors, as mentioned earlier you cannot hook up yellow and orange with any other color on the same pin of an Arduino. Please follow my final coloring patter.

![image](https://blogger.googleusercontent.com/img/b/R29vZ2xl/AVvXsEi7fFnhmrrT0F7oRaDkPynpoDY1B1IkWGFuipuHrchRzImhoy5MI6fpR1-fgWYoTxWYm5dcgrBlu-PN9eSgHB_sfhWv4boXCOOQqbMft_MlPgXi2R27RuoLRvGtxMuWrNoVNhnRm3buk52V-WygtpZGGHernmcwe3ecH-oIxeBn6PIKxUG7KeakOW8t/w640-h360/16.png)

Now lets get the baseplate sorted. Lets start by soldering all the resistances to the board. 
Then, lets solder 2 x female pin headers to the board. These pin headers will house the Arduino Microcontroller in it.
After that, lets solder the 2 pin micro-USB port to the board.

![image](https://blogger.googleusercontent.com/img/b/R29vZ2xl/AVvXsEiUBz2zTxWYQD4QO-aP-QRTkYh_pkMZGbJEYn9EO-QwjCIm9yKD2Bv4PmNakHdzoCmPlYXokrcQ3Y_n_p0_Hk4Q-SLiIM49CvSsRy7nhhodrdcyOJ8rOM5VhGqc9Js_8VbZVEn345wZskQlCG95CoGyGF_cIBLTabe5MzOoj7VeuNLkyMgHk3T13-NZ/w640-h360/17.png)

Next, its time to solder the trees to the board. With lots of flux and very little solder this is what I ended up creating.

![image](https://blogger.googleusercontent.com/img/b/R29vZ2xl/AVvXsEhVeM97Zfn8m42Mz8k1LMeU3f9xlLmalPXpXisnNZ45YR4J6aIr8XicbEyAoSGPeiR48nWqse5pW9xRlxl5NEV41B0Aiqwiufu6tQoaINqHgWbd70qi5o3DCD_vD0sIvoY_RwWGf5grIh9TiY6Z2skvocS4jinZi-91Z-DZcYTkUopO2mSXR3kH4jH2/w640-h360/18.png)

Since a lot of the LEDs were getting hidden behind the trees, I ended up removing a lot from the final version.
Just follow the onscreen color pattern and you will have a small Christmas forest sitting on your table in less than 30 minutes.
Merry Christmas and Happy New Year...


Thanks
------

[![4vDtWafMF0M](https://i.imgur.com/60MFPBY.png)](https://www.youtube.com/watch?v=wYbmAVPLWmo)

Thanks again for checking my post. I hope it helps you.
If you want to support me subscribe to my YouTube Channel: https://www.youtube.com/user/tarantula3

Video: https://youtu.be/wYbmAVPLWmo
Full Blog Post: http://diy-projects4u.blogspot.com/2022/12/pcb-christmas-forest.html
Code: https://github.com/tarantula3/PCB-Christmas-Forest-v1.0/blob/main/Code.ino
Image Resources : https://github.com/tarantula3/PCB-Christmas-Forest-v1.0/blob/main/Image%20Resources.zip

Gerber Base : https://github.com/tarantula3/PCB-Christmas-Forest-v1.0/blob/main/Gerber_PCB_Christmas%20Tree%20BASE%20v1.0.ZIP
Gerber Small Tree : https://github.com/tarantula3/PCB-Christmas-Forest-v1.0/blob/main/Gerber_PCB_Christmas%20Tree%20SMALL%20v1.0.zip
Gerber Medium Tree : https://github.com/tarantula3/PCB-Christmas-Forest-v1.0/blob/main/Gerber_PCB_Christmas%20Tree%20MED%20v1.0.zip
Gerber Big Tree : https://github.com/tarantula3/PCB-Christmas-Forest-v1.0/blob/main/Gerber_PCB_Christmas%20Tree%20LARGE%20v1.0.zip


Support My Work:
BTC:  15cNh9hup8jidCVPwa1DTcxeoh2FPijVrX
LTC:  LbquH9Ku78vHtcm3LZnWXpD1JQWdKzeV4v
DOGE: DEB2QBAihnBRhGsaB8P7kz559TDiucQhX6
ETH:  0x5d8c9ba0e54d8354d4af81871db26daa190d2194
BAT:  0x939aa4e13ecb4b46663c8017986abc0d204cde60
LBC:  bZ8ANEJFsd2MNFfpoxBhtFNPboh7PmD7M2
COS:  bnb136ns6lfw4zs5hg4n85vdthaad7hq5m4gtkgf23 Memo: 572187879
BNB:  0x5d8c9ba0e54d8354d4af81871db26daa190d2194

Thanks, ca again in my next tutorial.
