#include <GL/glut.h>

float x = 0.0f, z = -5.0f;
float angle = 0.0f;

void drawColoredCube()
{
    glBegin(GL_QUADS);

    // Front face (Red)
    glColor3f(1.0, 0.0, 0.0);
    glVertex3f(-0.5, -0.5,  0.5);
    glVertex3f( 0.5, -0.5,  0.5);
    glVertex3f( 0.5,  0.5,  0.5);
    glVertex3f(-0.5,  0.5,  0.5);

    // Back face (Green)
    glColor3f(0.0, 1.0, 0.0);
    glVertex3f(-0.5, -0.5, -0.5);
    glVertex3f(-0.5,  0.5, -0.5);
    glVertex3f( 0.5,  0.5, -0.5);
    glVertex3f( 0.5, -0.5, -0.5);

    // Left face (Blue)
    glColor3f(0.0, 0.0, 1.0);
    glVertex3f(-0.5, -0.5, -0.5);
    glVertex3f(-0.5, -0.5,  0.5);
    glVertex3f(-0.5,  0.5,  0.5);
    glVertex3f(-0.5,  0.5, -0.5);

    // Right face (Yellow)
    glColor3f(1.0, 1.0, 0.0);
    glVertex3f(0.5, -0.5, -0.5);
    glVertex3f(0.5,  0.5, -0.5);
    glVertex3f(0.5,  0.5,  0.5);
    glVertex3f(0.5, -0.5,  0.5);

    // Top face (Cyan)
    glColor3f(0.0, 1.0, 1.0);
    glVertex3f(-0.5, 0.5, -0.5);
    glVertex3f(-0.5, 0.5,  0.5);
    glVertex3f( 0.5, 0.5,  0.5);
    glVertex3f( 0.5, 0.5, -0.5);

    // Bottom face (Magenta)
    glColor3f(1.0, 0.0, 1.0);
    glVertex3f(-0.5, -0.5, -0.5);
    glVertex3f( 0.5, -0.5, -0.5);
    glVertex3f( 0.5, -0.5,  0.5);
    glVertex3f(-0.5, -0.5,  0.5);

    glEnd();
}

void display()
{
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    glLoadIdentity();

    glTranslatef(x, 0.0f, z);
    glRotatef(angle, 0.0f, 1.0f, 0.0f);

    drawColoredCube();

    glutSwapBuffers();
}

void keyboard(unsigned char key, int a, int b)
{
    switch (key)
    {
        case 'w': z += 0.2f; break;
        case 's': z -= 0.2f; break;
        case 'a': x -= 0.2f; break;
        case 'd': x += 0.2f; break;
        case 'q': angle += 5.0f; break;
        case 'e': angle -= 5.0f; break;
        case 27: exit(0);
    }
    glutPostRedisplay();
}

void init()
{
    glEnable(GL_DEPTH_TEST);
    glMatrixMode(GL_PROJECTION);
    gluPerspective(60.0, 1.0, 1.0, 100.0);
    glMatrixMode(GL_MODELVIEW);
}

int main(int argc, char **argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB | GLUT_DEPTH);
    glutInitWindowSize(600, 600);
    glutCreateWindow("3D Moving Color Cube");

    init();
    glutDisplayFunc(display);
    glutKeyboardFunc(keyboard);
    glutMainLoop();

    return 0;
}
