
undefined4 * FUN_0205b550(int *param_1,int param_2,int param_3)

{
  int iVar1;
  undefined4 *puVar2;
  
  if (*param_1 != 0) {
    FUN_0205b920();
  }
  if ((uint)(&DAT_020adaa0)[param_2 * 9] <= (uint)*(ushort *)(&DAT_020ada90 + param_2 * 0x24)) {
    iVar1 = FUN_0205e0f0(&DAT_020ada88 + param_2 * 0x24,0);
    if (iVar1 == 0) {
      return (undefined4 *)0x0;
    }
    if (param_3 < (int)(uint)*(byte *)(iVar1 + 0x3d)) {
      return (undefined4 *)0x0;
    }
    FUN_0205b2d8(iVar1);
  }
  puVar2 = (undefined4 *)FUN_0205b264(param_3);
  if (puVar2 == (undefined4 *)0x0) {
    return (undefined4 *)0x0;
  }
  FUN_0205b36c(&DAT_020ada88 + param_2 * 0x24,puVar2);
  *puVar2 = param_1;
  *param_1 = (int)puVar2;
  return puVar2;
}

