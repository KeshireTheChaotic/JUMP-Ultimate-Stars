
undefined4 FUN_0205c3e4(uint param_1,undefined4 param_2,uint param_3,int param_4)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  int *piVar5;
  
  iVar1 = DAT_020ae050;
  if (*(uint *)(*(int *)(DAT_020ae050 + 0x84) + 8) <= param_1) {
    return 0xffffffff;
  }
  piVar5 = (int *)(*(int *)(DAT_020ae050 + 0x84) + 0xc + param_1 * 0x10);
  uVar2 = piVar5[1] - param_4;
  if (uVar2 < param_3) {
    param_3 = uVar2;
  }
  iVar3 = FUN_020643f4(DAT_020ae050 + 0x34,*piVar5 + param_4,0);
  if (iVar3 == 0) {
    return 0xffffffff;
  }
  uVar4 = FUN_02064430(iVar1 + 0x34,param_2,param_3);
  return uVar4;
}

