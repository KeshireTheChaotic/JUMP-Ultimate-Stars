
undefined4 FUN_02180660(int param_1,char *param_2,int param_3)

{
  char cVar1;
  byte bVar2;
  undefined4 uVar3;
  undefined2 uVar4;
  uint uVar5;
  int iVar6;
  char *pcVar7;
  int local_38;
  
  if (param_3 < 2) {
    return 4;
  }
  cVar1 = *param_2;
  bVar2 = param_2[1];
  param_2 = param_2 + 2;
  param_3 = param_3 + -2;
  local_38 = 0;
  if (bVar2 != 0) {
    do {
      iVar6 = FUN_021816dc(param_2,param_3);
      if (iVar6 == -1) {
        return 4;
      }
      pcVar7 = param_2 + iVar6;
      if (param_3 - iVar6 < 0xb) {
        return 4;
      }
      uVar3 = *(undefined4 *)pcVar7;
      uVar4 = *(undefined2 *)(pcVar7 + 4);
      uVar5 = *(uint *)(pcVar7 + 6);
      pcVar7 = pcVar7 + 10;
      param_3 = (param_3 - iVar6) + -10;
      iVar6 = FUN_021816dc(pcVar7,param_3);
      if (iVar6 == -1) {
        return 4;
      }
      (**(code **)(param_1 + 0x490))
                (param_1,param_2,uVar3,uVar4,
                 uVar5 << 0x18 | (uVar5 & 0xff00) << 8 | uVar5 >> 0x18 | uVar5 >> 8 & 0xff00,pcVar7,
                 *(undefined4 *)(param_1 + 0x494));
      param_2 = pcVar7 + iVar6;
      param_3 = param_3 - iVar6;
      local_38 = local_38 + 1;
    } while (local_38 < (int)(uint)bVar2);
  }
  if (cVar1 != '\0') {
    (**(code **)(param_1 + 0x490))(param_1,0,0,0,0,0,*(undefined4 *)(param_1 + 0x494));
  }
  return 0;
}

