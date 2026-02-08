#include <GL/glut.h>

// Function to draw graphics
void display()
{
    glClear(GL_COLOR_BUFFER_BIT);   // Clear screen

    glBegin(GL_TRIANGLES);          // Start drawing triangle
    glColor3f(1.0, 0.0, 0.0);    // Red
    glVertex2f(-0.5, -0.5);

    glColor3f(0.0, 1.0, 0.0);    // Green
    glVertex2f(0.5, -0.5);

    glColor3f(0.0, 0.0, 1.0);    // Blue
    glVertex2f(0.0, 0.5);
    glEnd();

    glFlush();                      // Render now
}

int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(500, 500);
    glutInitWindowPosition(100, 100);
    glutCreateWindow("OpenGL Triangle");

    glClearColor(0.0, 0.0, 0.0, 1.0);  // Background color (black)
    glutDisplayFunc(display);         // Register display function

    glutMainLoop();                   // Enter event loop
    return 0;
}
