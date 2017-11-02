#include <iostream>
#include "Ape360VideoSamplePlugin.h"

Ape360VideoSamplePlugin::Ape360VideoSamplePlugin()
{
	mpScene = Ape::IScene::getSingletonPtr();
}

Ape360VideoSamplePlugin::~Ape360VideoSamplePlugin()
{
	std::cout << "Ape360VideoSamplePlugin dtor" << std::endl;
}

void Ape360VideoSamplePlugin::Init()
{
	if (auto universeSkyBoxMaterial = std::static_pointer_cast<Ape::IFileMaterial>(mpScene->createEntity("universe", Ape::Entity::MATERIAL_FILE).lock()))
	{
		universeSkyBoxMaterial->setFileName("universe.material");
		universeSkyBoxMaterial->setAsSkyBox();
	}
	if (auto browserNode = mpScene->createNode("browserNode").lock())
	{
		//browserNode->setScale(Ape::Vector3(10, 10, 10));
		browserNode->setPosition(Ape::Vector3(-600, 0, 0));
		if (auto browserGeometry = std::static_pointer_cast<Ape::IFileGeometry>(mpScene->createEntity("sphere.mesh", Ape::Entity::GEOMETRY_FILE).lock()))
		{
			browserGeometry->setFileName("sphere.mesh");
			//browserGeometry->setFileName("thetaSphere.mesh");
			browserGeometry->setParentNode(browserNode);
			if (auto browser = std::static_pointer_cast<Ape::IBrowser>(mpScene->createEntity("browser", Ape::Entity::BROWSER).lock()))
			{
				browser->setResoultion(2048, 1024);
				browser->setURL("https://www.youtube.com/embed/ubBrznOxtQo?vq=hd1080&autoplay=1&loop=1&playlist=ubBrznOxtQo");
				browser->setGeometry(browserGeometry);
			}
		}
	}
	if (auto sphereNode = mpScene->createNode("sphere_imgNode").lock())
	{
		sphereNode->setPosition(Ape::Vector3(-1200, 0, 0));
		if (auto sphereMeshFile = std::static_pointer_cast<Ape::IFileGeometry>(mpScene->createEntity("sphere_img.mesh", Ape::Entity::GEOMETRY_FILE).lock()))
		{
			sphereMeshFile->setFileName("sphere_img.mesh");
			sphereMeshFile->setParentNode(sphereNode);
		}
	}
	if (auto sphereNode = mpScene->createNode("sphere_img_2Node").lock())
	{
		sphereNode->setPosition(Ape::Vector3(-600, -600, 0));
		if (auto sphereMeshFile = std::static_pointer_cast<Ape::IFileGeometry>(mpScene->createEntity("sphere_img_2.mesh", Ape::Entity::GEOMETRY_FILE).lock()))
		{
			sphereMeshFile->setFileName("sphere_img_2.mesh");
			sphereMeshFile->setParentNode(sphereNode);
		}
	}
	if (auto sphereNode = mpScene->createNode("sphere_img_3Node").lock())
	{
		sphereNode->setPosition(Ape::Vector3(-1200, -600, 0));
		if (auto sphereMeshFile = std::static_pointer_cast<Ape::IFileGeometry>(mpScene->createEntity("sphere_img_3.mesh", Ape::Entity::GEOMETRY_FILE).lock()))
		{
			sphereMeshFile->setFileName("sphere_img_3.mesh");
			sphereMeshFile->setParentNode(sphereNode);
		}
	}
	if (auto sphereNode = mpScene->createNode("sphere_img_4Node").lock())
	{
		sphereNode->setPosition(Ape::Vector3(-600, 0, -600));
		if (auto sphereMeshFile = std::static_pointer_cast<Ape::IFileGeometry>(mpScene->createEntity("sphere_img_4.mesh", Ape::Entity::GEOMETRY_FILE).lock()))
		{
			sphereMeshFile->setFileName("sphere_img_4.mesh");
			sphereMeshFile->setParentNode(sphereNode);
		}
	}
	if (auto sphereNode = mpScene->createNode("sphere_img_5Node").lock())
	{
		sphereNode->setPosition(Ape::Vector3(-1200, 0, -600));
		if (auto sphereMeshFile = std::static_pointer_cast<Ape::IFileGeometry>(mpScene->createEntity("sphere_img_5.mesh", Ape::Entity::GEOMETRY_FILE).lock()))
		{
			sphereMeshFile->setFileName("sphere_img_5.mesh");
			sphereMeshFile->setParentNode(sphereNode);
		}
	}
	if (auto sphereNode = mpScene->createNode("sphere_img_6Node").lock())
	{
		sphereNode->setPosition(Ape::Vector3(-600, 0, -600));
		if (auto sphereMeshFile = std::static_pointer_cast<Ape::IFileGeometry>(mpScene->createEntity("sphere_img_6.mesh", Ape::Entity::GEOMETRY_FILE).lock()))
		{
			sphereMeshFile->setFileName("sphere_img_6.mesh");
			sphereMeshFile->setParentNode(sphereNode);
		}
	}
	if (auto sphereNode = mpScene->createNode("sphere_img_7Node").lock())
	{
		sphereNode->setPosition(Ape::Vector3(-1200, -600, -600));
		if (auto sphereMeshFile = std::static_pointer_cast<Ape::IFileGeometry>(mpScene->createEntity("sphere_img_7.mesh", Ape::Entity::GEOMETRY_FILE).lock()))
		{
			sphereMeshFile->setFileName("sphere_img_7.mesh");
			sphereMeshFile->setParentNode(sphereNode);
		}
	}
	if (auto sphereNode = mpScene->createNode("sphere_img_8Node").lock())
	{
		sphereNode->setPosition(Ape::Vector3(-600, -600, -600));
		if (auto sphereMeshFile = std::static_pointer_cast<Ape::IFileGeometry>(mpScene->createEntity("sphere_img_8.mesh", Ape::Entity::GEOMETRY_FILE).lock()))
		{
			sphereMeshFile->setFileName("sphere_img_8.mesh");
			sphereMeshFile->setParentNode(sphereNode);
		}
	}
	std::cout << "Ape360VideoSamplePlugin::init" << std::endl;
}

void Ape360VideoSamplePlugin::Run()
{

}

void Ape360VideoSamplePlugin::Step()
{

}

void Ape360VideoSamplePlugin::Stop()
{

}

void Ape360VideoSamplePlugin::Suspend()
{

}

void Ape360VideoSamplePlugin::Restart()
{

}
