
/* JUS-GAME ALTextDS::SetFontPaletteIndex [source-string] __FILE__="ALTextDS.cpp"
   __FUNCTION__="SetFontPaletteIndex" lines=[451] passed to 1 source-location call(s) */

void ALTextDS::SetFontPaletteIndex(int param_1,uint param_2)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  
  if (*(int *)(param_1 + 0x194) == 0) {
    iVar3 = (*(int *)(param_1 + 0xfc) + 7U >> 3) * (*(int *)(param_1 + 0x100) + 7U >> 3);
    uVar1 = jus_AllocDebug(iVar3,s_ALTextDS_cpp_021d4e30,s_SetFontPaletteIndex_021d4934,0x1c3);
    *(undefined4 *)(param_1 + 0x194) = uVar1;
    thunk_FUN_02002488(uVar1,param_2 & 0xff,iVar3);
    *(char *)(param_1 + 0x198) = (char)param_2;
    uVar2 = param_2 & 0xff;
  }
  else {
    uVar2 = (uint)*(byte *)(param_1 + 0x198);
    if (param_2 < *(byte *)(param_1 + 0x198)) {
      uVar2 = param_2;
    }
    *(char *)(param_1 + 0x198) = (char)uVar2;
    uVar2 = (uint)*(byte *)(param_1 + 0x199);
    if (*(byte *)(param_1 + 0x199) < param_2) {
      uVar2 = param_2;
    }
  }
  *(char *)(param_1 + 0x199) = (char)uVar2;
  *(char *)(param_1 + 0x174) = (char)param_2;
  return;
}

