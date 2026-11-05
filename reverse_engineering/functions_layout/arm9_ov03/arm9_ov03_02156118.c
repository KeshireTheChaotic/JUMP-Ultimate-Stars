
void FUN_02156118(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar3 = 0;
  do {
    if (iVar3 != 3) {
      if (iVar3 < 2) {
        iVar1 = FUN_0203b414((&DAT_0215e3e8)[iVar3]);
      }
      else {
        iVar1 = FUN_0203b424();
      }
      uVar2 = FUN_0214d3a8((&DAT_0215e428)[iVar3],(&DAT_0215e43c)[iVar3],
                           *(undefined4 *)(iVar1 + 0x88));
      *(undefined4 *)(param_1 + iVar3 * 4 + 0x1c) = uVar2;
    }
    iVar3 = iVar3 + 1;
  } while (iVar3 < 5);
  iVar3 = 0;
  do {
    uVar2 = FUN_020101f4((&DAT_0215e418)[iVar3],0);
    iVar1 = iVar3 * 4;
    iVar3 = iVar3 + 1;
    *(undefined4 *)(param_1 + iVar1 + 0xc) = uVar2;
  } while (iVar3 < 4);
  *(undefined4 *)(param_1 + 0xc0) = 0;
  return;
}

