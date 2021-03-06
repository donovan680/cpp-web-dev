#ifndef CONTROLLER_CLASS_HEADER
#define CONTROLLER_CLASS_HEADER

#include <string>

class Controller {
   protected: 
      std::string page_content;
      std::string path;
      std::string title;

   public:
      Controller(std::string path);
      ~Controller();

      void set_title(std::string new_title);
      virtual void index();
      virtual void show404(std::string route);
      void render_view();
      void append_page_content(std::string append);
};

#endif

