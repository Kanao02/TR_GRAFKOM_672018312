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
float gerakx = 0.0f;
float geraky = 0.0f;
float gerakz = 0.0f;
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
glPushMatrix();
glTranslatef(0+gerakx,0+geraky,0+gerakz);
// BANGUNAN KANAN
//tembok belakang
glBegin(GL_QUADS);
glColor3f(0.9,0.8,0.6);
glVertex3f(0,15,0);
glVertex3f(0,0,0);
glVertex3f(40,0,0);
glVertex3f(40,15,0);
glEnd();

//tembok kiri
glBegin(GL_QUADS);
glColor3f(0.9,0.8,0.6);
glVertex3f(0,7.5,15);
glVertex3f(0,0,15);
glVertex3f(0,0,0);
glVertex3f(0,7.5,0);
glEnd();

//tembok kanan
glBegin(GL_QUADS);
glColor3f(0.9,0.8,0.6);
glVertex3f(40,15,15);
glVertex3f(40,0,15);
glVertex3f(40,0,0);
glVertex3f(40,15,0);
glEnd();

//tembok depan kanan
glBegin(GL_QUADS);
glColor3f(0.9,0.8,0.6);
glVertex3f(10,15,15);
glVertex3f(10,0,15);
glVertex3f(40,0,15);
glVertex3f(40,15,15);
glEnd();

//jendela tembok depan kanan paling atas
glBegin(GL_QUADS);
glColor3f(0,0,0);
glVertex3f(11,14,15.1);
glVertex3f(11,11,15.1);
glVertex3f(15,11,15.1);
glVertex3f(15,14,15.1);
glEnd();

glBegin(GL_QUADS);
glColor3f(0,0,0);
glVertex3f(16,14,15.1);
glVertex3f(16,11,15.1);
glVertex3f(20,11,15.1);
glVertex3f(20,14,15.1);
glEnd();

glBegin(GL_QUADS);
glColor3f(0,0,0);
glVertex3f(21,14,15.1);
glVertex3f(21,11,15.1);
glVertex3f(25,11,15.1);
glVertex3f(25,14,15.1);
glEnd();

glBegin(GL_QUADS);
glColor3f(0,0,0);
glVertex3f(26,14,15.1);
glVertex3f(26,11,15.1);
glVertex3f(30,11,15.1);
glVertex3f(30,14,15.1);
glEnd();

glBegin(GL_QUADS);
glColor3f(0,0,0);
glVertex3f(31,14,15.1);
glVertex3f(31,11,15.1);
glVertex3f(35,11,15.1);
glVertex3f(35,14,15.1);
glEnd();

glBegin(GL_QUADS);
glColor3f(0,0,0);
glVertex3f(36,14,15.1);
glVertex3f(36,11,15.1);
glVertex3f(40,11,15.1);
glVertex3f(40,14,15.1);
glEnd();

//jendela tembok depan kanan bawah

glBegin(GL_QUADS);
glColor3f(0,0,0);
glVertex3f(11,10,15.1);
glVertex3f(11,5,15.1);
glVertex3f(20,5,15.1);
glVertex3f(20,10,15.1);
glEnd();

glBegin(GL_QUADS);
glColor3f(0,0,0);
glVertex3f(21,10,15.1);
glVertex3f(21,5,15.1);
glVertex3f(30,5,15.1);
glVertex3f(30,10,15.1);
glEnd();

glBegin(GL_QUADS);
glColor3f(0,0,0);
glVertex3f(31,10,15.1);
glVertex3f(31,5,15.1);
glVertex3f(40,5,15.1);
glVertex3f(40,10,15.1);
glEnd();

//tembok depan kiri
glBegin(GL_QUADS);
glColor3f(0.9,0.8,0.6);
glVertex3f(0,7.5,15);
glVertex3f(0,0,15);
glVertex3f(10,0,15);
glVertex3f(10,7.5,15);
glEnd();

//jendela tembok depan kiri
glBegin(GL_QUADS);
glColor3f(0,0,0);
glVertex3f(-15,13,15.1);
glVertex3f(-15,5,15.1);
glVertex3f(-13,5,15.1);
glVertex3f(-13,13,15.1);
glEnd();

glBegin(GL_QUADS);
glColor3f(0,0,0);
glVertex3f(-19,13,15.1);
glVertex3f(-19,5,15.1);
glVertex3f(-17,5,15.1);
glVertex3f(-17,13,15.1);
glEnd();

glBegin(GL_QUADS);
glColor3f(0,0,0);
glVertex3f(-11,13,15.1);
glVertex3f(-11,5,15.1);
glVertex3f(-9,5,15.1);
glVertex3f(-9,13,15.1);
glEnd();

//alas lantai
glBegin(GL_QUADS);
glColor3f(1,1,1);
glVertex3f(0,0,15);
glVertex3f(0,0,0);
glVertex3f(40,0,0);
glVertex3f(40,0,15);
glEnd();

//atap
glBegin(GL_QUADS);
glColor3f(0.9,0.8,0.6);
glVertex3f(10,15,15);
glVertex3f(10,15,0);
glVertex3f(40,15,0);
glVertex3f(40,15,15);
glEnd();

//tembok bg kiri (kanan)
glBegin(GL_QUADS);
glColor3f(0.9,0.8,0.6);
glVertex3f(10,15,15);
glVertex3f(10,7.5,15);
glVertex3f(10,7.5,7.5);
glVertex3f(10,15,7.5);
glEnd();


//alas depan bangunan kanan
glBegin(GL_QUADS);
glColor3f(0.9,0.8,0.6);
glVertex3f(0,7.5,15);
glVertex3f(0,7.5,7.5);
glVertex3f(10,7.5,7.5);
glVertex3f(10,7.5,15);
glEnd();

//tembok depan kiri bg kiri
glBegin(GL_QUADS);
glColor3f(0.9,0.8,0.6);
glVertex3f(0,15,7.5);
glVertex3f(0,7.5,7.5);
glVertex3f(10,7.5,7.5);
glVertex3f(10,15,7.5);
glEnd();

//tembok depan kiri
glBegin(GL_QUADS);
glColor3f(0.9,0.8,0.6);
glVertex3f(0,15,7.5);
glVertex3f(0,7.5,7.5);
glVertex3f(0,7.5,0);
glVertex3f(0,15,0);
glEnd();

//atap
glBegin(GL_QUADS);
glColor3f(0.9,0.8,0.6);
glVertex3f(0,15,7.5);
glVertex3f(0,15,0);
glVertex3f(10,15,0);
glVertex3f(10,15,7.5);
glEnd();

//Moncong kiri tembok kiri
glBegin(GL_QUADS);
glColor3f(0.9,0.8,0.6);
glVertex3f(10,20,15);
glVertex3f(10,15,15);
glVertex3f(10,15,7.5);
glVertex3f(10,20,7.5);
glEnd();

//moncong kiri tembok depan
glBegin(GL_QUADS);
glColor3f(0.9,0.8,0.6);
glVertex3f(10,20,15);
glVertex3f(10,15,15);
glVertex3f(15,15,15);
glVertex3f(15,20,15);
glEnd();

//Moncong kiri tembok kanan
glBegin(GL_QUADS);
glColor3f(0.9,0.8,0.6);
glVertex3f(15,20,15);
glVertex3f(15,15,15);
glVertex3f(15,15,7.5);
glVertex3f(15,20,7.5);
glEnd();

//moncong kiri tembok blkg
glBegin(GL_QUADS);
glColor3f(0.9,0.8,0.6);
glVertex3f(10,20,7.5);
glVertex3f(10,15,7.5);
glVertex3f(15,15,7.5);
glVertex3f(15,20,7.5);
glEnd();

//atap moncong kiri
glBegin(GL_QUADS);
glColor3f(0.9,0.8,0.6);
glVertex3f(10,20,15);
glVertex3f(10,20,7.5);
glVertex3f(15,20,7.5);
glVertex3f(15,20,15);
glEnd();

//batas
//Moncong kanan tembok kiri
glBegin(GL_QUADS);
glColor3f(0.9,0.8,0.6);
glVertex3f(30,20,15);
glVertex3f(30,15,15);
glVertex3f(30,15,7.5);
glVertex3f(30,20,7.5);
glEnd();

//moncong kanan tembok depan
glBegin(GL_QUADS);
glColor3f(0.9,0.8,0.6);
glVertex3f(30,20,15);
glVertex3f(30,15,15);
glVertex3f(25,15,15);
glVertex3f(25,20,15);
glEnd();

//Moncong kanan tembok kanan
glBegin(GL_QUADS);
glColor3f(0.9,0.8,0.6);
glVertex3f(25,20,15);
glVertex3f(25,15,15);
glVertex3f(25,15,7.5);
glVertex3f(25,20,7.5);
glEnd();

//moncong kanan tembok blkg
glBegin(GL_QUADS);
glColor3f(0.9,0.8,0.6);
glVertex3f(30,20,7.5);
glVertex3f(30,15,7.5);
glVertex3f(25,15,7.5);
glVertex3f(25,20,7.5);
glEnd();

//atap moncong kanan
glBegin(GL_QUADS);
glColor3f(0.9,0.8,0.6);
glVertex3f(30,20,15);
glVertex3f(30,20,7.5);
glVertex3f(25,20,7.5);
glVertex3f(25,20,15);
glEnd();

//BANGUNAN UTAMA
// belakang
glBegin(GL_QUADS);
glColor3f(0.9,0.8,0.6);
glVertex3f(-60,25,0);
glVertex3f(-60,0,0);
glVertex3f(0,0,0);
glVertex3f(0,25,0);
glEnd();

//depan
glBegin(GL_QUADS);
glColor3f(0.9,0.8,0.6);
glVertex3f(-60,15,15);
glVertex3f(-60,0,15);
glVertex3f(0,0,15);
glVertex3f(0,15,15);
glEnd();

//tembok kanan
glBegin(GL_QUADS);
glColor3f(0.9,0.8,0.6);
glVertex3f(0,15,15);
glVertex3f(0,0,15);
glVertex3f(0,0,0);
glVertex3f(0,15,0);
glEnd();

//tembok kiri
glBegin(GL_QUADS);
glColor3f(0.9,0.8,0.6);
glVertex3f(-60,15,15);
glVertex3f(-60,0,15);
glVertex3f(-60,0,0);
glVertex3f(-60,15,0);
glEnd();

//alas lantai
glBegin(GL_QUADS);
glColor3f(1,1,1);
glVertex3f(-60,0,15);
glVertex3f(-60,0,0);
glVertex3f(0,0,0);
glVertex3f(0,0,15);
glEnd();

//atap lantai 1 depan
glBegin(GL_QUADS);
glColor3f(0.9,0.8,0.6);
glVertex3f(-60,15,15);
glVertex3f(-60,15,7.5);
glVertex3f(0,15,7.5);
glVertex3f(0,15,15);
glEnd();

//tembok depan lantai 2
glBegin(GL_QUADS);
glColor3f(0.9,0.8,0.6);
glVertex3f(-60,25,7.5);
glVertex3f(-60,15,7.5);
glVertex3f(0,15,7.5);
glVertex3f(0,25,7.5);
glEnd();

//tembok kiri lantai 2
glBegin(GL_QUADS);
glColor3f(0.9,0.8,0.6);
glVertex3f(-60,25,7.5);
glVertex3f(-60,15,7.5);
glVertex3f(-60,15,0);
glVertex3f(-60,25,0);
glEnd();

//tembok kanan lantai 2
glBegin(GL_QUADS);
glColor3f(0.9,0.8,0.6);
glVertex3f(0,25,7.5);
glVertex3f(0,15,7.5);
glVertex3f(0,15,0);
glVertex3f(0,25,0);
glEnd();

//atap lantai 1 depan
glBegin(GL_QUADS);
glColor3f(0.9,0.8,0.6);
glVertex3f(-60,25,7.5);
glVertex3f(-60,25,0);
glVertex3f(0,25,0);
glVertex3f(0,25,7.5);
glEnd();

//depan moncong 1
glBegin(GL_QUADS);
glColor3f(0.9,0.8,0.6);
glVertex3f(-40,15,25);
glVertex3f(-40,0,25);
glVertex3f(-20,0,25);
glVertex3f(-20,15,25);
glEnd();

//tembok kiri moncong 1
glBegin(GL_QUADS);
glColor3f(0.9,0.8,0.6);
glVertex3f(-40,15,25);
glVertex3f(-40,0,25);
glVertex3f(-40,0,15);
glVertex3f(-40,15,15);
glEnd();

//tembok kanan moncong 1
glBegin(GL_QUADS);
glColor3f(0.9,0.8,0.6);
glVertex3f(-20,15,25);
glVertex3f(-20,0,25);
glVertex3f(-20,0,15);
glVertex3f(-20,15,15);
glEnd();

//atap moncong 1
glBegin(GL_QUADS);
glColor3f(0.9,0.8,0.6);
glVertex3f(-40,15,25);
glVertex3f(-40,15,15);
glVertex3f(-20,15,15);
glVertex3f(-20,15,25);
glEnd();

//alas moncong 1
glBegin(GL_QUADS);
glColor3f(1,1,1);
glVertex3f(-40,0,25);
glVertex3f(-40,0,15);
glVertex3f(-20,0,15);
glVertex3f(-20,0,25);
glEnd();

//depan moncong 2
glBegin(GL_QUADS);
glColor3f(0.9,0.8,0.6);
glVertex3f(-35,15,30);
glVertex3f(-35,0,30);
glVertex3f(-25,0,30);
glVertex3f(-25,15,30);
glEnd();

//tembok kiri moncong 2
glBegin(GL_QUADS);
glColor3f(0.9,0.8,0.6);
glVertex3f(-35,15,30);
glVertex3f(-35,0,30);
glVertex3f(-35,0,25);
glVertex3f(-35,15,25);
glEnd();

//tembok kanan moncong 2
glBegin(GL_QUADS);
glColor3f(0.9,0.8,0.6);
glVertex3f(-25,15,30);
glVertex3f(-25,0,30);
glVertex3f(-25,0,25);
glVertex3f(-25,15,25);
glEnd();

//atap moncong 2
glBegin(GL_QUADS);
glColor3f(0.9,0.8,0.6);
glVertex3f(-35,15,30);
glVertex3f(-35,15,25);
glVertex3f(-25,15,25);
glVertex3f(-25,15,30);
glEnd();

//alas moncong 2
glBegin(GL_QUADS);
glColor3f(1,1,1);
glVertex3f(-35,0,30);
glVertex3f(-35,0,25);
glVertex3f(-25,0,25);
glVertex3f(-25,0,30);
glEnd();

//TOWER KIRI

//tembok kiri tower kiri
glBegin(GL_QUADS);
glColor3f(0.9,0.8,0.6);
glVertex3f(-50,30,7.5);
glVertex3f(-50,25,7.5);
glVertex3f(-50,25,0);
glVertex3f(-50,30,0);
glEnd();

//tembok kanan tower kiri
glBegin(GL_QUADS);
glColor3f(0.9,0.8,0.6);
glVertex3f(-45,30,7.5);
glVertex3f(-45,25,7.5);
glVertex3f(-45,25,0);
glVertex3f(-45,30,0);
glEnd();

//tembok depan tower kiri
glBegin(GL_QUADS);
glColor3f(0.9,0.8,0.6);
glVertex3f(-50,30,7.5);
glVertex3f(-50,25,7.5);
glVertex3f(-45,25,7.5);
glVertex3f(-45,30,7.5);
glEnd();

//tembok blkg tower kiri
glBegin(GL_QUADS);
glColor3f(0.9,0.8,0.6);
glVertex3f(-50,30,0);
glVertex3f(-50,25,0);
glVertex3f(-45,25,0);
glVertex3f(-45,30,0);
glEnd();

//tembok atap tower kiri
glBegin(GL_QUADS);
glColor3f(0.9,0.8,0.6);
glVertex3f(-50,30,7.5);
glVertex3f(-50,30,0);
glVertex3f(-45,30,0);
glVertex3f(-45,30,7.5);
glEnd();

//TOWER MID

//tembok kiri tower kiri
glBegin(GL_QUADS);
glColor3f(0.9,0.8,0.6);
glVertex3f(-35,30,7.5);
glVertex3f(-35,25,7.5);
glVertex3f(-35,25,0);
glVertex3f(-35,30,0);
glEnd();

//tembok kanan tower kiri
glBegin(GL_QUADS);
glColor3f(0.9,0.8,0.6);
glVertex3f(-25,30,7.5);
glVertex3f(-25,25,7.5);
glVertex3f(-25,25,0);
glVertex3f(-25,30,0);
glEnd();

//tembok depan tower kiri
glBegin(GL_QUADS);
glColor3f(0.9,0.8,0.6);
glVertex3f(-35,30,7.5);
glVertex3f(-35,25,7.5);
glVertex3f(-25,25,7.5);
glVertex3f(-25,30,7.5);
glEnd();

//tembok blkg tower kiri
glBegin(GL_QUADS);
glColor3f(0.9,0.8,0.6);
glVertex3f(-35,30,0);
glVertex3f(-35,25,0);
glVertex3f(-25,25,0);
glVertex3f(-25,30,0);
glEnd();

//tembok atap tower kiri
glBegin(GL_QUADS);
glColor3f(0.9,0.8,0.6);
glVertex3f(-35,30,7.5);
glVertex3f(-35,30,0);
glVertex3f(-25,30,0);
glVertex3f(-25,30,7.5);
glEnd();

//TOWER KANAN

//tembok kiri tower kiri
glBegin(GL_QUADS);
glColor3f(0.9,0.8,0.6);
glVertex3f(-5,30,7.5);
glVertex3f(-5,25,7.5);
glVertex3f(-5,25,0);
glVertex3f(-5,30,0);
glEnd();

//tembok kanan tower kiri
glBegin(GL_QUADS);
glColor3f(0.9,0.8,0.6);
glVertex3f(-0,30,7.5);
glVertex3f(-0,25,7.5);
glVertex3f(-0,25,0);
glVertex3f(-0,30,0);
glEnd();

//tembok depan tower kiri
glBegin(GL_QUADS);
glColor3f(0.9,0.8,0.6);
glVertex3f(-5,30,7.5);
glVertex3f(-5,25,7.5);
glVertex3f(-0,25,7.5);
glVertex3f(-0,30,7.5);
glEnd();

//tembok blkg tower kiri
glBegin(GL_QUADS);
glColor3f(0.9,0.8,0.6);
glVertex3f(-5,30,0);
glVertex3f(-5,25,0);
glVertex3f(-0,25,0);
glVertex3f(-0,30,0);
glEnd();

//tembok atap tower kiri
glBegin(GL_QUADS);
glColor3f(0.9,0.8,0.6);
glVertex3f(-5,30,7.5);
glVertex3f(-5,30,0);
glVertex3f(-0,30,0);
glVertex3f(-0,30,7.5);
glEnd();

//BANGUNAN KIRI
//tembok belakang
glBegin(GL_QUADS);
glColor3f(0.9,0.8,0.6);
glVertex3f(-60,15,0);
glVertex3f(-60,0,0);
glVertex3f(-100,0,0);
glVertex3f(-100,15,0);
glEnd();

//tembok depan kiri
glBegin(GL_QUADS);
glColor3f(0.9,0.8,0.6);
glVertex3f(-70,15,15);
glVertex3f(-70,0,15);
glVertex3f(-100,0,15);
glVertex3f(-100,15,15);
glEnd();

//jendela tembok depan kiri
glBegin(GL_QUADS);
glColor3f(0,0,0);
glVertex3f(-96,14,15.1);
glVertex3f(-96,11,15.1);
glVertex3f(-100,11,15.1);
glVertex3f(-100,14,15.1);
glEnd();

glBegin(GL_QUADS);
glColor3f(0,0,0);
glVertex3f(-91,14,15.1);
glVertex3f(-91,11,15.1);
glVertex3f(-95,11,15.1);
glVertex3f(-95,14,15.1);
glEnd();

glBegin(GL_QUADS);
glColor3f(0,0,0);
glVertex3f(-86,14,15.1);
glVertex3f(-86,11,15.1);
glVertex3f(-90,11,15.1);
glVertex3f(-90,14,15.1);
glEnd();

glBegin(GL_QUADS);
glColor3f(0,0,0);
glVertex3f(-81,14,15.1);
glVertex3f(-81,11,15.1);
glVertex3f(-85,11,15.1);
glVertex3f(-85,14,15.1);
glEnd();

glBegin(GL_QUADS);
glColor3f(0,0,0);
glVertex3f(-76,14,15.1);
glVertex3f(-76,11,15.1);
glVertex3f(-80,11,15.1);
glVertex3f(-80,14,15.1);
glEnd();

glBegin(GL_QUADS);
glColor3f(0,0,0);
glVertex3f(-71,14,15.1);
glVertex3f(-71,11,15.1);
glVertex3f(-75,11,15.1);
glVertex3f(-75,14,15.1);
glEnd();

//jendela tembok depan kiri bawah
glBegin(GL_QUADS);
glColor3f(0,0,0);
glVertex3f(-91,10,15.1);
glVertex3f(-91,5,15.1);
glVertex3f(-100,5,15.1);
glVertex3f(-100,10,15.1);
glEnd();

glBegin(GL_QUADS);
glColor3f(0,0,0);
glVertex3f(-81,10,15.1);
glVertex3f(-81,5,15.1);
glVertex3f(-90,5,15.1);
glVertex3f(-90,10,15.1);
glEnd();

glBegin(GL_QUADS);
glColor3f(0,0,0);
glVertex3f(-71,10,15.1);
glVertex3f(-71,5,15.1);
glVertex3f(-80,5,15.1);
glVertex3f(-80,10,15.1);
glEnd();

//tembok depan kanan
glBegin(GL_QUADS);
glColor3f(0.9,0.8,0.6);
glVertex3f(-60,7.5,15);
glVertex3f(-60,0,15);
glVertex3f(-70,0,15);
glVertex3f(-70,7.5,15);
glEnd();

//jendela tembok kanan dekat moncong
glBegin(GL_QUADS);
glColor3f(0,0,0);
glVertex3f(-43,13,15.1);
glVertex3f(-43,5,15.1);
glVertex3f(-45,5,15.1);
glVertex3f(-45,13,15.1);
glEnd();

glBegin(GL_QUADS);
glColor3f(0,0,0);
glVertex3f(-47,13,15.1);
glVertex3f(-47,5,15.1);
glVertex3f(-49,5,15.1);
glVertex3f(-49,13,15.1);
glEnd();

glBegin(GL_QUADS);
glColor3f(0,0,0);
glVertex3f(-51,13,15.1);
glVertex3f(-51,5,15.1);
glVertex3f(-53,5,15.1);
glVertex3f(-53,13,15.1);
glEnd();

//tembok kiri
glBegin(GL_QUADS);
glColor3f(0.9,0.8,0.6);
glVertex3f(-100,15,15);
glVertex3f(-100,0,15);
glVertex3f(-100,0,0);
glVertex3f(-100,15,0);
glEnd();

//alas lantai
glBegin(GL_QUADS);
glColor3f(1,1,1);
glVertex3f(-100,0,15);
glVertex3f(-100,0,0);
glVertex3f(-60,0,0);
glVertex3f(-60,0,15);
glEnd();

//atap lantai 1 kiri
glBegin(GL_QUADS);
glColor3f(0.9,0.8,0.6);
glVertex3f(-100,15,15);
glVertex3f(-100,15,0);
glVertex3f(-70,15,0);
glVertex3f(-70,15,15);
glEnd();

//tembok kiri
glBegin(GL_QUADS);
glColor3f(0.9,0.8,0.6);
glVertex3f(-70,15,15);
glVertex3f(-70,7.5,15);
glVertex3f(-70,7.5,0);
glVertex3f(-70,15,0);
glEnd();

//atap lantai 1 depan
glBegin(GL_QUADS);
glColor3f(0.9,0.8,0.6);
glVertex3f(-70,7.5,15);
glVertex3f(-70,7.5,7.5);
glVertex3f(-60,7.5,7.5);
glVertex3f(-60,7.5,15);
glEnd();

//tembok depan kanan lantai 1
glBegin(GL_QUADS);
glColor3f(0.9,0.8,0.6);
glVertex3f(-60,15,7.5);
glVertex3f(-60,7.5,7.5);
glVertex3f(-70,7.5,7.5);
glVertex3f(-70,15,7.5);
glEnd();

//atap lantai 1 belakang
glBegin(GL_QUADS);
glColor3f(0.9,0.8,0.6);
glVertex3f(-70,15,7.5);
glVertex3f(-70,15,0);
glVertex3f(-60,15,0);
glVertex3f(-60,15,7.5);
glEnd();

//Moncong kanan tembok kiri
glBegin(GL_QUADS);
glColor3f(0.9,0.8,0.6);
glVertex3f(-70,20,15);
glVertex3f(-70,15,15);
glVertex3f(-70,15,7.5);
glVertex3f(-70,20,7.5);
glEnd();

//moncong kanan tembok depan
glBegin(GL_QUADS);
glColor3f(0.9,0.8,0.6);
glVertex3f(-70,20,15);
glVertex3f(-70,15,15);
glVertex3f(-75,15,15);
glVertex3f(-75,20,15);
glEnd();

//Moncong kanan tembok kiri
glBegin(GL_QUADS);
glColor3f(0.9,0.8,0.6);
glVertex3f(-75,20,15);
glVertex3f(-75,15,15);
glVertex3f(-75,15,7.5);
glVertex3f(-75,20,7.5);
glEnd();

//moncong kanan tembok blkg
glBegin(GL_QUADS);
glColor3f(0.9,0.8,0.6);
glVertex3f(-70,20,7.5);
glVertex3f(-70,15,7.5);
glVertex3f(-75,15,7.5);
glVertex3f(-75,20,7.5);
glEnd();

//atap moncong kanan
glBegin(GL_QUADS);
glColor3f(0.9,0.8,0.6);
glVertex3f(-70,20,15);
glVertex3f(-70,20,7.5);
glVertex3f(-75,20,7.5);
glVertex3f(-75,20,15);
glEnd();

//batas
//Moncong kanan tembok kiri
glBegin(GL_QUADS);
glColor3f(0.9,0.8,0.6);
glVertex3f(-90,20,15);
glVertex3f(-90,15,15);
glVertex3f(-90,15,7.5);
glVertex3f(-90,20,7.5);
glEnd();

//moncong kanan tembok depan
glBegin(GL_QUADS);
glColor3f(0.9,0.8,0.6);
glVertex3f(-90,20,15);
glVertex3f(-90,15,15);
glVertex3f(-95,15,15);
glVertex3f(-95,20,15);
glEnd();

//Moncong kanan tembok kiri
glBegin(GL_QUADS);
glColor3f(0.9,0.8,0.6);
glVertex3f(-95,20,15);
glVertex3f(-95,15,15);
glVertex3f(-95,15,7.5);
glVertex3f(-95,20,7.5);
glEnd();

//moncong kanan tembok blkg
glBegin(GL_QUADS);
glColor3f(0.9,0.8,0.6);
glVertex3f(-90,20,7.5);
glVertex3f(-90,15,7.5);
glVertex3f(-95,15,7.5);
glVertex3f(-95,20,7.5);
glEnd();

//atap moncong kanan
glBegin(GL_QUADS);
glColor3f(0.9,0.8,0.6);
glVertex3f(-90,20,15);
glVertex3f(-90,20,7.5);
glVertex3f(-95,20,7.5);
glVertex3f(-95,20,15);
glEnd();

//jalan
glBegin(GL_QUADS);
glColor3f(0.6,0.6,0.6);
glVertex3f(40,-0.01,100);
glVertex3f(40,-0.01,0);
glVertex3f(-100,-0.1,0);
glVertex3f(-100,-0.01,100);
glEnd();

//Kursi
glBegin(GL_QUADS);
glColor3f(1,0,0);
glVertex3f(10,4,10);
glVertex3f(10,4,6);
glVertex3f(14,4,6);
glVertex3f(14,4,10);
glEnd();

glBegin(GL_QUADS);
glColor3f(1,0,0);
glVertex3f(10,0,7);
glVertex3f(10,0,6);
glVertex3f(10,4,6);
glVertex3f(10,4,7);
glEnd();

glBegin(GL_QUADS);
glColor3f(1,0,0);
glVertex3f(10,0,10);
glVertex3f(10,0,9);
glVertex3f(10,4,9);
glVertex3f(10,4,10);
glEnd();

glBegin(GL_QUADS);
glColor3f(1,0,0);
glVertex3f(14,0,7);
glVertex3f(14,0,6);
glVertex3f(14,4,6);
glVertex3f(14,4,7);
glEnd();

glBegin(GL_QUADS);
glColor3f(1,0,0);
glVertex3f(14,0,10);
glVertex3f(14,0,9);
glVertex3f(14,4,9);
glVertex3f(14,4,10);
glEnd();

glBegin(GL_QUADS);
glColor3f(1,0,0);
glVertex3f(10,8,6);
glVertex3f(10,4,6);
glVertex3f(14,4,6);
glVertex3f(14,8,6);
glEnd();

//Meja
glBegin(GL_QUADS);
glColor3f(0,0,1);
glVertex3f(-10,4,10);
glVertex3f(-10,4,6);
glVertex3f(-20,4,6);
glVertex3f(-20,4,10);
glEnd();

glBegin(GL_QUADS);
glColor3f(0,0,1);
glVertex3f(-10,0,7);
glVertex3f(-10,0,6);
glVertex3f(-10,4,6);
glVertex3f(-10,4,7);
glEnd();

glBegin(GL_QUADS);
glColor3f(0,0,1);
glVertex3f(-10,0,10);
glVertex3f(-10,0,9);
glVertex3f(-10,4,9);
glVertex3f(-10,4,10);
glEnd();

glBegin(GL_QUADS);
glColor3f(0,0,1);
glVertex3f(-20,0,7);
glVertex3f(-20,0,6);
glVertex3f(-20,4,6);
glVertex3f(-20,4,7);
glEnd();

glBegin(GL_QUADS);
glColor3f(0,0,1);
glVertex3f(-20,0,10);
glVertex3f(-20,0,9);
glVertex3f(-20,4,9);
glVertex3f(-20,4,10);
glEnd();

//Lemari
glBegin(GL_QUADS);
glColor3f(1,1,0);
glVertex3f(-30,0,10);
glVertex3f(-30,0,6);
glVertex3f(-40,0,6);
glVertex3f(-40,0,10);
glEnd();

glBegin(GL_QUADS);
glColor3f(1,1,0);
glVertex3f(-30,0,6);
glVertex3f(-30,10,6);
glVertex3f(-40,10,6);
glVertex3f(-40,0,6);
glEnd();

glBegin(GL_QUADS);
glColor3f(1,1,0);
glVertex3f(-30,0,10);
glVertex3f(-30,10,10);
glVertex3f(-40,10,10);
glVertex3f(-40,0,10);
glEnd();

glBegin(GL_QUADS);
glColor3f(1,1,0);
glVertex3f(-30,10,10);
glVertex3f(-30,10,6);
glVertex3f(-40,10,6);
glVertex3f(-40,10,10);
glEnd();

glBegin(GL_QUADS);
glColor3f(1,1,0);
glVertex3f(-30,10,10);
glVertex3f(-30,10,6);
glVertex3f(-30,0,6);
glVertex3f(-30,0,10);
glEnd();

glBegin(GL_QUADS);
glColor3f(1,1,0);
glVertex3f(-40,10,10);
glVertex3f(-40,10,6);
glVertex3f(-40,0,6);
glVertex3f(-40,0,10);
glEnd();

//Kasur
glBegin(GL_QUADS);
glColor3f(1,0,1);
glVertex3f(-50,0,10);
glVertex3f(-50,0,2);
glVertex3f(-60,0,2);
glVertex3f(-60,0,10);
glEnd();

glBegin(GL_QUADS);
glColor3f(1,0,1);
glVertex3f(-50,0,2);
glVertex3f(-50,5,2);
glVertex3f(-60,5,2);
glVertex3f(-60,0,2);
glEnd();

glBegin(GL_QUADS);
glColor3f(1,0,1);
glVertex3f(-50,0,10);
glVertex3f(-50,5,10);
glVertex3f(-60,5,10);
glVertex3f(-60,0,10);
glEnd();

glBegin(GL_QUADS);
glColor3f(1,0,1);
glVertex3f(-50,5,10);
glVertex3f(-50,5,2);
glVertex3f(-60,5,2);
glVertex3f(-60,5,10);
glEnd();

glBegin(GL_QUADS);
glColor3f(1,0,1);
glVertex3f(-50,5,10);
glVertex3f(-50,5,2);
glVertex3f(-50,0,2);
glVertex3f(-50,0,10);
glEnd();

glBegin(GL_QUADS);
glColor3f(1,0,1);
glVertex3f(-60,5,10);
glVertex3f(-60,5,2);
glVertex3f(-60,0,2);
glVertex3f(-60,0,10);
glEnd();

//bantal
glBegin(GL_QUADS);
glColor3f(0,1,0);
glVertex3f(-57,5,6);
glVertex3f(-57,5,4);
glVertex3f(-59,5,4);
glVertex3f(-59,5,6);
glEnd();

glBegin(GL_QUADS);
glColor3f(0,1,0);
glVertex3f(-57,5,4);
glVertex3f(-57,7,4);
glVertex3f(-59,7,4);
glVertex3f(-59,5,4);
glEnd();

glBegin(GL_QUADS);
glColor3f(0,1,0);
glVertex3f(-57,5,6);
glVertex3f(-57,7,6);
glVertex3f(-59,7,6);
glVertex3f(-59,5,6);
glEnd();

glBegin(GL_QUADS);
glColor3f(0,1,0);
glVertex3f(-57,7,6);
glVertex3f(-57,7,4);
glVertex3f(-59,7,4);
glVertex3f(-59,7,6);
glEnd();

glBegin(GL_QUADS);
glColor3f(0,1,0);
glVertex3f(-57,7,6);
glVertex3f(-57,7,4);
glVertex3f(-57,5,4);
glVertex3f(-57,5,6);
glEnd();

glBegin(GL_QUADS);
glColor3f(0,1,0);
glVertex3f(-57,7,6);
glVertex3f(-57,7,4);
glVertex3f(-59,5,4);
glVertex3f(-59,5,6);
glEnd();

//Kulkas
glBegin(GL_QUADS);
glColor3f(1,1,0);
glVertex3f(-75,0,10);
glVertex3f(-75,0,6);
glVertex3f(-80,0,6);
glVertex3f(-80,0,10);
glEnd();

glBegin(GL_QUADS);
glColor3f(1,1,0);
glVertex3f(-75,0,6);
glVertex3f(-75,7,6);
glVertex3f(-80,7,6);
glVertex3f(-80,0,6);
glEnd();

glBegin(GL_QUADS);
glColor3f(1,1,0);
glVertex3f(-75,0,10);
glVertex3f(-75,7,10);
glVertex3f(-80,7,10);
glVertex3f(-80,0,10);
glEnd();

glBegin(GL_QUADS);
glColor3f(1,1,0);
glVertex3f(-75,7,10);
glVertex3f(-75,7,6);
glVertex3f(-80,7,6);
glVertex3f(-80,7,10);
glEnd();

glBegin(GL_QUADS);
glColor3f(1,1,0);
glVertex3f(-75,7,10);
glVertex3f(-75,7,6);
glVertex3f(-80,0,6);
glVertex3f(-80,0,10);
glEnd();

glBegin(GL_QUADS);
glColor3f(1,1,0);
glVertex3f(-80,7,10);
glVertex3f(-80,7,6);
glVertex3f(-80,0,6);
glVertex3f(-80,0,10);
glEnd();

//batas
glBegin(GL_QUADS);
glColor3f(0,0,1);
glVertex3f(-75,7,10);
glVertex3f(-75,7,6);
glVertex3f(-80,7,6);
glVertex3f(-80,7,10);
glEnd();

glBegin(GL_QUADS);
glColor3f(0,0,1);
glVertex3f(-75,7,6);
glVertex3f(-75,10,6);
glVertex3f(-80,7,6);
glVertex3f(-80,10,6);
glEnd();

glBegin(GL_QUADS);
glColor3f(0,0,1);
glVertex3f(-75,7,10);
glVertex3f(-75,10,10);
glVertex3f(-80,10,10);
glVertex3f(-80,7,10);
glEnd();

glBegin(GL_QUADS);
glColor3f(0,0,1);
glVertex3f(-75,10,10);
glVertex3f(-75,10,6);
glVertex3f(-80,10,6);
glVertex3f(-80,10,10);
glEnd();

glBegin(GL_QUADS);
glColor3f(0,0,1);
glVertex3f(-75,10,10);
glVertex3f(-75,10,6);
glVertex3f(-80,7,6);
glVertex3f(-80,7,10);
glEnd();

glBegin(GL_QUADS);
glColor3f(0,0,1);
glVertex3f(-80,10,10);
glVertex3f(-80,10,6);
glVertex3f(-80,7,6);
glVertex3f(-80,7,10);
glEnd();

//laut
glBegin(GL_QUADS);
glColor3f(0.4,0.5,0.7);
glVertex3f(40,-0.01,-50);
glVertex3f(40,-0.01,0);
glVertex3f(-100,-0.1,0);
glVertex3f(-100,-0.01,-50);
glEnd();

//WireCone
glTranslatef(0.0, 0.0, 40.0);
glColor3f(0.0, 0.6, 1.0);
glRotatef(-90, 1.0, 0.0, 0.0);
glutWireCone(12, 20, 20, 20);

glBegin(GL_QUADS);
glColor3f(0.4,0,0);
glVertex3f(0,-0,0);
glVertex3f(0,-0,0);
glVertex3f(0,-0,0);
glVertex3f(0,-0,0);
glEnd();
glPopMatrix();

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
case 'w':
case 'W':
     gerakz=gerakz+4;
    break;
case 'd':
case 'D':
     gerakx=gerakx+4;
    break;
case 's':
case 'S':
     gerakz=gerakz-4;
    break;
case 'a':
case 'A':
    gerakx=gerakx-4;
    break;
case '7':
     geraky=geraky+4;
    break;
case '9':
    geraky=geraky-4;
    break;
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
    gluPerspective(90,lebar/tinggi,5,500);
    glTranslatef(0,0,-150);
    glMatrixMode(GL_MODELVIEW);
}

int main(int argc, char **argv)
{
    glutInit(&argc , argv);
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB);
    glutInitWindowSize(900, 900);
    glutInitWindowPosition(250, 80);
    glutCreateWindow("JUMEIRAH AL QASR");
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
