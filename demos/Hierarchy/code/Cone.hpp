
// Este c�digo es de dominio p�blico.
// angel.rodriguez@esne.edu
// 2014.05

#ifndef CONE_HEADER
#define CONE_HEADER

    #include <glad/glad.h>

    namespace example
    {

        class Cone
        {
        private:

            // �ndices para indexar el array vbo_ids:

            enum
            {
                COORDINATES_VBO,
                COLORS_VBO,
                INDICES_EBO,
                VBO_COUNT
            };

            // Arrays de datos del cubo base:

            static const GLfloat coordinates[];
            static const GLfloat colors     [];
            static const GLubyte indices    [];

        private:

            GLuint vbo_ids[VBO_COUNT];      // Ids de los VBOs que se usan
            GLuint vao_id;                  // Id del VAO del cubo

        public:

            Cone();
           ~Cone();

            void render ();

        };

    }

#endif
