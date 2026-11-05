
int FUN_020834d4(code *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                undefined4 param_5,undefined1 param_6)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  
  iVar5 = *(int *)(DAT_0214be14 + 0x14);
  if (iVar5 == 0) {
    iVar5 = 0;
  }
  else {
    *(undefined **)(iVar5 + 0x28) = &DAT_02083fc4;
    *(undefined **)(iVar5 + 0x24) = &DAT_02083fc8;
    *(undefined1 *)(iVar5 + 0x38) = 0xff;
    uVar6 = param_4;
    uVar1 = (*param_1)(iVar5);
    *(undefined4 *)(iVar5 + 0x30) = uVar1;
    iVar4 = *(int *)(iVar5 + 8);
    iVar2 = FUN_0207c988(*(undefined4 *)(DAT_0214be14 + 0x8c),iVar4,param_3,param_4,param_5,param_6,
                         uVar6);
    *(int *)(iVar5 + 0x10) = iVar2;
    iVar3 = FUN_02083a58(iVar5,*(undefined4 *)(iVar5 + 8));
    *(int *)(iVar5 + 0x14) = iVar3;
    FUN_020839c0(iVar5,*(undefined4 *)(iVar5 + 8));
    if (iVar3 == 0 || (iVar2 == 0 || (iVar4 == 0 || param_1 == (code *)0x0))) {
      FUN_02037c24(DAT_0214be14 + 0x14,iVar5);
      FUN_02037b98(DAT_0214be14 + 0x1c,iVar5);
      iVar5 = 0;
    }
    else {
      FUN_02037c24(DAT_0214be14 + 0x14,iVar5);
      FUN_02037b98(DAT_0214be14 + 0xc,iVar5);
      FUN_02083cd8(DAT_0214be14,iVar5,param_3,param_4);
    }
  }
  return iVar5;
}

