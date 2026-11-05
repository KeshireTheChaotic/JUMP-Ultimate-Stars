
undefined4
FUN_0217b348(uint param_1,int param_2,undefined4 param_3,uint param_4,undefined4 *param_5)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  uint *puVar5;
  int iVar6;
  undefined4 local_134;
  uint local_130;
  uint local_118 [65];
  
  iVar6 = 0;
  iVar1 = FUN_02178448();
  if ((iVar1 == 0) || (iVar1 = FUN_02178448(), *(int *)(iVar1 + 0x198) == 0)) {
    return 1;
  }
  iVar1 = FUN_02176640();
  if (((iVar1 == 5) && (iVar1 = FUN_02178448(), *(int *)(iVar1 + 0x198) == 1)) &&
     (iVar1 = FUN_02178448(), param_2 == *(int *)(iVar1 + 0xf4))) {
    FUN_021794b4();
  }
  if ((int)param_1 < 0x41) {
    if (0x3f < (int)param_1) {
      param_1 = FUN_0217be54();
    }
    if (0x20 < param_1) {
      param_1 = FUN_0217be9e();
    }
                    /* WARNING: Could not recover jumptable at 0x0217b3b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (*(code *)(*(short *)(&DAT_0217b3ba + param_1 * 2) + 0x217b3bc))();
    return uVar2;
  }
  FUN_0217be9e(param_1);
  iVar1 = FUN_02178448();
  local_134 = param_3;
  local_130 = param_4;
  if (*(char *)(iVar1 + 0x15) != '\0') {
    local_134 = param_5[1];
    local_130 = param_5[2] & 0xffff;
  }
  iVar1 = FUN_0217b128(param_2,local_134,local_130,*param_5,param_1 == 0xb);
  if (iVar1 == 2) {
    iVar6 = FUN_02178448();
    *(undefined4 *)(iVar6 + 0x1d4) = 0;
    FUN_0217afd0(param_2,local_134,local_130);
    iVar6 = FUN_0217af70();
    if (iVar6 != 0) {
      return 0;
    }
    iVar6 = FUN_02178448();
    if ((*(char *)(iVar6 + 0x15) == '\x02') &&
       (iVar6 = FUN_02178448(), *(int *)(iVar6 + 0x464) != 0)) {
      iVar6 = FUN_02178448();
      uVar2 = FUN_02177f3c(param_2);
      iVar3 = FUN_02178448();
      (**(code **)(iVar6 + 0x464))(uVar2,*(undefined4 *)(iVar3 + 0x468));
    }
    iVar6 = FUN_02178448();
    local_118[0] = (uint)*(byte *)(iVar6 + 0x14);
    iVar3 = 1;
    iVar6 = FUN_02178448();
    if (*(char *)(iVar6 + 0x14) != '\0') {
      iVar6 = 4;
      puVar5 = local_118;
      do {
        puVar5 = puVar5 + 1;
        iVar4 = FUN_02178448();
        *puVar5 = *(uint *)(iVar4 + iVar6 + 0xf4);
        iVar6 = iVar6 + 4;
        iVar3 = iVar3 + 1;
        iVar4 = FUN_02178448();
      } while (iVar3 <= (int)(uint)*(byte *)(iVar4 + 0x14));
    }
    iVar6 = FUN_02178448();
    local_118[iVar3] = *(uint *)(iVar6 + 0x1c);
    iVar4 = FUN_02178448();
    iVar6 = iVar3 + 2;
    local_118[iVar3 + 1] = (uint)*(ushort *)(iVar4 + 0x1a);
    FUN_02178434(0xb);
  }
  else if ((iVar1 == 3) && (iVar3 = FUN_02178448(), *(char *)(iVar3 + 0x16) != '\0')) {
    iVar3 = FUN_02178448();
    iVar4 = FUN_02178448();
    if ((*(char *)(iVar3 + 0x14) == *(char *)(iVar4 + 0x16)) &&
       (iVar3 = FUN_02178448(), *(char *)(iVar3 + 0x15) == '\x02')) {
      local_118[0] = 0x10;
      iVar6 = 1;
    }
  }
  if (iVar1 == 0xff) {
    FUN_0217be9e();
  }
  FUN_0217c024(iVar1,param_2,local_134,local_130,local_118,iVar6);
  iVar1 = FUN_0217af70();
  if (iVar1 == 0) {
    FUN_0217be9e();
  }
  return 0;
}

