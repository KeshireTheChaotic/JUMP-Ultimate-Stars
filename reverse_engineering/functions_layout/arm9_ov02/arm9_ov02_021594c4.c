
bool FUN_021594c4(int param_1,int param_2,int param_3)

{
  undefined2 uVar1;
  int iVar2;
  
  if (*(byte *)(param_1 + 6) < 7) {
    iVar2 = (*(code *)(&DAT_0215c5e4)[param_3])();
    return iVar2 == 0;
  }
  FUN_02159eac(param_2 + 0x20 + param_3 * 0x4dc);
  param_3 = param_3 * 0x4dc;
  uVar1 = FUN_02159584(*(undefined1 *)(param_2 + param_3 + 0x4f8));
  *(undefined2 *)(param_2 + 0x490 + param_3) = uVar1;
  uVar1 = FUN_02159584(*(undefined1 *)(param_2 + param_3 + 0x4f9));
  *(undefined2 *)(param_2 + param_3 + 0x492) = uVar1;
  iVar2 = param_2 + 0x4f6;
  *(short *)(iVar2 + param_3) = *(short *)(iVar2 + param_3) + -1;
  if (*(short *)(iVar2 + param_3) < 1) {
    *(undefined2 *)(param_2 + 0x492 + param_3) = 0;
    *(undefined2 *)(param_2 + 0x490 + param_3) = 0;
    return false;
  }
  return true;
}

