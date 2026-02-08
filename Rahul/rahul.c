#include <GL/glut.h>

/* Display function */
void display()
{
    glClear(GL_COLOR_BUFFER_BIT);   // Clear screen

    glColor3f(0.0, 1.0, 0.0);       // Green color

    glBegin(GL_QUADS);              // Draw a square using 4 vertices
    glVertex2f(-0.5, -0.5);     // Bottom-left
    glVertex2f( 0.5, -0.5);     // Bottom-right
    glVertex2f( 0.5,  0.5);     // Top-right
    glVertex2f(-0.5,  0.5);     // Top-left
    glEnd();

    glFlush();                      // Render now
}

int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(500, 500);
    glutInitWindowPosition(100, 100);
    glutCreateWindow("OpenGL Square");

    glClearColor(0.0, 0.0, 0.0, 1.0);  // Black background

    glutDisplayFunc(display);
    glutMainLoop();

    return 0;
}
