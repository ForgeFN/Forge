#pragma once

#include <Windows.h>
#include <dxgi.h>
#include <d3d11.h>
#include <d3d9.h>

#include <ImGui/imgui.h>
#include <ImGui/imgui_impl_dx9.h>

#include <string>
#include <imgui/imgui_impl_win32.h>
#include <imgui/imgui_stdlib.h>
#include <vector>
#include <format>
#include <imgui/imgui_internal.h>

#include "framework.h"

#include <fonts/segue_font.h>
#include <icons/ico_font.h>

#include "moderation.h"

#pragma comment(lib, "D3d9.lib")

// THE BASE CODE IS FROM IMGUI GITHUB

static LPDIRECT3D9              g_pD3D = NULL;
static LPDIRECT3DDEVICE9        g_pd3dDevice = NULL;
static D3DPRESENT_PARAMETERS    g_d3dpp = {};

// Forward declarations of helper functions
bool CreateDeviceD3D(HWND hWnd);
void CleanupDeviceD3D();
void ResetDevice();
LRESULT WINAPI WndProc(HWND hWnd, UINT msg, WPARAM wParam, LPARAM lParam);

void InitStyle()
{
	// ImGui::GetIO().Fonts->AddFontFromFileTTF("Reboot Resources/fonts/ruda-bold.ttf", 17);
	ImGui::GetStyle().FrameRounding = 4.0f;
	ImGui::GetStyle().GrabRounding = 4.0f;

	ImVec4* colors = ImGui::GetStyle().Colors;
	colors[ImGuiCol_Text] = ImVec4(0.95f, 0.96f, 0.98f, 1.00f);
	colors[ImGuiCol_TextDisabled] = ImVec4(0.36f, 0.42f, 0.47f, 1.00f);
	colors[ImGuiCol_WindowBg] = ImVec4(0.11f, 0.15f, 0.17f, 1.00f);
	colors[ImGuiCol_ChildBg] = ImVec4(0.15f, 0.18f, 0.22f, 1.00f);
	colors[ImGuiCol_PopupBg] = ImVec4(0.08f, 0.08f, 0.08f, 0.94f);
	colors[ImGuiCol_Border] = ImVec4(0.08f, 0.10f, 0.12f, 1.00f);
	colors[ImGuiCol_BorderShadow] = ImVec4(0.00f, 0.00f, 0.00f, 0.00f);
	colors[ImGuiCol_FrameBg] = ImVec4(0.20f, 0.25f, 0.29f, 1.00f);
	colors[ImGuiCol_FrameBgHovered] = ImVec4(0.12f, 0.20f, 0.28f, 1.00f);
	colors[ImGuiCol_FrameBgActive] = ImVec4(0.09f, 0.12f, 0.14f, 1.00f);
	colors[ImGuiCol_TitleBg] = ImVec4(0.09f, 0.12f, 0.14f, 0.65f);
	colors[ImGuiCol_TitleBgActive] = ImVec4(0.08f, 0.10f, 0.12f, 1.00f);
	colors[ImGuiCol_TitleBgCollapsed] = ImVec4(0.00f, 0.00f, 0.00f, 0.51f);
	colors[ImGuiCol_MenuBarBg] = ImVec4(0.15f, 0.18f, 0.22f, 1.00f);
	colors[ImGuiCol_ScrollbarBg] = ImVec4(0.02f, 0.02f, 0.02f, 0.39f);
	colors[ImGuiCol_ScrollbarGrab] = ImVec4(0.20f, 0.25f, 0.29f, 1.00f);
	colors[ImGuiCol_ScrollbarGrabHovered] = ImVec4(0.18f, 0.22f, 0.25f, 1.00f);
	colors[ImGuiCol_ScrollbarGrabActive] = ImVec4(0.09f, 0.21f, 0.31f, 1.00f);
	colors[ImGuiCol_CheckMark] = ImVec4(0.28f, 0.56f, 1.00f, 1.00f);
	colors[ImGuiCol_SliderGrab] = ImVec4(0.28f, 0.56f, 1.00f, 1.00f);
	colors[ImGuiCol_SliderGrabActive] = ImVec4(0.37f, 0.61f, 1.00f, 1.00f);
	colors[ImGuiCol_Button] = ImVec4(0.20f, 0.25f, 0.29f, 1.00f);
	colors[ImGuiCol_ButtonHovered] = ImVec4(0.28f, 0.56f, 1.00f, 1.00f);
	colors[ImGuiCol_ButtonActive] = ImVec4(0.06f, 0.53f, 0.98f, 1.00f);
	colors[ImGuiCol_Header] = ImVec4(0.20f, 0.25f, 0.29f, 0.55f);
	colors[ImGuiCol_HeaderHovered] = ImVec4(0.26f, 0.59f, 0.98f, 0.80f);
	colors[ImGuiCol_HeaderActive] = ImVec4(0.26f, 0.59f, 0.98f, 1.00f);
	colors[ImGuiCol_Separator] = ImVec4(0.20f, 0.25f, 0.29f, 1.00f);
	colors[ImGuiCol_SeparatorHovered] = ImVec4(0.10f, 0.40f, 0.75f, 0.78f);
	colors[ImGuiCol_SeparatorActive] = ImVec4(0.10f, 0.40f, 0.75f, 1.00f);
	colors[ImGuiCol_ResizeGrip] = ImVec4(0.26f, 0.59f, 0.98f, 0.25f);
	colors[ImGuiCol_ResizeGripHovered] = ImVec4(0.26f, 0.59f, 0.98f, 0.67f);
	colors[ImGuiCol_ResizeGripActive] = ImVec4(0.26f, 0.59f, 0.98f, 0.95f);
	colors[ImGuiCol_Tab] = ImVec4(0.11f, 0.15f, 0.17f, 1.00f);
	colors[ImGuiCol_TabHovered] = ImVec4(0.26f, 0.59f, 0.98f, 0.80f);
	colors[ImGuiCol_TabActive] = ImVec4(0.20f, 0.25f, 0.29f, 1.00f);
	colors[ImGuiCol_TabUnfocused] = ImVec4(0.11f, 0.15f, 0.17f, 1.00f);
	colors[ImGuiCol_TabUnfocusedActive] = ImVec4(0.11f, 0.15f, 0.17f, 1.00f);
	colors[ImGuiCol_PlotLines] = ImVec4(0.61f, 0.61f, 0.61f, 1.00f);
	colors[ImGuiCol_PlotLinesHovered] = ImVec4(1.00f, 0.43f, 0.35f, 1.00f);
	colors[ImGuiCol_PlotHistogram] = ImVec4(0.90f, 0.70f, 0.00f, 1.00f);
	colors[ImGuiCol_PlotHistogramHovered] = ImVec4(1.00f, 0.60f, 0.00f, 1.00f);
	colors[ImGuiCol_TextSelectedBg] = ImVec4(0.26f, 0.59f, 0.98f, 0.35f);
	colors[ImGuiCol_DragDropTarget] = ImVec4(1.00f, 1.00f, 0.00f, 0.90f);
	colors[ImGuiCol_NavHighlight] = ImVec4(0.26f, 0.59f, 0.98f, 1.00f);
	colors[ImGuiCol_NavWindowingHighlight] = ImVec4(1.00f, 1.00f, 1.00f, 0.70f);
	colors[ImGuiCol_NavWindowingDimBg] = ImVec4(0.80f, 0.80f, 0.80f, 0.20f);
	colors[ImGuiCol_ModalWindowDimBg] = ImVec4(0.80f, 0.80f, 0.80f, 0.35f);
}

class Playera
{
public:
	std::string Name;
	int Kills = 0;

	Playera(const std::string& _Name, int _Kills) : Name(_Name), Kills(_Kills) {}

	Playera() {}
};

void TextCentered(std::string text, bool bNewLine = true) {
	if (bNewLine)
		ImGui::NewLine();

	float win_width = ImGui::GetWindowSize().x;
	float text_width = ImGui::CalcTextSize(text.c_str()).x;

	// calculate the indentation that centers the text on one line, relative
	// to window left, regardless of the `ImGuiStyleVar_WindowPadding` value
	float text_indentation = (win_width - text_width) * 0.5f;

	// if text is too long to be drawn on one line, `text_indentation` can
	// become too small or even negative, so we check a minimum indentation
	float min_indentation = 20.0f;
	if (text_indentation <= min_indentation) {
		text_indentation = min_indentation;
	}

	ImGui::SameLine(text_indentation);
	ImGui::PushTextWrapPos(win_width - text_indentation);
	ImGui::TextWrapped(text.c_str());
	ImGui::PopTextWrapPos();
}

bool ButtonCentered(std::string text, bool bNewLine = true) {
	if (bNewLine)
		ImGui::NewLine();

	float win_width = ImGui::GetWindowSize().x;
	float text_width = ImGui::CalcTextSize(text.c_str()).x;

	// calculate the indentation that centers the text on one line, relative
	// to window left, regardless of the `ImGuiStyleVar_WindowPadding` value
	float text_indentation = (win_width - text_width) * 0.5f;

	// if text is too long to be drawn on one line, `text_indentation` can
	// become too small or even negative, so we check a minimum indentation
	float min_indentation = 20.0f;
	if (text_indentation <= min_indentation) {
		text_indentation = min_indentation;
	}

	ImGui::SameLine(text_indentation);
	ImGui::PushTextWrapPos(win_width - text_indentation);
	auto res = ImGui::Button(text.c_str());
	ImGui::PopTextWrapPos();
	return res;
}

static int Width = 640;
static int Height = 480;

#define MAIN_TAB 1
#define PLAYER_TAB 2

DWORD WINAPI GuiThread(LPVOID)
{
	WNDCLASSEX wc = { sizeof(WNDCLASSEX), CS_CLASSDC, WndProc, 0L, 0L, GetModuleHandle(NULL), NULL, NULL, NULL, NULL, L"winclass", NULL };
	::RegisterClassEx(&wc);
	HWND hwnd = ::CreateWindowExW(0L, wc.lpszClassName, L"Forge", (WS_OVERLAPPED | WS_CAPTION | WS_SYSMENU | WS_MINIMIZEBOX | WS_MAXIMIZEBOX), 100, 100, Width, Height, NULL, NULL, wc.hInstance, NULL);
	// SetWindowLongPtrW(hwnd, GWL_STYLE, WS_POPUP); // Disables windows title bar at the cost of dragging and some quality

	// Initialize Direct3D
	if (!CreateDeviceD3D(hwnd))
	{
		CleanupDeviceD3D();
		::UnregisterClass(wc.lpszClassName, wc.hInstance);
		return 1;
	}

	// Show the window
	::ShowWindow(hwnd, SW_SHOWDEFAULT);
	::UpdateWindow(hwnd);

	// Setup Dear ImGui context
	IMGUI_CHECKVERSION();
	ImGui::CreateContext();
	ImGuiIO& io = ImGui::GetIO(); (void)io;

	io.IniFilename = NULL; // Disable imgui.ini generation.
	io.DisplaySize = ImGui::GetMainViewport()->Size;
	io.ConfigFlags |= ImGuiConfigFlags_NavEnableKeyboard;     // Enable Keyboard Controls
	io.ConfigFlags |= ImGuiConfigFlags_NavEnableGamepad;      // Enable Gamepad Controls

	// ImFont* Seguoe = io.Fonts->AddFontFromMemoryTTF(&seguoe, sizeof RudaBold, 20, NULL, io.Fonts->GetGlyphRangesCyrillic());

	// Setup Dear ImGui style
	InitStyle();

	// Setup Platform/Renderer backends
	ImGui_ImplWin32_Init(hwnd);
	ImGui_ImplDX9_Init(g_pd3dDevice);

	// Our state
	bool show_demo_window = true;
	bool show_another_window = false;
	ImVec4 clear_color = ImVec4(0.45f, 0.55f, 0.60f, 1.00f);

	// Main loop
	bool done = false;

	while (!done)
	{
		MSG msg;
		while (::PeekMessage(&msg, NULL, 0U, 0U, PM_REMOVE))
		{
			::TranslateMessage(&msg);
			::DispatchMessage(&msg);
			if (msg.message == WM_QUIT)
			{
				done = true;
				break;
			}
		}

		ImGui_ImplDX9_NewFrame();
		ImGui_ImplWin32_NewFrame();
		ImGui::NewFrame();

		auto WindowSize = ImGui::GetMainViewport()->Size;

		ImGui::SetNextWindowPos(ImVec2(0, 0), ImGuiCond_Always);
		ImGui::SetNextWindowSize(ImVec2(640, 480), ImGuiCond_Always);

		static int Tab = 1;
		static std::string NAME;
		static int PlayerTab = -1;
		static std::vector<APlayerController*> Controllers; 

		if (!ImGui::IsWindowCollapsed() && !Globals::bRestarting)
		{
			ImGui::Begin(("Forge"), nullptr, ImGuiWindowFlags_NoResize | ImGuiWindowFlags_NoTitleBar);

			if (ImGui::BeginTabBar(""))
			{
				if (ImGui::BeginTabItem(("Main")))
				{
					Tab = MAIN_TAB;
					ImGui::EndTabItem();
					// PlayerTab = -1;
				}

				if (/* NetDriver && */ ImGui::BeginTabItem(("Players")))
				{
					Tab = PLAYER_TAB;
					ImGui::EndTabItem();
					// PlayerTab = -1;
				}

				ImGui::EndTabBar();
			}

			switch (Tab)
			{
			case MAIN_TAB:
				ImGui::Checkbox("Log ProcessEvent", &Globals::bLogProcessEvent);

				if (ImGui::Button("Start Aircraft"))
				{
					StartAircraft();
				}

				/* if (ImGui::Button("Restart"))
				{
					auto DefaultFortGameModeAthena = AFortGameModeAthena::StaticClass()->CreateDefaultObject();
					static auto ReadyToStartMatchFn = UObject::FindObject<UFunction>("/Script/Engine.GameMode.ReadyToStartMatch");
					// UnhookFunction(DefaultFortGameModeAthena, ReadyToStartMatchFn, ReadyToStartMatchHook, (PVOID*)&ReadyToStartMatch);
					RestartServer();
				} */

				if (ImGui::Button("Dump Objects"))
				{
					std::ofstream objectstream("ForgeObjectDump.txt");

					for (int i = 0; i < UObject::GObjects->Num(); i++)
					{
						auto Object = UObject::GObjects->GetObjectById(i);

						if (!Object)
							continue;

						objectstream << std::format("[{}] {}\n", Object->InternalIndex, Object->GetFullName());
					}
				}

				break;
			case PLAYER_TAB:
			{
				auto NetDriver = GetWorld()->NetDriver;

				if (NetDriver)
				{
					if (PlayerTab == -1)
					{
						Controllers.clear();

						for (int i = 0; i < NetDriver->ClientConnections.Num(); i++)
						{
							auto Connection = NetDriver->ClientConnections[i];

							auto PlayerController = Cast<APlayerController>(Connection->PlayerController, false /* ? */);
							auto PlayerState = PlayerController ? PlayerController->PlayerState : nullptr;

							if (!PlayerController || !PlayerState)
								continue;

							Controllers.push_back(PlayerController);
						}

						for (int i = 0; i < Controllers.size(); i++)
						{
							auto Controller = Controllers[i];

							if (!Controller->NetConnection)
								continue;

							auto RequestURL = (FString*)(__int64(Controller->NetConnection) + 0x1A8);

							if (RequestURL->Data && RequestURL->Num())
							{
								auto RequestURLStr = RequestURL->ToString();

								std::size_t pos = RequestURLStr.find("Name=");

								if (pos != std::string::npos) {
									std::size_t end_pos = RequestURLStr.find('?', pos);

									if (end_pos != std::string::npos)
										RequestURLStr = RequestURLStr.substr(pos + 5, end_pos - pos - 5);
								}

								auto RequestURLCStr = RequestURLStr.c_str();

								if (ImGui::Button(RequestURLCStr))
								{
									std::cout << "PlayerTab: " << PlayerTab << '\n';
									std::cout << "i: " << i << '\n';
									PlayerTab = i;
									break;
								}
							}

							/*

							if (ImGui::Button(Controller->PlayerState->PlayerName.ToString().c_str()))
							{
								PlayerTab = i;
								break;
							}

							*/
						}
					}
					
					if (PlayerTab != -1)
					{
						auto Controller = Controllers[PlayerTab];
						auto PlayerState = Controller->PlayerState;

						if (PlayerState)
						{
							auto RequestURL = (FString*)(__int64(Controller->NetConnection) + 0x1A8);

							if (RequestURL->Data && RequestURL->Num())
							{
								auto RequestURLStr = RequestURL->ToString();

								std::size_t pos = RequestURLStr.find("Name=");

								if (pos != std::string::npos) {
									std::size_t end_pos = RequestURLStr.find('?', pos);

									if (end_pos != std::string::npos)
										RequestURLStr = RequestURLStr.substr(pos + 5, end_pos - pos - 5);
								}

								auto RequestURLCStr = RequestURLStr.c_str();

								ImGui::Text(("Viewing " + RequestURLStr).c_str());

								if (ImGui::Button("Ban"))
								{
									Ban(Controller, RequestURLStr);
								}

								/* if (ImGui::Button("Spawn Stationary Bot"))
								{
									static auto PawnClass = UObject::FindObject<UBlueprintGeneratedClass>("/Game/Athena/PlayerPawn_Athena.PlayerPawn_Athena_C");

									auto Pawn = Cast<AFortPlayerPawnAthena>(Controller->Pawn);

									if (Pawn)
									{
										auto SpawnLoc = Pawn->K2_GetActorLocation();

										auto GameMode = Cast<AFortGameModeAthena>(GetWorld()->AuthorityGameMode);
										auto ServerBotManager = GameMode->ServerBotManager;

										auto CustomizationData = (UFortAthenaAIBotCustomizationData*)UGameplayStatics::SpawnObject(UFortAthenaAIBotCustomizationData::StaticClass(), GetTransientPackage());

										CustomizationData->PawnClass = UObject::FindObject<UBlueprintGeneratedClass>("/Game/Athena/PlayerPawn_Athena.PlayerPawn_Athena_C");

										auto BotPawn = ServerBotManager->SpawnBot(SpawnLoc, FRotator(), CustomizationData);

										static auto DefaultPickaxe = UObject::FindObject<UAthenaPickaxeItemDefinition>("/Game/Athena/Items/Cosmetics/Pickaxes/DefaultPickaxe.DefaultPickaxe");
										BotPawn->EquipWeaponDefinition(DefaultPickaxe->WeaponDefinition, FGuid(0, 0, 0, 0));

										BotPawn->bCanBeDamaged = true;
										BotPawn->HealthSet = Pawn->HealthSet;

										BotPawn->PlayerState = BotPawn->PlayerState ? BotPawn->PlayerState : GetWorld()->SpawnActor<AFortPlayerStateAthena>({}, {});
										BotPawn->PlayerState->SetReplicates(true);
										BotPawn->OnRep_PlayerState();

										auto BotPS = BotPawn->PlayerState;

										std::cout << "BotPS: " << BotPS << '\n';

										if (BotPS)
										{
											BotPS->PlayerName = L"discord.gg/reboot";
											BotPS->OnRep_PlayerName();
										}
									}
									else
									{
										std::cout << "No pawn!\n";
									}
								} */

								if (ImGui::Button("Back"))
								{
									PlayerTab = -1;
								}
							}
						}
						else
						{
							std::cout << "null ps!\n";
							PlayerTab = -1;
						}
					}
				}
			}
			}

			ImGui::End();
		}

		// Rendering
		ImGui::EndFrame();
		g_pd3dDevice->SetRenderState(D3DRS_ZENABLE, FALSE);
		g_pd3dDevice->SetRenderState(D3DRS_ALPHABLENDENABLE, FALSE);
		g_pd3dDevice->SetRenderState(D3DRS_SCISSORTESTENABLE, FALSE);
		D3DCOLOR clear_col_dx = D3DCOLOR_RGBA((int)(clear_color.x * clear_color.w * 255.0f), (int)(clear_color.y * clear_color.w * 255.0f), (int)(clear_color.z * clear_color.w * 255.0f), (int)(clear_color.w * 255.0f));
		g_pd3dDevice->Clear(0, NULL, D3DCLEAR_TARGET | D3DCLEAR_ZBUFFER, clear_col_dx, 1.0f, 0);

		if (g_pd3dDevice->BeginScene() >= 0)
		{
			ImGui::Render();
			ImGui_ImplDX9_RenderDrawData(ImGui::GetDrawData());
			g_pd3dDevice->EndScene();
		}

		HRESULT result = g_pd3dDevice->Present(NULL, NULL, NULL, NULL);

		// Handle loss of D3D9 device
		if (result == D3DERR_DEVICELOST && g_pd3dDevice->TestCooperativeLevel() == D3DERR_DEVICENOTRESET)
			ResetDevice();
	}

	ImGui_ImplDX9_Shutdown();
	ImGui_ImplWin32_Shutdown();
	ImGui::DestroyContext();

	CleanupDeviceD3D();
	::DestroyWindow(hwnd);
	::UnregisterClass(wc.lpszClassName, wc.hInstance);

	return 0;
}

// Helper functions

bool CreateDeviceD3D(HWND hWnd)
{
	if ((g_pD3D = Direct3DCreate9(D3D_SDK_VERSION)) == NULL)
		return false;

	// Create the D3DDevice
	ZeroMemory(&g_d3dpp, sizeof(g_d3dpp));
	g_d3dpp.Windowed = TRUE;
	g_d3dpp.SwapEffect = D3DSWAPEFFECT_DISCARD;
	g_d3dpp.BackBufferFormat = D3DFMT_UNKNOWN; // Need to use an explicit format with alpha if needing per-pixel alpha composition.
	g_d3dpp.EnableAutoDepthStencil = TRUE;
	g_d3dpp.AutoDepthStencilFormat = D3DFMT_D16;
	g_d3dpp.PresentationInterval = D3DPRESENT_INTERVAL_ONE;           // Present with vsync
	//g_d3dpp.PresentationInterval = D3DPRESENT_INTERVAL_IMMEDIATE;   // Present without vsync, maximum unthrottled framerate
	if (g_pD3D->CreateDevice(D3DADAPTER_DEFAULT, D3DDEVTYPE_HAL, hWnd, D3DCREATE_HARDWARE_VERTEXPROCESSING, &g_d3dpp, &g_pd3dDevice) < 0)
		return false;

	return true;
}

void CleanupDeviceD3D()
{
	if (g_pd3dDevice) { g_pd3dDevice->Release(); g_pd3dDevice = NULL; }
	if (g_pD3D) { g_pD3D->Release(); g_pD3D = NULL; }
}

void ResetDevice()
{
	ImGui_ImplDX9_InvalidateDeviceObjects();
	HRESULT hr = g_pd3dDevice->Reset(&g_d3dpp);
	if (hr == D3DERR_INVALIDCALL)
		IM_ASSERT(0);
	ImGui_ImplDX9_CreateDeviceObjects();
}

extern IMGUI_IMPL_API LRESULT ImGui_ImplWin32_WndProcHandler(HWND hWnd, UINT msg, WPARAM wParam, LPARAM lParam);

LRESULT WINAPI WndProc(HWND hWnd, UINT msg, WPARAM wParam, LPARAM lParam)
{
	if (ImGui_ImplWin32_WndProcHandler(hWnd, msg, wParam, lParam))
		return true;

	switch (msg)
	{
	/* case WM_CREATE:
	{
		HINSTANCE hInstance = ((LPCREATESTRUCT)lParam)->hInstance;
		HICON hIcon = LoadIcon(hInstance, MAKEINTRESOURCE(IDI_ICON1));
		SendMessage(hWnd, WM_SETICON, ICON_BIG, (LPARAM)hIcon);
		return 0;
	} */
	case WM_SIZE:
		if (g_pd3dDevice != NULL && wParam != SIZE_MINIMIZED)
		{
			g_d3dpp.BackBufferWidth = LOWORD(lParam);
			g_d3dpp.BackBufferHeight = HIWORD(lParam);
			ResetDevice();
		}
		return 0;
	case WM_SYSCOMMAND:
		if ((wParam & 0xfff0) == SC_KEYMENU) // Disable ALT application menu
			return 0;
		break;
	case WM_DESTROY:
		::PostQuitMessage(0);
		return 0;
	}
	return ::DefWindowProc(hWnd, msg, wParam, lParam);
}