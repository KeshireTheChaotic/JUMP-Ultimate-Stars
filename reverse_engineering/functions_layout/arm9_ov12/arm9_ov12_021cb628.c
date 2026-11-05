
/* JUS-GAME ALFont::InitFontChar [source-string] __FILE__="ALFont.cpp" __FUNCTION__="InitFontChar"
   lines=[914] passed to 1 source-location call(s) */

void ALFont::InitFontChar(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  
  uVar1 = jus_AllocDebug(*(int *)(param_1 + 0x50) << 3,s_ALFont_cpp_021d5060,s_InitFontChar_021d4e98
                         ,0x392);
  *(undefined4 *)(param_1 + 0x40) = uVar1;
  uVar3 = 0;
  while (uVar3 < *(uint *)(param_1 + 0x50)) {
    iVar2 = uVar3 * 8;
    *(undefined2 *)(*(int *)(param_1 + 0x40) + iVar2) = 0xffff;
    *(undefined2 *)(*(int *)(param_1 + 0x40) + iVar2 + 2) = 0;
    *(short *)(*(int *)(param_1 + 0x40) + iVar2 + 4) = (short)(uVar3 + 1);
    *(short *)(*(int *)(param_1 + 0x40) + iVar2 + 6) = (short)uVar3 + -1;
    uVar3 = uVar3 + 1;
  }
  *(undefined4 *)(param_1 + 0x44) = *(undefined4 *)(param_1 + 0x40);
  *(undefined2 *)(*(int *)(param_1 + 0x40) + (*(int *)(param_1 + 0x50) + -1) * 8 + 4) = 0xffff;
  *(int *)(param_1 + 0x48) = *(int *)(param_1 + 0x40) + (*(int *)(param_1 + 0x50) + -1) * 8;
  return;
}

