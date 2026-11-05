
void FUN_021add64(int *param_1,undefined4 param_2,undefined4 *param_3,uint param_4)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  uVar3 = param_4;
  iVar1 = (**(code **)(*param_1 + 0x19c))();
  iVar2 = FUN_0200d338(*param_3,*(undefined4 *)(*(int *)(param_1[0x58] + 100) + 0xe8));
  iVar2 = iVar2 + iVar1 * 0x1000;
  iVar1 = (int)(iVar2 + ((uint)(iVar2 >> 0xb) >> 0x14)) >> 0xc;
  if (((-1 < iVar1) && (iVar1 < param_1[0x52])) &&
     (((*(char *)((int)param_1 + 0xa5) != '\0' && ((param_4 & 0x20000) != 0)) ||
      ((*(char *)((int)param_1 + 0xa5) == '\0' && ((param_4 & 0x10000) != 0)))))) {
    if ((*(char *)((int)param_1 + 0xaa) != '\0') ||
       (((iVar2 = (**(code **)(*param_1 + 0x194))(), iVar1 == iVar2 && ((param_1[0x24] & 1U) == 1))
        && ((param_1[0x24] & 2U) == 2)))) {
      (**(code **)(*param_1 + 0x198))(param_1,iVar1,0x198,*(code **)(*param_1 + 0x198),uVar3);
      if (*(char *)((int)param_1 + 0xab) != '\0') {
        FUN_021b6214(param_1,1);
        if ((*(uint *)(param_1[0x27] + 0x90) & 1) != 1) {
          FUN_021b6214();
        }
      }
      (**(code **)(*param_1 + 0x15c))();
      return;
    }
    FUN_021b7714(param_1,0x10000);
    FUN_021b6214(param_1,1);
    (**(code **)(*param_1 + 0x198))(param_1,iVar1);
    if ((*(uint *)(param_1[0x27] + 0x90) & 1) != 1) {
      FUN_021b6214();
    }
  }
  return;
}

