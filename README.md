# unreal_learn_udemy
learn unreal engine with course

# course link
[course](https://www.udemy.com/course/unreal-engine-the-ultimate-game-developer-course/learn/lecture/14173595#overview)

### 0209 17:18
camera move, object move, rotation, scale

### 0211 23:36
tools, f key = focus, alt drag = oribit rotate

### 0211 23:53
level blue print, show fps

### 0215 11:52
mobility - 빛이나 그림자를 안움직이면 static하게 생성

bluprint class

- function : move around or change

- events

### 0216 12:58

Unreal Engine Hierarchy

- Object : store data, cannot be placed in the level

- Actor : can be placed in the level, can have a visual representation

- Pawn : can be passessed by a controller

- Character : have a character movemetn component, have functionality appropritae for a character

Is a Relationships : Parent, Child, Grandchild

Has a Relationships : Package > Level > Actor > Actor Components

### 0216 15:24

Reflection : ability of a program to examine itself at runtime

garbage collection : SPECIAL_MACRO() code will be placed at compile time

UCLASS, UPROPERTY, UFUNCTION : *next time*

### 0216 16:55

c++ 코드 기반 Blueprint 만들기

### 0216 18:55

c++ 코드 기반 Object 을 Blueprint 로 가져와서 get,set var, call func 할 수 있게 만듬

### 0218 11:50

c++ creat a actor class in C++ and created a blueprint from that actor class.

static meshes can't be vertex animated, as they can be moved, scaled, or reskinned in realtime.

### 0222 19:51

change mesh color, position vector

### 0223 00:28

SetActorLocation, FVector

EditInstanceOnly : Blueprint 하나하나당 에서만 설정

EditDefaultsOnly : 전체 다 설정하는 Defaults 에서만 설정

VisibleInstanceOnly : 실제 생성된 Instance에서만 설정

### 0223 15:47

EditAnywhere : Default 에서 설정하면 실제 world 초깃값으로 설정, instance에서 수정 가능

### 0223 18:11

다른 물체랑 충돌

### 0223 20:09

true : collision 꺼져있어도 체크, false : collision 꺼져있으면 통과

AddActorLocalOffset(InitialDirection, true, &HitResult);

sweep : 움직임제 제한, 벽에 닿았을 시 바로 멈추게함

### 0225 11:03

Coding Standard Prefix

[link](https://docs.unrealengine.com/en-US/Programming/Development/CodingStandard/index.html)

Template classes are prefixed by T.

Classes that inherit from UObject are prefixed by U.

Classes that inherit from AActor are prefixed by A.

Classes that inherit from SWidget are prefixed by S.

Classes that are abstract interfaces are prefixed by I.

Enums are prefixed by E.

Boolean variables must be prefixed by b (for example, bPendingDestruction, or bHasFadedIn).

Most other classes are prefixed by F, though some subsystems use other letters.

Typedefs should be prefixed by whatever is appropriate for that type: F if it's a typedef of a struct, U if it's a typedef of a UObject and so on.

A typedef of a particular template instantiation is no longer a template, and should be prefixed accordingly, for example:

### 0205 11:15

Local vs World Offset, Rotation

pitch yaw roll
