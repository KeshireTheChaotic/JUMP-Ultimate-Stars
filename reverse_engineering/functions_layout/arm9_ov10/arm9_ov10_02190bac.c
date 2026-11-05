
void FUN_02190bac(undefined4 param_1,int param_2,int param_3)

{
  undefined2 uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int *piVar6;
  uint uVar7;
  uint uVar8;
  
  if ((((param_2 != 0x7f000001) && (param_2 != DAT_021a8538)) &&
      (iVar2 = FUN_0219117c(param_2), iVar2 != 0)) && (iVar2 = FUN_02191114(param_2), iVar2 == 0)) {
    uVar3 = FUN_02054b44();
    uVar5 = 0;
    piVar6 = &DAT_021a85ac;
    do {
      uVar1 = (undefined2)(uVar3 >> 0x10);
      if (param_2 == *piVar6) {
        (&DAT_021a85b6)[uVar5 * 6] = uVar1;
        FUN_02051890(param_1,&DAT_021a85b0 + uVar5 * 0xc,6);
        return;
      }
      piVar6 = piVar6 + 3;
      uVar5 = uVar5 + 1;
    } while (uVar5 < 8);
    if (param_3 != 0) {
      uVar8 = 0;
      uVar5 = 0;
      uVar7 = 0;
      piVar6 = &DAT_021a85ac;
      do {
        if (*piVar6 == 0) {
          uVar5 = uVar7;
          break;
        }
        uVar4 = (uVar3 >> 0x10) - (uint)*(ushort *)((int)piVar6 + 10);
        if ((int)uVar8 < (int)(uVar4 * 0x10000) >> 0x10) {
          uVar8 = uVar4 & 0xffff;
          uVar5 = uVar7;
        }
        piVar6 = piVar6 + 3;
        uVar7 = uVar7 + 1;
      } while (uVar7 < 8);
      (&DAT_021a85ac)[uVar5 * 3] = param_2;
      FUN_02051890(param_1,&DAT_021a85b0 + uVar5 * 0xc,6);
      (&DAT_021a85b6)[uVar5 * 6] = uVar1;
    }
  }
  return;
}

