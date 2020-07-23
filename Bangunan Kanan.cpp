#include<windows.h>
#include<GL/glut.h>

void init(void);
void tampil(void);
void keyboard(unsigned char ,int ,int);
void ukuran(int, int);
void mouseMotion(int x, int y);

float xrot = 0.0f;
float yrot = 0.0f;
float xdiff = 0.0f;
float ydiff = 0.0f;
bool mouseDown = false;
int is_depth;

void init(void)
{
    glClearColor(0.0,0.0,0.0,0.0);
    glEnable(GL_LIGHTING);
    glEnable(GL_COLOR_MATERIAL);
    glEnable(GL_LIGHT0);
    glEnable(GL_DEPTH_TEST);
    glEnable(GL_BLEND);
    glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);
    is_depth=1;
}

void idle()
{
    if (!mouseDown)
    {
        xrot += 0.3f;
        yrot += 0.4f;
    }
glutPostRedisplay();
}

void mouse(int button, int state, int x, int y)
{
    if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN)
    {
        mouseDown = true;
        xdiff = x - yrot;
        ydiff = -y + xrot;
    }
    else
        mouseDown = false;
}

void mouseMotion(int x, int y)
{
    if(mouseDown)
    {
        yrot = x - xdiff;
        xrot = y + ydiff;

        glutPostRedisplay();
    }
}

void lantaibawah(){

// BANGUNAN UTAMA
//tembok belakang
glBegin(GL_QUADS);
glColor3f(1,1,1);
glVertex3f(-20,15,0);
glVertex3f(-20,0,0);
glVertex3f(20,0,0);
glVertex3f(20,15,0);
glEnd();

//tembok kiri
glBegin(GL_QUADS);
glColor3f(1,1,1);
glVertex3f(-20,7.5,15);
glVertex3f(-20,0,15);
glVertex3f(-20,0,0);
glVertex3f(-20,7.5,0);
glEnd();

//tembok kanan
glBegin(GL_QUADS);
glColor3f(1,1,1);
glVertex3f(20,15,15);
glVertex3f(20,0,15);
glVertex3f(20,0,0);
glVertex3f(20,15,0);
glEnd();

//tembok depan kanan
glBegin(GL_QUADS);
glColor3f(1,1,1);
glVertex3f(-10,15,15);
glVertex3f(-10,0,15);
glVertex3f(20,0,15);
glVertex3f(20,15,15);
glEnd();

//tembok depan kiri
glBegin(GL_QUADS);
glColor3f(1,1,1);
glVertex3f(-20,7.5,15);
glVertex3f(-20,0,15);
glVertex3f(-10,0,15);
glVertex3f(-10,7.5,15);
glEnd();

//alas lantai
glBegin(GL_QUADS);
glColor3f(1,0,0);
glVertex3f(-20,0,15);
glVertex3f(-20,0,0);
glVertex3f(20,0,0);
glVertex3f(20,0,15);
glEnd();

//atap
glBegin(GL_QUADS);
glColor3f(1,0,0);
glVertex3f(-10,15,15);
glVertex3f(-10,15,0);
glVertex3f(20,15,0);
glVertex3f(20,15,15);
glEnd();

//tembok bg kiri (kanan)
glBegin(GL_QUADS);
glColor3f(1,1,0);
glVertex3f(-10,15,15);
glVertex3f(-10,7.5,15);
glVertex3f(-10,7.5,7.5);
glVertex3f(-10,15,7.5);
glEnd();

//alas depan bangunan kanan
glBegin(GL_QUADS);
glColor3f(1,1,0);
glVertex3f(-20,7.5,15);
glVertex3f(-20,7.5,7.5);
glVertex3f(-10,7.5,7.5);
glVertex3f(-10,7.5,15);
glEnd();

//tembok depan kiri bg kiri
glBegin(GL_QUADS);
glColor3f(1,1,0);
glVertex3f(-20,15,7.5);
glVertex3f(-20,7.5,7.5);
glVertex3f(-10,7.5,7.5);
glVertex3f(-10,15,7.5);
glEnd();

//tembok depan kiri
glBegin(GL_QUADS);
glColor3f(1,1,1);
glVertex3f(-20,15,7.5);
glVertex3f(-20,7.5,7.5);
glVertex3f(-20,7.5,0);
glVertex3f(-20,15,0);
glEnd();

//atap
glBegin(GL_QUADS);
glColor3f(1,0,0);
glVertex3f(-20,15,7.5);
glVertex3f(-20,15,0);
glVertex3f(-10,15,0);
glVertex3f(-10,15,7.5);
glEnd();

//Moncong kiri tembok kiri
glBegin(GL_QUADS);
glColor3f(1,1,0);
glVertex3f(-10,20,15);
glVertex3f(-10,15,15);
glVertex3f(-10,15,7.5);
glVertex3f(-10,20,7.5);
glEnd();

//moncong kiri tembok depan
glBegin(GL_QUADS);
glColor3f(1,1,0);
glVertex3f(-10,20,15);
glVertex3f(-10,15,15);
glVertex3f(-5,15,15);
glVertex3f(-5,20,15);
glEnd();

//Moncong kiri tembok kanan
glBegin(GL_QUADS);
glColor3f(1,1,0);
glVertex3f(-5,20,15);
glVertex3f(-5,15,15);
glVertex3f(-5,15,7.5);
glVertex3f(-5,20,7.5);
glEnd();

//moncong kiri tembok blkg
glBegin(GL_QUADS);
glColor3f(1,1,0);
glVertex3f(-10,20,7.5);
glVertex3f(-10,15,7.5);
glVertex3f(-5,15,7.5);
glVertex3f(-5,20,7.5);
glEnd();

//atap moncong kiri
glBegin(GL_QUADS);
glColor3f(1,1,0);
glVertex3f(-10,20,15);
glVertex3f(-10,20,7.5);
glVertex3f(-5,20,7.5);
glVertex3f(-5,20,15);
glEnd();

//batas
//Moncong kanan tembok kiri
glBegin(GL_QUADS);
glColor3f(1,1,0);
glVertex3f(10,20,15);
glVertex3f(10,15,15);
glVertex3f(10,15,7.5);
glVertex3f(10,20,7.5);
glEnd();

//moncong kanan tembok depan
glBegin(GL_QUADS);
glColor3f(1,1,0);
glVertex3f(10,20,15);
glVertex3f(10,15,15);
glVertex3f(5,15,15);
glVertex3f(5,20,15);
glEnd();

//Moncong kanan tembok kanan
glBegin(GL_QUADS);
glColor3f(1,1,0);
glVertex3f(5,20,15);
glVertex3f(5,15,15);
glVertex3f(5,15,7.5);
glVertex3f(5,20,7.5);
glEnd();

//moncong kanan tembok blkg
glBegin(GL_QUADS);
glColor3f(1,1,0);
glVertex3f(10,20,7.5);
glVertex3f(10,15,7.5);
glVertex3f(5,15,7.5);
glVertex3f(5,20,7.5);
glEnd();

//atap moncong kanan
glBegin(GL_QUADS);
glColor3f(1,1,0);
glVertex3f(10,20,15);
glVertex3f(10,20,7.5);
glVertex3f(5,20,7.5);
glVertex3f(5,20,15);
glEnd();
}

void tampil(void){
 glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    glLoadIdentity();
    gluLookAt(0.0f, 0.0f, 3.0f, 0.0f, 0.0f, 0.0f, 0.0f, 1.0f, 0.0f);
    glRotatef(xrot, 1.0f, 0.0f, 0.0f);
    glRotatef(yrot, 0.0f, 1.0f, 0.0f);
    if(is_depth)
        glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    else
        glClear(GL_COLOR_BUFFER_BIT);

lantaibawah();
glutSwapBuffers();
}

void keyboard(unsigned char key,int x,int y){
switch(key){
case '5':
    if(is_depth){
        is_depth=0;
        glDisable(GL_DEPTH_TEST);
    }
    else{
        is_depth=1;
        glEnable(GL_DEPTH_TEST);
    }
}
tampil();

}

void ukuran(int lebar,int tinggi){
    if (tinggi==0) tinggi =1;
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluPerspective(25,lebar/tinggi,5,500);
    glTranslatef(0,0,-150);
    glMatrixMode(GL_MODELVIEW);
}

int main(int argc, char **argv)
{
    glutInit(&argc , argv);
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB);
    glutInitWindowSize(800, 800);
    glutInitWindowPosition(250, 80);
    glutCreateWindow("TR");
    init();
    glutDisplayFunc(tampil);
    glutReshapeFunc(ukuran);
    glutKeyboardFunc(keyboard);
    glutMouseFunc(mouse);
    glutMotionFunc(mouseMotion);
    glutIdleFunc(tampil);
    glutMainLoop();
    return 0;
}
