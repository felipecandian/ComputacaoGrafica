#include <GL/glut.h>
#include <stdlib.h>
#include <math.h>
#include <stdio.h>
#define ANGLE 0.3
#define SCALE 0.9
#define RAND 0.06

void ceu(){

        glBegin(GL_POLYGON);
        glColor3f( 0.52941f, 0.80784f, 0.92157f );

            glVertex2f(0,76);
            glVertex2f(200,76);
            glVertex2f(200,200);
            glVertex2f(0,200);
        glEnd();

}

void planitude(){

    glVertex2f(0, 75.0); //Vai de ponto A a ponto B
        glVertex2f(200, 75.0); //Ponto B

        glBegin(GL_POLYGON);
        glColor3f( 0.48627f, 0.98824f, 0.00000f );

            glVertex2f(0,0);
            glVertex2f(0,75);
            glVertex2f(0,75);
            glVertex2f(100,75);
        glEnd();

        glBegin(GL_POLYGON);
        glColor3f( 0.55686f, 0.41961f, 0.13725f );

            glVertex2f(200,43);
            glVertex2f(200,75);
            glVertex2f(100,75);
            glVertex2f(100,50);
        glEnd();

}

float myrand(float R){
    return (2 * R * rand()) / RAND_MAX - R;
}
void tree(float x1, float y1, float length1, float angle1, int depth){
    if (depth > 0){
        // desenho o segmento de linha
        float x2 = x1 + length1 * cos(angle1);
        float y2 = y1 + length1 * sin(angle1);
        glVertex2f(x1, y1);
        glVertex2f(x2, y2);
        // faz duas chamadas recursivas
        float length2 = length1 * (SCALE + myrand(RAND));
        float angle2 = angle1 + ANGLE + myrand(RAND);
        tree(x2, y2, length2, angle2, depth-1);
        length2 = length1 * (SCALE + myrand(RAND));
        angle2 = angle1 - ANGLE + myrand(RAND);
        tree(x2, y2, length2, angle2, depth-1);
    }
}
void arvore(){
    //arvore 1
    glColor3f( 0.00000f, 0.50196f, 0.00000f );
    glBegin(GL_LINES);
    tree(0, 15,10, 1.5, 10);
    tree(5, 17, 9, 1.5, 10);
    tree(16, 24, 7, 1.5, 10);
    tree(55, 50, 5, 1.5, 10);
    tree(50, 53, 5, 1.5, 10);
    tree(94, 73, 1, 1.5, 10);
    tree(90, 68, 2, 1.5, 10);
    tree(70, 60, 3, 1.5, 10);
    glEnd();


    //arvore 2 direita
    glColor3f( 0.00000f, 0.50196f, 0.00000f );
    glBegin(GL_LINES);
    tree(132, 55, 5, 1.5, 10);
    tree(131, 59, 5, 1.5, 10);
    tree(130.6, 62, 5, 1.5, 10);
    tree(127, 56, 5, 1.5, 10);
    tree(102, 74, 1, 1.5, 10);
    tree(104, 73, 1, 1.5, 10);

    glEnd();

    //arvore 2
    glColor3f( 0.00000f, 0.50196f, 0.00000f );
    glBegin(GL_LINES);
    tree(16.5, 38, 7, 1.5, 10);
    glEnd();
    //arvore 3
    glColor3f(0.2, 0.9, 0.2);
    glBegin(GL_LINES);
    tree(12, 38, 5, 1.5, 10);
    glEnd();

}

void corLoja(){
glBegin(GL_POLYGON);
        glColor3f( 0.94118f, 0.90196f, 0.54902f );
        glVertex2f(190,9);
        glVertex2f(190,130);
        glVertex2f(130,104);
        glVertex2f(130,53);
glEnd();

glBegin(GL_POLYGON);
        glColor3f( 0.94118f, 0.90196f, 0.54902f );

        glVertex2f(190,9);
        glVertex2f(200,9);

        glVertex2f(200,130);
        glVertex2f(190,130);


glEnd();
}
void janela(){
    glBegin(GL_POLYGON);
        glColor3f( 0.67843f, 0.84706f, 0.90196f );
        glVertex2f(135,90);
        glVertex2f(135,60);

        glVertex2f(164,45);
        glVertex2f(164,100);

glEnd();
////////------------------------------

     glLineWidth(1.0);
        glBegin(GL_LINES);
        glColor3f(0,0,0.0);

        glVertex2f(135.0, 90);
        glVertex2f(135, 60);

        glVertex2f(164.0, 45);
        glVertex2f(164, 100);



        glVertex2f(135.0, 60);
        glVertex2f(164, 45);

        glVertex2f(135.0, 90);
        glVertex2f(164, 100);

    glEnd();

}
void loja(){

    corLoja();
    janela();
    glBegin(GL_LINES);
            glColor3f( 0, 0, 0);
            glVertex2f(190, 09.0); //Ponto vertical 190 e horizontal de 09 a 130
            glVertex2f(190, 130.0);

            glVertex2f(190.0, 130); //Vai de ponto A a ponto B
            glVertex2f(200, 130.0);

            //Canto lateral
            glVertex2f(190.0, 9);
            glVertex2f(200, 9);


        glEnd();

        glBegin(GL_LINES);
        glVertex2f(130.0, 53);
        glVertex2f(130, 104);

        glVertex2f(130.0, 104);
        glVertex2f(190, 130);

        glEnd();


}

void passeioColorido(){

    glBegin(GL_POLYGON);
        glColor3f( 1.00000f, 1.00000f, 0.00000f );
        glVertex2f(91.9,1.4);
        glVertex2f(107,1.4);
        glVertex2f(105,24);
        glVertex2f(94,24);
    glEnd();

    glBegin(GL_POLYGON);
        glColor3f( 1.00000f, 1.00000f, 0.00000f );

        glVertex2f(95,31);
        glVertex2f(104,31);
        glVertex2f(102,50);
        glVertex2f(97,50);
    glEnd();

    glBegin(GL_POLYGON);
        glColor3f( 1.00000f, 1.00000f, 0.00000f );

        glVertex2f(97,54);
        glVertex2f(102,54);
        glVertex2f(101,65);
        glVertex2f(98,65);
    glEnd();

    glBegin(GL_POLYGON);
        glColor3f( 1.00000f, 1.00000f, 0.00000f );

        glVertex2f(98.2,67);
        glVertex2f(100.9,67);
        glVertex2f(100.2,70);
        glVertex2f(98.9,70);
    glEnd();






}

void passeio(void){

    //-------------passeio colorido

    glBegin(GL_POLYGON);
        glColor3f( 0.86275f, 0.86275f, 0.86275f );

        glVertex2f(0,0);
        glVertex2f(30,0);
        glVertex2f(100,75);
        glVertex2f(100,75);
    glEnd();

    glBegin(GL_POLYGON);
        glColor3f( 0.86275f, 0.86275f, 0.86275f );

        glVertex2f(170,0);
        glVertex2f(200,1);
        glVertex2f(100,75);
        glVertex2f(100,75);
    glEnd();


     glLineWidth(1.0);
        glBegin(GL_LINES);
        glColor3f(0,0,0.0);  //Cor  Vai de X a x1 ... vai de Y1 a Y2

        glBegin(GL_LINES);
            //Desenho da altura
            glVertex2f(25, 0.0); //Vai de ponto A a ponto B
            glVertex2f(100, 75.0); //Ponto B

            glVertex2f(175.0, 0); //Vai de ponto A a ponto B
            glVertex2f(100, 75.0);
         glEnd();

    glBegin(GL_LINES);
        //Largura do passeio
        glVertex2f(0, 0.0); //Vai de ponto A a ponto B
        glVertex2f(100, 75.0); //Ponto B

        glVertex2f(200.0, 2); //Vai de ponto A a ponto B
        glVertex2f(100, 75.0);
    glEnd();


    glBegin(GL_LINES);
        ///////////////// Listas 01
        glVertex2f(19, 14); //Vai de ponto A a ponto B
        glVertex2f(39, 14.0); //Ponto B

        glVertex2f(184, 14); //Vai de ponto A a ponto B
        glVertex2f(161, 14.0); //Ponto B
    glEnd();

    glBegin(GL_LINES);
        /////////Altura listra
        glVertex2f(39, 14); //Vai de ponto A a ponto B
        glVertex2f(39, 09.0); //Ponto B

        glVertex2f(161, 14); //Vai de ponto A a ponto B
        glVertex2f(161, 09.0); //Ponto B
     glEnd();
    glBegin(GL_LINES);
     ///------------------------------------------------------------------------------------------
        ///////////////// Listas 02
        glVertex2f(47, 35); //Vai de ponto A a ponto B
        glVertex2f(60, 35.0); //Ponto B

        glVertex2f(155, 35); //Vai de ponto A a ponto B
        glVertex2f(140, 35.0); //Ponto B
     glEnd();
glBegin(GL_LINES);
        /////////Altura listra
        glVertex2f(60, 35); //Vai de ponto A a ponto B
        glVertex2f(60, 32); //Ponto B

        glVertex2f(140, 35); //Vai de ponto A a ponto B
        glVertex2f(140, 32); //Ponto B

   glEnd();
glBegin(GL_LINES);
        ///------------------------------------------------------------------------------------------
        ///////////////// Listas 03
        glVertex2f(60, 45); //Vai de ponto A a ponto B
        glVertex2f(70, 45.0); //Ponto B

        glVertex2f(130, 45); //Vai de ponto A a ponto B
        glVertex2f(141, 45.0); //Ponto B
glEnd();
glBegin(GL_LINES);
        /////////Altura listra
        glVertex2f(70, 45); //Vai de ponto A a ponto B
        glVertex2f(70, 43.0); //Ponto B

        glVertex2f(130, 45); //Vai de ponto A a ponto B
        glVertex2f(130, 43); //Ponto B
glEnd();
glBegin(GL_LINES);
        ///------------------------------------------------------------------------------------------
        ///////////////// Listas 04
        glVertex2f(69, 52); //Vai de ponto A a ponto B
        glVertex2f(77, 52.0); //Ponto B

        glVertex2f(123, 52); //Vai de ponto A a ponto B
        glVertex2f(131, 52); //Ponto B
glEnd();
glBegin(GL_LINES);
        /////////Altura listra
        glVertex2f(77, 52); //Vai de ponto A a ponto B
        glVertex2f(77, 50.5f); //Ponto B

        glVertex2f(123, 52); //Vai de ponto A a ponto B
        glVertex2f(123, 51); //Ponto B
glEnd();
glBegin(GL_LINES);
        ///------------------------------------------------------------------------------------------
        ///////////////// Listas 05
        glVertex2f(79, 59); //Vai de ponto A a ponto B
        glVertex2f(84, 59.0); //Ponto B

        glVertex2f(116, 59); //Vai de ponto A a ponto B
        glVertex2f(122, 59); //Ponto B
glEnd();
glBegin(GL_LINES);
        /////////Altura listra
        glVertex2f(84, 59); //Vai de ponto A a ponto B
        glVertex2f(84, 57.5f); //Ponto B

        glVertex2f(116, 59); //Vai de ponto A a ponto B
        glVertex2f(116, 57.5f); //Ponto B
glEnd();
glBegin(GL_LINES);
        ///------------------------------------------------------------------------------------------
        ///////////////// Listas 06
        glVertex2f(85, 64); //Vai de ponto A a ponto B
        glVertex2f(90, 64); //Ponto B

        glVertex2f(110, 64); //Vai de ponto A a ponto B
        glVertex2f(115, 64); //Ponto B
glEnd();
glBegin(GL_LINES);
        /////////Altura listra
        glVertex2f(84, 59); //Vai de ponto A a ponto B
        glVertex2f(84, 57.5f); //Ponto B

        glVertex2f(116, 59); //Vai de ponto A a ponto B
        glVertex2f(116, 57.5f); //Ponto B
glEnd();
glBegin(GL_LINES);
        ///------------------------------------------------------------------------------------------
        ///////////////// Listas 07
        glVertex2f(91, 68); //Vai de ponto A a ponto B
        glVertex2f(93, 68); //Ponto B

        glVertex2f(107, 68); //Vai de ponto A a ponto B
        glVertex2f(110, 68); //Ponto B
glEnd();
glBegin(GL_LINES);
        /////////Altura listra
        glVertex2f(84, 59); //Vai de ponto A a ponto B
        glVertex2f(84, 57.5f); //Ponto B

        glVertex2f(116, 59); //Vai de ponto A a ponto B
        glVertex2f(116, 57.5f); //Ponto B
glEnd();
glBegin(GL_LINES);
        ///------------------------------------------------------------------------------------------
        ///////////////// Listas 08
        glVertex2f(94.9f, 71); //Vai de ponto A a ponto B
        glVertex2f(97, 71); //Ponto B

        glVertex2f(103.9f, 71); //Vai de ponto A a ponto B
        glVertex2f(105, 71); //Ponto B
glEnd();
glBegin(GL_LINES);
        /////////Altura listra
        glVertex2f(84, 59); //Vai de ponto A a ponto B
        glVertex2f(84, 57.5f); //Ponto B

        glVertex2f(116, 59); //Vai de ponto A a ponto B
        glVertex2f(116, 57.5f); //Ponto B
glEnd();





        glFlush();

}
void rua(void){

    glLineWidth(1.0);
        glBegin(GL_LINES);
        glColor3f(0,0,0.0);

        glVertex2f(30, 0.0);
        glVertex2f(100, 75.0);
        glVertex2f(170.0, 0);
        glVertex2f(100, 75.0);
    glEnd();

//-------------------------------------------------------------------------------------------------> PASSEIO

    glLineWidth(1.0);
        glBegin(GL_LINES);
        glVertex2f(25, 0.0); //Vai de ponto A a ponto B
        glVertex2f(100, 75.0); //Ponto B

        glVertex2f(175.0, 0); //Vai de ponto A a ponto B
        glVertex2f(100, 75.0);

    glEnd();

    glBegin(GL_POLYGON);
      glColor3f( 0.50196f, 0.50196f, 0.50196f );
        glVertex2f(30, 0.0); //Vai de ponto A a ponto B
        glVertex2f(100, 75.0); //Ponto B

        glVertex2f(170.0, 0); //Vai de ponto A a ponto B
        glVertex2f(100, 75.0);

    glEnd();

    glFlush();

}

void faixa(void){


        //FAIXA 01

    glBegin(GL_LINES);
        glVertex2f(92, 1.0); //Vai de ponto A a ponto B
        glVertex2f(107, 1.0); //Ponto B

        glVertex2f(94, 24.0); //Vai de ponto A a ponto B
        glVertex2f(105, 24.0); //Ponto B

   glEnd();

    glBegin(GL_LINES);


        glVertex2f(92, 1.0);
        glVertex2f(94, 24.0);

        glVertex2f(107, 1.0); //Vai de ponto A a ponto B
        glVertex2f(105, 24.0); //Ponto B
    glEnd();


//---------------------------------------------------------------------------->
        //FAIXA 02
    glBegin(GL_LINES);
        glVertex2f(95, 31.0); //Vai de ponto A a ponto B
        glVertex2f(104,31.0); //Ponto B

        glVertex2f(97.0, 50); //Vai de ponto A a ponto B
        glVertex2f(102,  50);

    glEnd();

    glBegin(GL_LINES);
        glVertex2f(95, 31.0); //Vai de ponto A a ponto B
        glVertex2f(97,50.0); //Ponto B


        glVertex2f(102,  50);
        glVertex2f(104, 31); //Vai de ponto A a ponto B


    glEnd();

//---------------------------------------------------------------------->


        //FAIXA 03
    glBegin(GL_LINES);
        glVertex2f(97, 54.0); //Vai de ponto A a ponto B
        glVertex2f(102,54.0); //Ponto B

        glVertex2f(99.0, 65); //Vai de ponto A a ponto B
        glVertex2f(101,  65);

    glEnd();

    glBegin(GL_LINES);
        glVertex2f(99, 65.0); //Vai de ponto A a ponto B
        glVertex2f(97,54.0); //Ponto B


        glVertex2f(102,  54);
        glVertex2f(101, 65); //Vai de ponto A a ponto B


    glEnd();

}

void pontoDeFuga(void){
     glPointSize(5);
        glColor3f(1,0,0.0);
        glBegin(GL_POINTS);
            glVertex2f(100,75.0);
        glEnd();
}
void linhaHorizonte(void){
    glClearColor(1,1,1,1);
    glClear(GL_COLOR_BUFFER_BIT);

        glLineWidth(1.0);
        glBegin(GL_LINES);
        glColor3f(0,0,0.0);  //Cor vermelha  Vai de X a x1 ... vai de Y1 a Y2

        glVertex2f(0, 75.0); //Vai de ponto A a ponto B
        glVertex2f(200, 75.0); //Ponto B

        //FAIXA TOTAL
/*
        glVertex2f(92, 0.0); //Vai de ponto A a ponto B
        glVertex2f(100, 75.0); //Ponto B

        glVertex2f(107.0, 0); //Vai de ponto A a ponto B
        glVertex2f(100, 75.0);
*/
     glEnd();

/*
          glVertex2f(5, 50);
        glVertex2f(95, 50);
        glVertex2f(50, 5);
        glVertex2f(50, 95);
*/
        //glVertex2f(50, 8);

       // glVertex2f(50, 95);




            glFlush();
}

void desenha(void){

    linhaHorizonte();
    pontoDeFuga();
    ceu();
    planitude();
    rua();
    passeio();
    faixa();
    arvore();
    passeioColorido();
    loja();

    glFlush();
}

void tecla(unsigned char key, int x, int y){
    if (key == 'q' || key == 'Q')
    exit(0);
}

void Inicializa (void){
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(0,200,0,150);
    glMatrixMode(GL_MODELVIEW);
}

int main(int argc, char ** argv){
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(600,600);
    glutInitWindowPosition(200,10);
    glutCreateWindow("Pespectivas - Jesus Felipe ");
    glutDisplayFunc(desenha);
    Inicializa();
    glutKeyboardFunc(tecla);
    glutMainLoop();
    return 0;
}
