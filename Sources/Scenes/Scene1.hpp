#pragma once

#include <Scenes/Scene.hpp>
#include <Uis/UiStartLogo.hpp>
#include "Uis/OverlayDebug.hpp"

using namespace acid;

namespace test
{
	class Scene1 :
		public Scene
	{
	public:
		Scene1();

		void Start() override;

		void Update() override;

		bool IsPaused() const override;
	private:
		std::unique_ptr<UiStartLogo> m_uiStartLogo;
		std::unique_ptr<OverlayDebug> m_overlayDebug;
	};
}
