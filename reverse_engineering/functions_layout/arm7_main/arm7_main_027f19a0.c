
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_027f19a0(int param_1)

{
  int iVar1;
  
  iVar1 = _DAT_0380fff4 + 0x42c + param_1 * 0x14;
  if (*(short *)(_DAT_0380fff4 + 0x42c + param_1 * 0x14) != 0) {
    if (**(short **)(iVar1 + 8) == 0) {
      *(undefined2 *)(*(int *)(iVar1 + 0xc) + 8) = 2;
    }
    else {
      *(short *)(*(int *)(iVar1 + 0xc) + 8) = **(short **)(iVar1 + 8);
    }
    (**(code **)(iVar1 + 0x10))(*(undefined4 *)(iVar1 + 0xc),0);
  }
  return;
}

