
/* WARNING: Removing unreachable block (ram,0x02028408) */
/* WARNING: Removing unreachable block (ram,0x020283ec) */
/* WARNING: Removing unreachable block (ram,0x020283b8) */

void FUN_02151898(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  byte bVar2;
  
  param_1[0xe] = 0;
  param_1[0x425] = 0;
  iVar1 = *(int *)(*param_1 + 4);
  if ((*(byte *)(iVar1 + 0x28) & 0xf) >> 3 != 0) {
    if (*(code **)(iVar1 + 0x40) != FUN_0202836c) {
      *(code **)(iVar1 + 0x40) = FUN_0202836c;
    }
    bVar2 = *(byte *)(iVar1 + 0x28) & 0xfb | 4;
    *(byte *)(iVar1 + 0x28) = bVar2;
    FUN_02027834(iVar1,0,FUN_02151b88,bVar2,param_4);
    return;
  }
  *(code **)(iVar1 + 0x40) = FUN_02151b88;
  if ((*(byte *)(iVar1 + 0x28) & 7) >> 2 == 1) {
    return;
  }
  *(byte *)(iVar1 + 0x28) = *(byte *)(iVar1 + 0x28) & 0xfb | 4;
  FUN_02027edc();
  return;
}

