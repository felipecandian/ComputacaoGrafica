
#ifdef __APPLE__
#include <GLUT/glut.h>
#else
#include <GL/glut.h>
#endif
#include <stdio.h>
#include <stdlib.h>
GLfloat angle, fAspect, rotX, rotY;GLdouble obsX, obsY, obsZ;
static int ombro = -90, cotovelo = 0, ombro2 = -90 ,cotovelo2 = 0,
movimento=0, anca=0, joelho=0, anca2=0, joelho2=0;


float tamanho = 100;


// FunÃ§Ã£o callback chamada para fazer o desenho
void Desenha(void)
{
// Limpa a janela de visualizaÃ§Ã£o com a cor
// de fundo definida previamente
    glClear(GL_COLOR_BUFFER_BIT);
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB | GLUT_DEPTH);
// Troca cor corrente para azul
    glColor3f(0.0f, 0.0f, 1.0f);
//---------Movimenta o robo --------------------------------------//
/*inicio movimento*/
    glPushMatrix();
    glTranslatef (0.0, 0.5, 0.0);
    glRotatef ((GLfloat) movimento, 0.0, 1.0, 0.0);
//------------Cabeça------------------------------------------------//
    glPushMatrix();
    glTranslatef (0.0, 1.48, 0.0);
    glScalef (0.4, 0.4, 0.4);
    glutSolidSphere (1.0, 20,16);
    glPopMatrix();
//-------------pescoço---------------------------------------------//
    glPushMatrix();
    glTranslatef (0.0, 1.0, 0.0);
    glScalef (0.25, 0.2, 0.2);
    glutSolidCube (1.0);
    glPopMatrix();
//--------------------braço---------------------------------------//
/*inicia o primeiro braço*/
    glPushMatrix();
/* origem posicionada no ombro */
    glTranslatef (0.6, 0.8, 0.0);
    glRotatef ((GLfloat) ombro, 0.0, 0.0, 1.0);
/* origem posicionada no centro do braÃ§o */
    glTranslatef (0.4, 0.0, 0.0);
    glPushMatrix();
    glScalef (1.0, 0.2, 0.3);
    glutSolidCube (1.0);
    glPopMatrix();
/* origem posicionada no cotovelo */
    glTranslatef (0.5, 0.0, 0.0);
    glRotatef ((GLfloat) cotovelo, 0.0, 0.0, 1.0);
    glTranslatef (0.5, 0.0, 0.0);
    glPushMatrix();glScalef (1.0, 0.2, 0.3);
    glutSolidCube (1.0);
    glPopMatrix();
/* origem volta para o sistema de coordenadas original */
    glPopMatrix();
//-------------braço Esquerdo---------------------------------//
/*inicia o segunda braço*/
    glPushMatrix();
/* origem posicionada no ombro */
    glTranslatef (-0.6, 0.8, 0.0);
    glRotatef ((GLfloat) ombro2, 0.0, 0.0, 1.0);
/* origem posicionada no centro do braço */
    glTranslatef (0.4, 0.0, 0.0);
    glPushMatrix();
    glScalef (1.0, 0.2, 0.3);
    glutSolidCube (1.0);
    glPopMatrix();
/* origem posicionada no cotovelo */
    glTranslatef (0.5, 0.0, 0.0);
    glRotatef ((GLfloat) cotovelo2, 0.0, 0.0, 1.0);
    glTranslatef (0.5, 0.0, 0.0);
    glPushMatrix();
    glScalef (1.0, 0.2, 0.3);
    glutSolidCube (1.0);
    glPopMatrix();
/* origem volta para o sistema de coordenadas original */
    glPopMatrix();
//------------ Tronco do Robo -------------------------------//
/*inicia o corpo do robo*/
    glPushMatrix();
/* origem posicionada do corpo */
    glTranslatef (0.0, 0.0, 0.0);
    glPushMatrix();
    glScalef (1.0, 1.7, 0.8);
    glutSolidCube (1.0);
    glPopMatrix();
/* origem volta para o sistema de coordenadas original */
    glPopMatrix();
//---------- Perna direita ---------------------//
/* inicia a perna direita */
    glPushMatrix();
/* origem posicionada no anca */
    glTranslatef (-0.5, -1.0, 0.0);
    glRotatef ((GLfloat) anca2, 1.0, 0.0, 0.0);
/* origem posicionada do centro da anca */
    glTranslatef (0.8, -0.4, 0.0);
    glPushMatrix();
    glScalef (0.2, 1.0, 0.3);
    glutSolidCube (1.0);
    glPopMatrix();
/* origem posicionada no joelho */
    glTranslatef (0.5, -0.6, 0.0);
    glRotatef ((GLfloat) joelho2, 1.0, 0.0, 0.0);
    glTranslatef (-0.5, -0.4, 0.0);
    glPushMatrix();
    glScalef (0.2, 1.0, 0.3);
    glutSolidCube (1.0);
    glPopMatrix();
/* pÃ© */
    glPushMatrix();
    glTranslatef (0.0, -0.6, 0.2);
    glScalef (0.2, 0.2, 0.7);
    glutSolidCube (1.0);
    glPopMatrix();
/* origem volta para o sistema de coordenadas original */
    glPopMatrix();
//-------------Perna esquerda -------------------------//
/* inicia a perna esquerda */
    glPushMatrix();
/* origem posicionada no anca */
    glTranslatef (-0.5, -1.0, 0.0);
    glRotatef ((GLfloat) anca, 1.0, 0.0, 0.0);
/* origem posicionada do centro da anca */
    glTranslatef (0.2, -0.4, 0.0);
    glPushMatrix();
    glScalef (0.2, 1.0, 0.3);
    glutSolidCube (1.0);
    glPopMatrix();
/* origem posicionada no joelho */
    glTranslatef (0.5, -0.6, 0.0);
    glRotatef ((GLfloat) joelho, 1.0, 0.0, 0.0);
    glTranslatef (-0.5, -0.4, 0.0);
    glPushMatrix();
    glScalef (0.2, 1.0, 0.3);
    glutSolidCube (1.0);
    glPopMatrix();
/* pÃ© */
    glPushMatrix();
    glTranslatef (0.0, -0.6, 0.2);
    glScalef (0.2, 0.2, 0.7);
    glutSolidCube (1.0);
    glPopMatrix();
/* origem volta para o sistema de coordenadas original */
    glPopMatrix();
    glPopMatrix();
//fim do movimento
//fim da funcao
// Execução dos comandos de desenho
    glutSwapBuffers();
}

void Inicializa(void){
// Define a cor de fundo da janela de visualização como branca
 //GLfloat light_specular[]={0, 0.0, 0.0, 0.0};
glClearColor(1.0f, 1.0f, 1.0f, 1.0f);
// Inicializa a variável que especifica o ângulo da projeção
// perspectiva
angle=50;
// Inicializa as variáveis usadas para alterar a posição do
// observador virtual
rotX = 30;
rotY = 0;
obsZ = 18;
}
// Função usada para especificar a posição do observador virtual
void PosicionaObservador(void)
{
// Especifica sistema de coordenadas do modelo
glMatrixMode(GL_MODELVIEW);
// Inicializa sistema de coordenadas do modelo
glLoadIdentity();
// Especifica posiÃ§Ã£o do observador e do alvo
glTranslatef(0,0,-obsZ);
glRotatef(rotX,1,0,0);
glRotatef(rotY,0,1,0);
}
// Função usada para especificar o volume de visualização
void EspecificaParametrosVisualizacao(void)
{
// Especifica sistema de coordenadas de projeção
glMatrixMode(GL_PROJECTION);
// Inicializa sistema de coordenadas de projeção
glLoadIdentity();
// Especifica a projeção perspectiva(angulo,aspecto,zMin,zMax)
gluPerspective(angle,fAspect,0.5,500);
PosicionaObservador();
}
// Função callback chamada quando o tamanho da janela Ã© alterado
void AlteraTamanhoJanela(GLsizei w, GLsizei h)
{
// Para previnir uma divisão por zero
if ( h == 0 ) h = 1;
// Especifica as dimensões da viewport
glViewport(0, 0, w, h);
// Calcula a correção de aspecto
fAspect = (GLfloat)w/(GLfloat)h;
EspecificaParametrosVisualizacao();
}
void GerenciaMouse(int button, int state, int x, int y)
// Callback para gerenciar eventos do mousevoid GerenciaMouse(int button, int state, int x, int y)
{
if (button == GLUT_LEFT_BUTTON)
if (state == GLUT_DOWN) {
// Zoom-in
if (angle >= 10)
angle -= 5;
}
if (button == GLUT_RIGHT_BUTTON)
if (state == GLUT_DOWN) {
// Zoom-out
if (angle <= 130)
angle += 5;
}
EspecificaParametrosVisualizacao();
glutPostRedisplay();
}
// Função callback chamada para gerenciar eventos de teclas especiais
// (F1,PgDn,...)
void TeclasEspeciais (int tecla, int x, int y)
{
switch (tecla)
{
case GLUT_KEY_LEFT: rotY--;
break;
case GLUT_KEY_RIGHT:rotY++;
break;
case GLUT_KEY_UP: rotX++;
break;
case GLUT_KEY_DOWN: rotX--;
break;
case GLUT_KEY_HOME: obsZ++;
break;
case GLUT_KEY_END: obsZ--;
break;
if (tecla == GLUT_KEY_F1){
     tamanho++;
}


}
PosicionaObservador();
glutPostRedisplay();
}
//ESTA FUNÇÃO DEVERÁ SER COMPLETADA
void Teclas (unsigned char key, int x, int y){
switch (key) {
/* condicionais do braços */
case 'k':
if (ombro < cotovelo ){
ombro = (ombro + 70.0); //quantos graus irá movimentar
glutPostRedisplay();}
break;


case 'K':
if (ombro > cotovelo) {
ombro = (ombro - 70.0);
glutPostRedisplay();
}
break;

case 'l':
if (cotovelo > ombro){
cotovelo = (cotovelo + 150);
glutPostRedisplay();
}
break;
case 'L':
if (cotovelo > ombro){
cotovelo = (cotovelo - 40);
glutPostRedisplay();
}
break;


case 'A':
if (ombro2 < cotovelo2){
ombro2 = (ombro2 + 20);
glutPostRedisplay();
}
break;

case 'a':
if (ombro2 < cotovelo2){
ombro2 = (ombro2 - 20);
glutPostRedisplay();
}
break;

case 's':
if (cotovelo2 > ombro2){
cotovelo2 = (cotovelo2 - 80);
glutPostRedisplay();
}
break;
case 'S':
if (cotovelo2 < ombro2){
cotovelo2 = (cotovelo2 + 80);
glutPostRedisplay();
}break;

//condicionais do movimento do corpo
case 'g':
movimento = (movimento - 5) % 360;
glutPostRedisplay();
break;
case 'h':
movimento = (movimento + 5) % 360;
glutPostRedisplay();
break;

// condicionais das pernas
case 'w':
if (anca >= joelho){
anca = (anca - 0);
glutPostRedisplay();
}
break;
case 'W':
if (anca  <= joelho){
anca = (anca + 0);
glutPostRedisplay();
}
break;
case 'e':
if (joelho <= anca){
joelho = (joelho - 0);
glutPostRedisplay();
}
break;
case 'E':
if (joelho >= anca){
joelho = (joelho + 0);
glutPostRedisplay();
}
break;

case 'o':
if(anca2 >= joelho2){
anca2 = (anca2 - 30);
glutPostRedisplay();
}
break;
case 'O':
if (anca2 <= joelho2){
anca2 = (anca2 + 30);
glutPostRedisplay();
}
break;

case 'i':
if(joelho2 >= anca2){
joelho2 = (joelho2 - 50);
glutPostRedisplay();
}
break;
case 'I':
if (joelho2 <= anca2){
joelho2 = (joelho2 + 50);
glutPostRedisplay();
}

break;
case 27:
exit(0);
break;
default:
break;
}
}
const GLfloat light_ambient[] = { 0.0f, 0.0f, 0.0f, 1.0f };
const GLfloat light_diffuse[] = { 1.0f, 1.0f, 1.0f, 1.0f };
const GLfloat light_specular[] = { 1.0f, 0.5f, 0.0f, 1.0f };
const GLfloat light_position[] = { 2.0f, 5.0f, 5.0f, 0.0f };
const GLfloat mat_ambient[] = { 0.7f, 0.7f, 0.7f, 1.0f };
const GLfloat mat_diffuse[] = { 0.8f, 0.8f, 0.8f, 1.0f };
const GLfloat mat_specular[] = { 1.0f, 0.0f, 0.0f, 1.0f };


GLfloat high_shininess[] = { tamanho };



// Programa Principal
int main(){
int argc = 0;
char *argv[] = { (char *)"gl", 0 };
glutInit(&argc,argv);
// Define do modo de operacao da GLUT
glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB);
// Especifica a posiÃ§Ã£o inicial da janela GLUT
glutInitWindowPosition(5,5);
// Especifica o tamanho inicial em pixels da janela GLUT
glutInitWindowSize(400,400);
// Cria a janela passando como argumento o titulo da mesma
glutCreateWindow("Transformações e Iluminação - Jesus Felipe Candian Silva");
// Registra a funcao callback de redesenho da janela de visualizacao
glutDisplayFunc(Desenha);
// Registra a funcao callback para tratamento das teclas especiais
glutSpecialFunc(TeclasEspeciais);
glutKeyboardFunc(Teclas);
// Registra a funcao callback para tratamento do redimensionamento

glutReshapeFunc(AlteraTamanhoJanela);
// Registra a funcao callback para tratamento do mouse
glutMouseFunc(GerenciaMouse);
Inicializa();
glEnable(GL_CULL_FACE);
glCullFace(GL_BACK);
glEnable(GL_DEPTH_TEST);
glDepthFunc(GL_LESS);
glEnable(GL_LIGHT0);
glEnable(GL_NORMALIZE);
glEnable(GL_COLOR_MATERIAL);
glEnable(GL_LIGHTING);
glShadeModel(GL_FLAT);
glLightfv(GL_LIGHT0, GL_AMBIENT, light_ambient);
glLightfv(GL_LIGHT0, GL_DIFFUSE, light_diffuse);
glLightfv(GL_LIGHT0, GL_SPECULAR, light_specular);
glLightfv(GL_LIGHT0, GL_POSITION, light_position);
glMaterialfv(GL_FRONT, GL_AMBIENT, mat_ambient);
glMaterialfv(GL_FRONT, GL_DIFFUSE, mat_diffuse);
glMaterialfv(GL_FRONT, GL_SPECULAR, mat_specular);
glMaterialfv(GL_FRONT, GL_SHININESS, high_shininess);
glutMainLoop();
return EXIT_SUCCESS;
}
