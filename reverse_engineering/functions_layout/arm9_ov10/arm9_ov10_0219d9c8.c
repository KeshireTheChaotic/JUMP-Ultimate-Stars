
void FUN_0219d9c8(undefined4 param_1)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = FUN_021766fc();
  piVar1 = piRam0219da08;
  *(ushort *)(*piRam0219da08 + iVar2 * 2 + 0x1c30) = (ushort)param_1 & (ushort)uRam0219da0c;
  FUN_021a2eb0(*piVar1 + 0xc24,param_1);
  return;
}

