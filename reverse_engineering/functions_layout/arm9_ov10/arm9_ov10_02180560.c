
undefined4 FUN_02180560(int param_1,undefined4 *param_2,int param_3)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  int local_54 [16];
  
  if (param_3 < 0xb) {
    return 4;
  }
  iVar3 = FUN_02181898(param_1,*param_2,*(undefined2 *)(param_2 + 1));
  if (iVar3 != -1) {
    uVar4 = FUN_02181814(param_1);
    uVar2 = *(uint *)((int)param_2 + 6);
    bVar1 = *(byte *)((int)param_2 + 10);
    iVar6 = (int)param_2 + 0xb;
    iVar3 = 0;
    piVar7 = local_54;
    for (param_3 = param_3 + -0xb; ((iVar3 < (int)(uint)bVar1 && (iVar3 < 0x10)) && (0 < param_3));
        param_3 = param_3 - iVar5) {
      iVar5 = FUN_021816dc(iVar6,param_3);
      if (iVar5 == -1) {
        return 4;
      }
      *piVar7 = iVar6;
      piVar7 = piVar7 + 1;
      iVar6 = iVar6 + iVar5;
      iVar3 = iVar3 + 1;
    }
    if (*(code **)(param_1 + 0x48c) == (code *)0x0) {
      return 0;
    }
    (**(code **)(param_1 + 0x48c))
              (param_1,uVar4,
               uVar2 << 0x18 | (uVar2 & 0xff00) << 8 | uVar2 >> 0x18 | uVar2 >> 8 & 0xff00,iVar3,
               local_54,*(undefined4 *)(param_1 + 0x494));
  }
  return 0;
}

