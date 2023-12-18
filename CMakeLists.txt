cmake_minimum_required(VERSION 3.16)
project(qt1218 LANGUAGES CXX) # ��Ŀ����

include(qt.cmake)

set(CMAKE_INCLUDE_CURRENT_DIR ON) #��ǰinclude ��


set(CMAKE_AUTOUIC ON)  # uiת��֧�ִ�
set(CMAKE_AUTOMOC ON)  # mocת��֧�ִ�
set(CMAKE_AUTORCC ON)  # ��Դ�ļ�֧�� ��

set(CMAKE_CXX_STANDARD 11) # C++11
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(QT_MESSAGELOGCONTEXT TRUE) # Qt��Ϣ�򿪣�Ĭ�Ϲرա���Ҫ��QLog release/debug ��Ϣ��ӡ���
add_definitions(-DQT_MESSAGELOGCONTEXT) #����QtMessage �궨�壬Ĭ�Ϲر�

#ϵͳ��Ϣ��ӡ(��ɾ��)
message(STATUS  "cmake-version:" ${CMAKE_VERSION}) #CMake�汾��Ϣ
message(STATUS  "system_name:" ${CMAKE_HOST_SYSTEM_NAME}) #ϵͳ����
message(STATUS  "system_version:" ${CMAKE_HOST_SYSTEM_PROCESSOR}) #ϵͳ�汾
message(STATUS  "system_kernel:" ${CMAKE_HOST_SYSTEM_VERSION}) #ϵͳ�ں˰汾

# �����
find_package(QT NAMES Qt6 Qt5 COMPONENTS Widgets Core Gui REQUIRED)
find_package(Qt${QT_VERSION_MAJOR}
    COMPONENTS
        Core
        Gui
        Widgets
)
qt_standard_project_setup()

#Դ�ļ�����
aux_source_directory(${CMAKE_CURRENT_SOURCE_DIR} PROJECT_SOURCES)
aux_source_directory(${CMAKE_CURRENT_SOURCE_DIR}/gui GUI_SOURCES)
aux_source_directory(${CMAKE_CURRENT_SOURCE_DIR}/func FUNC_SOURCES)
aux_source_directory(${CMAKE_CURRENT_SOURCE_DIR}/inf INF_SOURCES)


# qt_add_executable(qt1218 ${PROJECT_SOURCES})

# set_target_properties(qt1218
#     PROPERTIES
#         WIN32_EXECUTABLE TRUE
# )

#��ִ���ļ�����
if(${QT_VERSION_MAJOR} GREATER_EQUAL 6)
    qt_add_executable(qt1218
            ${PROJECT_SOURCES} ${GUI_SOURCES} ${FUNC_SOURCES} ${INF_SOURCES}
    )
else()
    if(ANDROID)
        add_library(qt1218 SHARED
            ${PROJECT_SOURCES} ${GUI_SOURCES} ${FUNC_SOURCES} ${INF_SOURCES}
        )
    else()
        add_executable(qt1218
            ${PROJECT_SOURCES} ${GUI_SOURCES} ${FUNC_SOURCES} ${INF_SOURCES}
             "func/homepage.h")
    endif()
endif()

# ���ļ�����
target_link_libraries(qt1218 
    PRIVATE 
        Qt${QT_VERSION_MAJOR}::Widgets 
        Qt${QT_VERSION_MAJOR}::Gui 
        Qt${QT_VERSION_MAJOR}::Core
)
