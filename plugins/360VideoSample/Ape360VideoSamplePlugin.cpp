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
	if (auto universeSkyBoxMaterial = std::static_pointer_cast<Ape::IFileMaterial>(mpScene->createEntity("skyBox", Ape::Entity::MATERIAL_FILE).lock()))
	{
		universeSkyBoxMaterial->setFileName("skyBox.material");
		universeSkyBoxMaterial->setAsSkyBox();
	}
	if (auto browserNode = mpScene->createNode("browserNode").lock())
	{
		browserNode->setPosition(Ape::Vector3(0, 0, 0));
		if (auto browserGeometry = std::static_pointer_cast<Ape::IFileGeometry>(mpScene->createEntity("sphere.mesh", Ape::Entity::GEOMETRY_FILE).lock()))
		{
			browserGeometry->setFileName("sphere.mesh");
			browserGeometry->setParentNode(browserNode);
			if (auto browser = std::static_pointer_cast<Ape::IBrowser>(mpScene->createEntity("browser", Ape::Entity::BROWSER).lock()))
			{
				browser->setResoultion(2048, 1024);
				browser->setURL("https://www.youtube.com/embed/5XbkhboIDSI?vq=hd1080&autoplay=1&loop=1&playlist=5XbkhboIDSI");
				browser->setGeometry(browserGeometry);
			}
		}
	}
	if (auto browserNode = mpScene->createNode("browserNode_2").lock())
	{
		browserNode->setPosition(Ape::Vector3(-600, 0, 0));
		if (auto browserGeometry = std::static_pointer_cast<Ape::IFileGeometry>(mpScene->createEntity("sphere_2.mesh", Ape::Entity::GEOMETRY_FILE).lock()))
		{
			browserGeometry->setFileName("sphere_2.mesh");
			browserGeometry->setParentNode(browserNode);
			if (auto browser = std::static_pointer_cast<Ape::IBrowser>(mpScene->createEntity("browser_2", Ape::Entity::BROWSER).lock()))
			{
				browser->setResoultion(2048, 1024);
				browser->setURL("https://www.youtube.com/embed/3XPzLokzbb0?vq=hd1080&autoplay=1&loop=1&playlist=3XPzLokzbb0");
				browser->setGeometry(browserGeometry);
			}
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
