#include <iostream>
#include "RayTracer.h"
#include "Scene.h"
#include "Camera.h"

int main() {
    std::cout << "Monte Carlo Ray Tracer" << std::endl;

    RayTracer rayTracer;
    Scene scene;
    Camera camera;

    // 初始化和运行光线追踪器的代码
    rayTracer.render();
    scene.addObject();
    camera.setPosition();

    return 0;
}