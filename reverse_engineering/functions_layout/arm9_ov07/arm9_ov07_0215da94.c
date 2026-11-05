
void FUN_0215da94(int param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = *(int *)(*(int *)(param_1 + 4) + 0x10);
  iVar2 = FUN_02161e50();
  if (iVar2 == 0) {
    if (*(char *)(iVar3 + 0x9d) != '\0') {
      FUN_0215dda8(iVar3,0);
      FUN_0215de20(iVar3,0);
      FUN_02161e68();
      FUN_02086c24();
      DAT_020afeb8 = 0;
      FUN_0215e1b0(iVar3,5);
      FUN_02028384(*(undefined4 *)(param_1 + 4),0x215dbdd);
    }
    return;
  }
  iVar2 = FUN_020725ac(iVar3 + 0x168);
  if ((iVar2 == 0) || (iVar2 = FUN_020725bc(iVar3 + 0x168,iVar3 + 0xc0), iVar2 != 0)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (!bVar1) {
    FUN_02086c38();
    DAT_020afeb8 = 1;
    FUN_02161dac(iVar3 + 0xc0,iVar3 + 0x168,0xa8);
    return;
  }
  FUN_0215dda8(iVar3,0);
  iVar2 = FUN_02072134(iVar3 + 0x168);
  if (iVar2 < 0) {
    iVar2 = FUN_02072090();
  }
  FUN_02151888(iVar2,iVar3 + 0x168,iVar3 + 0x1b4,5);
  DAT_020afeb0 = 2;
  DAT_020afeb4 = (undefined1)iVar2;
  FUN_0215de20(iVar3,0);
  FUN_02028384(*(undefined4 *)(param_1 + 4),&LAB_0215db74_1);
  return;
}

