
int FUN_02076908(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = *(int *)(param_1 + 0x18dc);
  if (iVar1 == 0) {
    return 0;
  }
  FUN_02037c24(param_1 + 0x18dc,iVar1,param_3,param_4,param_4);
  FUN_02037b98(param_1 + 0x18d4,iVar1);
  iVar2 = iVar1 + 0x58;
  iVar3 = 0x10;
  do {
    FUN_02037b98(iVar1 + 0x560,iVar2);
    iVar3 = iVar3 + -1;
    *(undefined2 *)(iVar2 + 0xc) = 0xffff;
    iVar2 = iVar2 + 0x50;
  } while (0 < iVar3);
  *(undefined1 **)(iVar1 + 0x5e8) = &LAB_02076984;
  return iVar1;
}

