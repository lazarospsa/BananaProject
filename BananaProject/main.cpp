/*
Content is copyright © Open Source Guides authors, released under CC-BY-4.0,
which gives you permission to use content for almost any purpose (but does not grant you any trademark permissions),
so long as you note the license and give credit.

Lazaros Psarokostas, 2019 ©

*/
#include <fstream>
#include <iostream>

using namespace std;

int main () {

  ofstream index ("index.html", ofstream::out);

  string title,header,menu1,menu2,menu3,menu4,titlemaintext,maintext,link1,link2,link3,link4,job,hobbies;


  cout << "Give website title: \n"; getline(cin, title);
  cout << "Give header title: \n"; getline(cin, header);
  cout << "Give your Facebook username: \n"; getline(cin, link1);
  cout << "Give your Instagram username: \n"; getline(cin, link2);
  cout << "Give your Linkedin username: \n"; getline(cin, link3);
  cout << "Give your Youtube link: \n"; getline(cin, link4);
  cout << "Give main text title: \n"; getline(cin, titlemaintext);
  cout << "Give main text: \n"; getline(cin, maintext);
  cout << "Give description of your job: \n"; getline(cin, job);
  cout << "Give your hobbies: \n"; getline(cin, hobbies);
    menu1="Facebook";
    menu2="Instagram";
    menu3="LinkedIn";
    menu4="Youtube";

  if(title=="" || header=="" || link1=="" || link2=="" || link3=="" || link4=="" || titlemaintext=="" || maintext=="" || job=="" || hobbies==""){
    title="Lazaros Psarokostas";
    header="Lazaros Psarokostas";
    menu1="Facebook";
    menu2="Instagram";
    menu3="LinkedIn";
    menu4="Youtube";
    titlemaintext="Lazaros Psarokostas";
    maintext="Lazaros Psarokostas";
    job="Lazaros Psarokostas";
    hobbies="Lazaros Psarokostas";
  }

  //START HTML
  index << "<!DOCTYPE html><html><head>";

  //METAS
  index << "<meta charset='utf-8'><meta http-equiv='X-UA-Compatible' content='IE=edge'><meta name='viewport' content='width=device-width, initial-scale=1'>";

  //TITLE
  index << "<title>"<<title<<"</title>";

  //CSS
  index << "<link rel='stylesheet' type='text/css' media='screen' href='main.css'>";

  //Javascript
  //index << "<script src='main.js'></script>";

  //Body
  index << "</head><body>";

  //HEADER
  //<img height='50' width='50' class='logo' src='img/logo.jpg'></img>
  index << "<div class='header'><font size='14' text-align='right'>"<<header<<"</font></div>";

  //PAGE CONTENT START
  index << "<div class='row'>";

  //LEFT MENU
  index << "<div class='col-3 menu'><ul>";

  //index << "<li>The Flight</li><li>The City</li><li>The Island</li><li>The Food</li>";
  index << "<a href='https://www.facebook.com/"<<link1<<"' target='_blank'><li>"<<menu1<<"</li></a>";
  index << "<a href='https://www.instagram.com/"<<link2<<"' target='_blank'><li>"<<menu2<<"</li></a>";
  index << "<a href='https://www.linkedin.com/in/"<<link3<<"' target='_blank'><li>"<<menu3<<"</li></a>";
  index << "<a href='"<<link4<<"' target='_blank'><li>"<<menu4<<"</li></a>";

  index << "</ul></div>";

  //MAIN TEXT
  index << "<div class='col-6'>";

  index << "<h1 class='titlemain'>"<<titlemaintext<<"</h1>";
  index << "<p>"<<maintext<<"</p>";

  index << "</div>";

  //RIGHT COMPONENT
  index << "<div class='col-3 right'><div class='aside'>";

  index << "<h2>Photo</h2>";
  index << "<img height='100' width='100' class='photo' src='img/photo.jpg'></img>";

  index << "<h2>Job</h2>";
  index << "<p>"<<job<<"</p>";

  index << "<h2>Hobbies</h2>";
  index << "<p>"<<hobbies<<"</p>";

  index << "</div></div>";

  //PAGE CONTENT FINISH
  index << "</div>";

  //FOOTER
  index << "<div class='footer'><p>This Project supported by Lazaros Psarokostas founder of BananaProject.</p></div>";

  //END OF HTML
  index << "</body></html>";

  index.close();
  return 0;
}
