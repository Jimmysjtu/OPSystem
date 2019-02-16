#pragma once

#include <glm\gtc\type_ptr.hpp>
#include <memory>

#include "shader.h"
#include "scene.h"


constexpr short TOTAL_ARMS = 4;

struct Clutch {
	std::shared_ptr<Object> left = nullptr;
	std::shared_ptr<Object> right = nullptr;
};

class Robot {
private:
	std::shared_ptr<Object> root;
	std::shared_ptr<Object> arms[TOTAL_ARMS];
	std::shared_ptr<Object> rotateUnit[TOTAL_ARMS];
	Clutch clutchUnit[TOTAL_ARMS];

	std::shared_ptr<Object> wire;

	bool active[TOTAL_ARMS] = { false };
	enum Operation {MOVE_ARM, ROTATE_CLUTCH, MOVE_CLUTCH, TOGGLE};
	bool sanityCheck(Operation op, int id, float value);
	
	bool wireClutched[TOTAL_ARMS] = { false };
	std::shared_ptr<Object> constructHierarchy(const std::shared_ptr<Object> & root);
	void init();
public:
	Shader objectShader, wireShader;
	Robot(const std::shared_ptr<Object> & root): objectShader("shaders/robot.vert", "shaders/robot.frag"), wireShader("shaders/robot.vert", "shaders/wire.frag") {
		this->root = this->constructHierarchy(root);
		this->init();
	}

	void moveArm(float displacement);
	void rotateClutch(float angle);
	void moveClutch(float displacement);
	void toggleArm(int id);
	void draw() const;
};

class Program {
private:
	void init();
public:
	std::shared_ptr<Robot> robot;
	Program() {
		this->init();
	}

	void registerControl(const std::function<void()> & fn);
	void run();
	void close();
};
