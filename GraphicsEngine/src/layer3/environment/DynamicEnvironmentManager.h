/*
 * DynamicEnvironmentManager.h
 *
 *  Created on: 21.04.2013
 *      Author: nopper
 */

#ifndef DYNAMICENVIRONMENTMANAGER_H_
#define DYNAMICENVIRONMENTMANAGER_H_

#include "../../UsedLibs.h"

#include "../../layer0/algorithm/Manager.h"
#include "../../layer1/camera/PerspectiveCamera.h"
#include "../../layer2/entity/Entity.h"
#include "../../layer2/framebuffer/FrameBufferCubeMap.h"

#include "DynamicEnvironment.h"

class DynamicEnvironmentManager : public Manager<EntitySP, DynamicEnvironmentSP>
{

private:

	static DynamicEnvironmentManager* instance;

protected:

	DynamicEnvironmentManager();
	virtual ~DynamicEnvironmentManager();

public:

	static DynamicEnvironmentManager* getInstance();

	static void terminate();

	FrameBufferCubeMapSP createCubeMap(const EntitySP& entity, boost::int32_t length);

};

#endif /* DYNAMICENVIRONMENTMANAGER_H_ */