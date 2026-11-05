
void FUN_0215a070(int param_1)

{
  int iVar1;
  int iVar2;
  int extraout_r1;
  int iVar3;
  
  iVar3 = *(int *)(*(int *)(param_1 + 4) + 0x10);
  FUN_0214ce64();
  iVar1 = FUN_0214cea0();
  if (iVar1 == 2) {
    iVar1 = FUN_0214f5f4();
    iVar2 = FUN_0214f5c8();
    if (iVar1 == iVar2 + -1) goto LAB_0215a118;
  }
  *(short *)(iVar3 + 0xe8) = *(short *)(iVar3 + 0xe8) + -1;
  iVar1 = (int)*(short *)(iVar3 + 0xe8);
  if (iVar1 < 1) {
    *(undefined1 *)(iVar3 + 0xea) = 1;
    FUN_0215438c(*(undefined4 *)(iVar3 + 0xdc));
    FUN_02028384(*(undefined4 *)(param_1 + 4),FUN_0215a030);
  }
  else {
    iVar2 = FUN_0200d12c(iVar1,0x3c);
    FUN_0200d12c(iVar1,0x3c);
    if ((extraout_r1 == 0) && (iVar2 < 5)) {
      FUN_0207342c(0x7c,4);
    }
  }
LAB_0215a118:
  FUN_02159930(iVar3);
  return;
}

