cmake_minimum_required(VERSION 3.16)
project(qt1218 LANGUAGES CXX) # 项目名称

include(qt.cmake)

set(CMAKE_INCLUDE_CURRENT_DIR ON) #当前include 打开


set(CMAKE_AUTOUIC ON)  # ui转换支持打开
set(CMAKE_AUTOMOC ON)  # moc转换支持打开
set(CMAKE_AUTORCC ON)  # 资源文件支持 打开

set(CMAKE_CXX_STANDARD 11) # C++11
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(QT_MESSAGELOGCONTEXT TRUE) # Qt消息打开，默认关闭。需要打开QLog release/debug 消息打印相关
add_definitions(-DQT_MESSAGELOGCONTEXT) #添加QtMessage 宏定义，默认关闭

#系统信息打印(可删除)
message(STATUS  "cmake-version:" ${CMAKE_VERSION}) #CMake版本信息
message(STATUS  "system_name:" ${CMAKE_HOST_SYSTEM_NAME}) #系统名称
message(STATUS  "system_version:" ${CMAKE_HOST_SYSTEM_PROCESSOR}) #系统版本
message(STATUS  "system_kernel:" ${CMAKE_HOST_SYSTEM_VERSION}) #系统内核版本

# 库查找
find_package(QT NAMES Qt6 Qt5 COMPONENTS Widgets Core Gui REQUIRED)
find_package(Qt${QT_VERSION_MAJOR}
    COMPONENTS
        Core
        Gui
        Widgets
)
qt_standard_project_setup()

#源文件包含
aux_source_directory(${CMAKE_CURRENT_SOURCE_DIR} PROJECT_SOURCES)
aux_source_directory(${CMAKE_CURRENT_SOURCE_DIR}/gui GUI_SOURCES)
aux_source_directory(${CMAKE_CURRENT_SOURCE_DIR}/func FUNC_SOURCES)
aux_source_directory(${CMAKE_CURRENT_SOURCE_DIR}/inf INF_SOURCES)


# qt_add_executable(qt1218 ${PROJECT_SOURCES})

# set_target_properties(qt1218
#     PROPERTIES
#         WIN32_EXECUTABLE TRUE
# )

#可执行文件生成
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

# 库文件链接
target_link_libraries(qt1218 
    PRIVATE 
        Qt${QT_VERSION_MAJOR}::Widgets 
        Qt${QT_VERSION_MAJOR}::Gui 
        Qt${QT_VERSION_MAJOR}::Core
)

