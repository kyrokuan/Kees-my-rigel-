#pragma once

namespace OW
{
	namespace offset
	{
		static constexpr auto Address_viewmatrix_base = 0x372C110; //viewmatrix xor
		static constexpr auto Address_viewmatrix_base_test = 0x3DEB808; //viewmatrix
		static constexpr auto Address_entity_base = 0x3717600; //entityadmin
		static constexpr auto offset_viewmatrix_ptr = 0x7E0; //pointer
		static constexpr auto offset_viewmatrix_xor_key = 0x1603E7436E47D0CA; //vm key
		static constexpr auto HeapManager = 0x37E5260; //heapmanagervar
		static constexpr auto HeapManager_Var = 0x37CA0AE; //heapmanager
		static constexpr auto HeapManager_Key = 0x6E06BCEBE3CE3478; //same
		static constexpr auto HeapManager_Pointer = 0x160; // same
		static constexpr auto changefov = 0x388F7A8; //myFOV
		static constexpr auto GetKeyAdd = 0x1F6CC4B; //same
		static constexpr auto GetKeyAddRIP = 0x5;
		static constexpr auto GlowESP = 0x243B396; //
		static constexpr auto Silent = 0xF909A5; //
		static constexpr auto SensitivePtr = 0x2054;
		static constexpr auto VisFN = 0x7A6392; //same
		static constexpr auto VisRead = 0x389A700; //
		static constexpr auto Vis_Key = 0x5AE142A313A92858; //same
		static constexpr auto OutlineFN = 0x7AFA72; //same
		static constexpr auto OutlineRead = 0x389A700; //this is under decryptoutline function dwgamebase+, add offset::OutlineRead or leave alone
		static constexpr auto Outline_Key = 0x6847903E1BDE5A37; //same

	}
}