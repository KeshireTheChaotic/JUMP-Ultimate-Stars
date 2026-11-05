
void FUN_0216028c(int param_1)

{
  int iVar1;
  int extraout_r1;
  int iVar2;
  int iVar3;
  
  iVar2 = *(int *)(*(int *)(param_1 + 4) + 0x10);
  *(short *)(iVar2 + 0xf4) = *(short *)(iVar2 + 0xf4) + -1;
  iVar3 = (int)*(short *)(iVar2 + 0xf4);
  if (iVar3 < 1) {
    *(undefined1 *)(iVar2 + 0xf6) = 1;
    FUN_0215438c(*(undefined4 *)(iVar2 + 0xe0));
    FUN_02028384(*(undefined4 *)(param_1 + 4),FUN_0216024c);
  }
  else {
    iVar1 = FUN_0200d12c(iVar3,0x3c);
    FUN_0200d12c(iVar3,0x3c);
    if ((extraout_r1 == 0) && (iVar1 < 5)) {
      FUN_0207342c(0x7c,4);
    }
  }
  FUN_0215f8ec(iVar2);
  return;
}

