find_package(imgui CONFIG REQUIRED QUEIT)

add_executable(ImageGame    GuiBase.cpp 
                            Gui.cpp 
                            ImageGame.cpp)
target_include_directories(ImageGame PRIVATE ${CMAKE_CURRENT_LIST_DIR})
target_link_libraries(ImageGame PRIVATE     ImageGameLib 
                                            imgui::imgui 
                                            GL)