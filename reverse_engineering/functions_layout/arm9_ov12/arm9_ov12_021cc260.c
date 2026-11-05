
/* JUS-GAME WiFiVoiceChat::WiFiVC_Proc_Init [source-string] __FILE__="WiFiVoiceChat.cpp"
   __FUNCTION__="WiFiVC_Proc_Init" lines=[1185, 1189, 1195] passed to 3 source-location call(s) */

void WiFiVoiceChat::WiFiVC_Proc_Init
               (int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined1 uVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar3 = *(int *)(*(int *)(param_1 + 4) + 0x10);
  *(undefined1 *)(iVar3 + 8) = 1;
  *(undefined1 *)(iVar3 + 0xc) = 0;
  *(undefined1 *)(iVar3 + 10) = 0;
  *(undefined1 *)(iVar3 + 0xb) = 0;
  uVar1 = FUN_020733a8();
  *(undefined1 *)(iVar3 + 0xd) = uVar1;
  uVar1 = FUN_020733f4();
  *(undefined1 *)(iVar3 + 0xe) = uVar1;
  *(undefined1 *)(iVar3 + 0x14) = 0;
  *(undefined2 *)(iVar3 + 0x16) = 0x3c;
  *(undefined4 *)(iVar3 + 0x1c) = 0x44;
  uVar2 = thunk_FUN_0201a228(0x880,s_WiFiVoiceChat_cpp_021d50a4,s_WiFiVC_Proc_Init_021d5074,0x4a1,
                             param_4);
  *(undefined4 *)(iVar3 + 0xe8) = uVar2;
  uVar2 = thunk_FUN_0201a228(0x1980,s_WiFiVoiceChat_cpp_021d50a4,s_WiFiVC_Proc_Init_021d5074,0x4a5);
  *(undefined4 *)(iVar3 + 200) = uVar2;
  *(undefined4 *)(iVar3 + 0xec) = 0x141c0;
  uVar2 = thunk_FUN_0201a228(*(undefined4 *)(iVar3 + 0xec),s_WiFiVoiceChat_cpp_021d50a4,
                             s_WiFiVC_Proc_Init_021d5074,0x4ab);
  *(undefined4 *)(iVar3 + 0xf0) = uVar2;
  FUN_02028384(*(undefined4 *)(param_1 + 4),FUN_021cc2f4);
  return;
}

