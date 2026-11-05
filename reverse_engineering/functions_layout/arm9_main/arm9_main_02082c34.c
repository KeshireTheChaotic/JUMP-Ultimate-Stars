
int FUN_02082c34(int param_1,undefined4 param_2,undefined4 *param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = *(int *)(param_1 + 8);
  if (iVar2 == 0) {
    return 0;
  }
  FUN_02037c24(param_1 + 8,iVar2,param_3,param_4,param_4);
  FUN_02037b98(param_1,iVar2);
  *(undefined4 *)(iVar2 + 8) = param_2;
  if (param_3 == (undefined4 *)0x0) {
    uVar1 = 0x10000;
    *(undefined4 *)(iVar2 + 0x14) = *(undefined4 *)(iVar2 + 0xc);
    *(undefined4 *)(iVar2 + 0x18) = *(undefined4 *)(iVar2 + 0x10);
    *(undefined4 *)(iVar2 + 0xc) = 0x10000;
  }
  else {
    *(undefined4 *)(iVar2 + 0x14) = *(undefined4 *)(iVar2 + 0xc);
    *(undefined4 *)(iVar2 + 0x18) = *(undefined4 *)(iVar2 + 0x10);
    *(undefined4 *)(iVar2 + 0xc) = *param_3;
    uVar1 = param_3[1];
  }
  *(undefined4 *)(iVar2 + 0x10) = uVar1;
  *(undefined4 *)(iVar2 + 0x14) = *(undefined4 *)(iVar2 + 0xc);
  *(undefined4 *)(iVar2 + 0x18) = *(undefined4 *)(iVar2 + 0x10);
  *(uint *)(iVar2 + 0x34) = *(uint *)(iVar2 + 0x34) | 1;
  if ((*(uint *)(param_1 + 0x28) & 1) != 0) {
    *(uint *)(iVar2 + 0x34) = *(uint *)(iVar2 + 0x34) | 0x200;
  }
  *(undefined1 *)(iVar2 + 0x3c) = 0x20;
  *(undefined1 *)(iVar2 + 0x3d) = 8;
  *(undefined1 *)(iVar2 + 0x3e) = 0x20;
  iVar3 = *(int *)(param_1 + 0x18);
  FUN_02037c24(param_1 + 0x18,iVar3);
  FUN_02037b98(param_1 + 0x10,iVar3);
  *(int *)(iVar3 + 8) = iVar2;
  *(uint *)(iVar2 + 0x34) = *(uint *)(iVar2 + 0x34) | 8;
  return iVar2;
}

