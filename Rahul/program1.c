#include <GL/glut.h>

void init() {
    // Set the background clear color to white (R, G, B, Alpha)
    glClearColor(1.0, 1.0, 1.0, 0.0);
    // Set up an orthographic projection to use pixel coordinates
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    // Define the coordinate system: x from 0 to 200, y from 0 to 150
    gluOrtho2D(100, 800.0, 500.0, 0.0);
}

void lineSegment() {
    glClear(GL_COLOR_BUFFER_BIT);            // Clear the color buffer
    glColor3f(0.0f, 1.0f, 0.0f);   // Set the drawing color to red
    glLineWidth(5.0);

    // Specify the vertices for the line segment
    glBegin(GL_LINES);
    glVertex2i(100, 200);                      // Start point (x, y)
    glVertex2i(200, 50);                      // End point (x, y)
    glVertex2i(200, 50);                      // Start point (x, y)
    glVertex2i(300, 200);
    glVertex2i(300, 200);                      // Start point (x, y)
    glVertex2i(100, 200);
    glEnd();

    glFlush();                                     // Ensures the drawing commands are executed
}

int main(int argc, char* argv[]) {
    glutInit(&argc, argv);                              // Initialize GLUT
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);        // Request a single-buffered window with RGB color
    glutInitWindowSize(800, 500);            // Set the window's initial width & height
    glutCreateWindow("Rahul Kumar Sha");            // Create a window with the given title
    init();                          // line 3          // Run the initialization function
    glutDisplayFunc(lineSegment);    // line 13         // Register the display callback handler
    glutMainLoop();                                     // Enter the event-processing loop
    return 0;
}