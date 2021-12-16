workspace "Brick Game Engine"
 architecture "x64"
 startproject "SandBox"
 configurations
 {
  "Debug",
  "Release"
 }

 outputdir = "%{cfg.buildcfg}-%{cfg.system}-%{cfg.architecture}"

 project "Brick Game Engine"
 location "Brick Game Engine"
 kind "SharedLib"
 language "C++"
 

 targetdir ("bin/" .. outputdir .. "/%{prj.name}")
 objdir ("bin-int/" .. outputdir .. "/%{prj.name}")

 files
 {
  "%{prj.name}/src/**.h",
  "%{prj.name}/src/**.cpp"
 }

 includedirs
 {
  "%{prj.name}/vendor/spdlog/include"
 }

 filter "system:windows"
  cppdialect "C++17"
  staticruntime "On"
  systemversion "latest"

  defines
  {
   "BRICK_PLATFORM_WINDOWS",
   "BRICK_BUILD_DLL"
  }

 

 filter "configurations:Debug"
  defines "DEBUG"
  symbols "On"

 filter "configurations:Release"
  defines "RELEASE"
  optimize "On"

 

project "SandBox"
 location "SandBox"
 kind "ConsoleApp"
 language "C++"
 

 targetdir ("bin/" .. outputdir .. "/%{prj.name}")
 objdir ("bin-int/" .. outputdir .. "/%{prj.name}")

 files
 {
  "%{prj.name}/src/**.h",
  "%{prj.name}/src/**.cpp"
 }

 includedirs
 {
  "Brick Game Engine/vendor/spdlog/include",
  "Brick Game Engine/src"
 }

 links{"Brick Game Engine"}

 filter "system:windows"
  cppdialect "C++17"
  staticruntime "On"
  systemversion "latest"

  defines
  {
   "BRICK_PLATFORM_WINDOWS"
  }

 filter "configurations:Debug"
  defines "DEBUG"
  symbols "On"

 filter "configurations:Release"
  defines "RELEASE"
  optimize "On"

 